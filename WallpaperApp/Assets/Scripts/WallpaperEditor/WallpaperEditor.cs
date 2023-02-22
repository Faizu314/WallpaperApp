using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Wallpaper.Utils;

namespace Wallpaper.Editor {

    [AddComponentMenu("Wallpaper/Wallpaper Editor/Wallpaper Editor")]
    public class WallpaperEditor : MonoBehaviour {

        private IWallpaperDatabase WallpaperDatabase => Refs.Instance.WallpaperDatabase;

        [Header("References")][Space(5)]
        [SerializeField] private RectTransform m_UIPanel;
        [SerializeField] private TMP_InputField m_WallpaperName;
        [SerializeField] private ImagesHandler m_ImagesHandler;
        [SerializeField] private EffectsHandler m_EffectsHandler;

        [Header("Buttons")]
        [Space(5)]
        [SerializeField] private Button m_UndoButton;
        [SerializeField] private Button m_RedoButton;
        [SerializeField] private Button m_SaveButton;
        [SerializeField] private Button m_SetButton;
        [SerializeField] private Button m_CropButton;
        [SerializeField] private Button m_DeleteImageButton;
        [SerializeField] private List<Button> m_LayerButtons;

        [Header("Preferences")]
        [Space(5)]
        [SerializeField] private int m_StoredActionsCount;

        private EditorSceneController m_Controller;
        private ActionRecorder m_ActionRecorder;
        private Wallpaper m_CurrWallpaper;
        private ButtonText m_CropButtonText;

        private int SelectedLayer => m_ImagesHandler.SelectedLayer;

        public void Initialize(EditorSceneController controller) {
            m_Controller = controller;
            m_CropButtonText = m_CropButton.GetComponent<ButtonText>();

            m_ActionRecorder = new(m_StoredActionsCount);

            m_WallpaperName.onEndEdit.AddListener(OnWallpaperRenamed);

            m_UndoButton.onClick.AddListener(m_ActionRecorder.Undo);
            m_RedoButton.onClick.AddListener(m_ActionRecorder.Redo);

            m_SaveButton.onClick.AddListener(OnSaveButtonPressed);

            m_SetButton.onClick.AddListener(() => AppManager.Instance.SetCurrentWallpaper(m_CurrWallpaper.Name));

            m_DeleteImageButton.onClick.AddListener(OnDeleteImageButtonPressed);

            m_CropButton.onClick.AddListener(OnCropButtonPressed);

            for (int i = 0; i < m_LayerButtons.Count; i++) {
                int index = i;
                m_LayerButtons[i].onClick.AddListener(() => OnLayerButtonPressed(index));
            }
        }

        public void Open() {
            CancelAllIncompleteActions();
        }

        public void Close() {
            RemoveCurrentWallpaper();
        }

        public void AddImage(WallpaperImage image) {
            CancelAllIncompleteActions();

            AddImageAction action = new(m_ImagesHandler, m_CurrWallpaper, image);
            action.Execute();
            m_ActionRecorder.Record(action);

            m_CropButton.onClick.Invoke();
            m_CropButtonText.SetState(true);
        }

        public void AddEffect(WallpaperEffectBase effect) {
            CancelAllIncompleteActions();

            AddEffectAction action = new(m_EffectsHandler, effect, m_CurrWallpaper);
            action.Execute();
            m_ActionRecorder.Record(action);
        }

        public void RemoveEffect() {
            CancelAllIncompleteActions();

            RemoveEffectAction action = new(m_EffectsHandler, m_CurrWallpaper.Effect, m_CurrWallpaper);
            action.Execute();
            m_ActionRecorder.Record(action);
        }

        public void PreviewWallpaper(Wallpaper wallpaper) {
            BeginEditing(wallpaper);
            BeginPreview();
        }

        public void BeginPreview() {
            m_UIPanel.gameObject.SetActive(false);
            m_ImagesHandler.EnableParallax();
        }

        public void EndPreview() {
            m_UIPanel.gameObject.SetActive(true);
            m_ImagesHandler.DisableParallax();
        }

        private void OnDeleteImageButtonPressed() {
            if (SelectedLayer == 0)
                return;

            RemoveImageAction action = new(m_ImagesHandler, m_CurrWallpaper, m_CurrWallpaper.Images[SelectedLayer], m_ImagesHandler[SelectedLayer].GetCurrentState());
            action.Execute();
            m_ActionRecorder.Record(action);
        }

        private void OnLayerButtonPressed(int layer) {
            m_ImagesHandler.SetCurrentLayer(layer);

            if (layer >= m_ImagesHandler.Count)
                m_Controller.PromptForAndroidImage();
        }

        private void OnWallpaperRenamed(string newName) {
            if (newName == m_CurrWallpaper.Name)
                return;

            WallpaperDatabase.Rename(m_CurrWallpaper.Name, newName);
            m_CurrWallpaper.Name = newName;
        }

        private void OnCropButtonPressed() {
            var croppingData = m_ImagesHandler.OnCropButtonPressed();

            if (croppingData == null)
                return;

            CropAction actionExecuted = new(m_ImagesHandler, croppingData);
            m_ActionRecorder.Record(actionExecuted);
        }

        private void OnSaveButtonPressed() {
            if (!ShouldSave())
                return;
            CancelAllIncompleteActions();

            m_CurrWallpaper.Name = m_WallpaperName.text;

            for (int i = 0; i < m_ImagesHandler.Count; i++) {
                var cropData = m_ImagesHandler[i].GetCurrentState();

                m_CurrWallpaper.Images[i].Position = cropData.Position;
                m_CurrWallpaper.Images[i].Scale = cropData.Scale;
            }

            WallpaperDatabase.Save(m_CurrWallpaper);
            AppManager.Instance.ShowScreen(AppManager.Page.Collection);
        }

        private bool ShouldSave() {
            return !string.IsNullOrEmpty(m_WallpaperName.text);
        }

        private void CancelAllIncompleteActions() {
            m_ImagesHandler.CancelCropping();
            m_ImagesHandler.DisableParallax();
            m_CropButtonText.SetState(false);
        }

        public void BeginEditing(Wallpaper wallpaperToEdit) {
            RemoveCurrentWallpaper();
            m_CurrWallpaper = wallpaperToEdit;
            OpenWallpaper();
        }

        private void RemoveCurrentWallpaper() {
            if (m_CurrWallpaper == null) 
                return;

            for (int i = 0; i < m_ImagesHandler.Count; i++)
                m_ImagesHandler.RemoveImageFromWallpaper(m_CurrWallpaper.Images[0], m_CurrWallpaper);

            m_EffectsHandler.RemoveEffectFromWallpaper(m_CurrWallpaper);
        }

        private void OpenWallpaper() {
            OpenWallpaperName();
            OpenWallpaperImages();
        }

        private void OpenWallpaperName() {
            if (m_CurrWallpaper.Name == null)
                m_CurrWallpaper.Name = "Wallpaper" + WallpaperDatabase.GetWallpaperCount();

            m_WallpaperName.text = m_CurrWallpaper.Name;
        }

        private void OpenWallpaperImages() {
            for (int i = 0; i < m_CurrWallpaper.Images.Count; i++)
                m_ImagesHandler.OpenImage(m_CurrWallpaper.Images[i], i == 0);

            LoadCropData();
        }

        private void LoadCropData() {
            for (int i = 0; i < m_CurrWallpaper.Images.Count; i++) {
                Vector2 loadedPos = m_CurrWallpaper.Images[i].Position;
                Vector3 loadedScale = m_CurrWallpaper.Images[i].Scale;

                m_ImagesHandler[i].SetCurrentState(new(loadedPos, loadedScale));
            }
        }

    }
}
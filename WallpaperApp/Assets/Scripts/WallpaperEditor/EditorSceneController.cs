using UnityEngine;
using Wallpaper.Utils;
using UnityEngine.UI;

namespace Wallpaper.Editor {

    [AddComponentMenu("Wallpaper/Wallpaper Editor/Wallpaper Editor Controller")]
    public class EditorSceneController : BaseController {

        private IAndroidCommander AndroidCommander => Refs.Instance.AndroidCommander;

        [SerializeField] private WallpaperEditor m_Editor;
        [SerializeField] private GameObject m_EditorPanel;
        [SerializeField] private GameObject m_PromptPanel;
        [SerializeField] private GameObject m_EffectsSelectionPanel;
        [SerializeField] private GameObject m_EffectsPreviewPanel;
        [SerializeField] private GameObject m_FlexibleColorPicker;
        [SerializeField] private Button m_PromptPanelYesButton;
        [SerializeField] private Button m_PromptPanelNoButton;

        public override void OnApplicationStart() {
            base.OnApplicationStart();

            m_PromptPanelYesButton.onClick.AddListener(() => {
                m_PromptPanel.SetActive(false);
                AndroidCommander.OpenAndroidGallery();
            });

            m_PromptPanelNoButton.onClick.AddListener(() => m_PromptPanel.SetActive(false));

            m_Editor.Initialize(this);

            ApplicationEvents.OnWallpaperEdit += OnWallpaperEdit;
            ApplicationEvents.OnWallpaperPreview += OnPreviewWallpaper;
            ApplicationEvents.OnBeginPreview += m_Editor.BeginPreview;
            ApplicationEvents.OnEndPreview += m_Editor.EndPreview;
        }

        public override void OnAndroidBackPressed() {
            base.OnAndroidBackPressed();

            m_Editor.Close();

            AppManager.Instance.ShowScreen(AppManager.Page.Collection);
        }

        private void OnWallpaperEdit(Wallpaper wallpaper) {
            AppManager.Instance.ShowScreen(AppManager.Page.Editor);
            m_Editor.BeginEditing(wallpaper);
        }

        private void OnPreviewWallpaper(Wallpaper wallpaper) {
            AppManager.Instance.ShowScreen(AppManager.Page.Editor);
            m_Editor.PreviewWallpaper(wallpaper);
        }

        protected override void OnSceneLoaded() {
            m_FlexibleColorPicker.SetActive(false);

            ApplicationEvents.OnAndroidImageReceived += OnAndroidImageReceived;

            ShowEditor();
            m_Editor.Open();
        }

        protected override void OnSceneUnLoaded() {
            ApplicationEvents.OnAndroidImageReceived -= OnAndroidImageReceived;

            m_Editor.Close();
        }

        public void PromptForAndroidImage() {
            m_PromptPanel.SetActive(true);
        }

        public void OnAndroidImageReceived(byte[] imageData, int width, int height) {
            m_PromptPanel.SetActive(false);

            WallpaperImage image = Util.ToWallpaperImage(imageData, width, height);

            m_Editor.AddImage(image);
        }

        public void ShowEffectsSelection() {
            m_EditorPanel.SetActive(false);
            m_EffectsPreviewPanel.SetActive(false);
            m_EffectsSelectionPanel.SetActive(true);
        }

        public void ShowParticleEffects() {
            m_EditorPanel.SetActive(false);
            m_EffectsSelectionPanel.SetActive(false);
            m_EffectsPreviewPanel.SetActive(true);
        }

        public void ShowEditor() {
            m_EditorPanel.SetActive(true);
            m_EffectsSelectionPanel.SetActive(false);
            m_EffectsPreviewPanel.SetActive(false);
        }

        public void AddEffect(WallpaperEffectBase effect) {
            if (effect == null)
                return;

            ShowEditor();
            m_Editor.AddEffect(effect);
        }

    }
}
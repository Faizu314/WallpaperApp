using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Wallpaper.Utils;
using Phezu.Util;

namespace Wallpaper.Controllers {

    [AddComponentMenu("Wallpaper/Controllers/Wallpaper Editor Controller")]
    public class WallpaperEditorController : BaseController {

        [SerializeField][RequireInterface(typeof(IWallpaperDatabase))]
        private Object m_WallpaperDatabase;
        private IWallpaperDatabase WallpaperDatabase => (IWallpaperDatabase)m_WallpaperDatabase;

        [SerializeField] private RectTransform m_UIPanel;
        [SerializeField] private TextMeshProUGUI m_WallpaperName;
        [SerializeField] private Button m_SaveButton;
        [SerializeField] private Button m_SetButton;

        private string m_CurrWallpaperID;
        private Wallpaper m_CurrWallpaper;
        private List<Image> m_WallpaperImages = new();

        public override void OnApplicationStart() {
            base.OnApplicationStart();

            m_SaveButton.onClick.RemoveAllListeners();
            m_SaveButton.onClick.AddListener(OnSaveButtonPressed);

            m_SetButton.onClick.RemoveAllListeners();
            m_SetButton.onClick.AddListener(() => AppManager.Instance.SetCurrentWallpaper(m_CurrWallpaperID));

            ApplicationEvents.OnWallpaperEdit += OnWallpaperEdit;
            ApplicationEvents.OnWallpaperPreview += OnPreviewWallpaper;
        }

        protected override void OnSceneLoaded() {
        }

        protected override void OnSceneUnLoaded() {
        }

        private void OnPreviewWallpaper(Wallpaper wallpaper) {
            OnWallpaperEdit(wallpaper);
            BeginPreview();
        }

        public void BeginPreview() {
            m_UIPanel.gameObject.SetActive(false);
        }

        public void EndPreview() {
            m_UIPanel.gameObject.SetActive(true);
        }

        private void OnWallpaperEdit(Wallpaper wallpaper) {
            AppManager.Instance.ShowScreen(AppManager.Page.Editor);
            BeginEditing(wallpaper);
        }

        private void OnSaveButtonPressed() {
            WallpaperDatabase.Save(m_CurrWallpaper);
            AppManager.Instance.ShowScreen(AppManager.Page.Collection);
        }

        private void BeginEditing(Wallpaper wallpaperToEdit) {
            RemoveCurrentWallpaper();
            SetCurrentWallpaper(wallpaperToEdit);
            OpenCurrentWallpaper();
        }

        private void RemoveCurrentWallpaper() {
            for (int i = 0; i < m_WallpaperImages.Count; i++)
                Destroy(m_WallpaperImages[i].gameObject);

            m_WallpaperImages.Clear();
        }

        private void SetCurrentWallpaper(Wallpaper wallpaper) {
            m_CurrWallpaperID = wallpaper.Name;
            m_CurrWallpaper = wallpaper;
        }

        private void OpenCurrentWallpaper() {
            m_WallpaperName.text = m_CurrWallpaperID;
            var obj = CreateImageObject();
            Vector2 loadedPos = m_CurrWallpaper.Images[0].Position;
            obj.GetComponent<RectTransform>().anchoredPosition = loadedPos;
            Vector3 loadedScale = m_CurrWallpaper.Images[0].Scale;
            obj.transform.localScale = loadedScale;
            m_UIPanel.SetSiblingIndex(transform.childCount - 1);
        }

        private GameObject CreateImageObject() {
            Texture2D bgImage = Util.ToTexture2D(m_CurrWallpaper.Images[0]);
            GameObject bgImageObj = new("BackGround");
            m_WallpaperImages.Add(bgImageObj.AddComponent<Image>());
            RectTransform imageTransform = bgImageObj.GetComponent<RectTransform>();
            imageTransform.parent = transform;
            m_WallpaperImages[0].sprite = Util.ImageToSprite(bgImage);

            imageTransform.anchorMin = Vector2.one / 2f;
            imageTransform.anchorMax = Vector2.one / 2f;
            imageTransform.pivot = Vector2.one / 2f;

            m_WallpaperImages[0].SetNativeSize();

            return bgImageObj;
        }

    }
}
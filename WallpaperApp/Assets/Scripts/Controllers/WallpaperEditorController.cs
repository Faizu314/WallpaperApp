using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Wallpaper.Utils;
using TMPro;
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

        private string m_CurrWallpaperID;
        private Wallpaper m_CurrWallpaper;
        private List<Image> m_WallpaperImages = new();

        public void Awake() {
            m_SaveButton.onClick.AddListener(OnSave);
        }

        public override void OnApplicationStart() {
            base.OnApplicationStart();
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

        private void OnSave() {
            WallpaperDatabase.Save(m_CurrWallpaper, m_CurrWallpaperID);
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
            m_CurrWallpaperID = wallpaper.name;
            m_CurrWallpaper = wallpaper;
        }

        private void OpenCurrentWallpaper() {
            m_WallpaperName.text = m_CurrWallpaperID;
            var obj = CreateImageObject();
            Vector2 loadedPos = new(m_CurrWallpaper.CropPositionX, m_CurrWallpaper.CropPositionY);
            obj.GetComponent<RectTransform>().anchoredPosition = loadedPos;
            Vector3 loadedScale = new(m_CurrWallpaper.CropScaleX, m_CurrWallpaper.CropScaleY, m_CurrWallpaper.CropScaleZ);
            obj.transform.localScale = loadedScale;
            m_UIPanel.SetSiblingIndex(transform.childCount - 1);
        }

        private GameObject CreateImageObject() {
            Texture2D bgImage = Util.ToTexture2D(m_CurrWallpaper.BackgroundImage, m_CurrWallpaper.ImageWidth, m_CurrWallpaper.ImageHeight);
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
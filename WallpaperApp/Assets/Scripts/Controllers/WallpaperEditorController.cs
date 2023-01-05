using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Wallpaper.Utils;
using TMPro;
using Phezu.Util;

namespace Wallpaper.Controllers {

    [AddComponentMenu("Wallpaper/Controllers/Wallpaper Editor Controller")]
    public class WallpaperEditorController : MonoBehaviour {

        [SerializeField][RequireInterface(typeof(IWallpaperDatabase))]
        private Object m_WallpaperDatabase;
        private IWallpaperDatabase WallpaperDatabase => (IWallpaperDatabase)m_WallpaperDatabase;

        [SerializeField] private RectTransform m_UIPanel;
        [SerializeField] private TextMeshProUGUI m_WallpaperName;
        [SerializeField] private Button m_SaveButton;

        private string m_CurrWallpaperID;
        private Wallpaper m_CurrWallpaper;
        private List<Image> m_WallpaperImages = new();

        private void Awake() {
            m_SaveButton.onClick.AddListener(OnSave);
        }

        private void OnSave() {
            WallpaperDatabase.Save(m_CurrWallpaper, m_CurrWallpaperID);
            AppManager.Instance.ShowScreen(AppManager.Page.Collection);
        }

        public void BeginEditing(string wallpaperID) {
            RemoveCurrentWallpaper();
            SetCurrentWallpaper(wallpaperID);
            OpenCurrentWallpaper();
            m_UIPanel.SetSiblingIndex(transform.childCount - 1);
        }

        private void RemoveCurrentWallpaper() {
            for (int i = 0; i < m_WallpaperImages.Count; i++)
                Destroy(m_WallpaperImages[i].gameObject);

            m_WallpaperImages.Clear();
        }

        private void SetCurrentWallpaper(string wallpaperID) {
            m_CurrWallpaperID = wallpaperID;
            m_CurrWallpaper = WallpaperDatabase.Load(wallpaperID);
        }

        private void OpenCurrentWallpaper() {
            m_WallpaperName.text = m_CurrWallpaperID;
            var obj = CreateImageObject();
            obj.transform.position = new(m_CurrWallpaper.CropPositionX, m_CurrWallpaper.CropPositionY, m_CurrWallpaper.CropPositionZ);
            obj.transform.localScale = new(m_CurrWallpaper.CropScaleX, m_CurrWallpaper.CropScaleY, m_CurrWallpaper.CropScaleZ);
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
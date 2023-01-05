using UnityEngine;
using Phezu.Util;

namespace Wallpaper {

    [AddComponentMenu("Wallpaper/App Manager")]
    public class AppManager : Singleton<AppManager> {

        public enum Page { Home, Collection, Preview, Editor, ImageCrop, InputField };

        [Header("Popups")][Space(5)]
        [SerializeField] private Canvas m_ImageCropCanvas;
        [SerializeField] private Canvas m_InputFieldCanvas;

        [Header("Screens")][Space(5)]
        [SerializeField] private Canvas m_HomeCanvas;
        [SerializeField] private Canvas m_WallpaperCollectionCanvas;
        [SerializeField] private Canvas m_WallpaperPreviewCanvas;
        [SerializeField] private Canvas m_WallpaperEditorCanvas;

        private int m_SetWallpaperID;
        public int PreviewWallpaperID { get; private set; }

        private GameObject m_CurrentlyActiveCanvas;

        private void Awake() {
            m_SetWallpaperID = PlayerPrefs.GetInt("WallpaperID", -1);

            m_InputFieldCanvas.gameObject.SetActive(false);
            m_HomeCanvas.gameObject.SetActive(false);
            m_WallpaperCollectionCanvas.gameObject.SetActive(false);
            m_WallpaperPreviewCanvas.gameObject.SetActive(false);
        }

        private void OnDestroy() {
            PlayerPrefs.SetInt("WallpaperID", m_SetWallpaperID);
        }

        public void ShowScreen(Page page) {
            switch (page) {
                case Page.Home:
                    ShowCanvas(m_HomeCanvas);
                    break;
                case Page.Collection:
                    ShowCanvas(m_WallpaperCollectionCanvas);
                    break;
                case Page.Preview:
                    ShowCanvas(m_WallpaperPreviewCanvas);
                    break;
                case Page.Editor:
                    ShowCanvas(m_WallpaperEditorCanvas);
                    break;
                case Page.ImageCrop:
                    ShowCanvas(m_ImageCropCanvas);
                    break;
                case Page.InputField:
                    ShowCanvas(m_InputFieldCanvas);
                    break;
            }
        }

        public void HideAllScreens() {
            if (m_CurrentlyActiveCanvas != null)
                m_CurrentlyActiveCanvas.SetActive(false);
        }

        private void ShowCanvas(Canvas canvas) {
            if (m_CurrentlyActiveCanvas != null)
                m_CurrentlyActiveCanvas.SetActive(false);

            m_CurrentlyActiveCanvas = canvas.gameObject;
            m_CurrentlyActiveCanvas.SetActive(true);
        }

        public bool IsWallpaperSet() {
            return m_SetWallpaperID != -1;
        }

        public void SetCurrentWallpaper(int wallpaperID) {
            m_SetWallpaperID = wallpaperID;
        }

    }
}
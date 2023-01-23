using UnityEngine;
using Phezu.Util;

namespace Wallpaper {

    [AddComponentMenu("Wallpaper/App Manager")]
    public class AppManager : Singleton<AppManager> {

        private const string SET_WALLPAPER_KEY = "WallpaperID";

        public enum Page { Home, Collection, Preview, Editor };

        [SerializeField][RequireInterface(typeof(IWallpaperDatabase))]
        private Object m_WallpaperDatabase;
        private IWallpaperDatabase WallpaperDatabase => (IWallpaperDatabase)m_WallpaperDatabase;

        [Header("Screens")][Space(5)]
        [SerializeField] private BaseController m_HomeCanvas;
        [SerializeField] private BaseController m_WallpaperCollectionCanvas;
        [SerializeField] private BaseController m_WallpaperPreviewCanvas;
        [SerializeField] private BaseController m_WallpaperEditorCanvas;

        private GameObject m_CurrentlyActiveCanvas;
        private string m_SetWallpaperID;

        private void Awake() {
            Initialize();
            DeactivateAllScreens();
            InvokeOnApplicationStart();
        }

        private void Initialize() {
            m_SetWallpaperID = PlayerPrefs.GetString(SET_WALLPAPER_KEY, null);
        }

        private void DeactivateAllScreens() {
            m_HomeCanvas.gameObject.SetActive(false);
            m_WallpaperCollectionCanvas.gameObject.SetActive(false);
            m_WallpaperPreviewCanvas.gameObject.SetActive(false);
            m_WallpaperEditorCanvas.gameObject.SetActive(false);
        }

        private void InvokeOnApplicationStart() {
            ///Can't rely on events because the listener's Awake method may not have been called at this point.

            m_HomeCanvas.OnApplicationStart();
            m_WallpaperCollectionCanvas.OnApplicationStart();
            m_WallpaperPreviewCanvas.OnApplicationStart();
            m_WallpaperEditorCanvas.OnApplicationStart();
        }

        private void OnDestroy() {
            PlayerPrefs.SetString(SET_WALLPAPER_KEY, m_SetWallpaperID);
        }

        public void StartAsWallpaperService() {
            Wallpaper wallpaper = WallpaperDatabase.Load(m_SetWallpaperID);
            ApplicationEvents.InvokeOnWallpaperPreview(wallpaper);
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
            }
        }

        public void HideAllScreens() {
            if (m_CurrentlyActiveCanvas != null)
                m_CurrentlyActiveCanvas.SetActive(false);
        }

        private void ShowCanvas(BaseController canvas) {
            if (canvas == null)
                return;
            if (m_CurrentlyActiveCanvas != null)
                m_CurrentlyActiveCanvas.SetActive(false);

            m_CurrentlyActiveCanvas = canvas.gameObject;
            m_CurrentlyActiveCanvas.SetActive(true);
        }

        public bool IsWallpaperSet() {
            return m_SetWallpaperID != null;
        }

        public void SetCurrentWallpaper(string wallpaperID) {
            m_SetWallpaperID = wallpaperID;
            PlayerPrefs.SetString(SET_WALLPAPER_KEY, m_SetWallpaperID);
        }

    }
}
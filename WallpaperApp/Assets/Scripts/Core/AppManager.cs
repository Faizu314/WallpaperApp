using UnityEngine;
using Phezu.Util;

namespace Wallpaper {

    [AddComponentMenu("Wallpaper/App Manager")]
    public class AppManager : Singleton<AppManager> {

        private const string SET_WALLPAPER_KEY = "WallpaperID";

        public enum Page { Home, Collection, Preview, Editor };

        private IWallpaperDatabase WallpaperDatabase => Refs.Instance.WallpaperDatabase;

        [Header("Screens")][Space(5)]
        [SerializeField] private BaseController m_HomeCanvas;
        [SerializeField] private BaseController m_WallpaperCollectionCanvas;
        [SerializeField] private BaseController m_WallpaperPreviewCanvas;
        [SerializeField] private BaseController m_WallpaperEditorCanvas;

        private BaseController m_CurrentlyActiveController;
        private string m_SetWallpaperID;

        private void Awake() {
            Initialize();
            DeactivateAllScreens();
            InvokeOnApplicationStart();
        }

        private void Initialize() {
            m_SetWallpaperID = PlayerPrefs.GetString(SET_WALLPAPER_KEY, null);
            ApplicationEvents.OnAndroidBackPressed += OnAndroidBack;
        }

        private void OnAndroidBack() {
            if (m_CurrentlyActiveController != null)
                m_CurrentlyActiveController.OnAndroidBackPressed();
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
            Debug.Log("Starting as wallpaper service");
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
            if (m_CurrentlyActiveController != null)
                m_CurrentlyActiveController.gameObject.SetActive(false);
        }

        private void ShowCanvas(BaseController controller) {
            if (controller == null)
                return;
            if (m_CurrentlyActiveController != null)
                m_CurrentlyActiveController.gameObject.SetActive(false);

            m_CurrentlyActiveController = controller;
            m_CurrentlyActiveController.gameObject.SetActive(true);
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
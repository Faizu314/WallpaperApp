using UnityEngine;
using Phezu.SceneManagingSystem;
using Phezu.Util;

namespace Wallpaper {

    public class AppManager : Singleton<AppManager> {
        [SerializeField] [RequireInterface(typeof(IAndroidCommander))]
        private Object m_AndroidInterface;

        [Header("Scenes")]
        [SerializeField][SceneField] private string wallpaperScene;
        [SerializeField][SceneField] private string appEntryScene;

        private int m_SetWallpaperID = -1;
        public int PreviewWallpaperID { get; private set; }

        public IAndroidCommander AndroidCommander => (IAndroidCommander)m_AndroidInterface;

        private void Start() {
            m_SetWallpaperID = PlayerPrefs.GetInt("WallpaperID", -1);
        }

        private void OnDestroy() {
            PlayerPrefs.SetInt("WallpaperID", m_SetWallpaperID);
        }

        public void StartAsWallpaper() {
            SceneLoadManager.Instance.LoadNewScene(wallpaperScene, false);
        }

        public void StartAsApplication() {
            SceneLoadManager.Instance.LoadNewScene(appEntryScene, false);
        }


        private void PreviewWallpaper() {
            SceneLoadManager.Instance.LoadNewScene(wallpaperScene, false);
        }

        public bool IsWallpaperSet() {
            return m_SetWallpaperID != -1;
        }

        public void OnPreviewWallpaperClick(int wallpaperID) {
            PreviewWallpaperID = wallpaperID;
            PreviewWallpaper();
        }

        public void OnSetWallpaperClick(int wallpaperID) {
            m_SetWallpaperID = wallpaperID;
            PreviewWallpaperID = wallpaperID;
        }
    }
}
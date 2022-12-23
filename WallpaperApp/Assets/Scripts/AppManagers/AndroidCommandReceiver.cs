using UnityEngine;

namespace Wallpaper {

    public class AndroidCommandReceiver : MonoBehaviour, IAndroidCommandReceiver {

        public const string START_AS_WALLPAPER_COMMAND = "START_AS_WALLPAPER";
        public const string START_AS_APPLICATION_COMMAND = "START_AS_APPLICATION";
        public const string GET_IS_WALLPAPER_SET_COMMAND = "GET_IS_WALLPAPER_SET";

        public void ExecuteAndroidCommand(string command) {
            switch (command) {
                case START_AS_WALLPAPER_COMMAND:
                    StartAsWallpaper();
                    break;
                case START_AS_APPLICATION_COMMAND:
                    StartAsApplication();
                    break;
                case GET_IS_WALLPAPER_SET_COMMAND:
                    GetIsWallpaperSet();
                    break;
            }
        }

        private void StartAsWallpaper() {
            AppManager.Instance.StartAsWallpaper();
        }

        private void StartAsApplication() {
            AppManager.Instance.StartAsApplication();
        }

        private void GetIsWallpaperSet() {
            bool isWallpaperSet = AppManager.Instance.IsWallpaperSet();
            AppManager.Instance.AndroidCommander.SendData(isWallpaperSet.ToString());
        }

    }
}
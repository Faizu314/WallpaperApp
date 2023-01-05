using Phezu.Util;
using UnityEngine;

namespace Wallpaper.Android {

    [AddComponentMenu("Wallpaper/Android/Android Command Receiver")]
    public class AndroidCommandReceiver : MonoBehaviour, IAndroidCommandReceiver {

        public const string START_AS_WALLPAPER_COMMAND = "START_AS_WALLPAPER";
        public const string START_AS_APPLICATION_COMMAND = "START_AS_APPLICATION";
        public const string GET_IS_WALLPAPER_SET_COMMAND = "GET_IS_WALLPAPER_SET";
        public const string GET_IMAGE_FROM_ANDROID_COMMAND = "GET_IMAGE_FROM_ANDROID";

        [SerializeField][RequireInterface(typeof(IAndroidCommander))]
        private Object m_AndroidCommander;
        private IAndroidCommander AndroidCommander => (IAndroidCommander)m_AndroidCommander;

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
                case GET_IMAGE_FROM_ANDROID_COMMAND:
                    GetImageFromAndroid();
                    break;
                default:
                    Debug.LogError("Android Command not recognized");
                    break;
            }
        }

        private void StartAsWallpaper() {
            AppManager.Instance.HideAllScreens();
        }

        private void StartAsApplication() {
            AppManager.Instance.ShowScreen(AppManager.Page.Home);
        }

        private void GetIsWallpaperSet() {
            bool isWallpaperSet = AppManager.Instance.IsWallpaperSet();
            AndroidCommander.SendData(isWallpaperSet.ToString());
        }

        private void GetImageFromAndroid() {
            byte[] imageData = AndroidCommander.GetImageData();
            int imageWidth = AndroidCommander.GetImageWidth();
            int imageHeight = AndroidCommander.GetImageHeight();

            ApplicationEvents.InvokeOnAndroidImageReceived(imageData, imageWidth, imageHeight);
        }
    }
}
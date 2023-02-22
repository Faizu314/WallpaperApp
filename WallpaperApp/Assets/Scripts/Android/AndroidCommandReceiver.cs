using UnityEngine;

namespace Wallpaper.Android {

    [AddComponentMenu("Wallpaper/Android/Android Command Receiver")]
    public class AndroidCommandReceiver : MonoBehaviour, IAndroidCommandReceiver {

        public const string START_AS_WALLPAPER_COMMAND = "START_AS_WALLPAPER";
        public const string START_AS_APPLICATION_COMMAND = "START_AS_APPLICATION";
        public const string GET_IS_WALLPAPER_SET_COMMAND = "GET_IS_WALLPAPER_SET";
        public const string GET_IMAGE_FROM_ANDROID_COMMAND = "GET_IMAGE_FROM_ANDROID";
        public const string GO_BACK_COMMAND = "GO_BACK";
        private IAndroidCommander AndroidCommander => Refs.Instance.AndroidCommander;

        public void ExecuteAndroidCommand(string command) {
            Debug.Log("Unity: Receiving command " + command);

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
                case GO_BACK_COMMAND:
                    GoBack();
                    break;

                default:
                    Debug.LogError("Android Command not recognized");
                    break;
            }
        }

        private void StartAsWallpaper() {
            AppManager.Instance.StartAsWallpaperService();
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

        private void GoBack() {
            ApplicationEvents.InvokeOnAndroidBackPressed();
        }
    }
}
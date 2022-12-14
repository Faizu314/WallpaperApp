using UnityEngine;

namespace Wallpaper {

    public class AndroidInterface : MonoBehaviour, IAndroidInterface
    {
        public const string START_AS_WALLPAPER_COMMAND = "START_AS_WALLPAPER";
        public const string START_AS_APPLICATION_COMMAND = "START_AS_APPLICATION";
        public const string GET_IS_WALLPAPER_SET_COMMAND = "GET_IS_WALLPAPER_SET";

        private AndroidJavaObject unityToAndroidInterface;

        private void Start() {
            Initialize();
        }

        private void Initialize() {
            AndroidJavaClass unityPlayer = new("com.phezu.wallpaper.OverrideUnityActivity");

            unityToAndroidInterface = unityPlayer.GetStatic<AndroidJavaObject>("instance");
        }


        #region To Android

        public void SignUpViaEmail(string email, string password) {
            unityToAndroidInterface.Call("SignUpViaEmail", email, password);
        }

        public void SignInViaEmail(string email, string password) {
            unityToAndroidInterface.Call("SignInViaEmail", email, password);
        }

        public void SignInViaGoogle() {
            unityToAndroidInterface.Call("SignInViaGoogle");
        }

        public void SignInViaFacebook() {
            unityToAndroidInterface.Call("SignInViaFacebook");
        }

        #endregion


        #region From Android

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
            unityToAndroidInterface.Call("receiveCommandResult", isWallpaperSet.ToString());
        }

        #endregion
    }
}
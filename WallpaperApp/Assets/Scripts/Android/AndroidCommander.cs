using UnityEngine;

namespace Wallpaper.Android {

    [AddComponentMenu("Wallpaper/Android/Android Commander")]
    public class AndroidCommander : MonoBehaviour, IAndroidCommander
    {
        private AndroidJavaObject m_UnityToAndroidInterface;

        private void Start() {
            Initialize();
        }

        private void Initialize() {
            AndroidJavaClass unityPlayer = new("com.phezu.wallpaper.OverrideUnityActivity");

            m_UnityToAndroidInterface = unityPlayer.GetStatic<AndroidJavaObject>("instance");
        }


        public void OpenAndroidGallery() {
            m_UnityToAndroidInterface.Call(nameof(OpenAndroidGallery));
        }

        public void OnBackButtonPressed() {
            m_UnityToAndroidInterface.Call(nameof(OnBackButtonPressed));
        }

        public byte[] GetImageData() {
            return m_UnityToAndroidInterface.Call<byte[]>(nameof(GetImageData));
        }

        public int GetImageHeight() {
            return m_UnityToAndroidInterface.Call<int>(nameof(GetImageHeight));
        }

        public int GetImageWidth() {
            return m_UnityToAndroidInterface.Call<int>(nameof(GetImageWidth));
        }

        public void RunWallpaperService() {
            m_UnityToAndroidInterface.Call(nameof(RunWallpaperService));
        }

        public void SendData(string data) {
            m_UnityToAndroidInterface.Call("ReceiveCommandResult", data);
        }

    }
}
using UnityEngine;

namespace Wallpaper {

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


        public void SignUpViaEmail(string email, string password) {
            m_UnityToAndroidInterface.Call("SignUpViaEmail", email, password);
        }

        public void SignInViaEmail(string email, string password) {
            m_UnityToAndroidInterface.Call("SignInViaEmail", email, password);
        }

        public void SignInViaGoogle() {
            m_UnityToAndroidInterface.Call("SignInViaGoogle");
        }

        public void SignInViaFacebook() {
            m_UnityToAndroidInterface.Call("SignInViaFacebook");
        }

        public void SendData(string data) {
            m_UnityToAndroidInterface.Call("receiveCommandResult", data);
        }

    }
}
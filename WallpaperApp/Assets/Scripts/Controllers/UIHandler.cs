using UnityEngine;
using TMPro;

namespace Wallpaper {

    public class UIHandler : MonoBehaviour {
        [SerializeField] private TextMeshProUGUI emailInput;
        [SerializeField] private TextMeshProUGUI passwordInput;

        [SerializeField] private TextMeshProUGUI outputLog;

        private string UserEmail => emailInput.text;
        private string UserPass => passwordInput.text;

        public bool IsFormValid => !string.IsNullOrWhiteSpace(UserEmail) && !string.IsNullOrWhiteSpace(UserPass);
        public IAndroidCommander androidInterface => AppManager.Instance.AndroidCommander;

        private void Start() {
            emailInput.text = string.Empty;
            passwordInput.text = string.Empty;

            //The only point of doing this is so that we can see what is logging on our mobile device.
            //For further logging we will have to connect to android logcat.
            Application.logMessageReceived += OnDebugLog;
        }

        public void SignUp() {
            if (IsFormValid)
                SignUpUser();
        }

        public void SignIn() {
            if (IsFormValid)
                SignInUser();
        }

        public void GoogleSignIn() {
            androidInterface.SignInViaGoogle();
        }

        public void FacebookSignIn() {
            androidInterface.SignInViaFacebook();
        }

        private void SignUpUser() {
            var email = UserEmail;
            var pass = UserPass;

            androidInterface.SignUpViaEmail(email, pass);
        }

        private void SignInUser() {
            var email = UserEmail;
            var pass = UserPass;

            androidInterface.SignInViaEmail(email, pass);
        }




        private void OnDebugLog(string condition, string stackTrace, LogType type) {
            switch (type) {
                case LogType.Log:
                    outputLog.SetText("Log: " + condition);
                    break;
                case LogType.Error:
                    outputLog.SetText("Error: " + condition);
                    break;
                default:
                    outputLog.SetText("Other: " + condition);
                    break;
            }
        }
    }
}
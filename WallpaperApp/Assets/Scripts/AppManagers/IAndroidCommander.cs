namespace Wallpaper {

    public interface IAndroidCommander {

        void SignUpViaEmail(string email, string password);
        void SignInViaEmail(string email, string password);
        void SignInViaGoogle();
        void SignInViaFacebook();

        void SendData(string data);

    }
}

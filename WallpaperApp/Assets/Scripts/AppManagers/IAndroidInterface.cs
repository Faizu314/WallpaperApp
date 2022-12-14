namespace Wallpaper {

    public interface IAndroidInterface {

        //To android interface
        void SignUpViaEmail(string email, string password);
        void SignInViaEmail(string email, string password);
        void SignInViaGoogle();
        void SignInViaFacebook();

        //From android interface
        void ExecuteAndroidCommand(string command);
    }
}

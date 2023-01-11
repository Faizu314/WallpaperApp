namespace Wallpaper {

    public interface IAndroidCommander {

        void OpenAndroidGallery();
        void OnBackButtonPressed();

        byte[] GetImageData();
        int GetImageHeight();
        int GetImageWidth();

        void SendData(string data);

    }
}

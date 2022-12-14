namespace Wallpaper {

    public interface IAndroidCommander {

        void OpenAndroidGallery();

        byte[] GetImageData();
        int GetImageHeight();
        int GetImageWidth();

        void SendData(string data);

    }
}

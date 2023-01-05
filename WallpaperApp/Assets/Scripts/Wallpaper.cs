using System;

namespace Wallpaper {

    [Serializable]
    public class Wallpaper {
        public byte[] BackgroundImage;
        public int ImageWidth;
        public int ImageHeight;
        public float CropScaleX;
        public float CropScaleY;
        public float CropScaleZ;
        public float CropPositionX;
        public float CropPositionY;
        public float CropPositionZ;
    }
}
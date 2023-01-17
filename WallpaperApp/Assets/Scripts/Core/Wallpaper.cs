using System.Collections.Generic;
using UnityEngine;

namespace Wallpaper {

    public class Wallpaper {
        public string Version;
        public string Name;
        public string Author;
        public List<WallpaperImage> Images;
    }

    public class WallpaperImage {
        public byte[] Data;
        public int Width;
        public int Height;
        public Vector2 Scale;
        public Vector2 Position;
    }
}
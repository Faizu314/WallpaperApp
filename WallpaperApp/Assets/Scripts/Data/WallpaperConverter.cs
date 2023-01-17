using System.Collections.Generic;
using System.Linq;
using UnityEngine;

namespace Wallpaper.Data {

    public static class WallpaperConverter {

        #region Version Sensitive Strings

        //Changing these strings will make the new version incompatible with previous versions.
        //New properties can be added though.

        private const string VERSION_PROPERTY = "version";
        private const string AUTHOR_PROPERTY = "author";
        private const string NAME_PROPERTY = "name";
        private const string IMAGES_COUNT = "images_count";
        private const string IMAGE_DATA_PREFIX = "image_data";
        private const string IMAGE_POSITION_PREFIX = "image_position";
        private const string IMAGE_SCALE_PREFIX = "image_scale";

        #endregion

        public static WallpaperData GetData(Wallpaper wallpaper) {
            Dictionary<string, string> data = new() {
                { VERSION_PROPERTY, wallpaper.Version },
                { AUTHOR_PROPERTY, wallpaper.Author },
                { NAME_PROPERTY, wallpaper.Name },
                { IMAGES_COUNT, wallpaper.Images.Count.ToString() }
            };

            for (int i = 0; i < wallpaper.Images.Count; i++)
                WriteImage(wallpaper, data, i);

            return new(data);
        }

        public static Wallpaper GetWallpaper(WallpaperData wallpaperData) {
            var data = wallpaperData.Data;

            Wallpaper wallpaper = new() {
                Version = data[VERSION_PROPERTY],
                Author = data[AUTHOR_PROPERTY],
                Name = data[NAME_PROPERTY]
            };

            int imagesCount = int.Parse(data[IMAGES_COUNT]);
            wallpaper.Images = new();

            for (int i = 0; i < imagesCount; i++)
                wallpaper.Images.Add(ReadImage(wallpaper, data, i));

            return wallpaper;
        }

        private static void WriteImage(Wallpaper wallpaper, Dictionary<string, string> data, int imageIndex) {
            ImageDatabase.Save(wallpaper.Images[imageIndex].Data, wallpaper.Name, imageIndex);

            string imageDataPath = ImageDatabase.GetImagesPath(wallpaper.Name, imageIndex);

            data.Add(IMAGE_DATA_PREFIX + imageIndex, imageDataPath);
            data.Add(IMAGE_POSITION_PREFIX + imageIndex, wallpaper.Images[imageIndex].Position.ToString());
            data.Add(IMAGE_SCALE_PREFIX + imageIndex, wallpaper.Images[imageIndex].Scale.ToString());
        }

        private static WallpaperImage ReadImage(Wallpaper wallpaper, Dictionary<string, string> data, int imageIndex) {
            return new() {
                Data = ImageDatabase.Load(wallpaper.Name, imageIndex),
                Position = StringToVector(data[IMAGE_POSITION_PREFIX + imageIndex]),
                Scale = StringToVector(data[IMAGE_SCALE_PREFIX + imageIndex])
            };
        }

        private static Vector2 StringToVector(string str) {
            str = str.Replace("(", "");
            str = str.Replace(")", "");
            str = str.Replace(",", "");

            var floats = str.Split(' ');

            return new(float.Parse(floats[0]), float.Parse(floats[1]));
        }
    }
}
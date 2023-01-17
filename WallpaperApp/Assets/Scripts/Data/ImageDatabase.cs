using System.IO;
using System.Runtime.Serialization.Formatters.Binary;
using UnityEngine;

namespace Wallpaper.Data {

    public static class ImageDatabase {

        private const string DATA_SUB_DIRECTORY = "/Images/";

        public static void Save(byte[] imageData, string wallpaperID, int imageIndex) {
            string filePath = GetImagesPath(wallpaperID, imageIndex);

            FileStream imageStream = new(filePath, FileMode.Create);

            BinaryFormatter binaryFormatter = new();
            binaryFormatter.Serialize(imageStream, imageData);

            imageStream.Close();
        }

        public static byte[] Load(string wallpaperID, int imageIndex) {
            string filePath = GetImagesPath(wallpaperID, imageIndex);

            return LoadFromPath(filePath);
        }

        private static byte[] LoadFromPath(string filePath) {
            if (!File.Exists(filePath))
                return null;

            FileStream wallpaperStream = new(filePath, FileMode.Open);

            BinaryFormatter binaryFormatter = new();
            byte[] imageData = binaryFormatter.Deserialize(wallpaperStream) as byte[];

            wallpaperStream.Close();

            return imageData;
        }

        public static string GetImagesPath(string wallpaperID, int imageIndex) {
            Directory.CreateDirectory(Application.persistentDataPath + DATA_SUB_DIRECTORY);

            return Application.persistentDataPath + DATA_SUB_DIRECTORY + wallpaperID + "_Image" + imageIndex + ".data";
        }

    }
}
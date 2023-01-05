using System;
using System.Runtime.Serialization.Formatters.Binary;
using System.IO;
using UnityEngine;

namespace Wallpaper.Data {

    [AddComponentMenu("Wallpaper/Data/Wallpaper Database")]
    public class WallpaperDatabase : MonoBehaviour, IWallpaperDatabase {

        private const string DATA_SUB_DIRECTORY = "/Wallpapers/";

        public void Save(Wallpaper wallpaper, string wallpaperID) {
            string filePath = GetPath(wallpaperID);

            FileStream wallpaperStream = new(filePath, FileMode.Create);

            BinaryFormatter binaryFormatter = new();
            binaryFormatter.Serialize(wallpaperStream, wallpaper);

            wallpaperStream.Close();
        }

        public Wallpaper Load(string wallpaperID) {
            string filePath = GetPath(wallpaperID);

            if (!File.Exists(filePath))
                return null;

            FileStream wallpaperStream = new(filePath, FileMode.Open);

            BinaryFormatter binaryFormatter = new();
            Wallpaper wallpaper = binaryFormatter.Deserialize(wallpaperStream) as Wallpaper;

            wallpaperStream.Close();

            return wallpaper;
        }

        public string GetPath(string wallpaperID) {
            Directory.CreateDirectory(Application.persistentDataPath + DATA_SUB_DIRECTORY);

            return Application.persistentDataPath + DATA_SUB_DIRECTORY + wallpaperID + ".data";
        }

    }
}
using System;
using System.Runtime.Serialization.Formatters.Binary;
using System.IO;
using UnityEngine;

namespace Wallpaper.Data {

    [AddComponentMenu("Wallpaper/Data/Wallpaper Database")]
    public class WallpaperDatabase : MonoBehaviour, IWallpaperDatabase {

        private const string DATA_SUB_DIRECTORY = "/Wallpapers/";

        public void Save(Wallpaper wallpaper, string wallpaperID) {
            string filePath = GetWallpaperPath(wallpaperID);

            FileStream wallpaperStream = new(filePath, FileMode.Create);

            BinaryFormatter binaryFormatter = new();
            binaryFormatter.Serialize(wallpaperStream, wallpaper);

            wallpaperStream.Close();
        }

        public Wallpaper Load(string wallpaperID) {
            string filePath = GetWallpaperPath(wallpaperID);

            return LoadFromPath(filePath);
        }

        private Wallpaper LoadFromPath(string filePath) {
            if (!File.Exists(filePath))
                return null;

            FileStream wallpaperStream = new(filePath, FileMode.Open);

            BinaryFormatter binaryFormatter = new();
            Wallpaper wallpaper = binaryFormatter.Deserialize(wallpaperStream) as Wallpaper;

            wallpaperStream.Close();

            return wallpaper;
        }

        public Wallpaper[] GetWallpaperCollection() {
            var info = new DirectoryInfo(GetCollectionPath());
            var fileInfo = info.GetFiles();

            Wallpaper[] wallpapers = new Wallpaper[fileInfo.Length];

            int i = 0;
            foreach (var file in fileInfo)
                wallpapers[i++] = LoadFromPath(file.FullName);

            return wallpapers;
        }

        private string GetCollectionPath() {
            return Application.persistentDataPath + DATA_SUB_DIRECTORY;
        }

        private string GetWallpaperPath(string wallpaperID) {
            Directory.CreateDirectory(Application.persistentDataPath + DATA_SUB_DIRECTORY);

            return Application.persistentDataPath + DATA_SUB_DIRECTORY + wallpaperID + ".data";
        }

    }
}
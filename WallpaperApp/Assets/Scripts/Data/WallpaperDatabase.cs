using System.Collections.Generic;
using System.IO;
using UnityEngine;

namespace Wallpaper.Data {

    [AddComponentMenu("Wallpaper/Data/Wallpaper Database")]
    public class WallpaperDatabase : MonoBehaviour, IWallpaperDatabase {

        private const string DATA_SUB_DIRECTORY = "/Wallpapers/";

        public void Rename(string oldName, string newName) {
            if (!DoesWallpaperExist(oldName))
                return;

            string oldPath = GetWallpaperPath(oldName);
            string newPath = GetWallpaperPath(newName);

            File.Delete(newPath);
            File.Move(oldPath, newPath);
        }

        public bool DoesWallpaperExist(string wallpaperName) {
            return File.Exists(GetWallpaperPath(wallpaperName));
        }

        public int GetWallpaperCount() {
            var info = new DirectoryInfo(GetCollectionPath());
            var fileInfo = info.GetFiles();

            return fileInfo.Length;
        }

        public void Save(Wallpaper wallpaper) {
            string filePath = GetWallpaperPath(wallpaper.Name);

            string jsonWallpaper = JsonUtility.ToJson(WallpaperConverter.GetData(wallpaper));

            File.WriteAllText(filePath, jsonWallpaper);
        }

        private Wallpaper LoadFromPath(string filePath) {
            if (!File.Exists(filePath))
                return null;

            string jsonWallpaper = File.ReadAllText(filePath);

            WallpaperData wallpaperData;

            try {
                wallpaperData = JsonUtility.FromJson<WallpaperData>(jsonWallpaper);
            }
            catch {
                return null;
            }

            if (wallpaperData == null)
                return null;

            return WallpaperConverter.GetWallpaper(wallpaperData);
        }

        public Wallpaper Load(string wallpaperName) {
            string filePath = GetWallpaperPath(wallpaperName);

            return LoadFromPath(filePath);
        }

        public List<Wallpaper> GetWallpaperCollection() {
            var info = new DirectoryInfo(GetCollectionPath());
            var fileInfo = info.GetFiles();

            List<Wallpaper> wallpapers = new();

            foreach (var file in fileInfo) {
                var wallpaper = LoadFromPath(file.FullName);
                if (wallpaper != null)
                    wallpapers.Add(wallpaper);
            }

            return wallpapers;
        }

        private string GetCollectionPath() {
            Directory.CreateDirectory(Application.persistentDataPath + DATA_SUB_DIRECTORY);

            return Application.persistentDataPath + DATA_SUB_DIRECTORY;
        }

        private string GetWallpaperPath(string wallpaperID) {
            Directory.CreateDirectory(Application.persistentDataPath + DATA_SUB_DIRECTORY);

            return Application.persistentDataPath + DATA_SUB_DIRECTORY + wallpaperID + ".txt";
        }

    }
}
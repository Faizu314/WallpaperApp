using System.Collections.Generic;

namespace Wallpaper {
    public interface IWallpaperDatabase {
        void Save(Wallpaper wallpaper);
        Wallpaper Load(string wallpaperId);

        List<Wallpaper> GetWallpaperCollection();
        bool DoesWallpaperExist(string wallpaperName);
        void Rename(string oldName, string newName);
        int GetWallpaperCount();

    }
}
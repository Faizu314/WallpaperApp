namespace Wallpaper {
    public interface IWallpaperDatabase {
        void Save(Wallpaper wallpaper, string wallpaperID);
        Wallpaper Load(string wallpaperId);

        Wallpaper[] GetWallpaperCollection();
    }
}
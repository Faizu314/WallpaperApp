using Wallpaper.ImageHandling;

namespace Wallpaper.Editor {

    public class AddImageAction : WallpaperEditorActionBase {

        private ImagesHandler m_ImageHandler;
        private Wallpaper m_Wallpaper;
        private WallpaperImage m_WallpaperImage;

        public AddImageAction(ImagesHandler imageOpener, Wallpaper wallpaper, WallpaperImage wallpaperImage) {
            m_ImageHandler = imageOpener;
            m_Wallpaper = wallpaper;
            m_WallpaperImage = wallpaperImage;
        }

        public override void Execute() {
            m_ImageHandler.AddImageToWallpaper(m_WallpaperImage, m_Wallpaper);
        }

        public override void Undo() {
            m_ImageHandler.RemoveImageFromWallpaper(m_WallpaperImage, m_Wallpaper);
        }
    }
}
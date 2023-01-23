using Wallpaper.ImageHandling;
using static Wallpaper.ImageHandling.ImageCropper;

namespace Wallpaper.Editor {

    public class RemoveImageAction : WallpaperEditorActionBase {

        private ImagesHandler m_ImagesHandler;
        private CropData m_State;
        private Wallpaper m_Wallpaper;
        private WallpaperImage m_WallpaperImage;

        public RemoveImageAction(ImagesHandler imagesHandler, Wallpaper wallpaper, WallpaperImage wallpaperImage, CropData state) {
            m_ImagesHandler = imagesHandler;
            m_State = state;
            m_Wallpaper = wallpaper;
            m_WallpaperImage = wallpaperImage;
        }

        public override void Execute() {
            m_ImagesHandler.RemoveImageFromWallpaper(m_WallpaperImage, m_Wallpaper);
        }

        public override void Undo() {
            m_ImagesHandler.AddImageToWallpaper(m_WallpaperImage, m_Wallpaper);
            m_ImagesHandler[m_ImagesHandler.Count - 1].SetCurrentState(m_State);
        }
    }
}
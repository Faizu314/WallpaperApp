using Phezu.Util;
using UnityEngine;

namespace Wallpaper.Testers {

    public class AndroidMockup : MonoBehaviour
    {

        [SerializeField][RequireInterface(typeof(IWallpaperDatabase))]
        private Object m_WallpaperDatabase;
        private IWallpaperDatabase WallpaperDatabase => (IWallpaperDatabase)m_WallpaperDatabase;

        [SerializeField] private string m_WallpaperName;

        public void SendOnImageReceivedEvent() {
            var wallpaper = WallpaperDatabase.Load(m_WallpaperName);
            ApplicationEvents.InvokeOnAndroidImageReceived(wallpaper.BackgroundImage, wallpaper.ImageWidth, wallpaper.ImageHeight);
        }

    }
}
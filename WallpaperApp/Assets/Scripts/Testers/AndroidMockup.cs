using Phezu.Util;
using UnityEngine;

namespace Wallpaper.Testers {

    public class AndroidMockup : MonoBehaviour
    {
        private IWallpaperDatabase WallpaperDatabase => Refs.Instance.WallpaperDatabase;

        [SerializeField] private string m_WallpaperName;

        public void SendOnImageReceivedEvent() {
            var wallpaper = WallpaperDatabase.Load(m_WallpaperName);
            ApplicationEvents.InvokeOnAndroidImageReceived(wallpaper.Images[0].Data, wallpaper.Images[0].Width, wallpaper.Images[0].Height);
        }

    }
}
using UnityEngine;
using Phezu.Util;

namespace Wallpaper {

    public class Refs : Singleton<Refs> {

        [SerializeField, RequireInterface(typeof(IWallpaperDatabase))]
        private Object m_WallpaperDatabase;
        public IWallpaperDatabase WallpaperDatabase => (IWallpaperDatabase)m_WallpaperDatabase;

        [SerializeField, RequireInterface(typeof(IAndroidCommander))]
        private Object m_AndroidCommander;
        public IAndroidCommander AndroidCommander => (IAndroidCommander)m_AndroidCommander;

        public EffectsRepository EffectsRepo;

    }
}
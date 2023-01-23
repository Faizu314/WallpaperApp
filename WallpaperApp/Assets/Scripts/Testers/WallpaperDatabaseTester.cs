using UnityEngine;
using Wallpaper.Data;

namespace Wallpaper.Testers {

    public class WallpaperDatabaseTester : MonoBehaviour {

        [SerializeField] private WallpaperDatabase m_Database;

        private byte[] m_Data;

        private void Start() {
            m_Database.Load("ludo");
        }

    }
}
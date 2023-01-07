using Phezu.Util;
using UnityEngine;
using Wallpaper.Controllers;

namespace Wallpaper.Testers {

    public class EditorTester : MonoBehaviour {

        [SerializeField][RequireInterface(typeof(IWallpaperDatabase))]
        private Object m_WallpaperDatabase;
        private IWallpaperDatabase WallpaperDatabase => (IWallpaperDatabase)m_WallpaperDatabase;

        [SerializeField] private WallpaperEditorController m_WallpaperEditor;
        [SerializeField] private string m_WallpaperToTest;

        private void Start() {
            m_WallpaperEditor.OnApplicationStart();
            ApplicationEvents.InvokeOnWallpaperEdit(WallpaperDatabase.Load(m_WallpaperToTest));
        }
    }
}
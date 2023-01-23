using Phezu.Util;
using System.Collections;
using UnityEngine;
using Wallpaper.Editor;

namespace Wallpaper.Testers {

    public class EditorTester : MonoBehaviour {

        [SerializeField][RequireInterface(typeof(IWallpaperDatabase))]
        private Object m_WallpaperDatabase;
        private IWallpaperDatabase WallpaperDatabase => (IWallpaperDatabase)m_WallpaperDatabase;

        [SerializeField] private EditorSceneController m_Controller;
        [SerializeField] private string m_WallpaperToTest;

        private void Start() {
            StartCoroutine(nameof(StartCoroutine));
        }

        private IEnumerator StartCoroutine() {
            yield return null;

            m_Controller.OnApplicationStart();
            ApplicationEvents.InvokeOnWallpaperEdit(WallpaperDatabase.Load(m_WallpaperToTest));
        }
    }
}
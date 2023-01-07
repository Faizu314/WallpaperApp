using Phezu.Util;
using System.Collections;
using UnityEngine;
using Wallpaper.Controllers;

namespace Wallpaper.Testers {

    public class CollectionControllerTester : MonoBehaviour {

        [SerializeField][RequireInterface(typeof(IWallpaperDatabase))]
        private Object m_WallpaperDatabase;
        private IWallpaperDatabase WallpaperDatabase => (IWallpaperDatabase)m_WallpaperDatabase;

        private void Start() {
            StartCoroutine("Wait");
        }

        private IEnumerator Wait() {
            yield return new WaitForSeconds(1);
            AppManager.Instance.ShowScreen(AppManager.Page.Collection);
        }
    }
}
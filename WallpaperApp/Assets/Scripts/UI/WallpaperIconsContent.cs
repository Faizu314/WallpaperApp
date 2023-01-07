using UnityEngine;
using Phezu.Util;
using System.Collections.Generic;

namespace Wallpaper.UI {

    public class WallpaperIconsContent : MonoBehaviour {

        [SerializeField] private GameObject m_WallpaperIconPrefab;

        [SerializeField][RequireInterface(typeof(IWallpaperDatabase))]
        private Object m_WallpaperDatabase;
        private IWallpaperDatabase WallpaperDatabase => (IWallpaperDatabase)m_WallpaperDatabase;

        private void OnEnable() {
            OnCollectionSceneLoaded();
        }

        private void OnDisable() {
            OnCollectionSceneUnLoaded();
        }

        private void OnCollectionSceneLoaded() {
            Wallpaper[] wallpapers = WallpaperDatabase.GetWallpaperCollection();

            foreach (var wallpaper in wallpapers) {
                GameObject icon = Instantiate(m_WallpaperIconPrefab, transform);
                icon.GetComponent<WallpaperIcon>().Initialize(wallpaper);
            }
        }

        private void OnCollectionSceneUnLoaded() {
            List<GameObject> children = new();

            for (int i = 0; i < transform.childCount; i++)
                children.Add(transform.GetChild(i).gameObject);

            for (int i = 0; i < children.Count; i++)
                Destroy(children[i]);
        }

    }
}
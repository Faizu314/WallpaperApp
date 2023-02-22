using System.Collections.Generic;
using UnityEngine;

namespace Wallpaper.UI {

    public class WallpaperIconsContent : MonoBehaviour {

        [SerializeField] private GameObject m_WallpaperIconPrefab;

        private IWallpaperDatabase WallpaperDatabase => Refs.Instance.WallpaperDatabase;

        private void OnEnable() {
            OnCollectionSceneLoaded();
        }

        private void OnDisable() {
            OnCollectionSceneUnLoaded();
        }

        private void OnCollectionSceneLoaded() {
            var wallpapers = WallpaperDatabase.GetWallpaperCollection();

            foreach (var wallpaper in wallpapers) {
                GameObject icon = Instantiate(m_WallpaperIconPrefab, transform);
                icon.GetComponent<CollectionWallpaperIcon>().Initialize(wallpaper);
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
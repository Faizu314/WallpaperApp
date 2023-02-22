using UnityEngine;
using UnityEngine.UI;

namespace Wallpaper.Collection {

    [AddComponentMenu("Wallpaper/Controllers/Collection Scene Controller")]
    public class CollectionSceneController : BaseController {

        private IAndroidCommander AndroidCommander => Refs.Instance.AndroidCommander;

        [SerializeField] private Button m_CreateButton;
        [SerializeField] private Button m_BackButton;

        private void Awake() {
            m_CreateButton.onClick.RemoveAllListeners();
            m_CreateButton.onClick.AddListener(() => AndroidCommander.OpenAndroidGallery());
            m_BackButton.onClick.AddListener(() => AppManager.Instance.ShowScreen(AppManager.Page.Home));
        }

        public override void OnAndroidBackPressed() {
            base.OnAndroidBackPressed();

            m_BackButton.onClick.Invoke();
        }

        protected override void OnSceneLoaded() {
            base.OnSceneLoaded();
            ApplicationEvents.OnAndroidImageReceived += OnCreateWallpaper;
        }

        protected override void OnSceneUnLoaded() {
            base.OnSceneUnLoaded();
            ApplicationEvents.OnAndroidImageReceived -= OnCreateWallpaper;
        }

        public void OnCreateWallpaper(byte[] imageData, int imageWidth, int imageHeight) {
            WallpaperImage wallpaperImage = new() {
                Data = imageData,
                Width = imageWidth,
                Height = imageHeight,
                Position = Vector2.zero,
                Scale = Vector2.one
            };

            Wallpaper wallpaper = new() {
                Name = null,
                Version = Application.version,
                Images = new() { wallpaperImage }
            };

            ApplicationEvents.InvokeOnWallpaperEdit(wallpaper);
        }

    }
}
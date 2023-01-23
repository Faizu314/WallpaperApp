using UnityEngine;
using UnityEngine.UI;
using Wallpaper.Utils;
using Phezu.Util;

namespace Wallpaper.Controllers {

    [AddComponentMenu("Wallpaper/Controllers/Collection Scene Controller")]
    public class CollectionSceneController : BaseController {

        [SerializeField][RequireInterface(typeof(IAndroidCommander))]
        private Object m_AndroidCommander;
        private IAndroidCommander AndroidCommander => (IAndroidCommander)m_AndroidCommander;

        [SerializeField] private Button m_CreateButton;
        [SerializeField] private Button m_BackButton;

        private void Awake() {
            m_CreateButton.onClick.RemoveAllListeners();
            m_CreateButton.onClick.AddListener(() => AndroidCommander.OpenAndroidGallery());
            m_BackButton.onClick.AddListener(() => AppManager.Instance.ShowScreen(AppManager.Page.Home));
        }

        protected override void OnSceneLoaded() {
            base.OnSceneLoaded();
            ApplicationEvents.OnAndroidImageReceived += CreateWallpaper;
        }

        protected override void OnSceneUnLoaded() {
            base.OnSceneUnLoaded();
            ApplicationEvents.OnAndroidImageReceived -= CreateWallpaper;
        }

        public void CreateWallpaper(byte[] imageData, int imageWidth, int imageHeight) {
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
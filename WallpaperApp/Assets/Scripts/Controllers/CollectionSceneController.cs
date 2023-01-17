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

        [SerializeField][RequireInterface(typeof(IWallpaperDatabase))]
        private Object m_WallpaperDatabase;
        private IWallpaperDatabase WallpaperDatabase => (IWallpaperDatabase)m_WallpaperDatabase;

        [SerializeField] private ImageCropController m_ImageCropper;
        [SerializeField] private StringInputFieldController m_InputFieldController;
        [SerializeField] private Button m_CreateButton;
        [SerializeField] private Button m_BackButton;

        private Wallpaper m_CreatedWallpaper;

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
                Height = imageHeight
            };

            m_CreatedWallpaper = new() {
                Version = Application.version,
                Images = new() { wallpaperImage }
            };

            Texture2D image = Util.ToTexture2D(wallpaperImage);

            AppManager.Instance.ShowScreen(AppManager.Page.ImageCrop);

            m_ImageCropper.BeginImageCropping(image, OnImageCropped);
        }

        private void OnImageCropped(ImageCropController.CropData cropData) {
            m_CreatedWallpaper.Images[0].Position = cropData.Position;
            m_CreatedWallpaper.Images[0].Scale = cropData.Scale;

            AppManager.Instance.ShowScreen(AppManager.Page.InputField);

            m_InputFieldController.GetUserInput("Enter Wallpaper Name", OnWallpaperNameAssigned);
        }

        private void OnWallpaperNameAssigned(string name) {
            m_CreatedWallpaper.Name = name;
            WallpaperDatabase.Save(m_CreatedWallpaper);

            ApplicationEvents.InvokeOnWallpaperEdit(m_CreatedWallpaper);
        }

    }
}
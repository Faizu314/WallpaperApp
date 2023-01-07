using UnityEngine;
using Wallpaper.Utils;
using Phezu.Util;
using UnityEngine.UI;

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

        private Wallpaper m_CreatedWallpaper;

        private void Awake() {
            m_CreateButton.onClick.RemoveAllListeners();
            m_CreateButton.onClick.AddListener(OnCreateWallpaperClick);
        }

        protected override void OnSceneLoaded() {
            ApplicationEvents.OnAndroidImageReceived += OnImageReceivedFromAndroid;
        }

        protected override void OnSceneUnLoaded() {
            ApplicationEvents.OnAndroidImageReceived -= OnImageReceivedFromAndroid;
        }

        private void OnCreateWallpaperClick() {
            AndroidCommander.OpenAndroidGallery();
        }

        private void OnImageReceivedFromAndroid(byte[] imageData, int imageWidth, int imageHeight) {
            m_CreatedWallpaper = new() {
                BackgroundImage = imageData,
                ImageWidth = imageWidth,
                ImageHeight = imageHeight
            };

            Texture2D image = Util.ToTexture2D(imageData, imageWidth, imageHeight);

            AppManager.Instance.ShowScreen(AppManager.Page.ImageCrop);

            m_ImageCropper.BeginImageCropping(image, OnImageCropped);
        }

        private void OnImageCropped(ImageCropController.CropData cropData) {
            m_CreatedWallpaper.CropPositionX = cropData.Position.x;
            m_CreatedWallpaper.CropPositionY = cropData.Position.y;
            m_CreatedWallpaper.CropScaleX = cropData.Scale.x;
            m_CreatedWallpaper.CropScaleY = cropData.Scale.y;
            m_CreatedWallpaper.CropScaleZ = cropData.Scale.z;

            AppManager.Instance.ShowScreen(AppManager.Page.InputField);

            m_InputFieldController.GetUserInput("Enter Wallpaper Name", OnWallpaperNameAssigned);
        }

        private void OnWallpaperNameAssigned(string name) {
            m_CreatedWallpaper.name = name;
            WallpaperDatabase.Save(m_CreatedWallpaper, name);

            ApplicationEvents.InvokeOnWallpaperEdit(m_CreatedWallpaper);
        }

    }
}
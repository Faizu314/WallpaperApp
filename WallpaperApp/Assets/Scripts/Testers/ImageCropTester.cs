using System.Collections;
using UnityEngine;
using Wallpaper.Controllers;
using Wallpaper.Utils;
using Phezu.Util;

namespace Wallpaper.Testers {

    public class ImageCropTester : MonoBehaviour {

        [SerializeField][RequireInterface(typeof(IWallpaperDatabase))]
        private Object m_WallpaperDatabase;
        private IWallpaperDatabase WallpaperDatabase => (IWallpaperDatabase)m_WallpaperDatabase;

        [SerializeField] private ImageCropController m_ImageCropper;

        private Texture2D m_ImageToCrop;
        private Wallpaper m_TestWallpaper;

        private void Start() {
            m_ImageCropper.gameObject.SetActive(true);
            m_ImageCropper.OnApplicationStart();
            m_TestWallpaper = WallpaperDatabase.Load("name");
            StartCoroutine("wait");
        }

        private IEnumerator wait() {
            yield return new WaitForSeconds(1f);

            var image = m_TestWallpaper.Images[0];

            m_ImageToCrop = Util.ToTexture2D(image);

            m_ImageCropper.BeginImageCropping(m_ImageToCrop, OnImageCropped);
        }

        private void OnImageCropped(ImageCropController.CropData cropData) {
            m_ImageCropper.gameObject.SetActive(false);

            m_TestWallpaper.Images[0].Position = cropData.Position;
            m_TestWallpaper.Images[0].Scale = cropData.Scale;

            Debug.Log(cropData.Position);

            m_TestWallpaper.Name = "name";
            WallpaperDatabase.Save(m_TestWallpaper);
        }
    }
}
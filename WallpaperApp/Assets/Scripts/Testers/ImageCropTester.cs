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

            m_ImageToCrop = Util.ToTexture2D(m_TestWallpaper.BackgroundImage, m_TestWallpaper.ImageWidth, m_TestWallpaper.ImageHeight);

            m_ImageCropper.BeginImageCropping(m_ImageToCrop, OnImageCropped);
        }

        private void OnImageCropped(ImageCropController.CropData cropData) {
            m_ImageCropper.gameObject.SetActive(false);

            m_TestWallpaper.CropPositionX = cropData.Position.x;
            m_TestWallpaper.CropPositionY = cropData.Position.y;
            m_TestWallpaper.CropScaleX = cropData.Scale.x;
            m_TestWallpaper.CropScaleY = cropData.Scale.y;
            m_TestWallpaper.CropScaleZ = cropData.Scale.z;

            Debug.Log(cropData.Position);

            WallpaperDatabase.Save(m_TestWallpaper, "name");
        }
    }
}
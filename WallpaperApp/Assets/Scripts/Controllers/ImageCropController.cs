using System;
using UnityEngine;
using UnityEngine.UI;
using Wallpaper.Utils;

namespace Wallpaper.Controllers {

    [AddComponentMenu("Wallpaper/Controllers/Image Crop Controller")]
    public class ImageCropController : MonoBehaviour {

        [SerializeField] private Image m_ImageHolder;
        [SerializeField] private Button m_SubmitButton;

        private Action<CropData> m_OnImageCropped;
        private CropData m_CropData;


        private void Awake() {
            m_SubmitButton.onClick.RemoveAllListeners();
            m_SubmitButton.onClick.AddListener(OnSubmitButtonPressed);
            m_ImageHolder.preserveAspect = true;
        }

        public void BeginImageCropping(Texture2D rawImage, Action<CropData> onImageCropped) {
            m_OnImageCropped = onImageCropped;

            m_ImageHolder.transform.position = Vector3.zero;
            m_ImageHolder.sprite = Util.ImageToSprite(rawImage);
            m_ImageHolder.SetNativeSize();
            ScaleImageHolderToCoverEntireScreen(rawImage.width, rawImage.height);
        }

        private void OnSubmitButtonPressed() {
            m_CropData = new() {
                Position = m_ImageHolder.transform.position,
                Scale = m_ImageHolder.transform.localScale
            };

            m_OnImageCropped.Invoke(m_CropData);
        }

        private void ScaleImageHolderToCoverEntireScreen(int nativeWidth, int nativeHeight) {
            float xScaling = Screen.width / (float)nativeWidth;
            float yScaling = Screen.height / (float)nativeHeight;

            float scale = Mathf.Max(xScaling, yScaling);

            m_ImageHolder.transform.localScale = new(scale, scale, scale);
        }

        public class CropData {
            public Vector3 Position;
            public Vector3 Scale;
        }
    }
}
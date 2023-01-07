using System;
using UnityEngine;
using UnityEngine.UI;
using Wallpaper.Utils;

namespace Wallpaper.Controllers {

    [AddComponentMenu("Wallpaper/Controllers/Image Crop Controller")]
    public class ImageCropController : BaseController {

        [SerializeField] private Canvas m_Canvas;
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

            m_ImageHolder.GetComponent<RectTransform>().anchoredPosition = Vector2.zero;
            m_ImageHolder.sprite = Util.ImageToSprite(rawImage);
            m_ImageHolder.SetNativeSize();
            ScaleImageHolderToCoverEntireScreen(rawImage.width, rawImage.height);
        }

        private void OnSubmitButtonPressed() {
            Util.SetRectTransformPivot(m_ImageHolder.GetComponent<RectTransform>(), Vector2.one / 2f);

            m_CropData = new() {
                Position = m_ImageHolder.GetComponent<RectTransform>().anchoredPosition,
                Scale = m_ImageHolder.transform.localScale
            };

            m_OnImageCropped.Invoke(m_CropData);
        }

        private void ScaleImageHolderToCoverEntireScreen(int nativeWidth, int nativeHeight) {
            float xScaling = m_Canvas.pixelRect.width / (float)nativeWidth;
            float yScaling = m_Canvas.pixelRect.height / (float)nativeHeight;

            float scale = Mathf.Max(xScaling, yScaling);

            m_ImageHolder.transform.localScale = new(scale, scale, scale);
        }

        protected override void OnSceneLoaded() {
        }

        protected override void OnSceneUnLoaded() {
        }

        public class CropData {
            public Vector2 Position;
            public Vector3 Scale;
        }
    }
}
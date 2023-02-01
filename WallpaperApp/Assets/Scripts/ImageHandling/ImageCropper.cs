using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using Wallpaper.Utils;

namespace Wallpaper.ImageHandling {

    [RequireComponent(typeof(ScrollRect))]
    public class ImageCropper : MonoBehaviour {

        [SerializeField] private Image m_Image;
        [SerializeField] private ZoomablePanel m_ZoomablePanel;

        private ScrollRect m_ScrollRect;
        private RectTransform m_ImageRect;
        private RectTransform m_CropperRect;
        private Camera m_Camera;
        private CropData m_StartState;
        private CropData m_EndState;

        private void Awake() {
            m_ScrollRect = GetComponent<ScrollRect>();
            m_CropperRect = GetComponent<RectTransform>();

            m_ImageRect = m_Image.GetComponent<RectTransform>();
            m_Image.preserveAspect = true;

            m_Camera = Camera.main;

            var rect = GetComponent<RectTransform>();
            rect.anchorMin = Vector2.zero;
            rect.anchorMax = Vector2.one;
            rect.offsetMin = Vector2.zero;
            rect.offsetMax = Vector2.zero;

            DisableCropping();
        }

        private void DisableCropping() {
            DisableMovement();
            DisableZooming();
        }

        public void EnableMovement() {
            //var currentState = GetCurrentState();

            m_ScrollRect.horizontal = true;
            m_ScrollRect.vertical = true;
            m_ScrollRect.StopMovement();

            //SetCurrentState(currentState);
        }

        public void DisableMovement() {
            m_ScrollRect.horizontal = false;
            m_ScrollRect.vertical = false;
        }

        public void EnableZooming() {
            m_ZoomablePanel.enabled = true;
        }

        public void DisableZooming() {
            m_ZoomablePanel.enabled = false;
        }

        public void BeginCropping() {
            m_StartState = GetCurrentState();
        }

        public void CancelCropping() {
            DisableCropping();
            SetCurrentState(m_StartState);
        }

        public CropData[] FinishCropping() {
            DisableCropping();
            m_EndState = GetCurrentState();

            if (m_StartState.Equals(m_EndState))
                return null;

            return new CropData[2] { m_StartState, m_EndState };
        }

        public void SetAlwaysCoverScreen(bool alwaysCoverScreen) {
            m_ZoomablePanel.AlwaysCoverEntireScreen = alwaysCoverScreen;

            if (!alwaysCoverScreen)
                return;

            float scaleFactor = Mathf.Max(
                Mathf.Max(1f, (float)(m_Camera.pixelHeight / (float)m_Image.sprite.texture.height)),
                Mathf.Max(1f, (float)(m_Camera.pixelWidth / (float)m_Image.sprite.texture.width))
                );

            m_ZoomablePanel.Scale(scaleFactor);
        }

        public void SetImage(Sprite image) {
            m_Image.sprite = image;
            m_Image.SetNativeSize();
        }

        private void ResetPivot() {
            Util.SetRectTransformPivot(m_ImageRect, Vector2.one / 2f);
        }


        public CropData GetCurrentState() {
            ResetPivot();

            CropData cropData = new(m_ImageRect.anchoredPosition, m_ImageRect.localScale);
            cropData.NormalizePosition(m_Camera);

            return cropData;
        }
        public void SetCurrentState(CropData cropData) {
            StartCoroutine(nameof(SetStateCoroutine), cropData);
        }

        private IEnumerator SetStateCoroutine(CropData cropData) {
            yield return new WaitForEndOfFrame();

            ResetPivot();

            cropData.DenormalizePosition(m_Camera);

            m_ImageRect.anchoredPosition = cropData.Position;

            if (m_ZoomablePanel.IsScaleValid(cropData.Scale))
                m_ImageRect.localScale = cropData.Scale;
        }

        public struct CropData {
            public Vector2 Position;
            public Vector2 Scale;

            public CropData(Vector2 position, Vector2 scale) {
                Position = position;
                Scale = scale;
            }

            public void NormalizePosition(Camera camera) {
                Position.Scale(new(1f / camera.pixelWidth, 1f / camera.pixelHeight));
            }

            public void DenormalizePosition(Camera camera) {
                Position.Scale(new(camera.pixelWidth, camera.pixelHeight));
            }
        }
    }
}
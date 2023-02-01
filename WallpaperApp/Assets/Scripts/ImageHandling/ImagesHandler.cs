using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using Wallpaper.Utils;
using Phezu.Util;

namespace Wallpaper.ImageHandling {

    public class ImagesHandler : MonoBehaviour {

        [SerializeField] private GameObject m_ImageContainerPrefab;
        [SerializeField] private Transform m_ImagesParent;
        [SerializeField] private GraphicRaycaster m_Raycaster;
        [SerializeField] private LayerMask m_EditorImagesLayer;

        public int Count => m_Croppers.Count;
        public int SelectedLayer => m_SelectedLayer;
        public bool IsCropping => m_IsCropping;

        private PointerEventData m_PointerEventData;
        private Dictionary<WallpaperImage, GameObject> m_ImageToObject = new();
        private Dictionary<GameObject, ImageCropper> m_ObjectToCropper = new();
        private List<ImageCropper> m_Croppers = new();
        private ImageCropper m_CurrentlySelectedCropper;
        private int m_SelectedLayer;
        private bool m_IsCropping;

        public ImageCropper this[int i] {
            get {
                return m_Croppers[i];
            }
        }

        private void Awake() {
            m_PointerEventData = new(EventSystem.current);
        }

        private void OnEnable() {
            ApplicationEvents.OnPrimaryTouchDown += OnTouchDown;
            ApplicationEvents.OnPrimaryTouchUp += OnTouchUp;
            ApplicationEvents.OnTouchPinchBegin += OnPinchBegin;
            ApplicationEvents.OnSecondTouchUp += OnPinchEnd;
        }

        private void OnDisable() {
            ApplicationEvents.OnPrimaryTouchDown -= OnTouchDown;
            ApplicationEvents.OnPrimaryTouchUp -= OnTouchUp;
            ApplicationEvents.OnTouchPinchBegin -= OnPinchBegin;
            ApplicationEvents.OnSecondTouchUp -= OnPinchEnd;
        }

        private void OnTouchDown(Vector2 screenPosition) {
            if (!m_IsCropping)
                return;
            if (!Util.CanvasRaycast(m_PointerEventData, m_Raycaster, screenPosition, m_EditorImagesLayer, out var results))
                return;

            m_ObjectToCropper.TryGetValue(results[0].gameObject, out m_CurrentlySelectedCropper);

            if (m_CurrentlySelectedCropper == null)
                return;

            m_CurrentlySelectedCropper.EnableMovement();
            m_CurrentlySelectedCropper.DisableZooming();
        }

        private void OnTouchUp() {
            if (m_CurrentlySelectedCropper != null) {
                m_CurrentlySelectedCropper.DisableZooming();
                m_CurrentlySelectedCropper.DisableMovement();
            }
            m_CurrentlySelectedCropper = null;
        }

        private void OnPinchBegin(Vector2 pivot, float magnitude) {
            if (!m_IsCropping)
                return;

            if (m_CurrentlySelectedCropper == null)
                return;

            m_CurrentlySelectedCropper.EnableZooming();
            m_CurrentlySelectedCropper.DisableMovement();
        }

        private void OnPinchEnd() {
            if (m_CurrentlySelectedCropper == null)
                return;
            m_CurrentlySelectedCropper.DisableZooming();
            m_CurrentlySelectedCropper.EnableMovement();
        }

        public void SetCurrentLayer(int layer) {
            if (layer == m_SelectedLayer)
                return;
            if (layer >= Count)
                return;

            m_SelectedLayer = layer;
        }

        public List<ImageCropper.CropData[]> OnCropButtonPressed() {
            List<ImageCropper.CropData[]> data = null;

            if (!m_IsCropping)
                BeginCropping();
            else
                data = FinishCropping();

            m_IsCropping = !m_IsCropping;

            return data;
        }

        private void BeginCropping() {
            for (int i = 0; i < Count; i++)
                m_Croppers[i].BeginCropping();
        }

        public void CancelCropping() {
            if (!m_IsCropping)
                return;

            for (int i = 0; i < Count; i++)
                m_Croppers[i].CancelCropping();

            m_IsCropping = false;
        }

        private List<ImageCropper.CropData[]> FinishCropping() {
            List<ImageCropper.CropData[]> datas = new();

            bool areAllNulls = true;
            for (int i = 0; i < Count; i++) {
                var data = m_Croppers[i].FinishCropping();

                if (data != null)
                    areAllNulls = false;

                datas.Add(data);
            }

            if (areAllNulls)
                return null;

            return datas;
        }

        public void OpenImage(WallpaperImage wallpaperImage, bool alwaysCoverScreen) {
            Sprite imageSprite = Util.WallpaperImageToSprite(wallpaperImage);
            GameObject imageObj = Instantiate(m_ImageContainerPrefab);
            ImageCropper cropper = imageObj.GetComponent<ImageCropper>();

            cropper.SetImage(imageSprite);
            cropper.SetAlwaysCoverScreen(alwaysCoverScreen);
            imageObj.transform.SetParent(m_ImagesParent, false);
            imageObj.transform.SetSiblingIndex(m_ImagesParent.childCount - 2);

            m_ImageToObject.Add(wallpaperImage, imageObj);
            m_ObjectToCropper.Add(imageObj.transform.GetChild(0).GetChild(0).gameObject, cropper);
            m_Croppers.Add(cropper);
        }

        public void AddImageToWallpaper(WallpaperImage wallpaperImage, Wallpaper wallpaper) {
            wallpaper.Images.Add(wallpaperImage);
            OpenImage(wallpaperImage, false);
            m_SelectedLayer++;
        }

        public void RemoveImageFromWallpaper(WallpaperImage wallpaperImage, Wallpaper wallpaper) {
            m_ImageToObject.TryGetValue(wallpaperImage, out var gameObj);

            if (gameObj == null)
                return;

            int index = wallpaper.Images.IndexOf(wallpaperImage);
            m_Croppers.RemoveAt(index);

            wallpaper.Images.Remove(wallpaperImage);

            Destroy(gameObj);
            m_ObjectToCropper.Remove(m_ImageToObject[wallpaperImage]);
            m_ImageToObject.Remove(wallpaperImage);

            if (m_SelectedLayer >= Count)
                m_SelectedLayer = Count - 1;
        }

    }
}
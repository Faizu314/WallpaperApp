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

        private EventSystem m_EventSystem;
        private Dictionary<WallpaperImage, GameObject> m_ImageToObject = new();
        private Dictionary<GameObject, ImageCropper> m_ObjectToCropper = new();
        private List<ImageCropper> m_Croppers = new();
        private ImageCropper m_CurrentlyZoomingCropper;
        private int m_SelectedLayer;
        private bool m_IsCropping;

        public ImageCropper this[int i] {
            get {
                return m_Croppers[i];
            }
        }

        private void Awake() {
            m_EventSystem = EventSystem.current;
        }

        private void OnEnable() {
            ApplicationEvents.OnTouchPinchBegin += OnPinchBegin;
            ApplicationEvents.OnSecondTouchUp += OnPinchEnd;
        }

        private void OnDisable() {
            ApplicationEvents.OnTouchPinchBegin -= OnPinchBegin;
            ApplicationEvents.OnSecondTouchUp -= OnPinchEnd;
        }

        private void OnPinchBegin(Vector2 pivot, float magnitude) {
            PointerEventData m_PointerEventData = new(m_EventSystem) {
                position = pivot
            };

            List<RaycastResult> results = new();

            m_Raycaster.Raycast(m_PointerEventData, results);

            if (results.Count == 0)
                return;
            if (!FMath.IsInLayerMask(m_EditorImagesLayer, results[0].gameObject.layer))
                return;

            m_ObjectToCropper.TryGetValue(results[0].gameObject.transform.parent.parent.gameObject, out m_CurrentlyZoomingCropper);

            if (m_CurrentlyZoomingCropper == null)
                return;

            m_CurrentlyZoomingCropper.EnableZooming();

            //Util.SetRectTransformPivot((RectTransform)m_CurrentlyZoomingCropper.transform, pivot);
        }

        private void OnPinchEnd() {
            if (m_CurrentlyZoomingCropper != null)
                m_CurrentlyZoomingCropper.DisableZooming();
            m_CurrentlyZoomingCropper = null;
        }

        public void CancelCropping() {
            if (!m_IsCropping)
                return;
            m_Croppers[SelectedLayer].CancelCropping();
            m_IsCropping = false;
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
            for (int i = 0; i < Count; i++) {
                m_Croppers[i].BeginCropping();
                m_Croppers[i].EnableMovement();
            }
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
            m_ObjectToCropper.Add(imageObj, cropper);
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
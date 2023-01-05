using UnityEngine;

namespace Wallpaper.Utils {

    [RequireComponent(typeof(RectTransform))]
    public class ZoomablePanel : MonoBehaviour {

        [SerializeField] private bool m_AlwaysCoverEntireScreen;

        private RectTransform m_Transform;
        private Camera m_Camera;
        private float m_ZoomLevel = 1f;
        private bool m_IsPinching = false;

        private void Awake() {
            m_Transform = GetComponent<RectTransform>();
            m_Camera = Camera.main;
        }

        private void OnEnable() {
            ApplicationEvents.OnTouchPinch += OnTouchPinch;
            ApplicationEvents.OnSecondTouchUp += OnTouchPinchEnd;
        }

        private void OnDisable() {
            ApplicationEvents.OnTouchPinch -= OnTouchPinch;
        }
        
        private void OnTouchPinchEnd() {
            m_IsPinching = false;
        }

        private void OnTouchPinch(Vector2Int pivot, float zoomMagnitude) {
            if (!RectTransformUtility.ScreenPointToLocalPointInRectangle(m_Transform, pivot, Camera.main, out var nPivot))
                return;

            if (!m_IsPinching) {
                nPivot.x /= m_Transform.sizeDelta.x;
                nPivot.y /= m_Transform.sizeDelta.y;

                Util.SetRectTransformPivot(m_Transform, m_Transform.pivot + nPivot);
                m_IsPinching = true;
            }

            float zoomFactor = GetZoomFactor(zoomMagnitude);

            if (!m_AlwaysCoverEntireScreen)
                m_Transform.localScale *= zoomFactor;
            else if (Util.IsRectInsideScreenAfterScaling(m_Transform, m_Camera, zoomFactor))
                m_Transform.localScale *= zoomFactor;
        }

        private float GetZoomFactor(float magnitude) {
            float prevZoomLevel = m_ZoomLevel;
            m_ZoomLevel *= magnitude;

            if (m_ZoomLevel <= 0f)
                m_ZoomLevel = 0.01f;

            return m_ZoomLevel / prevZoomLevel;
        }

    }
}
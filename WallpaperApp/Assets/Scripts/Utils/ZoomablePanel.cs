using UnityEngine;
using Phezu.Util;

namespace Wallpaper.Utils {

    [RequireComponent(typeof(RectTransform))]
    public class ZoomablePanel : MonoBehaviour {

        [SerializeField][Range(0f, 1f)] private float m_ZoomLerpLife;
        [SerializeField][Range(0f, 1f)] private float m_ZoomLerpRatio;

        [SerializeField] private bool m_AlwaysCoverEntireScreen;

        private RectTransform m_Transform;
        private Camera m_Camera;

        private float m_CurrentZoomLevel = 1f;
        private float m_TargetZoomLevel = 1f;
        private bool m_IsPinching = false;
        private float K;

        private void Awake() {
            m_Transform = GetComponent<RectTransform>();
            m_Camera = Camera.main;
            K = FMath.GetFreeLerpK(m_ZoomLerpLife, m_ZoomLerpRatio);
        }

        private void OnEnable() {
            ApplicationEvents.OnTouchPinch += OnTouchPinch;
            ApplicationEvents.OnSecondTouchUp += OnTouchPinchEnd;
        }

        private void OnDisable() {
            ApplicationEvents.OnTouchPinch -= OnTouchPinch;
            ApplicationEvents.OnSecondTouchUp -= OnTouchPinchEnd;
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
            m_TargetZoomLevel *= magnitude;

            if (m_TargetZoomLevel <= 0f)
                m_TargetZoomLevel = 0.01f;

            float prevZoomLevel = m_CurrentZoomLevel;
            m_CurrentZoomLevel = GetLerpedZoomValue();

            return m_CurrentZoomLevel / prevZoomLevel;
        }

        private float GetLerpedZoomValue() {
            float t = FMath.GetFreeLerpT(K, Time.deltaTime);
            return Mathf.Lerp(m_CurrentZoomLevel, m_TargetZoomLevel, t);
        }
    }
}
using Phezu.Util;
using UnityEngine;

namespace Wallpaper.Utils {

    [RequireComponent(typeof(RectTransform))]
    public class ZoomablePanel : MonoBehaviour {

        [SerializeField][Range(0f, 1f)] private float m_ZoomLerpLife;
        [SerializeField][Range(0f, 1f)] private float m_ZoomLerpRatio;

        public bool AlwaysCoverEntireScreen;

        private RectTransform m_Transform;
        private Camera m_Camera;

        private float m_CurrentZoomLevel = 1f;
        private float m_TargetZoomLevel = 1f;
        private float m_AccumulatedZoom = 1f;
        private float K;

        private void Awake() {
            m_Transform = GetComponent<RectTransform>();
            m_Camera = Camera.main;
            K = FMath.GetFreeLerpK(m_ZoomLerpLife, m_ZoomLerpRatio);
        }

        private void OnEnable() {
            ApplicationEvents.OnTouchPinch += OnTouchPinch;
        }

        private void OnDisable() {
            ApplicationEvents.OnTouchPinch -= OnTouchPinch;
        }

        public bool IsScaleValid(Vector2 scale) {
            if (!AlwaysCoverEntireScreen)
                return true;

            Vector2 currScale = m_Transform.localScale;
            
            if (!Util.IsRectHeightLargerThanScreenAfterScaling(m_Transform, m_Camera, scale.y / currScale.y))
                return false;
            if (!Util.IsRectWidthLargerThanScreenAfterScaling(m_Transform, m_Camera, scale.x / currScale.x))
                return false;

            return true;
        }

        public void Scale(float scaleFactor) {
            if (AlwaysCoverEntireScreen) {
                if (Util.DoesRectFitScreenAfterScaling(m_Transform, m_Camera, scaleFactor))
                    ScaleDirectly(scaleFactor);
            } else
                ScaleDirectly(scaleFactor);
        }

        private void ScaleDirectly(float scaleFactor) {
            m_TargetZoomLevel *= scaleFactor;
            m_CurrentZoomLevel = m_TargetZoomLevel;
            m_Transform.localScale *= scaleFactor;
        }

        private void OnTouchPinch(Vector2 pivot, float zoomMagnitude) {
            if (!RectTransformUtility.ScreenPointToLocalPointInRectangle(m_Transform, pivot, m_Camera, out var localPivot))
                return;

            var localPivotNormalized = Rect.PointToNormalized(m_Transform.rect, localPivot);

            Util.SetRectTransformPivot(m_Transform, localPivotNormalized);

            float zoomFactor = GetZoomFactor(zoomMagnitude);

            if (!AlwaysCoverEntireScreen)
                m_Transform.localScale *= zoomFactor;
            else if (Util.DoesRectFitScreenAfterScaling(m_Transform, m_Camera, zoomFactor))
                m_Transform.localScale *= zoomFactor;

            m_Transform.ForceUpdateRectTransforms();

            Util.SetRectTransformPivot(m_Transform, localPivotNormalized);
        }

        private float GetZoomFactor(float magnitude) {
            m_TargetZoomLevel *= magnitude;

            if (m_TargetZoomLevel <= 0.01f)
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
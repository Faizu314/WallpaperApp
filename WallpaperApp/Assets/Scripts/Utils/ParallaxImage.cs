using UnityEngine;
using DG.Tweening;

namespace Wallpaper.Utils {
    public class ParallaxImage : MonoBehaviour {

        private RectTransform m_Transform;
        private Camera m_Camera;

        private Vector2 m_BasePosition;
        private float m_ParallaxRadius;
        private float m_ParallaxAmplitude;
        private float m_ParallaxScale;
        private bool m_IsEnabled;

        private void Awake() {
            m_Transform = GetComponent<RectTransform>();
            m_Camera = Camera.main;
            m_IsEnabled = false;
        }

        public void EnableParallax(float parallaxRadius, float parallaxAmplitude, float parallaxDepth) {
            if (m_IsEnabled)
                return;

            Debug.Log("Base: " + m_Transform.anchoredPosition);
            m_BasePosition = m_Transform.localPosition;
            m_ParallaxScale = parallaxDepth;
            m_ParallaxAmplitude = parallaxAmplitude;
            m_ParallaxRadius = parallaxRadius;
            m_IsEnabled = true;

            ApplicationEvents.OnParallax += OnParallax;
            ApplicationEvents.OnParallaxEnd += OnParallaxEnd;
        }

        public void DisableParallax() {
            if (!m_IsEnabled)
                return;

            Debug.Log("Disabling: " + m_BasePosition);

            m_Transform.DOLocalMove(m_BasePosition, 0.5f);
            m_IsEnabled = false;

            ApplicationEvents.OnParallax -= OnParallax;
            ApplicationEvents.OnParallaxEnd -= OnParallaxEnd;
        }

        private void OnParallax(Vector2 dir) {
            Vector2 offset = dir;

            offset.Scale(new(1f / m_Camera.pixelWidth, 1f / m_Camera.pixelHeight));

            offset.x = Mathf.Min(Mathf.Abs(offset.x), m_ParallaxRadius) * Mathf.Sign(offset.x);
            offset.y = Mathf.Min(Mathf.Abs(offset.y), m_ParallaxRadius) * Mathf.Sign(offset.y);
            offset /= m_ParallaxRadius;

            offset.Scale(new Vector2(m_Camera.pixelWidth, m_Camera.pixelHeight) * m_ParallaxAmplitude);
            offset *= m_ParallaxScale;

            Debug.Log("Parallax: " + (m_BasePosition + offset));
            m_Transform.DOLocalMove(m_BasePosition + offset, 0.5f);
        }

        private void OnParallaxEnd() {
            Debug.Log("Ending: " + m_BasePosition);
            m_Transform.DOLocalMove(m_BasePosition, 0.5f);
        }
    }
}
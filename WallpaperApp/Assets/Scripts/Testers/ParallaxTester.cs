using UnityEngine;

namespace Wallpaper.Testers {

    [RequireComponent(typeof(RectTransform))]
    public class ParallaxTester : MonoBehaviour {

        [SerializeField][Range(0f, 1f)] private float m_JoyStickRadius;

        private RectTransform m_Transform;
        private Camera m_Camera;

        private void Awake() {
            m_Transform = GetComponent<RectTransform>();
            m_Camera = Camera.main;

            ApplicationEvents.OnParallaxBegin += OnParallaxBegin;
            ApplicationEvents.OnParallax += OnParallax;
            ApplicationEvents.OnParallaxEnd += OnParallaxEnd;
        }


        private void OnParallaxBegin() {

        }

        private void OnParallax(Vector2 dir) {
            dir.Scale(new(1f / m_Camera.pixelWidth, 1f / m_Camera.pixelHeight));

            dir.x = Mathf.Min(Mathf.Abs(dir.x), m_JoyStickRadius) * Mathf.Sign(dir.x);
            dir.y = Mathf.Min(Mathf.Abs(dir.y), m_JoyStickRadius) * Mathf.Sign(dir.y);

            dir.Scale(new(m_Camera.pixelWidth, m_Camera.pixelHeight));

            m_Transform.anchoredPosition = dir;
        }

        private void OnParallaxEnd() {

        }
    }
}
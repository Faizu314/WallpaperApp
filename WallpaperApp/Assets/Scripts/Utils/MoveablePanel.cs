using UnityEngine;

namespace Wallpaper.Utils {

    public class MoveablePanel : MonoBehaviour {

        private RectTransform m_Transform;
        private Camera m_Camera;

        private void Awake() {
            m_Transform = GetComponent<RectTransform>();
            m_Camera = Camera.main;
        }

        public void KeepContentInsideScreen(Vector2 deltaPosition) {
            if (!Util.IsRectInsideScreen(m_Transform, m_Camera, out var correction))
                m_Transform.anchoredPosition += correction;
        }
    }
}
using UnityEngine;
using Wallpaper.Utils;
using DG.Tweening;

namespace Wallpaper.UI {

    [RequireComponent(typeof(RectTransform))]
    public class SlidingBar : MonoBehaviour {

        [Tooltip("The time in seconds it will take to open/close.")]
        [SerializeField][Range(0f, 1f)] private float m_TweenTime;

        private RectTransform m_Transform;
        private float m_PanelPixelWidth;
        private float m_BaseXPosition;

        private void Awake() {
            SetupPanel();
        }

        public void SetupPanel() {
            m_Transform = GetComponent<RectTransform>();

            m_Transform.offsetMin = Vector2.zero;
            m_Transform.offsetMax = Vector2.zero;

            m_PanelPixelWidth = Util.GetPanelPixelWidth(m_Transform, Camera.main);
            m_BaseXPosition = m_Transform.localPosition.x;
        }

        public void Open() {           
            m_Transform.DOLocalMoveX(m_BaseXPosition, m_TweenTime);
        }

        public void Close() {
            m_Transform.DOLocalMoveX(m_BaseXPosition - m_PanelPixelWidth, m_TweenTime);
        }
    }
}
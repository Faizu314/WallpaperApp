using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;

namespace Wallpaper.UI {

    [RequireComponent(typeof(ScrollRect))]
    public class DiscreteScroller : MonoBehaviour {

        [SerializeField, Range(0f, 1f)] private float m_TweenTime;

        [Tooltip("Set true for horizontal and false for vertical.")]
        [SerializeField] private bool m_Axis;

        private ScrollRect m_ScrollRect;
        private int m_Index;

        private void Awake() {
            m_ScrollRect = GetComponent<ScrollRect>();
            m_Index = 0;
        }

        public void Next() {
            if (m_ScrollRect.content.childCount <= m_Index + 1)
                return;

            m_Index++;
            SetScrollPosition();
        }

        public void Previous() {
            if (m_Index <= 0)
                return;

            m_Index--;
            SetScrollPosition();
        }

        private void SetScrollPosition() {
            float value = (float)(m_Index / ((float)m_ScrollRect.content.childCount - 1f));
            if (m_Axis)
                m_ScrollRect.DOHorizontalNormalizedPos(value, m_TweenTime);
            else
                m_ScrollRect.DOVerticalNormalizedPos(value, m_TweenTime);
        }
    }
}
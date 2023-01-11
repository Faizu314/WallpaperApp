using System.Collections;
using UnityEngine;
using DG.Tweening;
using Wallpaper.Utils;

namespace Wallpaper.UI {

    [RequireComponent(typeof(RectTransform))]
    public class SlidingBar : MonoBehaviour {

        [Tooltip("The time in seconds it will take to open/close.")]
        [SerializeField][Range(0f, 1f)] private float m_TweenTime;

        private RectTransform m_Transform;
        private float m_PanelPixelWidth;
        private float m_BaseXPosition;

        private void OnEnable() {
            ApplicationEvents.OnTap += OnTap;
        }

        private void OnDisable() {
            ApplicationEvents.OnTap -= OnTap;
        }

        private void OnTap(Vector2 screenPos) {
            var normalizedMousePosition = new Vector2(screenPos.x / Screen.width, screenPos.y / Screen.height);
            if (normalizedMousePosition.x > m_Transform.anchorMin.x &&
                normalizedMousePosition.x < m_Transform.anchorMax.x &&
                normalizedMousePosition.y > m_Transform.anchorMin.y &&
                normalizedMousePosition.y < m_Transform.anchorMax.y) {
                return;
            }
            Close();
        }

        private void Awake() {
            Initialize();
            StartCoroutine(nameof(SetupPanelAfterUIUpdate));
        }

        private void Initialize() {
            m_Transform = GetComponent<RectTransform>();
        }

        private IEnumerator SetupPanelAfterUIUpdate() {
            yield return new WaitForEndOfFrame();

            SetupPanel();
            Editor_Close();
        }

        public void SetupPanel() {
            m_Transform.offsetMin = Vector2.zero;
            m_Transform.offsetMax = Vector2.zero;

            m_PanelPixelWidth = Util.GetPanelPixelWidthInRectSpace(m_Transform);
            m_BaseXPosition = m_Transform.localPosition.x;
        }

        public void Open() {           
            m_Transform.DOLocalMoveX(m_BaseXPosition, m_TweenTime);
        }

        public void Close() {
            m_Transform.DOLocalMoveX(m_BaseXPosition - m_PanelPixelWidth, m_TweenTime);
        }

        #region Editor

        public void Editor_Open() {
            Vector3 pos = m_Transform.localPosition;
            pos.x = m_BaseXPosition;
            m_Transform.localPosition = pos;
        }

        public void Editor_Close() {
            Vector3 pos = m_Transform.localPosition;
            pos.x = m_BaseXPosition - m_PanelPixelWidth;
            m_Transform.localPosition = pos;
        }

        public void Editor_SetupPanel() {
            Initialize();
            SetupPanel();
        }

        #endregion
    }
}
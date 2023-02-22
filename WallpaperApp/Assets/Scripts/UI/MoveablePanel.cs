using System.Collections;
using UnityEngine;
using Wallpaper.Utils;

namespace Wallpaper.UI {

    public class MoveablePanel : MonoBehaviour {

        [Tooltip("Will not work if updated in playmode.")]
        [SerializeField] private bool m_AlwaysMoveInsideScreen;

        private RectTransform m_Transform;
        private Camera m_Camera;
        private Coroutine m_UpdateCoroutine;

        private void Awake() {
            m_Transform = GetComponent<RectTransform>();
            m_Camera = Camera.main;
        }

        private void OnEnable() {
            if (m_AlwaysMoveInsideScreen)
                StartCoroutine(nameof(UpdateCoroutine));
        }

        private void OnDisable() {
            if (m_AlwaysMoveInsideScreen)
                StopCoroutine(nameof(UpdateCoroutine));
        }

        private IEnumerator UpdateCoroutine() {
            while (true) {
                yield return new WaitForEndOfFrame();

                KeepContentInsideScreen();
            }
        }

        private void KeepContentInsideScreen() {
            if (!Util.DoesRectFitTheScreen(m_Transform, m_Camera, out var correction))
                m_Transform.anchoredPosition += correction;
            //Debug.Log(correction);
        }

        public void OnScrollRectUpdate(Vector2 deltaPosition) {
            KeepContentInsideScreen();
        }
    }
}
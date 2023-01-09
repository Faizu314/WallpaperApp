using System.Collections;
using UnityEngine;
using UnityEngine.UI;

namespace Wallpaper.Utils {

    [RequireComponent(typeof(ScrollRect))]
    public class SingleTouchScrollRect : MonoBehaviour {

        private ScrollRect m_ScrollRect;

        private void Awake() {
            m_ScrollRect = GetComponent<ScrollRect>();
        }

        private void OnEnable() {
            ApplicationEvents.OnSecondTouchDown += OnSecondTouchDown;
            ApplicationEvents.OnSecondTouchUp += OnSecondTouchUp;
        }

        private void OnDisable() {
            ApplicationEvents.OnSecondTouchDown -= OnSecondTouchDown;
            ApplicationEvents.OnSecondTouchUp -= OnSecondTouchUp;
        }

        private void OnSecondTouchDown() {
            m_ScrollRect.vertical = false;
            m_ScrollRect.horizontal = false;
        }

        private void OnSecondTouchUp() {
            StartCoroutine(nameof(WaitAndEnableScroll));
        }

        private IEnumerator WaitAndEnableScroll() {
            yield return null;

            m_ScrollRect.vertical = true;
            m_ScrollRect.horizontal = true;
        }
    }
}
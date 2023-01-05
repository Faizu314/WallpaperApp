using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Wallpaper.Utils {

    [RequireComponent(typeof(ScrollRect))]
    public class SingleTouchScrollRect : MonoBehaviour {

        private ScrollRect m_ScrollRect;

        private void Awake() {
            m_ScrollRect = GetComponent<ScrollRect>();

            ApplicationEvents.OnSecondTouchDown += OnSecondTouchDown;
            ApplicationEvents.OnSecondTouchUp += OnSecondTouchUp;
        }

        private void OnSecondTouchDown() {
            m_ScrollRect.vertical = false;
            m_ScrollRect.horizontal = false;
        }

        private void OnSecondTouchUp() {
            m_ScrollRect.vertical = true;
            m_ScrollRect.horizontal = true;
        }
    }
}
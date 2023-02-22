using UnityEngine;
using UnityEngine.UI;

namespace Wallpaper.UI {

    [RequireComponent(typeof(Button))]
    public class PreviewButton : MonoBehaviour {

        private Button m_Button;
        private bool m_IsPressed;

        private void Awake() {
            m_Button = GetComponent<Button>();
            m_IsPressed = false;
            m_Button.onClick.AddListener(OnPress);
        }

        private void OnDoubleTap() {
            ApplicationEvents.InvokeOnEndPreview();
            ApplicationEvents.OnDoubleTap -= OnDoubleTap;
            m_IsPressed = false;
        }

        private void OnPress() {
            if (m_IsPressed)
                return;

            ApplicationEvents.InvokeOnBeginPreview();
            ApplicationEvents.OnDoubleTap += OnDoubleTap;
            m_IsPressed = !m_IsPressed;
        }
    }
}
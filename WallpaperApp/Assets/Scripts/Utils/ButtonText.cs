using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Wallpaper.Utils {

    [RequireComponent(typeof(Button))]
    public class ButtonText : MonoBehaviour {

        [SerializeField] private TextMeshProUGUI m_ButtonText;
        [SerializeField] private string m_OffButtonText;
        [SerializeField] private string m_OnButtonText;

        private Button m_Button;
        private bool m_State = false;

        private void Awake() {
            m_Button = GetComponent<Button>();
            m_Button.onClick.AddListener(OnClick);
            m_ButtonText.text = m_OffButtonText;
        }

        private void OnClick() {
            m_State = !m_State;

            UpdateState();
        }

        private void UpdateState() {
            if (m_State)
                m_ButtonText.text = m_OnButtonText;
            else
                m_ButtonText.text = m_OffButtonText;
        }

        public void SetState(bool state) {
            m_State = state;

            UpdateState();
        }
    }
}
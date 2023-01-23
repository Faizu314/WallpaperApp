using TMPro;
using UnityEngine;

namespace Wallpaper.Utils {

    [RequireComponent(typeof(TMP_InputField))]
    public class RestrictedInputField : MonoBehaviour {

        private TMP_InputField m_InputField;
        private string m_PrevValidValue;

        private void Awake() {
            m_InputField = GetComponent<TMP_InputField>();
            m_PrevValidValue = m_InputField.text;
        }

        public void OnValueChanged(string value) {
            if (!string.IsNullOrEmpty(value)) {
                m_PrevValidValue = value;
                return;
            }

            m_InputField.text = m_PrevValidValue;
            m_PrevValidValue = value;
        }

    }
}
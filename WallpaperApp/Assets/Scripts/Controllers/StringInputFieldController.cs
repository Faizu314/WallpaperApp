using System;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

namespace Wallpaper.Controllers {

    [AddComponentMenu("Wallpaper/Controllers/String Input Field Controller")]
    public class StringInputFieldController : BaseController {

        [SerializeField] private TextMeshProUGUI m_PromptText;
        [SerializeField] private TMP_InputField m_InputText;
        [SerializeField] private Button m_SubmitButton;

        private Action<string> m_OnInputReceived;

        private void Awake() {
            m_SubmitButton.onClick.RemoveAllListeners();
            m_SubmitButton.onClick.AddListener(OnSubmit);
        }

        public void GetUserInput(string promptText, Action<string> onInputReceived) {
            m_OnInputReceived = onInputReceived;
            m_PromptText.SetText(promptText);
        }

        public void OnSubmit() {
            m_OnInputReceived.Invoke(m_InputText.text);
        }

        protected override void OnSceneLoaded() {

        }

        protected override void OnSceneUnLoaded() {

        }
    }
}
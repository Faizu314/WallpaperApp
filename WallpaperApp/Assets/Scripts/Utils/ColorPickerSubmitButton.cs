using UnityEngine;
using UnityEngine.UI;

namespace Wallpaper.Utils {

    [RequireComponent(typeof(Button))]
    public class ColorPickerSubmitButton : MonoBehaviour {

        [SerializeField] private FlexibleColorPicker m_FlexibleColorPicker;

        private void Awake() {
            GetComponent<Button>().onClick.AddListener(OnClick);
        }

        private void OnClick() {
            m_FlexibleColorPicker.onColorChange.RemoveAllListeners();
            m_FlexibleColorPicker.gameObject.SetActive(false);
        }
    }
}
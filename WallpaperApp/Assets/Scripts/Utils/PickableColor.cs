using System;
using UnityEngine;
using UnityEngine.UI;

namespace Wallpaper.Utils {

    [RequireComponent(typeof(Button), typeof(Image))]
    public class PickableColor : MonoBehaviour {

        private FlexibleColorPicker m_ColorPickerUI;
        private Image m_Image;
        private Action<Color> m_OnColorChange;

        private void Awake() {
            GetComponent<Button>().onClick.AddListener(OnClick);
            m_Image = GetComponent<Image>();
        }

        public void Initialize(FlexibleColorPicker flexibleColorPicker, Action<Color> onColorChange, Color color) {
            m_ColorPickerUI = flexibleColorPicker;
            m_OnColorChange = onColorChange;
            m_Image.color = color;
        }

        private void OnClick() {
            m_ColorPickerUI.gameObject.SetActive(true);
            m_ColorPickerUI.onColorChange.AddListener(
                (color) => {
                    m_OnColorChange.Invoke(color);
                    m_Image.color = color;
                });
        }
    }
}
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Wallpaper.UI {

    [AddComponentMenu("Wallpaper/UI/Wallpaper Icon")]
    public class WallpaperIcon : MonoBehaviour {

        [SerializeField] private TextMeshProUGUI m_WallpaperName;
        [SerializeField] private Button m_EditButton;
        [SerializeField] private Button m_SetButton;

        private Wallpaper m_Wallpaper;

        private void Awake() {
            if (m_EditButton == null)
                Debug.Log(m_EditButton);
            m_EditButton.onClick.AddListener(OnEditButtonClick);
            m_SetButton.onClick.AddListener(OnSetButtonClick);
        }

        private void OnEditButtonClick() {
            ApplicationEvents.InvokeOnWallpaperEdit(m_Wallpaper);
        }

        private void OnSetButtonClick() {
            AppManager.Instance.SetCurrentWallpaper(m_Wallpaper.name);
        }

        public void Initialize(Wallpaper wallpaper) {
            m_Wallpaper = wallpaper;

            m_WallpaperName.text = m_Wallpaper.name;
        }
    }
}
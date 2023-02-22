using UnityEngine;
using UnityEngine.UI;

namespace Wallpaper.Editor {

    [RequireComponent(typeof(Button), typeof(WallpaperEffectBase))]
    public class EffectIconButton : MonoBehaviour {

        [SerializeField] private EffectPreviewer m_EffectPreviewer;

        private WallpaperEffectBase m_Effect;
        private Button m_Button;

        private void Awake() {
            m_Effect = GetComponent<WallpaperEffectBase>();
            m_Button = GetComponent<Button>();
            m_Button.onClick.AddListener(() => m_EffectPreviewer.OnEffectSelected(m_Effect));
        }
    }
}
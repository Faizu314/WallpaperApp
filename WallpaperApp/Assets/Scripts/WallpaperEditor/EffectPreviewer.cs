using UnityEngine;

namespace Wallpaper.Editor {

    public class EffectPreviewer : MonoBehaviour {

        [SerializeField] private Transform m_PreviewPanel;

        public WallpaperEffectBase ActiveEffect { private set; get; }

        public void OnEffectSelected(WallpaperEffectBase effect) {
            ActiveEffect?.DestroyEffectInstance();

            ActiveEffect = effect;
            var activeEffectObj = ActiveEffect.CreateEffectInstance();

            PreviewEffectObject(activeEffectObj);
        }

        private void PreviewEffectObject(GameObject effect) {
            effect.transform.SetParent(m_PreviewPanel, false);
            effect.transform.localPosition = Vector3.back;
        }
    }
}
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using Wallpaper.UI;

namespace Wallpaper.Utils {

    public class EffectsHandler : MonoBehaviour {

        [SerializeField] private Transform m_EffectInstanceParent;
        [SerializeField] private Transform m_FloatsPanel;
        [SerializeField] private Transform m_ColorsPanel;

        [SerializeField] private GameObject m_FloatPropertyPrefab;
        [SerializeField] private GameObject m_ColorPropertyPrefab;

        [SerializeField] private FlexibleColorPicker m_FlexibleColorPicker;

        private AnchorAdapter m_FloatsAnchor;
        private AnchorAdapter m_ColorsAnchor;
        private Transform m_FloatsContent;
        private Transform m_ColorsContent;

        private void Awake() {
            m_FloatsAnchor = m_FloatsPanel.GetComponentInChildren<AnchorAdapter>();
            m_ColorsAnchor = m_ColorsPanel.GetComponentInChildren<AnchorAdapter>();
            m_FloatsContent = m_FloatsPanel.GetChild(0).GetChild(0).GetChild(0);
            m_ColorsContent = m_ColorsPanel.GetChild(0).GetChild(0).GetChild(0);
        }

        public void AddEffectToWallpaper(WallpaperEffectBase effect, Wallpaper wallpaper) {
            wallpaper.Effect = effect;
            LoadEffect(effect);
        }

        public void RemoveEffectFromWallpaper(Wallpaper wallpaper) {
            if (wallpaper.Effect != null)
                wallpaper.Effect.DestroyEffectInstance();
            wallpaper.Effect = null;
            UnloadEffectSettings();
        }

        private void UnloadEffectSettings() {
            Util.DestroyAllChildren(m_FloatsContent);
            Util.DestroyAllChildren(m_ColorsContent);
        }

        private void LoadEffect(WallpaperEffectBase effect) {
            SpawnEffect(effect);
            LoadEffectSettings(effect);
        }

        private void SpawnEffect(WallpaperEffectBase effect) {
            effect.DestroyEffectInstance();
            var effectInstance = effect.CreateEffectInstance();
            effectInstance.transform.SetParent(m_EffectInstanceParent, false);
            effectInstance.transform.SetAsLastSibling();
            effectInstance.transform.localPosition = Vector3.back;
        }

        private void LoadEffectSettings(WallpaperEffectBase effect) {
            LoadEffectFloatSettings(effect);
            LoadEffectColorSettings(effect);
        }

        private void LoadEffectFloatSettings(WallpaperEffectBase effect) {
            for (int i = 0; i < effect.FloatPropertiesCount; i++) {
                var propertyObj = Instantiate(m_FloatPropertyPrefab);
                propertyObj.transform.SetParent(m_FloatsContent, false);
                propertyObj.GetComponent<AnchorSizeToRect>().AttachTo(m_FloatsAnchor);
                propertyObj.transform.GetChild(0).GetComponent<TextMeshProUGUI>().text = effect.GetFloatPropertyName(i);
                var slider = propertyObj.transform.GetChild(1).GetComponent<Slider>();
                slider.value = effect.GetFloatProperty(i);
                int index = i;
                slider.onValueChanged.AddListener((x) => effect.SetFloatProperty(index, x));
            }
        }

        private void LoadEffectColorSettings(WallpaperEffectBase effect) {
            for (int i = 0; i < effect.ColorPropertiesCount; i++) {
                var propertyObj = Instantiate(m_ColorPropertyPrefab);
                propertyObj.transform.SetParent(m_ColorsContent, false);
                propertyObj.GetComponent<AnchorSizeToRect>().AttachTo(m_ColorsAnchor);
                propertyObj.transform.GetChild(0).GetComponent<TextMeshProUGUI>().text = effect.GetColorPropertyName(i);
                var colorPicker = propertyObj.transform.GetChild(1).GetComponent<PickableColor>();
                int index = i;
                colorPicker.Initialize(m_FlexibleColorPicker, (color) => effect.SetColorProperty(index, color), effect.GetColorProperty(i));
            }
        }

    }
}
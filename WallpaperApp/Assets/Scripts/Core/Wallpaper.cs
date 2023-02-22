using System.Collections.Generic;
using UnityEngine;

namespace Wallpaper {

    public class Wallpaper {
        public string Version;
        public string Name;
        public string Author;
        public List<WallpaperImage> Images;
        public WallpaperEffectBase Effect;
    }

    public class WallpaperImage {
        public byte[] Data;
        public int Width;
        public int Height;
        public Vector2 Scale;
        public Vector2 Position;
    }

    public abstract class WallpaperEffectBase : MonoBehaviour {

        [SerializeField] private int EffectID;
        [SerializeField] private List<string> m_FloatPropertyNames;
        [SerializeField] private List<string> m_ColorPropertyNames;

        protected List<float> m_FloatProperties;
        public int FloatPropertiesCount => m_FloatProperties.Count;

        protected List<Color> m_ColorProperties;
        public int ColorPropertiesCount => m_ColorProperties.Count;

        private GameObject m_EffectPrefab;
        protected GameObject m_EffectInstance;

        protected virtual void Awake() {
            SetPropertiesToDefault();
            m_EffectPrefab = Refs.Instance.EffectsRepo[EffectID];
        }

        public GameObject CreateEffectInstance() {
            m_EffectInstance = Instantiate(m_EffectPrefab);
            OnEffectInstanceCreated();
            ApplyAllProperties();
            return m_EffectInstance;
        }

        public void DestroyEffectInstance() {
            if (m_EffectInstance == null)
                return;

            Destroy(m_EffectInstance);
            OnEffectInstanceDestroyed();
        }
        public void SetFloatProperty(int index, float value) {
            if (index >= m_FloatProperties.Count)
                return;
            m_FloatProperties[index] = value;
            ApplyFloatProperty(index);
        }

        public void SetColorProperty(int index, Color value) {
            if (index >= m_ColorProperties.Count)
                return;
            m_ColorProperties[index] = value;
            ApplyColorProperty(index);
        }

        public string GetFloatPropertyName(int index) {
            if (index < m_FloatProperties.Count)
                return m_FloatPropertyNames[index];
            return null;
        }
        public float GetFloatProperty(int index) {
            if (index < m_FloatProperties.Count)
                return m_FloatProperties[index];
            return -1f;
        }
        public string GetColorPropertyName(int index) {
            if (index < m_ColorProperties.Count)
                return m_ColorPropertyNames[index];
            return null;
        }

        public Color GetColorProperty(int index) {
            if (index < m_ColorProperties.Count)
                return m_ColorProperties[index];
            return Color.black;
        }

        protected virtual void OnEffectInstanceCreated() { }
        protected virtual void OnEffectInstanceDestroyed() { }

        protected abstract void SetPropertiesToDefault();
        protected abstract void ApplyAllProperties();
        protected abstract void ApplyFloatProperty(int index);
        protected abstract void ApplyColorProperty(int index);
    }
}
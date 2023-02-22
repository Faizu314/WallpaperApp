using UnityEngine;

namespace Wallpaper.Effects {

    public class TestEffect : WallpaperEffectBase {

        private ParticleSystem m_ParticleSystem;

        protected override void OnEffectInstanceCreated() {
            base.OnEffectInstanceCreated();
            m_ParticleSystem = m_EffectInstance.GetComponent<ParticleSystem>();
        }

        protected override void OnEffectInstanceDestroyed() {
            base.OnEffectInstanceDestroyed();
            m_ParticleSystem = null;
        }

        protected override void ApplyAllProperties() {
            ApplyFloatProperty(0);
            ApplyColorProperty(0);
        }

        protected override void ApplyColorProperty(int index) {
            var main = m_ParticleSystem.main;
            main.startColor = m_ColorProperties[index];
        }

        protected override void ApplyFloatProperty(int index) {
            var main = m_ParticleSystem.main;
            main.startSpeed = m_FloatProperties[index];
        }

        protected override void SetPropertiesToDefault() {
            m_FloatProperties = new();
            m_ColorProperties = new();

            m_FloatProperties.Add(0.5f);
            m_ColorProperties.Add(Color.white);
        }
    }
}
using System.Collections;
using UnityEngine;
using UnityEngine.UI;

namespace Wallpaper.UI {

    [RequireComponent(typeof(Image))]
    public class ForceExpandImage : MonoBehaviour {

        private RectTransform m_Transform;
        private Image m_Image;

        private void Awake() {
            StartCoroutine(nameof(SetupPanelAfterUIUpdate));
        }

        private IEnumerator SetupPanelAfterUIUpdate() {
            yield return new WaitForEndOfFrame();

            SetupPanel();
        }

        private void SetupPanel() {
            m_Transform = GetComponent<RectTransform>();
            m_Image = GetComponent<Image>();
            ExpandImage();
        }

        private void ExpandImage() {
            float imageAspectRatio = (float)(m_Image.sprite.texture.height / (float)m_Image.sprite.texture.width);
            float rectAspectRatio = (float)(m_Transform.rect.height / (float)m_Transform.rect.width);
            
            float scale = Mathf.Max(imageAspectRatio, rectAspectRatio) / Mathf.Min(rectAspectRatio, imageAspectRatio);
            scale = Mathf.Max(scale, 1f);

            m_Transform.localScale = Vector3.one * scale;
        }
    }
}
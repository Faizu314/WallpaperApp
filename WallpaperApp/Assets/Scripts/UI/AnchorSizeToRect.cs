using UnityEngine;
using UnityEngine.EventSystems;
using Wallpaper.Utils;

namespace Wallpaper.UI {

    [RequireComponent(typeof(RectTransform))]
    public class AnchorSizeToRect : UIBehaviour {

        [SerializeField] private AnchorAdapter m_TransformToAnchorTo;

        [SerializeField] private bool m_AnchorWidth;

        [Tooltip("width of this rect will be this percentage of the width of the transform this is anchoring to.")]
        [SerializeField, Range(0f, 1f)] private float m_Width;

        [SerializeField] private bool m_AnchorHeight;

        [Tooltip("height of this rect will be this percentage of the height of the transform this is anchoring to.")]
        [SerializeField, Range(0f, 1f)] private float m_Height;

        private RectTransform m_Transform;
        private bool m_HasInitialized = false;

        protected override void Awake() {
            base.Awake();
            if (m_TransformToAnchorTo != null)
                Initialize();
        }

        private void Initialize() {
            m_Transform = GetComponent<RectTransform>();
            m_TransformToAnchorTo.OnRectSizeChange.AddListener(SetSize);
            m_HasInitialized = true;
        }

        protected override void OnRectTransformDimensionsChange() {
            base.OnRectTransformDimensionsChange();
            if (m_HasInitialized)
                SetSize();
        }

        public void AttachTo(AnchorAdapter rectTransform) {
            m_TransformToAnchorTo = rectTransform;
            Initialize();
        }

        public void SetSize() {
            if (m_Transform == null)
                Initialize();
            Vector2 size = m_Transform.sizeDelta;

            if (m_AnchorWidth) {
                float width = Util.GetPanelPixelWidthInRectSpace(m_TransformToAnchorTo.Transform);
                width *= m_Width;
                size.x = width;
            }
            if (m_AnchorHeight) {
                float height = Util.GetPanelPixelHeightInRectSpace(m_TransformToAnchorTo.Transform);
                height *= m_Height;
                size.y = height;
            }

            m_Transform.sizeDelta = size;
        }
    }
}
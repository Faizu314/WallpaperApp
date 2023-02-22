using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;

namespace Wallpaper.UI {

    [RequireComponent(typeof(RectTransform))]
    public class AnchorAdapter : UIBehaviour {

        public RectTransform Transform;
        [Space(5)]
        public UnityEvent OnRectSizeChange;

        protected override void OnRectTransformDimensionsChange() {
            OnRectSizeChange?.Invoke();
        }
    }
}
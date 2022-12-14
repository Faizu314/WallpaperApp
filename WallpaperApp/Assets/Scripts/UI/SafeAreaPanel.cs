using UnityEngine;

namespace Wallpaper.UI {

    [AddComponentMenu("Wallpaper/UI/Safe Area Panel")]
    [RequireComponent(typeof(RectTransform))]
    public class SafeAreaPanel : MonoBehaviour {

        private void Start() {
            CalculateSafeArea();
        }

        public void CalculateSafeArea() {
            Rect safeArea = Screen.safeArea;
            RectTransform mTransform = (RectTransform)transform;

            Vector2 anchorMin = new(safeArea.min.x / Screen.width, safeArea.min.y / Screen.height);
            Vector2 anchorMax = new(safeArea.max.x / Screen.width, safeArea.max.y / Screen.height);

            mTransform.anchorMin = anchorMin;
            mTransform.anchorMax = anchorMax;
            mTransform.offsetMin = Vector2.zero;
            mTransform.offsetMax = Vector2.zero;
            mTransform.pivot = new(0.5f, 0.5f);
        }
    }
}
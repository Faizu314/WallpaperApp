using System.Collections;
using UnityEngine;
using UnityEngine.UI;

namespace Wallpaper.UI {

    [RequireComponent(typeof(GridLayoutGroup))]
    public class ResponsiveCellSizeSetter : MonoBehaviour {

        private GridLayoutGroup m_GridLayout;

        private void Awake() {
            m_GridLayout = GetComponent<GridLayoutGroup>();

            StartCoroutine(nameof(SetCellSizeAfterUIUpdate));
        }

        private IEnumerator SetCellSizeAfterUIUpdate() {
            yield return null;
            yield return new WaitForEndOfFrame();

            m_GridLayout.cellSize = CalculateCellSize();
        }

        private Vector2 CalculateCellSize() {
            Vector2 cellSize = Vector2.one;
            cellSize.x = Screen.width / 3f;
            cellSize.y = cellSize.x * (float)(Screen.height / (float)Screen.width);
            return cellSize;
        }
    }
}
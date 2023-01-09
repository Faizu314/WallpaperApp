using System.IO;
using UnityEngine;

namespace Wallpaper.Utils {

    public static class Util {

        public static Texture2D ToTexture2D(byte[] imageData, int imageWidth, int imageHeight) {
            Texture2D texture = new(imageWidth, imageHeight);

            texture.SetPixelData(imageData, 0);
            texture.Apply();

            return texture;
        }

        public static Mesh GenerateQuadMesh(float width, float height) {
            Mesh mesh = new();

            Vector3[] vertices = new Vector3[4];
            vertices[0] = new(-width / 2f, -height / 2f);
            vertices[1] = new(-width / 2f, height / 2f);
            vertices[2] = new(width / 2f, height / 2f);
            vertices[3] = new(width / 2f, -height / 2f);

            int[] triangles = new int[6];
            triangles[0] = 0;
            triangles[1] = 1;
            triangles[2] = 3;
            triangles[3] = 3;
            triangles[4] = 1;
            triangles[5] = 2;

            Vector2[] uvs = new Vector2[4];
            uvs[0] = new(0f, 0f);
            uvs[1] = new(0f, 1f);
            uvs[2] = new(1f, 1f);
            uvs[3] = new(1f, 0f);

            mesh.vertices = vertices;
            mesh.uv = uvs;
            mesh.triangles = triangles;
            mesh.RecalculateNormals();

            return mesh;
        }

        public static Sprite ImageToSprite(Texture2D texture) {
            Rect rect = new(Vector2.zero, new(texture.width, texture.height));
            return Sprite.Create(texture, rect, Vector2.one / 2f);
        }

        public static Texture2D ToTexture2D(RenderTexture renderTexture) {
            Texture2D texture = new(Screen.width, Screen.height, TextureFormat.RGB24, false);
            RenderTexture.active = renderTexture;
            texture.ReadPixels(new Rect(0, 0, renderTexture.width, renderTexture.height), 0, 0);
            texture.Apply();
            return texture;
        }

        public static void SetRectTransformPivot(RectTransform rectTransform, Vector2 pivot) {
            Vector3 deltaPosition = rectTransform.pivot - pivot;    // get change in pivot
            deltaPosition.Scale(rectTransform.rect.size);           // apply sizing
            deltaPosition.Scale(rectTransform.localScale);          // apply scaling
            deltaPosition = rectTransform.rotation * deltaPosition; // apply rotation

            rectTransform.pivot = pivot;                            // change the pivot
            rectTransform.localPosition -= deltaPosition;           // reverse the position change
        }

        /// <summary>
        /// Correction is the translation required to get the rect back inside screen.
        /// </summary>
        public static bool IsRectInsideScreen(RectTransform rectTransform, Camera camera, out Vector2 correction) {
            Vector3 pivotWorldPos = rectTransform.TransformPoint(rectTransform.position);
            Vector2 pivotScreenPos = camera.WorldToScreenPoint(pivotWorldPos);
            Vector3[] cornersWorldPos = new Vector3[4];
            rectTransform.GetWorldCorners(cornersWorldPos);
            Vector2[] cornersScreenPos = new Vector2[4];
            for (int i = 0; i < 4; i++)
                cornersScreenPos[i] = camera.WorldToScreenPoint(cornersWorldPos[i]);

            float pivotToScreenLeftBound = -pivotScreenPos.x;
            float pivotToScreenRightBound = camera.pixelWidth + pivotToScreenLeftBound;
            float pivotToScreenBottomBound = -pivotScreenPos.y;
            float pivotToScreenTopBound = camera.pixelHeight + pivotToScreenBottomBound;

            float pivotToPanelLeftBound = cornersScreenPos[0].x - pivotScreenPos.x;
            float pivotToPanelRightBound = cornersScreenPos[3].x - pivotScreenPos.x;
            float pivotToPanelBottomBound = cornersScreenPos[0].y - pivotScreenPos.y;
            float pivotToPanelTopBound = cornersScreenPos[1].y - pivotScreenPos.y;

            correction = Vector2.zero;

            if (pivotToPanelLeftBound > pivotToScreenLeftBound)
                correction.x -= pivotToPanelLeftBound - pivotToScreenLeftBound;
            if (pivotToPanelRightBound < pivotToScreenRightBound)
                correction.x += pivotToScreenRightBound - pivotToPanelRightBound;
            if (pivotToPanelBottomBound > pivotToScreenBottomBound)
                correction.y -= pivotToPanelBottomBound - pivotToScreenBottomBound;
            if (pivotToPanelTopBound < pivotToScreenTopBound)
                correction.y += pivotToScreenTopBound - pivotToPanelTopBound;

            return correction == Vector2.zero;
        }

        public static bool IsRectInsideScreenAfterScaling_(RectTransform rectTransform, Camera camera, float scaleFactor) {
            Vector3 pivotWorldPos = rectTransform.TransformPoint(rectTransform.position);
            Vector2 pivotScreenPos = camera.WorldToScreenPoint(pivotWorldPos);
            Vector3[] cornersWorldPos = new Vector3[4];
            rectTransform.GetWorldCorners(cornersWorldPos);
            Vector2[] cornersScreenPos = new Vector2[4];
            for (int i = 0; i < 4; i++)
                cornersScreenPos[i] = camera.WorldToScreenPoint(cornersWorldPos[i]);

            float pivotToScreenLeftBound = -pivotScreenPos.x;
            float pivotToScreenRightBound = camera.pixelWidth + pivotToScreenLeftBound;
            float pivotToScreenBottomBound = -pivotScreenPos.y;
            float pivotToScreenTopBound = camera.pixelHeight + pivotToScreenBottomBound;

            float pivotToPanelLeftBound = (cornersScreenPos[0].x - pivotScreenPos.x) * scaleFactor;
            float pivotToPanelRightBound = (cornersScreenPos[3].x - pivotScreenPos.x) * scaleFactor;
            float pivotToPanelBottomBound = (cornersScreenPos[0].y - pivotScreenPos.y) * scaleFactor;
            float pivotToPanelTopBound = (cornersScreenPos[1].y - pivotScreenPos.y) * scaleFactor;

            if (pivotToPanelLeftBound > pivotToScreenLeftBound)
                return false;
            if (pivotToPanelRightBound < pivotToScreenRightBound)
                return false;
            if (pivotToPanelBottomBound > pivotToScreenBottomBound)
                return false;
            if (pivotToPanelTopBound < pivotToScreenTopBound)
                return false;

            return true;
        }

        public static bool IsRectInsideScreenAfterScaling(RectTransform rectTransform, Camera camera, float scaleFactor) {
            Vector3[] cornersWorldPos = new Vector3[4];
            rectTransform.GetWorldCorners(cornersWorldPos);
            Vector2[] cornersScreenPos = new Vector2[4];

            cornersScreenPos[0] = camera.WorldToScreenPoint(cornersWorldPos[0]);  //bottom left
            cornersScreenPos[2] = camera.WorldToScreenPoint(cornersWorldPos[2]);  //top right

            float screenWidth = camera.pixelWidth;
            float screenHeight = camera.pixelHeight;

            float panelWidth = Mathf.Abs(cornersScreenPos[0].x - cornersScreenPos[2].x) * scaleFactor;
            float panelHeight = Mathf.Abs(cornersScreenPos[0].y - cornersScreenPos[2].y) * scaleFactor;

            return panelWidth >= screenWidth && panelHeight >= screenHeight;
        }


        public static float GetPanelPixelWidth(RectTransform rectTransform, Camera camera) {
            Vector3[] cornersWorldPos = new Vector3[4];
            rectTransform.GetWorldCorners(cornersWorldPos);
            Vector2[] cornersScreenPos = new Vector2[4];
            for (int i = 0; i < 4; i++)
                cornersScreenPos[i] = camera.WorldToScreenPoint(cornersWorldPos[i]);

            return cornersScreenPos[3].x - cornersScreenPos[0].x;
        }

        public static void SaveByteArrayInAndroid(string name, byte[] array) {
            Debug.Log(Application.dataPath + "/" + name + ".txt");

            StreamWriter writer = new(Application.dataPath + "/" + name + ".txt");

            foreach (byte b in array)
                writer.WriteLine(b);
        }

    }
}
using Phezu.Util;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Wallpaper.Utils {

    public static class Util {

        public static Texture2D ToTexture2D(WallpaperImage wallpaperImage) {
            byte[] imageData = wallpaperImage.Data;
            int imageWidth = wallpaperImage.Width;
            int imageHeight = wallpaperImage.Height;

            Texture2D texture = new(imageWidth, imageHeight);

            texture.SetPixelData(imageData, 0);
            texture.Apply();

            return texture;
        }

        public static Texture2D ToTexture2D(byte[] imageData, int imageWidth, int imageHeight) {
            Texture2D texture = new(imageWidth, imageHeight);

            texture.SetPixelData(imageData, 0);
            texture.Apply();

            return texture;
        }

        public static WallpaperImage ToWallpaperImage(byte[] imageData, int imageWidth, int imageHeight) {
            return new() {
                Data = imageData,
                Width = imageWidth,
                Height = imageHeight
            };
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

        public static Sprite WallpaperImageToSprite(WallpaperImage image) {
            return ImageToSprite(ToTexture2D(image));
        }

        public static Texture2D ToTexture2D(RenderTexture renderTexture) {
            Texture2D texture = new(Screen.width, Screen.height, TextureFormat.RGB24, false);
            RenderTexture.active = renderTexture;
            texture.ReadPixels(new Rect(0, 0, renderTexture.width, renderTexture.height), 0, 0);
            texture.Apply();
            return texture;
        }

        public static void SetRectTransformPivot(RectTransform rectTransform, Vector2 pivot) {
            Vector3 deltaPosition = pivot - rectTransform.pivot;
            deltaPosition.Scale(rectTransform.rect.size);
            Vector3 worldPosition = rectTransform.position + rectTransform.TransformVector(deltaPosition);

            rectTransform.pivot = pivot;
            rectTransform.position = worldPosition;
        }

        /// <summary>
        /// Correction is the translation required to get the rect back inside screen.
        /// </summary>
        public static bool DoesRectFitThanScreen(RectTransform transform, Camera camera, out Vector2 correction) {
            Vector3[] panelCornersWorldPos = new Vector3[4];
            transform.GetWorldCorners(panelCornersWorldPos);
            Vector2[] panelCornersScreenPos = new Vector2[4];
            for (int i = 0; i < 4; i++)
                panelCornersScreenPos[i] = camera.WorldToScreenPoint(panelCornersWorldPos[i]);

            Vector2 bottomLeft = panelCornersScreenPos[0];
            Vector2 topRight = panelCornersScreenPos[2];
            float cameraWidth = camera.pixelWidth;
            float cameraHeight = camera.pixelHeight;

            correction = Vector2.zero;

            if (IsRectHeightLargerThanScreen(transform, camera)) {
                if (bottomLeft.y > 0)
                    correction.y -= bottomLeft.y;
                if (topRight.y < cameraHeight)
                    correction.y += cameraHeight - topRight.y;
            }
            else {
                if (bottomLeft.y < 0)
                    correction.y -= bottomLeft.y;
                if (topRight.y > cameraHeight)
                    correction.y -= topRight.y - cameraHeight;
            }

            if (IsRectWidthLargerThanScreen(transform, camera)) {
                if (bottomLeft.x > 0)
                    correction.x -= bottomLeft.x;
                if (topRight.x < cameraWidth)
                    correction.x += cameraWidth - topRight.x;
            }
            else {
                if (bottomLeft.x < 0)
                    correction.x -= bottomLeft.x;
                if (topRight.x > cameraWidth)
                    correction.x -= topRight.x - cameraWidth;
            }

            return correction == Vector2.zero;
        }

        public static bool IsRectHeightLargerThanScreen(RectTransform transform, Camera camera) {
            Vector3[] cornersWorldPos = new Vector3[4];
            transform.GetWorldCorners(cornersWorldPos);

            Vector2 bottomLeft = camera.WorldToScreenPoint(cornersWorldPos[0]);
            Vector2 topRight = camera.WorldToScreenPoint(cornersWorldPos[2]);

            return Mathf.Abs(topRight.y - bottomLeft.y) > camera.pixelHeight;
        }

        public static bool IsRectHeightLargerThanScreenAfterScaling(RectTransform transform, Camera camera, float scaleFactor) {
            Vector3[] cornersWorldPos = new Vector3[4];
            transform.GetWorldCorners(cornersWorldPos);

            Vector2 bottomLeft = camera.WorldToScreenPoint(cornersWorldPos[0]);
            Vector2 topRight = camera.WorldToScreenPoint(cornersWorldPos[2]);

            return Mathf.Abs(topRight.y - bottomLeft.y) * scaleFactor > camera.pixelHeight;
        }

        public static bool IsRectWidthLargerThanScreen(RectTransform transform, Camera camera) {
            Vector3[] cornersWorldPos = new Vector3[4];
            transform.GetWorldCorners(cornersWorldPos);

            Vector2 bottomLeft = camera.WorldToScreenPoint(cornersWorldPos[0]);
            Vector2 topRight = camera.WorldToScreenPoint(cornersWorldPos[2]);

            return Mathf.Abs(topRight.x - bottomLeft.x) > camera.pixelWidth;
        }

        public static bool IsRectWidthLargerThanScreenAfterScaling(RectTransform transform, Camera camera, float scaleFactor) {
            Vector3[] cornersWorldPos = new Vector3[4];
            transform.GetWorldCorners(cornersWorldPos);

            Vector2 bottomLeft = camera.WorldToScreenPoint(cornersWorldPos[0]);
            Vector2 topRight = camera.WorldToScreenPoint(cornersWorldPos[2]);

            return Mathf.Abs(topRight.x - bottomLeft.x) * scaleFactor > camera.pixelWidth;
        }

        public static bool DoesRectFitScreenAfterScaling(RectTransform transform, Camera camera, float scaleFactor) {
            Vector3[] cornersWorldPos = new Vector3[4];
            transform.GetWorldCorners(cornersWorldPos);

            Vector2 bottomLeftScreenPos = camera.WorldToScreenPoint(cornersWorldPos[0]);
            Vector2 topRightScreenPos = camera.WorldToScreenPoint(cornersWorldPos[2]);

            float screenWidth = camera.pixelWidth;
            float screenHeight = camera.pixelHeight;

            float panelWidth = Mathf.Abs(bottomLeftScreenPos.x - topRightScreenPos.x) * scaleFactor;
            float panelHeight = Mathf.Abs(bottomLeftScreenPos.y - topRightScreenPos.y) * scaleFactor;

            return panelWidth >= screenWidth && panelHeight >= screenHeight;
        }

        public static float GetPanelPixelWidthInRectSpace(RectTransform transform) {
            Vector3[] cornersPos = new Vector3[4];
            transform.GetLocalCorners(cornersPos);

            return cornersPos[3].x - cornersPos[0].x;
        }


        public static bool CanvasRaycast(PointerEventData pointerEventData, GraphicRaycaster raycaster, Vector2 position, LayerMask layer, out List<RaycastResult> results) {
            pointerEventData.position = position;

            results = new();

            raycaster.Raycast(pointerEventData, results);

            if (results.Count == 0)
                return false;
            if (!FMath.IsInLayerMask(layer, results[0].gameObject.layer))
                return false;

            return true;
        }

    }
}
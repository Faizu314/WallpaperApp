using UnityEngine;

namespace Wallpaper {

    public static class ApplicationEvents {

        public delegate void Notification();

        public delegate void WallpaperNotification(Wallpaper wallpaper);

        public delegate void AndroidImageReceived(byte[] imageData, int width, int height);

        public delegate void TouchPinch(Vector2Int pivot, float zoomMagnitude);

        public delegate void Tap(Vector2 screenPos);

        
        public static event WallpaperNotification OnWallpaperEdit;
        public static event WallpaperNotification OnWallpaperPreview;

        public static event AndroidImageReceived OnAndroidImageReceived;

        public static event TouchPinch OnTouchPinch;
        public static event Tap OnTap;
        public static event Notification OnSecondTouchDown;
        public static event Notification OnSecondTouchUp;

        public static void InvokeOnWallpaperEdit(Wallpaper wallpaper) {
            OnWallpaperEdit?.Invoke(wallpaper);
        }

        public static void InvokeOnWallpaperPreview(Wallpaper wallpaper) {
            OnWallpaperPreview?.Invoke(wallpaper);
        }

        public static void InvokeOnAndroidImageReceived(byte[] imageData, int width, int height) {
            OnAndroidImageReceived?.Invoke(imageData, width, height);
        }
        
        /// <summary>
        /// Zoom Magnitude is how much the screen space should be stretched or compressed. 1 means do nothing.
        /// </summary>
        /// <param name="position1">Position of finger one.</param>
        /// <param name="zoomMagnitude"></param>
        public static void InvokeOnTouchPinch(Vector2Int pivot, float zoomMagnitude) {
            OnTouchPinch?.Invoke(pivot, zoomMagnitude);
        }

        public static void InvokeOnTap(Vector2 screenPos) {
            OnTap?.Invoke(screenPos);
        }

        public static void InvokeOnSecondTouchDown() {
            OnSecondTouchDown?.Invoke();
        }

        public static void InvokeOnSecondTouchUp() {
            OnSecondTouchUp?.Invoke();
        }
    }
}
using UnityEngine;

namespace Wallpaper {

    public static class ApplicationEvents {

        public delegate void Notification();

        public delegate void WallpaperNotification(int wallpaperID);

        public delegate void AndroidImageReceived(byte[] imageData, int width, int height);

        public delegate void TouchPinch(Vector2Int pivot, float zoomMagnitude);
        
        public static event WallpaperNotification OnWallpaperSet;
        public static event WallpaperNotification OnWallpaperPreviewRequested;

        public static event AndroidImageReceived OnAndroidImageReceived;

        public static event TouchPinch OnTouchPinch;
        public static event Notification OnSecondTouchDown;
        public static event Notification OnSecondTouchUp;

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

        public static void InvokeOnSecondTouchDown() {
            OnSecondTouchDown?.Invoke();
        }

        public static void InvokeOnSecondTouchUp() {
            OnSecondTouchUp?.Invoke();
        }
    }
}
using UnityEngine;

namespace Wallpaper {

    public static class ApplicationEvents {

        public delegate void Notification();

        public delegate void WallpaperNotification(Wallpaper wallpaper);

        public delegate void RawWallpaperNotification(byte[] imageData, int width, int height);

        public delegate void TouchPinch(Vector2 pivot, float zoomMagnitude);

        public delegate void VectorNotification(Vector2 screenPos);


        public static event Notification OnAndroidBackPressed;

        public static event WallpaperNotification OnWallpaperEdit;
        public static event WallpaperNotification OnWallpaperPreview;

        public static event Notification OnBeginPreview;
        public static event Notification OnEndPreview;

        public static event RawWallpaperNotification OnAndroidImageReceived;

        public static event Notification OnDoubleTap;
        public static event TouchPinch OnTouchPinch;
        public static event TouchPinch OnTouchPinchBegin;
        public static event VectorNotification OnTap;
        public static event VectorNotification OnPrimaryTouchDown;
        public static event Notification OnPrimaryTouchUp;
        public static event Notification OnSecondTouchDown;
        public static event Notification OnSecondTouchUp;

        public static event Notification OnParallaxBegin;
        public static event VectorNotification OnParallax;
        public static event Notification OnParallaxEnd;


        public static void InvokeOnDoubleTap() {
            OnDoubleTap?.Invoke();
        }

        public static void InvokeOnAndroidBackPressed() {
            OnAndroidBackPressed?.Invoke();
        }

        public static void InvokeOnBeginPreview() {
            OnBeginPreview?.Invoke();
        }

        public static void InvokeOnEndPreview() {
            OnEndPreview?.Invoke();
        }

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
        public static void InvokeOnTouchPinch(Vector2 pivot, float zoomMagnitude) {
            OnTouchPinch?.Invoke(pivot, zoomMagnitude);
        }

        public static void InvokeOnTouchPinchBegin(Vector2 pivot, float zoomMagnitude) {
            OnTouchPinchBegin?.Invoke(pivot, zoomMagnitude);
        }

        public static void InvokeOnTap(Vector2 screenPos) {
            OnTap?.Invoke(screenPos);
        }

        public static void InvokeOnPrimaryTouchDown(Vector2 screenPos) {
            OnPrimaryTouchDown?.Invoke(screenPos);
        }

        public static void InvokeOnPrimaryTouchUp() {
            OnPrimaryTouchUp?.Invoke();
        }

        public static void InvokeOnSecondTouchDown() {
            OnSecondTouchDown?.Invoke();
        }

        public static void InvokeOnSecondTouchUp() {
            OnSecondTouchUp?.Invoke();
        }

        public static void InvokeOnParallaxBegin() {
            OnParallaxBegin?.Invoke();
        }

        public static void InvokeOnParallax(Vector2 parallaxDir) {
            OnParallax?.Invoke(parallaxDir);
        }

        public static void InvokeOnParallaxEnd() {
            OnParallaxEnd?.Invoke();
        }
    }
}
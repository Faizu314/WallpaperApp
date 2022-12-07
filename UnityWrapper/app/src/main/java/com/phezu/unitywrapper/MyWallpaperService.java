package com.phezu.unitywrapper;

import android.content.res.Configuration;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.os.Handler;
import android.os.Looper;
import android.service.wallpaper.WallpaperService;
import android.view.MotionEvent;
import android.view.Surface;
import android.view.SurfaceHolder;

import com.unity3d.player.UnityPlayer;

public class MyWallpaperService extends WallpaperService {
    private UnityPlayer unityPlayer;

    @Override
    public void onCreate() {
        super.onCreate();
        unityPlayer = new UnityPlayer(getApplicationContext());
    }

    @Override
    public void onDestroy() {
        unityPlayer.quit();
        super.onDestroy();
    }

    @Override
    public void onLowMemory ()
    {
        super.onLowMemory();
        unityPlayer.lowMemory();
    }

    @Override
    public void onTrimMemory(int level)
    {
        super.onTrimMemory(level);
        if (level == TRIM_MEMORY_RUNNING_CRITICAL)
            unityPlayer.lowMemory();
    }

    @Override
    public void onConfigurationChanged (Configuration newConfig)
    {
        super.onConfigurationChanged(newConfig);
        unityPlayer.configurationChanged(newConfig);
    }

    @Override
    public Engine onCreateEngine() {
        return new UnityEngine();
    }

    public class MyEngine extends Engine {
        private final int FRAME_DELAY_IN_MILLIS = 50;

        private Handler handler;
        private Runnable drawRunner;

        private boolean isVisible;
        private int width;
        private int height;
        private int currPosition = 0;

        @Override
        public void onCreate(SurfaceHolder surfaceHolder) {
            super.onCreate(surfaceHolder);
            Initialize();
        }

        @Override
        public void onDestroy() {
            super.onDestroy();
        }

        private void Initialize() {
            handler = new Handler(Looper.myLooper());

            drawRunner = new Runnable() {
                @Override
                public void run() {
                    update();
                }
            };
        }

        @Override
        public void onSurfaceCreated(SurfaceHolder holder) {
            super.onSurfaceCreated(holder);
            onVisibilityChanged(true);
        }

        @Override
        public void onSurfaceChanged(SurfaceHolder holder, int format, int width, int height) {
            super.onSurfaceChanged(holder, format, width, height);
            this.width = width;
            this.height = height;
        }

        @Override
        public void onSurfaceDestroyed(SurfaceHolder holder) {
            super.onSurfaceDestroyed(holder);
            onVisibilityChanged(false);
        }

        @Override
        public void onTouchEvent(MotionEvent event) {
            super.onTouchEvent(event);
            handleInput(event);
        }

        @Override
        public void onVisibilityChanged(boolean visible) {
            super.onVisibilityChanged(visible);

            isVisible = visible;

            if (isVisible)
               handler.post(drawRunner);
        }

        private void handleInput(MotionEvent event) {

        }

        private void update() {
            preRenderSetup();
            renderLoop();
            scheduleNextFrame();
        }

        private void preRenderSetup() {
            currPosition += 1;
        }

        private void renderLoop() {
            SurfaceHolder holder = getSurfaceHolder();
            Canvas canvas = holder.lockCanvas();
            if (canvas == null)
                return;

            drawBitmap(canvas);

            holder.unlockCanvasAndPost(canvas);
        }

        private void scheduleNextFrame() {
            handler.removeCallbacks(drawRunner);
            handler.postDelayed(drawRunner, FRAME_DELAY_IN_MILLIS);
        }

        private void drawBitmap(Canvas canvas) {
            canvas.drawColor(Color.GRAY);
            Paint paint = new Paint();
            paint.setColor(Color.WHITE);
            canvas.drawRect(currPosition, width / 2 - 10, currPosition + 20, width / 2 + 10, paint);
        }
    }

    public class UnityEngine extends Engine {
        private Surface surface;
        private int visibleSurfaces;

        @Override
        public void onCreate(SurfaceHolder surfaceHolder) {
            super.onCreate(surfaceHolder);
            Initialize();
        }

        private void Initialize() {
            unityPlayer = new UnityPlayer(getApplicationContext());
        }

        @Override
        public void onDestroy() {
            super.onDestroy();
        }

        @Override
        public void onSurfaceCreated(SurfaceHolder holder) {
            super.onSurfaceCreated(holder);
            surface = holder.getSurface();
            updateVisibleSurfaces(true);
        }

        @Override
        public void onSurfaceChanged(SurfaceHolder holder, int format, int width, int height) {
            super.onSurfaceChanged(holder, format, width, height);
            this.surface = holder.getSurface();
            updateUnityDisplay();
        }

        @Override
        public void onSurfaceDestroyed(SurfaceHolder holder) {
            this.surface = null;
            super.onSurfaceDestroyed(holder);
        }

        @Override
        public void onVisibilityChanged(boolean visible) {
            super.onVisibilityChanged(visible);

            updateVisibleSurfaces(visible);
            updateUnityDisplay();
        }


        private void updateVisibleSurfaces(boolean visible) {
            if (visible)
                visibleSurfaces++;
            else
                visibleSurfaces--;
            visibleSurfaces = Math.max(visibleSurfaces, 0);
        }

        private void updateUnityDisplay() {
            if (visibleSurfaces > 0)
                resumeUnityDisplay();
            else
                pauseUnityDisplay();
        }

        private void resumeUnityDisplay() {
            unityPlayer.displayChanged(0, surface);
            unityPlayer.windowFocusChanged(true);
            unityPlayer.resume();
        }

        private void pauseUnityDisplay() {
            unityPlayer.displayChanged(0, null);
            unityPlayer.windowFocusChanged(false);
            unityPlayer.pause();
        }

        @Override
        public void onTouchEvent(MotionEvent event) {
            super.onTouchEvent(event);
            handleInput(event);
        }

        private void handleInput(MotionEvent event) {
            unityPlayer.onGenericMotionEvent(event);
        }
    }
}

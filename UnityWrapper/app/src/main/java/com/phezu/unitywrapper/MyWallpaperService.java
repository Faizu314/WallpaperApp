package com.phezu.unitywrapper;

import android.content.res.Configuration;
import android.service.wallpaper.WallpaperService;
import android.view.MotionEvent;
import android.view.Surface;
import android.view.SurfaceHolder;

import com.phezu.wallpaper.OverrideUnityActivity;
import com.unity3d.player.UnityPlayer;

public class MyWallpaperService extends WallpaperService {
    private UnityPlayer mUnityPlayer;

    @Override
    public void onCreate() {
        super.onCreate();
        mUnityPlayer = new UnityPlayer(getApplicationContext());
    }

    @Override
    public void onDestroy() {
        mUnityPlayer.destroy();
        super.onDestroy();
    }

    @Override
    public void onLowMemory ()
    {
        super.onLowMemory();
        mUnityPlayer.lowMemory();
    }

    @Override
    public void onTrimMemory(int level)
    {
        super.onTrimMemory(level);
        if (level == TRIM_MEMORY_RUNNING_CRITICAL)
            mUnityPlayer.lowMemory();
    }

    @Override
    public void onConfigurationChanged (Configuration newConfig)
    {
        super.onConfigurationChanged(newConfig);
        mUnityPlayer.configurationChanged(newConfig);
    }


    @Override
    public Engine onCreateEngine() {
        return new UnityEngine();
    }

    public class UnityEngine extends Engine {
        private Surface surface;
        private int visibleSurfaces;

        @Override
        public void onCreate(SurfaceHolder surfaceHolder) {
            super.onCreate(surfaceHolder);
            OverrideUnityActivity.executeCommandInUnity(OverrideUnityActivity.START_AS_WALLPAPER_COMMAND);
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
            mUnityPlayer.displayChanged(0, surface);
            mUnityPlayer.windowFocusChanged(true);
            mUnityPlayer.resume();
        }

        private void pauseUnityDisplay() {
            mUnityPlayer.displayChanged(0, null);
            mUnityPlayer.windowFocusChanged(false);
            mUnityPlayer.pause();
        }

        @Override
        public void onTouchEvent(MotionEvent event) {
            super.onTouchEvent(event);
            handleInput(event);
        }

        private void handleInput(MotionEvent event) {
            mUnityPlayer.onGenericMotionEvent(event);
        }
    }
}

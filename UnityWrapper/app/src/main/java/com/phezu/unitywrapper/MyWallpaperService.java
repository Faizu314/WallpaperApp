package com.phezu.unitywrapper;

import android.content.res.Configuration;
import android.service.wallpaper.WallpaperService;
import android.util.Log;
import android.view.MotionEvent;
import android.view.Surface;
import android.view.SurfaceHolder;

import com.phezu.wallpaper.OverrideUnityActivity;
import com.unity3d.player.UnityPlayer;

public class MyWallpaperService extends WallpaperService {
    private UnityPlayer mUnityPlayer;

    @Override
    public void onCreate() {
        Log.e("ME", "OnServiceCreate");
        super.onCreate();
        mUnityPlayer = new UnityPlayer(this);

        Log.e("ME", "Sending Unity a command");
        OverrideUnityActivity.executeCommandInUnity(OverrideUnityActivity.START_AS_WALLPAPER_COMMAND);
    }

    @Override
    public void onDestroy() {
        Log.e("ME", "OnServiceDestroy");
        mUnityPlayer.quit();
        super.onDestroy();
    }

    @Override
    public void onLowMemory ()
    {
        Log.e("ME", "OnLowMemory");
        super.onLowMemory();
        mUnityPlayer.lowMemory();
    }

    @Override
    public void onTrimMemory(int level)
    {
        Log.e("ME", "OnTrimMemory");
        super.onTrimMemory(level);
        if (level == TRIM_MEMORY_RUNNING_CRITICAL)
            mUnityPlayer.lowMemory();
    }

    @Override
    public void onConfigurationChanged (Configuration newConfig)
    {
        Log.e("ME", "OnConfigurationChanged");
        super.onConfigurationChanged(newConfig);
        mUnityPlayer.configurationChanged(newConfig);
    }


    @Override
    public Engine onCreateEngine() {
        Log.e("ME", "OnServiceCreateEngine");
        return new UnityEngine();
    }

    public class UnityEngine extends Engine {
        private Surface surface;
        private int visibleSurfaces;

        @Override
        public void onCreate(SurfaceHolder surfaceHolder) {
            Log.e("ME" , "OnEngineCreate");
            super.onCreate(surfaceHolder);
        }

        @Override
        public void onDestroy() {
            Log.e("ME", "OnEngineDestroy");
            mUnityPlayer.quit();
            super.onDestroy();
        }

        @Override
        public void onSurfaceCreated(SurfaceHolder holder) {
            Log.e("ME", "OnSurfaceCreated");
            super.onSurfaceCreated(holder);
            surface = holder.getSurface();
            updateVisibleSurfaces(true);
        }

        @Override
        public void onSurfaceChanged(SurfaceHolder holder, int format, int width, int height) {
            Log.e("ME", "OnSurfaceChanged");
            super.onSurfaceChanged(holder, format, width, height);
            this.surface = holder.getSurface();
            updateUnityDisplay();
        }

        @Override
        public void onSurfaceDestroyed(SurfaceHolder holder) {
            Log.e("ME", "OnSurfaceDestroyed");
            this.surface = null;
            super.onSurfaceDestroyed(holder);
        }

        @Override
        public void onVisibilityChanged(boolean visible) {
            Log.e("ME", "OnVisibilityChanged");
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
            Log.e("ME", "TouchEvent");
            super.onTouchEvent(event);
            handleInput(event);
        }

        private void handleInput(MotionEvent event) {
            mUnityPlayer.onGenericMotionEvent(event);
        }
    }
}

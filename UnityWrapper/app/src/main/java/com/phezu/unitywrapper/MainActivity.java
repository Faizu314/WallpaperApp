package com.phezu.unitywrapper;

import androidx.appcompat.app.AppCompatActivity;

import android.app.WallpaperManager;
import android.content.ComponentName;
import android.content.Intent;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.Button;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        Button activateWallpaperButton = findViewById(R.id.activateWallpaperButton);
        Button unityButton = findViewById(R.id.unityButton);

        activateWallpaperButton.setOnClickListener((View view) -> {
            runWallpaperService();
        });

        unityButton.setOnClickListener((View view) -> {
            runUnity();
        });
    }

    private void runUnity() {
        stopService(new Intent(this, MyWallpaperService.class));

        Intent intent = new Intent(this, WallpaperAppActivity.class);
        intent.setFlags(Intent.FLAG_ACTIVITY_REORDER_TO_FRONT);
        startActivity(intent);
    }

    private void runWallpaperService() {
        Intent intent = new Intent(WallpaperManager.ACTION_CHANGE_LIVE_WALLPAPER);
        intent.putExtra(WallpaperManager.EXTRA_LIVE_WALLPAPER_COMPONENT, new ComponentName(this, MyWallpaperService.class));
        startActivity(intent);
    }
}
package com.phezu.unitywrapper;

import androidx.appcompat.app.AppCompatActivity;
import android.app.WallpaperManager;
import android.content.ComponentName;
import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;

import com.unity3d.player.UnityPlayerActivity;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        Button previewButton = (Button)findViewById(R.id.previewButton);
        Button unityButton = (Button)findViewById(R.id.unityButton);

        previewButton.setOnClickListener((View view) -> {
            runWallpaperService();
        });

        unityButton.setOnClickListener((View view) -> {
            runUnity();
        });
    }

    private void runWallpaperService() {
        Intent intent = new Intent(WallpaperManager.ACTION_CHANGE_LIVE_WALLPAPER);
        intent.putExtra(WallpaperManager.EXTRA_LIVE_WALLPAPER_COMPONENT, new ComponentName(this, MyWallpaperService.class));
        startActivity(intent);
    }

    private void runUnity() {
        Intent intent = new Intent(this, UnityPlayerActivity.class);
        intent.setFlags(Intent.FLAG_ACTIVITY_REORDER_TO_FRONT);
        startActivity(intent);
    }
}
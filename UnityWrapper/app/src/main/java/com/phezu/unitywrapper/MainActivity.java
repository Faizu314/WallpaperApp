package com.phezu.unitywrapper;

import androidx.activity.result.ActivityResult;
import androidx.activity.result.ActivityResultLauncher;
import androidx.activity.result.contract.ActivityResultContracts;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.app.ActivityCompat;

import android.Manifest;
import android.annotation.SuppressLint;
import android.app.WallpaperInfo;
import android.app.WallpaperManager;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.graphics.Bitmap;
import android.graphics.drawable.BitmapDrawable;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.TextView;
import android.widget.Toast;

import com.google.firebase.auth.FirebaseUser;
import com.phezu.wallpaper.OverrideUnityActivity;

import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;

public class MainActivity extends AppCompatActivity {

    public static MainActivity instance;

    private FirebaseHelper firebaseHelper = new FirebaseHelper();
    private TextView usernameText;

    private ActivityResultLauncher<String> requestPermissionLauncher =
            registerForActivityResult(new ActivityResultContracts.RequestPermission(), isGranted -> {
                if (isGranted) {
                    Log.d("Me", "got permission");
                    saveCurrentWallpaper();
                    runWallpaperService();
                } else {
                    Log.d("Me", "permission denied");
                    Toast.makeText(getApplicationContext(), "Unable to save current wallpaper", Toast.LENGTH_SHORT);
                }
            });

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        setContentView(R.layout.activity_main);

        instance = this;

        usernameText = findViewById(R.id.username);

        findViewById(R.id.activateWallpaperButton).setOnClickListener((View view) -> {
            tryRunWallpaperService();
        });

        findViewById(R.id.closeServiceButton).setOnClickListener((View view) -> {
            OverrideUnityActivity.executeCommandInUnity(OverrideUnityActivity.START_AS_WALLPAPER_COMMAND);
        });

        findViewById(R.id.unityButton).setOnClickListener((View view) -> {
            runUnity();
        });

        boolean isWifiConnected = isConnectedToWifi();
        if (SessionHolder.getInstance().getSessionUser() == null && isWifiConnected) {
            Log.e("Me", "Launching google helper");
            launchGoogleHelper();
        }
        else {
            Log.e("Me", "Loading user screen");
            loadUserScreen(SessionHolder.getInstance().getSessionUser());
        }
    }

    private boolean isConnectedToWifi() {
        ConnectivityManager cm = (ConnectivityManager) getApplicationContext()
                .getSystemService(Context.CONNECTIVITY_SERVICE);
        NetworkInfo activeNetwork = cm.getActiveNetworkInfo();

        if (activeNetwork != null) {
            if (activeNetwork.getType() == ConnectivityManager.TYPE_WIFI)
                return true;
            if (activeNetwork.getType() == ConnectivityManager.TYPE_MOBILE)
                return true;
        }

        return false;
    }

    private void launchGoogleHelper() {
        registerForActivityResult(
                new ActivityResultContracts.StartActivityForResult(),
                result -> onGoogleHelperFinish(result)
        ).launch(
                new Intent(this, GoogleHelperActivity.class)
                        .putExtra(GoogleHelperActivity.REQUEST_CODE, GoogleHelperActivity.REQ_ONE_TAP)
        );
    }

    private void onGoogleHelperFinish(ActivityResult result) {
        if (result.getResultCode() == GoogleHelperActivity.RESULT_OK) {
            Intent data = result.getData();
            String googleToken = data.getStringExtra(GoogleHelperActivity.GOOGLE_TOKEN_ID);
            if (googleToken == null) {
                usernameText.setText("No Google Account");
                return;
            }
            firebaseHelper.signIn(googleToken, (user, error, code) -> onFirebaseSignIn(user, error, code));
        } else {
            usernameText.setText("Network Error");
        }
    }

    private void onFirebaseSignIn(FirebaseUser user, Exception error, int code) {
        if (code == FirebaseHelper.SIGN_IN_UNSUCCESSFUL) {
            Log.d("Me", error.getMessage());
            return;
        }

        SessionHolder.getInstance().setSessionUser(user);

        loadUserScreen(user);
    }

    private void loadUserScreen(FirebaseUser signedInUser) {
        String displayName = "Not signed in";
        if (signedInUser != null)
            displayName = signedInUser.getDisplayName();

        usernameText.setText(displayName);
    }

    private void runUnity() {
        stopWallpaperService();

        Intent intent = new Intent(this, WallpaperAppActivity.class);
        intent.setFlags(Intent.FLAG_ACTIVITY_REORDER_TO_FRONT);
        startActivity(intent);
    }

    private void tryRunWallpaperService() {
        if (isOurLiveWallpaperServiceRunning()) {
            stopWallpaperService();
            Log.d("Me", "running service");
            runWallpaperService();
        } else {
            Log.d("Me", "saving wallpaper");
            trySaveCurrentWallpaper();
        }
    }

    private void runWallpaperService() {
        Intent intent = new Intent(WallpaperManager.ACTION_CHANGE_LIVE_WALLPAPER);
        intent.putExtra(WallpaperManager.EXTRA_LIVE_WALLPAPER_COMPONENT, new ComponentName(this, MyWallpaperService.class));
        startActivity(intent);
    }

    private boolean isOurLiveWallpaperServiceRunning() {
        WallpaperManager wpm = WallpaperManager.getInstance(this);
        WallpaperInfo info = wpm.getWallpaperInfo();

        return info != null && info.getPackageName().equals(this.getPackageName());
    }

    private void stopWallpaperService() {
        stopService(new Intent(this, MyWallpaperService.class));
    }

    private void trySaveCurrentWallpaper() {
        if (ActivityCompat.checkSelfPermission(this, Manifest.permission.READ_EXTERNAL_STORAGE)
                != PackageManager.PERMISSION_GRANTED) {
            Log.d("Me", "requesting permission");
            requestPermissionLauncher.launch(Manifest.permission.READ_EXTERNAL_STORAGE);
            return;
        }
        Log.d("Me", "permission already received");
        saveCurrentWallpaper();
        runWallpaperService();
    }

    @SuppressLint("MissingPermission")
    private void saveCurrentWallpaper() {
        WallpaperManager wallpaperManager = WallpaperManager.getInstance(getApplicationContext());

        try {
            ((BitmapDrawable)wallpaperManager.getDrawable()).getBitmap().compress(Bitmap.CompressFormat.PNG, 100,
                    new FileOutputStream("/storage/emulated/0/output.png"));
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        }
    }
}
package com.phezu.unitywrapper;

import androidx.activity.result.ActivityResult;
import androidx.activity.result.contract.ActivityResultContracts;
import androidx.appcompat.app.AppCompatActivity;

import android.app.WallpaperManager;
import android.content.ComponentName;
import android.content.Intent;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.TextView;

import com.google.firebase.auth.FirebaseUser;

public class MainActivity extends AppCompatActivity {

    private FirebaseHelper firebaseHelper = new FirebaseHelper();
    private TextView usernameText;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        usernameText = findViewById(R.id.username);

        findViewById(R.id.activateWallpaperButton).setOnClickListener((View view) -> {
            runWallpaperService();
        });

        findViewById(R.id.unityButton).setOnClickListener((View view) -> {
            runUnity();
        });

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
        }
        else {
            usernameText.setText("Network Error");
        }
    }

    private void onFirebaseSignIn(FirebaseUser user, Exception error, int code) {
        if (code == FirebaseHelper.SIGN_IN_UNSUCCESSFUL) {
            Log.d("Me", error.getMessage());
            return;
        }

        usernameText.setText(user.getDisplayName());
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
package com.phezu.unitywrapper;

import android.content.Intent;
import android.os.Bundle;
import android.util.Log;
import android.widget.Button;
import android.widget.FrameLayout;

import com.phezu.wallpaper.OverrideUnityActivity;

public class WallpaperAppActivity extends OverrideUnityActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        executeCommandInUnity(START_AS_APPLICATION_COMMAND);

        FrameLayout layout = mUnityPlayer;
        {
            Button myButton = new Button(this);
            myButton.setText("Back");
            myButton.setX(10);
            myButton.setY(10);

            myButton.setOnClickListener(view -> {
                mUnityPlayer.destroy();
                startActivity(new Intent(getApplicationContext(), MainActivity.class));
            });
            layout.addView(myButton, 300, 200);
        }
    }

    @Override
    public void SignUpViaEmail(String email, String password) {
        Log.d("Me", "SignUpViaEmail: email = " + email + ", password = " + password);
    }

    @Override
    public void SignInViaEmail(String email, String password) {
        Log.d("Me", "SignInViaEmail: email = " + email + ", password = " + password);
    }

    @Override
    public void SignInViaGoogle() {
        Log.d("Me", "SignInViaGoogle");
    }

    @Override
    public void SignInViaFacebook() {
        Log.d("Me", "SignInViaFacebook");
    }
}

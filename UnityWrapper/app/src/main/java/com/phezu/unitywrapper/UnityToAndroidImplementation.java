package com.phezu.unitywrapper;

import android.util.Log;
import com.phezu.wallpaper.OverrideUnityActivity;

public class UnityToAndroidImplementation extends OverrideUnityActivity {

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

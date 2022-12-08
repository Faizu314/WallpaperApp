package com.phezu.wallpaper;
import android.os.Bundle;
import android.widget.FrameLayout;

import com.unity3d.player.UnityPlayerActivity;

public abstract class OverrideUnityActivity extends UnityPlayerActivity
{
    public static OverrideUnityActivity instance = null;

    @Override
    protected void onCreate(Bundle savedInstanceState)
    {
        super.onCreate(savedInstanceState);
        instance = this;
    }

    @Override
    protected void onDestroy() {
        super.onDestroy();
        instance = null;
    }

    //Here is the interface unity will use to communicate with android

    public abstract void SignUpViaEmail(String email, String password);
    public abstract void SignInViaEmail(String email, String password);
    public abstract void SignInViaGoogle();
    public abstract void SignInViaFacebook();

}
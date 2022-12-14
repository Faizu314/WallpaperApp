package com.phezu.wallpaper;

import android.os.Bundle;

import com.unity3d.player.UnityPlayer;
import com.unity3d.player.UnityPlayerActivity;

public abstract class OverrideUnityActivity extends UnityPlayerActivity
{
    public static OverrideUnityActivity instance = null;


    private static final String ANDROID_COMMUNICATOR_GAMEOBJECT = "AndroidCommunicator";
    private static final String COMMAND_FUNCTION = "ExecuteAndroidCommand";
    public static final String START_AS_WALLPAPER_COMMAND = "START_AS_WALLPAPER";
    public static final String START_AS_APPLICATION_COMMAND = "START_AS_APPLICATION";
    public static final String GET_IS_WALLPAPER_SET_COMMAND = "GET_IS_WALLPAPER_SET";

    protected String mCommandResult;

    public static void executeCommandInUnity(String command) {
        UnityPlayer.UnitySendMessage(ANDROID_COMMUNICATOR_GAMEOBJECT, COMMAND_FUNCTION, command);
    }

    public void receiveCommandResult(String commandResult) {
        mCommandResult = "";
        mCommandResult = commandResult;
    }

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
package com.phezu.unitywrapper;


import android.app.WallpaperInfo;
import android.app.WallpaperManager;
import android.content.ComponentName;
import android.content.Intent;
import android.graphics.Bitmap;
import android.graphics.Matrix;
import android.os.Bundle;
import android.provider.MediaStore;
import android.service.wallpaper.WallpaperService;
import android.util.Log;
import android.widget.Toast;

import com.phezu.wallpaper.OverrideUnityActivity;

import java.io.IOException;
import java.nio.ByteBuffer;

public class WallpaperAppActivity extends OverrideUnityActivity {

    private final int SELECT_ANDROID_IMAGE = 10;

    private byte[] mSelectedImage;
    private int mImageHeight;
    private int mImageWidth;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        executeCommandInUnity(START_AS_APPLICATION_COMMAND);
    }

    @Override
    public void onBackPressed() {
        Log.e("Me", "Back Pressed");
        executeCommandInUnity(GO_BACK_COMMAND);
    }

    @Override
    public void OnBackButtonPressed() {
        finish();
    }

    @Override
    public void RunWallpaperService() {
        tryRunWallpaperService();
    }

    @Override
    public void OpenAndroidGallery() {
        Intent intent = new Intent();
        intent.setType("image/*");
        intent.setAction(Intent.ACTION_GET_CONTENT);

        startActivityForResult(Intent.createChooser(intent, "Select Picture"), SELECT_ANDROID_IMAGE);
    }

    @Override
    public byte[] GetImageData() {
        return mSelectedImage;
    }

    @Override
    public int GetImageHeight() {
        return mImageHeight;
    }

    @Override
    public int GetImageWidth() {
        return mImageWidth;
    }

    @Override
    protected void onActivityResult(int requestCode, int resultCode, Intent data) {
        super.onActivityResult(requestCode, resultCode, data);

        if (requestCode == SELECT_ANDROID_IMAGE) {
            if (resultCode == RESULT_OK) {
                if (data != null) {
                    try {
                        onImageSelectedFromGallery(data);
                    } catch (IOException e) {
                        e.printStackTrace();
                    }
                }
            } else if (resultCode == RESULT_CANCELED)  {
                Toast.makeText(this, "Canceled", Toast.LENGTH_SHORT).show();
            }
        }
    }

    private void onImageSelectedFromGallery(Intent data) throws IOException {
        Bitmap bitmap = MediaStore.Images.Media.getBitmap(getContentResolver(), data.getData());
        //Because unity interprets it upside down
        bitmap = flipBitMapVertically(bitmap);

        mSelectedImage = toByteArray(bitmap);
        mImageHeight = bitmap.getHeight();
        mImageWidth = bitmap.getWidth();

        executeCommandInUnity(GET_IMAGE_FROM_ANDROID_COMMAND);
    }

    private Bitmap flipBitMapVertically(Bitmap source) {
        Matrix matrix = new Matrix();
        matrix.postScale(1, -1, source.getWidth() / 2f, source.getHeight() / 2f);
        return Bitmap.createBitmap(source, 0, 0, source.getWidth(), source.getHeight(), matrix, true);
    }

    private byte[] toByteArray(Bitmap source) {
        ByteBuffer byteBuffer = ByteBuffer.allocate(source.getByteCount());
        source.copyPixelsToBuffer(byteBuffer);

        return byteBuffer.array();
    }





    private void tryRunWallpaperService() {
        if (isOurLiveWallpaperServiceRunning()) {
            stopWallpaperService();
            Log.d("Me", "stopping and running service");
            runWallpaperService();
        } else {
            Log.d("Me", "running service");
            runWallpaperService();
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
        stopService(new Intent(this, WallpaperService.class));
    }
}

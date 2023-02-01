package com.phezu.unitywrapper;

import android.content.Intent;
import android.graphics.Bitmap;
import android.graphics.Matrix;
import android.os.Build;
import android.os.Bundle;
import android.provider.MediaStore;
import android.util.Log;
import android.widget.Toast;
import android.window.OnBackInvokedCallback;
import android.window.OnBackInvokedDispatcher;

import androidx.activity.OnBackPressedCallback;
import androidx.activity.OnBackPressedDispatcher;

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

        Log.e("Me", "Back");
        executeCommandInUnity(GO_BACK_COMMAND);
    }

    @Override
    public void OnBackButtonPressed() {
        startActivity(new Intent(getApplicationContext(), MainActivity.class));
        finish();
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

}

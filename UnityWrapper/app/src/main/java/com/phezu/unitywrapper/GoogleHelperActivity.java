package com.phezu.unitywrapper;

import android.content.Intent;
import android.os.Bundle;
import android.util.Log;

import androidx.activity.result.ActivityResultLauncher;
import androidx.activity.result.IntentSenderRequest;
import androidx.activity.result.contract.ActivityResultContracts;
import androidx.annotation.Nullable;
import androidx.appcompat.app.AppCompatActivity;

import com.google.android.gms.auth.api.identity.BeginSignInRequest;
import com.google.android.gms.auth.api.identity.Identity;
import com.google.android.gms.auth.api.identity.SignInClient;
import com.google.android.gms.auth.api.identity.SignInCredential;
import com.google.android.gms.common.api.ApiException;
import com.google.android.gms.common.api.CommonStatusCodes;

public class GoogleHelperActivity extends AppCompatActivity {
    public static final int RESULT_USER_NOT_SIGNED_IN = -2;
    public static final int REQ_ONE_TAP = 2;  // Can be any integer unique to the Activity.

    public static final String REQUEST_CODE = "com.phezu.unitywrapper.REQUEST_CODE";
    public static final String GOOGLE_TOKEN_ID = "com.phezu.unitywrapper.GOOGLE_TOKEN_ID";

    private SignInClient mOneTapClient;
    private BeginSignInRequest mSignInRequest;
    private BeginSignInRequest mSignUpRequest;
    private ActivityResultLauncher<IntentSenderRequest> launcher;

    @Override
    protected void onCreate(@Nullable Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        Log.e("ME", "Initializing");
        initialize();
        Log.e("ME", "Initialized");
        displayOneTapUI();
    }

    private void onResult(int requestCode, int resultCode, @Nullable Intent data) {
        switch (requestCode) {
            case REQ_ONE_TAP:
                try {
                    SignInCredential credential = mOneTapClient.getSignInCredentialFromIntent(data);
                    String idToken = credential.getGoogleIdToken();
                    //put idToken as an activity result
                    Intent resultData = new Intent();
                    resultData.putExtra(GOOGLE_TOKEN_ID, idToken);
                    setResult(RESULT_OK, resultData);
                    finish();
                } catch (ApiException e) {
                    switch (e.getStatusCode()) {
                        case CommonStatusCodes.CANCELED:
                            Log.d("Me", "One-tap dialog was closed.");
                            // Don't re-prompt the user.
                            setResult(RESULT_CANCELED);
                            finish();
                            break;
                        case CommonStatusCodes.NETWORK_ERROR:
                            Log.d("Me", "One-tap encountered a network error.");
                            // Try again or just ignore.
                            break;
                        default:
                            Log.d("Me", "Couldn't get credential from result."
                                    + e.getLocalizedMessage());
                            setResult(RESULT_USER_NOT_SIGNED_IN);
                            finish();
                            break;
                    }
                }
                break;
        }
    }

    private void initialize() {
        mOneTapClient = Identity.getSignInClient(this);

        mSignInRequest = BeginSignInRequest.builder()
                .setPasswordRequestOptions(BeginSignInRequest.PasswordRequestOptions.builder()
                        .setSupported(true)
                        .build())
                .setGoogleIdTokenRequestOptions(BeginSignInRequest.GoogleIdTokenRequestOptions.builder()
                        .setSupported(true)
                        // Your server's client ID, not your Android client ID.
                        .setServerClientId(getString(R.string.default_web_client_id))
                        // Only show accounts previously used to sign in.
                        .setFilterByAuthorizedAccounts(true)
                        .build())
                // Automatically sign in when exactly one credential is retrieved.
                .setAutoSelectEnabled(true)
                .build();

        mSignUpRequest = BeginSignInRequest.builder()
                .setGoogleIdTokenRequestOptions(BeginSignInRequest.GoogleIdTokenRequestOptions.builder()
                        .setSupported(true)
                        // Your server's client ID, not your Android client ID.
                        .setServerClientId(getString(R.string.default_web_client_id))
                        // Only show accounts previously used to sign in.
                        .setFilterByAuthorizedAccounts(false)
                        .build())
                .build();

        launcher = registerForActivityResult(new ActivityResultContracts.StartIntentSenderForResult(),
                result -> onResult(REQ_ONE_TAP, result.getResultCode(), result.getData()));
    }

    private void displayOneTapUI() {
        mOneTapClient.beginSignIn(mSignUpRequest)
                .addOnSuccessListener(this, result -> {
                    try {
                        IntentSenderRequest intentSender = new IntentSenderRequest.Builder(result.getPendingIntent().getIntentSender()).build();
                        launcher.launch(intentSender);
                    } catch (Exception e) {
                        Log.e("Me", "Couldn't start One Tap UI: " + e.getLocalizedMessage());
                    }
                })
                .addOnFailureListener(this, e -> {
                    // No saved credentials found. Launch the One Tap sign-up flow, or
                    // do nothing and continue presenting the signed-out UI.
                    Log.d("Me", e.getMessage());
                });
    }
}

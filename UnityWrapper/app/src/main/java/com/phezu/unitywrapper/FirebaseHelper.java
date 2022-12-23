package com.phezu.unitywrapper;

import com.google.firebase.auth.AuthCredential;
import com.google.firebase.auth.FirebaseAuth;
import com.google.firebase.auth.FirebaseUser;
import com.google.firebase.auth.GoogleAuthProvider;

public class FirebaseHelper {
    public static final int SIGN_IN_SUCCESSFUL = 0;
    public static final int SIGN_IN_UNSUCCESSFUL = 1;

    private FirebaseAuth mFirebaseAuth;

    public FirebaseHelper() {
        mFirebaseAuth = FirebaseAuth.getInstance();
    }

    public void signIn(String idToken, FirebaseHelperCommunicator callbacks) {
        if (idToken == null)
            return;

        AuthCredential firebaseCredential = GoogleAuthProvider.getCredential(idToken, null);

        mFirebaseAuth.signInWithCredential(firebaseCredential)
                .addOnCompleteListener(task -> {
                    if (task.isSuccessful()) {
                        callbacks.onSignIn(mFirebaseAuth.getCurrentUser(), null, SIGN_IN_SUCCESSFUL);
                    } else {
                        callbacks.onSignIn(mFirebaseAuth.getCurrentUser(), task.getException(), SIGN_IN_UNSUCCESSFUL);
                    }
                });
    }

    public interface FirebaseHelperCommunicator {
        void onSignIn(FirebaseUser user, Exception error, int code);
    }
}

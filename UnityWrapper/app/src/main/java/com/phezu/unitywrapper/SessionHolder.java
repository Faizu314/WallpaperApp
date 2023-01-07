package com.phezu.unitywrapper;

import com.google.firebase.auth.FirebaseUser;

public class SessionHolder {
    private static volatile SessionHolder INSTANCE = null;

    private FirebaseUser mCurrentUser;

    private SessionHolder() {
        mCurrentUser = null;
    }

    public static SessionHolder getInstance() {
        if (INSTANCE == null) {
            synchronized (SessionHolder.class) {
                if (INSTANCE == null) {
                    INSTANCE = new SessionHolder();
                }
            }
        }
        return INSTANCE;
    }

    public void setSessionUser(FirebaseUser user) {
        mCurrentUser = user;
    }

    public FirebaseUser getSessionUser() {
        return mCurrentUser;
    }
}

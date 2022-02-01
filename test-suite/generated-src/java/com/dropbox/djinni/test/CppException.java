// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from exception.djinni

package com.dropbox.djinni.test;

import com.snapchat.djinni.NativeObjectManager;
import java.util.concurrent.atomic.AtomicBoolean;
import javax.annotation.CheckForNull;
import javax.annotation.Nonnull;

public abstract class CppException {
    public abstract int throwAnException();

    @CheckForNull
    public static native CppException get();

    public static final class CppProxy extends CppException
    {
        private final long nativeRef;
        private final AtomicBoolean destroyed = new AtomicBoolean(false);

        private CppProxy(long nativeRef)
        {
            if (nativeRef == 0) throw new RuntimeException("nativeRef is zero");
            this.nativeRef = nativeRef;
            NativeObjectManager.register(this, nativeRef);
        }
        public static native void nativeDestroy(long nativeRef);

        @Override
        public int throwAnException()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_throwAnException(this.nativeRef);
        }
        private native int native_throwAnException(long _nativeRef);
    }
}

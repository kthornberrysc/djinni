// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from constant_enum.djinni

package com.dropbox.djinni.test;

import com.snapchat.djinni.NativeObjectManager;
import java.util.concurrent.atomic.AtomicBoolean;
import javax.annotation.CheckForNull;
import javax.annotation.Nonnull;

/** Interface containing enum constant */
public abstract class ConstantInterfaceWithEnum {
    @Nonnull
    public static final ConstantEnum CONST_ENUM = ConstantEnum.SOME_VALUE;


    public static final class CppProxy extends ConstantInterfaceWithEnum
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
    }
}

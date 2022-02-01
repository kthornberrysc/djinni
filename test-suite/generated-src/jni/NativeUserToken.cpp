// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from user_token.djinni

#include "NativeUserToken.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

NativeUserToken::NativeUserToken() : ::djinni::JniInterface<::testsuite::UserToken, NativeUserToken>("com/dropbox/djinni/test/UserToken$CppProxy") {}

NativeUserToken::~NativeUserToken() = default;

NativeUserToken::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

NativeUserToken::JavaProxy::~JavaProxy() = default;

std::string NativeUserToken::JavaProxy::whoami() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeUserToken>::get();
    auto jret = (jstring)jniEnv->CallObjectMethod(Handle::get().get(), data.method_whoami);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::String::toCpp(jniEnv, jret);
}

CJNIEXPORT void JNICALL Java_com_dropbox_djinni_test_UserToken_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        delete reinterpret_cast<::djinni::CppProxyHandle<::testsuite::UserToken>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jstring JNICALL Java_com_dropbox_djinni_test_UserToken_00024CppProxy_native_1whoami(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::testsuite::UserToken>(nativeRef);
        auto r = ref->whoami();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated

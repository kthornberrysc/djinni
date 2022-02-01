// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from function_prologue.djinni

#include "NativeFunctionPrologueHelper.hpp"  // my header
#include "../../handwritten-src/cpp/jni_prologue.hpp"
#include "Marshal.hpp"

namespace djinni_generated {

NativeFunctionPrologueHelper::NativeFunctionPrologueHelper() : ::djinni::JniInterface<::testsuite::FunctionPrologueHelper, NativeFunctionPrologueHelper>("com/dropbox/djinni/test/FunctionPrologueHelper$CppProxy") {}

NativeFunctionPrologueHelper::~NativeFunctionPrologueHelper() = default;


CJNIEXPORT void JNICALL Java_com_dropbox_djinni_test_FunctionPrologueHelper_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE("FunctionPrologueHelper.nativeDestroy");
        delete reinterpret_cast<::djinni::CppProxyHandle<::testsuite::FunctionPrologueHelper>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jstring JNICALL Java_com_dropbox_djinni_test_FunctionPrologueHelper_foo(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE("FunctionPrologueHelper.foo");
        auto r = ::testsuite::FunctionPrologueHelper::foo();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated

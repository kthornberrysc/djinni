// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from static_method_language.djinni

#include "NativeTestStaticMethodLanguage.hpp"  // my header

namespace djinni_generated {

NativeTestStaticMethodLanguage::NativeTestStaticMethodLanguage() : ::djinni::JniInterface<::testsuite::TestStaticMethodLanguage, NativeTestStaticMethodLanguage>("com/dropbox/djinni/test/TestStaticMethodLanguage$CppProxy") {}

NativeTestStaticMethodLanguage::~NativeTestStaticMethodLanguage() = default;


CJNIEXPORT void JNICALL Java_com_dropbox_djinni_test_TestStaticMethodLanguage_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        delete reinterpret_cast<::djinni::CppProxyHandle<::testsuite::TestStaticMethodLanguage>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

}  // namespace djinni_generated

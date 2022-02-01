// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from proto.djinni

#include "NativeProtoTests.hpp"  // my header
#include "Marshal.hpp"
#include "NativeRecordWithEmbeddedCppProto.hpp"
#include "NativeRecordWithEmbeddedProto.hpp"
#include "Outcome_jni.hpp"

namespace djinni_generated {

NativeProtoTests::NativeProtoTests() : ::djinni::JniInterface<::testsuite::ProtoTests, NativeProtoTests>("com/dropbox/djinni/test/ProtoTests$CppProxy") {}

NativeProtoTests::~NativeProtoTests() = default;


CJNIEXPORT void JNICALL Java_com_dropbox_djinni_test_ProtoTests_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        delete reinterpret_cast<::djinni::CppProxyHandle<::testsuite::ProtoTests>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_com_dropbox_djinni_test_ProtoTests_protoToStrings(JNIEnv* jniEnv, jobject /*this*/, jobject j_x)
{
    try {
        auto r = ::testsuite::ProtoTests::protoToStrings(::djinni::Protobuf<::djinni::test::AddressBook, ::djinni::JavaClassName<'d','j','i','n','n','i','/','t','e','s','t','/','T','e','s','t','$','A','d','d','r','e','s','s','B','o','o','k'>>::toCpp(jniEnv, j_x));
        return ::djinni::release(::djinni::List<::djinni::String>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_com_dropbox_djinni_test_ProtoTests_stringsToProto(JNIEnv* jniEnv, jobject /*this*/, jobject j_x)
{
    try {
        auto r = ::testsuite::ProtoTests::stringsToProto(::djinni::List<::djinni::String>::toCpp(jniEnv, j_x));
        return ::djinni::release(::djinni::Protobuf<::djinni::test::AddressBook, ::djinni::JavaClassName<'d','j','i','n','n','i','/','t','e','s','t','/','T','e','s','t','$','A','d','d','r','e','s','s','B','o','o','k'>>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_com_dropbox_djinni_test_ProtoTests_embeddedProtoToString(JNIEnv* jniEnv, jobject /*this*/, jobject j_x)
{
    try {
        auto r = ::testsuite::ProtoTests::embeddedProtoToString(::djinni_generated::NativeRecordWithEmbeddedProto::toCpp(jniEnv, j_x));
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_com_dropbox_djinni_test_ProtoTests_stringToEmbeddedProto(JNIEnv* jniEnv, jobject /*this*/, jstring j_x)
{
    try {
        auto r = ::testsuite::ProtoTests::stringToEmbeddedProto(::djinni::String::toCpp(jniEnv, j_x));
        return ::djinni::release(::djinni_generated::NativeRecordWithEmbeddedProto::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_com_dropbox_djinni_test_ProtoTests_cppProtoToString(JNIEnv* jniEnv, jobject /*this*/, jobject j_x)
{
    try {
        auto r = ::testsuite::ProtoTests::cppProtoToString(::djinni::Protobuf<::djinni::test2::PersistingState, ::djinni::JavaClassName<'d','j','i','n','n','i','/','t','e','s','t','2','/','T','e','s','t','2','$','P','e','r','s','i','s','t','i','n','g','S','t','a','t','e'>>::toCpp(jniEnv, j_x));
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_com_dropbox_djinni_test_ProtoTests_stringToCppProto(JNIEnv* jniEnv, jobject /*this*/, jstring j_x)
{
    try {
        auto r = ::testsuite::ProtoTests::stringToCppProto(::djinni::String::toCpp(jniEnv, j_x));
        return ::djinni::release(::djinni::Protobuf<::djinni::test2::PersistingState, ::djinni::JavaClassName<'d','j','i','n','n','i','/','t','e','s','t','2','/','T','e','s','t','2','$','P','e','r','s','i','s','t','i','n','g','S','t','a','t','e'>>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_com_dropbox_djinni_test_ProtoTests_embeddedCppProtoToString(JNIEnv* jniEnv, jobject /*this*/, jobject j_x)
{
    try {
        auto r = ::testsuite::ProtoTests::embeddedCppProtoToString(::djinni_generated::NativeRecordWithEmbeddedCppProto::toCpp(jniEnv, j_x));
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_com_dropbox_djinni_test_ProtoTests_stringToEmbeddedCppProto(JNIEnv* jniEnv, jobject /*this*/, jstring j_x)
{
    try {
        auto r = ::testsuite::ProtoTests::stringToEmbeddedCppProto(::djinni::String::toCpp(jniEnv, j_x));
        return ::djinni::release(::djinni_generated::NativeRecordWithEmbeddedCppProto::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_com_dropbox_djinni_test_ProtoTests_protoListToStrings(JNIEnv* jniEnv, jobject /*this*/, jobject j_x)
{
    try {
        auto r = ::testsuite::ProtoTests::protoListToStrings(::djinni::List<::djinni::Protobuf<::djinni::test::Person, ::djinni::JavaClassName<'d','j','i','n','n','i','/','t','e','s','t','/','T','e','s','t','$','P','e','r','s','o','n'>>>::toCpp(jniEnv, j_x));
        return ::djinni::release(::djinni::List<::djinni::String>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_com_dropbox_djinni_test_ProtoTests_stringsToProtoList(JNIEnv* jniEnv, jobject /*this*/, jobject j_x)
{
    try {
        auto r = ::testsuite::ProtoTests::stringsToProtoList(::djinni::List<::djinni::String>::toCpp(jniEnv, j_x));
        return ::djinni::release(::djinni::List<::djinni::Protobuf<::djinni::test::Person, ::djinni::JavaClassName<'d','j','i','n','n','i','/','t','e','s','t','/','T','e','s','t','$','P','e','r','s','o','n'>>>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_com_dropbox_djinni_test_ProtoTests_optionalProtoToString(JNIEnv* jniEnv, jobject /*this*/, jobject j_x)
{
    try {
        auto r = ::testsuite::ProtoTests::optionalProtoToString(::djinni::Optional<std::experimental::optional, ::djinni::Protobuf<::djinni::test::Person, ::djinni::JavaClassName<'d','j','i','n','n','i','/','t','e','s','t','/','T','e','s','t','$','P','e','r','s','o','n'>>>::toCpp(jniEnv, j_x));
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_com_dropbox_djinni_test_ProtoTests_stringToOptionalProto(JNIEnv* jniEnv, jobject /*this*/, jstring j_x)
{
    try {
        auto r = ::testsuite::ProtoTests::stringToOptionalProto(::djinni::String::toCpp(jniEnv, j_x));
        return ::djinni::release(::djinni::Optional<std::experimental::optional, ::djinni::Protobuf<::djinni::test::Person, ::djinni::JavaClassName<'d','j','i','n','n','i','/','t','e','s','t','/','T','e','s','t','$','P','e','r','s','o','n'>>>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT ::djinni::Outcome<::djinni::Protobuf<::djinni::test::Person, ::djinni::JavaClassName<'d','j','i','n','n','i','/','t','e','s','t','/','T','e','s','t','$','P','e','r','s','o','n'>>, ::djinni::I32>::JniType JNICALL Java_com_dropbox_djinni_test_ProtoTests_stringToProtoOutcome(JNIEnv* jniEnv, jobject /*this*/, jstring j_x)
{
    try {
        auto r = ::testsuite::ProtoTests::stringToProtoOutcome(::djinni::String::toCpp(jniEnv, j_x));
        return ::djinni::release(::djinni::Outcome<::djinni::Protobuf<::djinni::test::Person, ::djinni::JavaClassName<'d','j','i','n','n','i','/','t','e','s','t','/','T','e','s','t','$','P','e','r','s','o','n'>>, ::djinni::I32>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated

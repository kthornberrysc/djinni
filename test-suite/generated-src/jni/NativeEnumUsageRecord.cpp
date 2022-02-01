// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from enum.djinni

#include "NativeEnumUsageRecord.hpp"  // my header
#include "Marshal.hpp"
#include "NativeColor.hpp"

namespace djinni_generated {

NativeEnumUsageRecord::NativeEnumUsageRecord() = default;

NativeEnumUsageRecord::~NativeEnumUsageRecord() = default;

auto NativeEnumUsageRecord::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<NativeEnumUsageRecord>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni_generated::NativeColor::fromCpp(jniEnv, c.e)),
                                                           ::djinni::get(::djinni::Optional<std::experimental::optional, ::djinni_generated::NativeColor>::fromCpp(jniEnv, c.o)),
                                                           ::djinni::get(::djinni::List<::djinni_generated::NativeColor>::fromCpp(jniEnv, c.l)),
                                                           ::djinni::get(::djinni::Set<::djinni_generated::NativeColor>::fromCpp(jniEnv, c.s)),
                                                           ::djinni::get(::djinni::Map<::djinni_generated::NativeColor, ::djinni_generated::NativeColor>::fromCpp(jniEnv, c.m)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto NativeEnumUsageRecord::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 6);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<NativeEnumUsageRecord>::get();
    return {::djinni_generated::NativeColor::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_mE)),
            ::djinni::Optional<std::experimental::optional, ::djinni_generated::NativeColor>::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_mO)),
            ::djinni::List<::djinni_generated::NativeColor>::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_mL)),
            ::djinni::Set<::djinni_generated::NativeColor>::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_mS)),
            ::djinni::Map<::djinni_generated::NativeColor, ::djinni_generated::NativeColor>::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_mM))};
}

}  // namespace djinni_generated

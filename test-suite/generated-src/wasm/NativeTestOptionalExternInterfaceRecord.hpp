// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from yaml-test.djinni

#pragma once

#include "djinni_wasm.hpp"
#include "test_optional_extern_interface_record.hpp"

namespace djinni_generated {

struct NativeTestOptionalExternInterfaceRecord
{
    using CppType = ::TestOptionalExternInterfaceRecord;
    using JsType = em::val;
    using Boxed = NativeTestOptionalExternInterfaceRecord;

    static CppType toCpp(const JsType& j);
    static JsType fromCpp(const CppType& c);
};

}  // namespace djinni_generated

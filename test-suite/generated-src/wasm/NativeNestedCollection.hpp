// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from nested_collection.djinni

#pragma once

#include "djinni_wasm.hpp"
#include "nested_collection.hpp"

namespace djinni_generated {

struct NativeNestedCollection
{
    using CppType = ::testsuite::NestedCollection;
    using JsType = em::val;
    using Boxed = NativeNestedCollection;

    static CppType toCpp(const JsType& j);
    static JsType fromCpp(const CppType& c);
};

}  // namespace djinni_generated

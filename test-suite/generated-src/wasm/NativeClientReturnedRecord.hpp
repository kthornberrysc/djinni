// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from client_interface.djinni

#pragma once

#include "client_returned_record.hpp"
#include "djinni_wasm.hpp"

namespace djinni_generated {

struct NativeClientReturnedRecord
{
    using CppType = ::testsuite::ClientReturnedRecord;
    using JsType = em::val;
    using Boxed = NativeClientReturnedRecord;

    static CppType toCpp(const JsType& j);
    static JsType fromCpp(const CppType& c);
};

}  // namespace djinni_generated

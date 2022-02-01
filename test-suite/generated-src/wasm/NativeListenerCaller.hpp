// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from multiple_inheritance.djinni

#pragma once

#include "djinni_wasm.hpp"
#include "listener_caller.hpp"

namespace djinni_generated {

struct NativeListenerCaller : ::djinni::JsInterface<::testsuite::ListenerCaller, NativeListenerCaller> {
    using CppType = std::shared_ptr<::testsuite::ListenerCaller>;
    using CppOptType = std::shared_ptr<::testsuite::ListenerCaller>;
    using JsType = em::val;
    using Boxed = NativeListenerCaller;

    static CppType toCpp(JsType j) { return _fromJs(j); }
    static JsType fromCppOpt(const CppOptType& c) { return {_toJs(c)}; }
    static JsType fromCpp(const CppType& c) { return fromCppOpt(c); }

    static em::val cppProxyMethods();

    static em::val init(const em::val& w_first_l,const em::val& w_second_l);
    static void callFirst(const CppType& self);
    static void callSecond(const CppType& self);

};

}  // namespace djinni_generated

// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from set.djinni

#include "NativeSetRecord.hpp"  // my header

namespace djinni_generated {

auto NativeSetRecord::toCpp(const JsType& j) -> CppType {
    return {::djinni::Set<::djinni::String>::Boxed::toCpp(j["set"]),
            ::djinni::Set<::djinni::I32>::Boxed::toCpp(j["iset"])};
}
auto NativeSetRecord::fromCpp(const CppType& c) -> JsType {
    em::val js = em::val::object();
    js.set("set", ::djinni::Set<::djinni::String>::Boxed::fromCpp(c.set));
    js.set("iset", ::djinni::Set<::djinni::I32>::Boxed::fromCpp(c.iset));
    return js;
}

}  // namespace djinni_generated

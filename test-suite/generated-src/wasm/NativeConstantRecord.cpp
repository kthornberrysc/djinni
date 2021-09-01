// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from constants.djinni

#include "NativeConstantRecord.hpp"  // my header

namespace djinni_generated {

auto NativeConstantRecord::toCpp(const JsType& j) -> CppType {
    return {::djinni::I32::Boxed::toCpp(j["someInteger"]),
            ::djinni::String::Boxed::toCpp(j["someString"])};
}
auto NativeConstantRecord::fromCpp(const CppType& c) -> JsType {
    em::val js = em::val::object();
    js.set("someInteger", ::djinni::I32::Boxed::fromCpp(c.some_integer));
    js.set("someString", ::djinni::String::Boxed::fromCpp(c.some_string));
    return js;
}

}  // namespace djinni_generated

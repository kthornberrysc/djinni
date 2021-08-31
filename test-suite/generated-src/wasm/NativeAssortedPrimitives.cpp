// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from primtypes.djinni

#include "NativeAssortedPrimitives.hpp"  // my header

namespace djinni_generated {

auto NativeAssortedPrimitives::toCpp(const JsType& j) -> CppType {
    return {::djinni::Bool::Boxed::toCpp(j["mB"]),
            ::djinni::I8::Boxed::toCpp(j["mEight"]),
            ::djinni::I16::Boxed::toCpp(j["mSixteen"]),
            ::djinni::I32::Boxed::toCpp(j["mThirtytwo"]),
            ::djinni::I64::Boxed::toCpp(j["mSixtyfour"]),
            ::djinni::F32::Boxed::toCpp(j["mFthirtytwo"]),
            ::djinni::F64::Boxed::toCpp(j["mFsixtyfour"]),
            ::djinni::Optional<std::experimental::optional, ::djinni::Bool>::Boxed::toCpp(j["mOB"]),
            ::djinni::Optional<std::experimental::optional, ::djinni::I8>::Boxed::toCpp(j["mOEight"]),
            ::djinni::Optional<std::experimental::optional, ::djinni::I16>::Boxed::toCpp(j["mOSixteen"]),
            ::djinni::Optional<std::experimental::optional, ::djinni::I32>::Boxed::toCpp(j["mOThirtytwo"]),
            ::djinni::Optional<std::experimental::optional, ::djinni::I64>::Boxed::toCpp(j["mOSixtyfour"]),
            ::djinni::Optional<std::experimental::optional, ::djinni::F32>::Boxed::toCpp(j["mOFthirtytwo"]),
            ::djinni::Optional<std::experimental::optional, ::djinni::F64>::Boxed::toCpp(j["mOFsixtyfour"])};
}
auto NativeAssortedPrimitives::fromCpp(const CppType& c) -> JsType {
    em::val js = em::val::object();
    js.set("mB", ::djinni::Bool::Boxed::fromCpp(c.b));
    js.set("mEight", ::djinni::I8::Boxed::fromCpp(c.eight));
    js.set("mSixteen", ::djinni::I16::Boxed::fromCpp(c.sixteen));
    js.set("mThirtytwo", ::djinni::I32::Boxed::fromCpp(c.thirtytwo));
    js.set("mSixtyfour", ::djinni::I64::Boxed::fromCpp(c.sixtyfour));
    js.set("mFthirtytwo", ::djinni::F32::Boxed::fromCpp(c.fthirtytwo));
    js.set("mFsixtyfour", ::djinni::F64::Boxed::fromCpp(c.fsixtyfour));
    js.set("mOB", ::djinni::Optional<std::experimental::optional, ::djinni::Bool>::Boxed::fromCpp(c.o_b));
    js.set("mOEight", ::djinni::Optional<std::experimental::optional, ::djinni::I8>::Boxed::fromCpp(c.o_eight));
    js.set("mOSixteen", ::djinni::Optional<std::experimental::optional, ::djinni::I16>::Boxed::fromCpp(c.o_sixteen));
    js.set("mOThirtytwo", ::djinni::Optional<std::experimental::optional, ::djinni::I32>::Boxed::fromCpp(c.o_thirtytwo));
    js.set("mOSixtyfour", ::djinni::Optional<std::experimental::optional, ::djinni::I64>::Boxed::fromCpp(c.o_sixtyfour));
    js.set("mOFthirtytwo", ::djinni::Optional<std::experimental::optional, ::djinni::F32>::Boxed::fromCpp(c.o_fthirtytwo));
    js.set("mOFsixtyfour", ::djinni::Optional<std::experimental::optional, ::djinni::F64>::Boxed::fromCpp(c.o_fsixtyfour));
    return js;
}

}  // namespace djinni_generated
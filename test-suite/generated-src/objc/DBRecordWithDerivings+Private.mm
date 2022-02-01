// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from derivings.djinni

#import "DBRecordWithDerivings+Private.h"
#import "DJIMarshal+Private.h"
#include <cassert>

namespace djinni_generated {

auto RecordWithDerivings::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::I8::toCpp(obj.eight),
            ::djinni::I16::toCpp(obj.sixteen),
            ::djinni::I32::toCpp(obj.thirtytwo),
            ::djinni::I64::toCpp(obj.sixtyfour),
            ::djinni::F32::toCpp(obj.fthirtytwo),
            ::djinni::F64::toCpp(obj.fsixtyfour),
            ::djinni::Date::toCpp(obj.d),
            ::djinni::String::toCpp(obj.s)};
}

auto RecordWithDerivings::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[DBRecordWithDerivings alloc] initWithEight:(::djinni::I8::fromCpp(cpp.eight))
                                                sixteen:(::djinni::I16::fromCpp(cpp.sixteen))
                                              thirtytwo:(::djinni::I32::fromCpp(cpp.thirtytwo))
                                              sixtyfour:(::djinni::I64::fromCpp(cpp.sixtyfour))
                                             fthirtytwo:(::djinni::F32::fromCpp(cpp.fthirtytwo))
                                             fsixtyfour:(::djinni::F64::fromCpp(cpp.fsixtyfour))
                                                      d:(::djinni::Date::fromCpp(cpp.d))
                                                      s:(::djinni::String::fromCpp(cpp.s))];
}

}  // namespace djinni_generated

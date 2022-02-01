// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from duration.djinni

#import "DBRecordWithDurationAndDerivings+Private.h"
#import "DJIMarshal+Private.h"
#import "Duration-objc.hpp"
#include <cassert>

namespace djinni_generated {

auto RecordWithDurationAndDerivings::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::Duration<::djinni::F64, ::djinni::Duration_ns>::toCpp(obj.dt)};
}

auto RecordWithDurationAndDerivings::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[DBRecordWithDurationAndDerivings alloc] initWithDt:(::djinni::Duration<::djinni::F64, ::djinni::Duration_ns>::fromCpp(cpp.dt))];
}

}  // namespace djinni_generated

// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from djinni_perf_benchmark.djinni

#import "TXSRecordSixInt.h"
#include "RecordSixInt.hpp"

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class TXSRecordSixInt;

namespace djinni_generated {

struct RecordSixInt
{
    using CppType = ::snapchat::djinni::benchmark::RecordSixInt;
    using ObjcType = TXSRecordSixInt*;

    using Boxed = RecordSixInt;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCpp(const CppType& cpp);
};

}  // namespace djinni_generated

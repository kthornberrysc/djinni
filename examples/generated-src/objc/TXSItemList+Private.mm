// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from example.djinni

#import "TXSItemList+Private.h"
#import "DJIMarshal+Private.h"
#include <cassert>

namespace djinni_generated {

auto ItemList::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::List<::djinni::String>::toCpp(obj.items)};
}

auto ItemList::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[TXSItemList alloc] initWithItems:(::djinni::List<::djinni::String>::fromCpp(cpp.items))];
}

}  // namespace djinni_generated

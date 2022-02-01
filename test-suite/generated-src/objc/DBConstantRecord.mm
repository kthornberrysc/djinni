// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from constants.djinni

#import "DBConstantRecord.h"


@implementation DBConstantRecord

- (nonnull instancetype)initWithSomeInteger:(int32_t)someInteger
                                 someString:(nonnull NSString *)someString
{
    if (self = [super init]) {
        _someInteger = someInteger;
        _someString = [someString copy];
    }
    return self;
}

+ (nonnull instancetype)constantRecordWithSomeInteger:(int32_t)someInteger
                                           someString:(nonnull NSString *)someString
{
    return [[self alloc] initWithSomeInteger:someInteger
                                  someString:someString];
}

#ifndef DJINNI_DISABLE_DESCRIPTION_METHODS
- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p someInteger:%@ someString:%@>", self.class, (void *)self, @(self.someInteger), self.someString];
}

#endif
@end

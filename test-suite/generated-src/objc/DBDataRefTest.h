// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from data_ref_view.djinni

#import <Foundation/Foundation.h>
@class DBDataRefTest;


@interface DBDataRefTest : NSObject

- (void)sendData:(nonnull NSData *)data;

- (nonnull NSData *)retriveAsBin;

- (void)sendMutableData:(nonnull NSData *)data;

- (nonnull NSData *)generateData;

- (nonnull NSData *)dataFromVec;

- (nonnull NSData *)dataFromStr;

- (nonnull NSData *)sendDataView:(nonnull NSData *)data;

- (nonnull NSData *)recvDataView;

+ (nullable DBDataRefTest *)create;

@end
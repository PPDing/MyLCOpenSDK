//
//  OpenSDK_ConvertListener.h
//  LCOpenSDK
//
//  Copyright (c) 2016-2025 dahua. All rights reserved.
//

#ifndef OpenSDK_ConvertListener_h
#define OpenSDK_ConvertListener_h

#import <Foundation/Foundation.h>

/**
 The protocol for receiving video conversion callbacks
 */
@protocol OpenSDK_ConvertListener <NSObject>

/**
 Callback for conversion progress
 
 @param progress Conversion progress (percentage)
 @param index The index identifier for the conversion task
 */
- (void)onConvertProgress:(NSInteger)progress Index:(NSInteger)index;

/**
 Callback for conversion error
 
 @param errorCode Error code (refer to OC_CONVERT_ERROR definitions)
 @param index The index identifier for the conversion task
 */
- (void)onConvertError:(NSInteger)errorCode Index:(NSInteger)index;

/**
 Callback for converted stream data
 
 @param data The stream data
 @param len Length of the stream data
 @param frameType Frame type: 0 for I frame, 1 for P frame, 2 for audio frame
 @param index The index identifier for the conversion task
 */
- (void)onConvertFrame:(void*)data Len:(NSInteger)len FrameType:(NSInteger)frameType Index:(NSInteger)index;

@end

#endif /* OpenSDK_ConvertListener_h */

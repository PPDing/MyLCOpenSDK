//
//  OpenSDK_Convert.h
//  LCOpenSDK
//
//  Copyright (c) 2016-2025 dahua. All rights reserved.
//

#ifndef OpenSDK_Convert_h
#define OpenSDK_Convert_h

#import "OpenSDK_Define.h"
#import <Foundation/Foundation.h>

@protocol OpenSDK_ConvertListener;
@interface OpenSDK_Convert : NSObject

/**
 Set the listener for conversion events
 
 @param listener The listener object that conforms to OpenSDK_ConvertListener protocol
 */
- (void)setListener:(id<OpenSDK_ConvertListener>)listener;

/**
 Start media file conversion
 
 @param srcFile Source file path (including filename)
 @param dstFile Destination file path (including filename)
 @param mediaType Target media format (refer to E_MEDIA_CONVERT_TYPE definition)
 @return 0 for success, non-zero for failure
 
 @note This is an asynchronous operation. Conversion progress and results will be notified via callbacks.
 */
- (int)startConvert:(NSString*)srcFile dst:(NSString*)dstFile mediaType:(E_MEDIA_CONVERT_TYPE)mediaType;

/**
 Set the index for asynchronous callbacks
 
 @param index The index value to identify the callback
 */
- (void)setIndex:(NSInteger)index;

/**
 Stop the ongoing conversion process
 
 @return 0 for success, non-zero for failure
 */
- (int)stopConvert;

/**
 Start real-time stream conversion (stream-to-stream only)
 
 @param type Target conversion format
 @param frameRate Target frame rate
 @return -1 for failure, other values indicate success
 */
- (int)startConvertReal:(E_MEDIA_CONVERT_TYPE)type frameRate:(NSInteger)frameRate;

/**
 Start real-time stream conversion with specified source format (stream-to-stream only)
 
 @param type Target conversion format
 @param frameRate Input frame rate (required for raw streams)
 @param srcFormat Source video format (e.g. H264). Use UNKNOWN to maintain same behavior as old interface
 @return -1 for failure, other values indicate success
 */
- (int)startConvertRealWithDefiniteFormat:(E_MEDIA_CONVERT_TYPE)type frameRate:(NSInteger)frameRate srcFormat:(NSString*)srcFormat;

/**
 Input data for conversion
 
 @param data Pointer to the data to be converted
 @param len Length of the data to be converted
 @return -1 for failure, other values indicate success
 */
- (int)putData:(void*)data len:(NSInteger)len;

/**
 Input data for conversion with frame rate specification
 
 @param data Pointer to the data to be converted
 @param len Length of the data to be converted
 @param framerate Frame rate of the input data
 @return -1 for failure, other values indicate success
 */
- (int)putDataWithFramerate:(void*)data len:(NSInteger)len framerate:(NSInteger)framerate;

@end

#endif /* OpenSDK_Convert_h */

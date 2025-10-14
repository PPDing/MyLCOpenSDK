//
//  OpenSDK_DownloadListener.h
//  LCOpenSDK
//
//  Copyright (c) 2016-2025 dahua. All rights reserved.
//

#ifndef OpenSDK_DownloadListener_h
#define OpenSDK_DownloadListener_h

#import <Foundation/Foundation.h>

/**
 *  Cloud video recording download callback listener protocol
 */
@protocol OpenSDK_DownloadListener <NSObject>

@optional
/**
 *  Callback for received data length during recording download
 *
 *  @param index   Download index
 *  @param datalen Length of received data
 */
- (void)onDownloadReceiveData:(NSInteger)index datalen:(NSInteger)datalen;

/**
 *  Callback for download status changes
 *
 *  @param index Download index
 *  @param code  Status code:
 *               - For type=1 (HLS):
 *                 0: Download failed
 *                 1: Download started
 *                 2: Download finished
 *                 3: Download canceled
 *                 7: Download timeout
 *               - For type=7 (EXPRESS):
 *                 2: Download finished
 *                 3: Network exception
 *                 4: Download exception
 *                 9: Download completed
 *                 11: Download paused
 *                 12: Download resumed
 *  @param type  Download type:
 *               1: HLS
 *               2: Express
 *               99: OPENAPI
 */
- (void)onDownloadState:(NSInteger)index code:(NSString *)code type:(NSInteger)type;

/**
 *  Download progress callback (may not be available, use onDownloadReceiveData to calculate progress manually)
 *
 *  @param index    Download index
 *  @param progress Download progress (0.0 - 1.0)
 *  @param type     Download type:
 *                  [0:RTSP, 1:HLS, 2:FILE, 3:NETSDK, 4:SIP, 5:DHHTTP, 6:DPSDK, 7:EXPRESS, 8:CLOUDBASE, 9:RTP]
 */
- (void)onDownloadProgress:(NSInteger)index progress:(float)progress type:(NSInteger)type;

/**
 *  Callback for thumbnail generation status during recording download
 *
 *  @param index Download index
 *  @param code  Status code:
 *               0: Failed
 *               1: Success
 */
- (void)onThumbnailState:(NSInteger)index code:(NSInteger)code;

@end

#endif /* OpenSDK_DownloadListener_h */

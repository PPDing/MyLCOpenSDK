//
//  OpenSDK_Download.h
//  LCOpenSDK
//
//  Copyright (c) 2016-2025 dahua. All rights reserved.
//

#import <OpenSDKDynamic/OpenSDK_DownloadListener.h>
#import <OpenSDKDynamic/OpenSDK_Params.h>
#import <Foundation/Foundation.h>

@interface OpenSDK_Download : NSObject <OpenSDK_DownloadListener>

/**
 *  Get the singleton instance of cloud video download component
 *
 *  @return Singleton pointer of OpenSDK_Download
 */
+ (OpenSDK_Download*)shareMyInstance;

/**
 *  Set the listener object
 *
 *  @param listener Pointer to the listener object
 */
- (void)setListener:(id<OpenSDK_DownloadListener>)listener;

/**
 *  Get the pointer of listener object
 *
 *  @return Pointer to the listener object
 */
- (id<OpenSDK_DownloadListener>)getListener;

- (NSInteger)startDownloadWithIndex:(NSInteger)index localRecordParams:(OpenSDK_LocalRecordDownloadParams*)downloadParams;

/**
 *  Start downloading cloud video recording
 *
 *  @param index      Download index value
 *  @param filepath   Download path
 *  @param accessTok  Admin token/user token
 *  @param deviceID   Device ID
 *  @param channelID  Channel ID
 *  @param psk        Device secret key
 *  @param recordID   Recording ID
 *  @param type       Cloud recording type: 0 for alarm, 1 for timed
 *  @param timeout    API call timeout duration
 *
 *  @return 0 if API call succeeds
 *         -1 if API call fails
 */
- (NSInteger)startDownload:(NSInteger)index filepath:(NSString*)filepath token:(NSString*)accessTok devID:(NSString*)deviceID channelID:(NSInteger)channelID psk:(NSString*)psk recordID:(NSString *)recordID Type:(NSInteger)type Timeout:(NSInteger)timeout;

/**
 *  Start downloading device recording
 *
 *  @param index        Download index value
 *  @param filepath     Download path
 *  @param token        Admin token/user token
 *  @param deviceID     Device ID
 *  @param decryptKey   Video decryption key
 *  @param fileID       Device recording file name
 *  @param speed        Download speed: 1/2/4/8/16, where 1 means normal playback speed
 *  @param isTls        Whether to use TLS link encryption
 *
 *  @return 0 if API call succeeds
 *         -1 if API call fails
 */
- (NSInteger)startDownload:(NSInteger)index filepath:(NSString*)filepath token:(NSString*)token devID:(NSString*)deviceID decryptKey:(NSString*)decryptKey fileID:(NSString*)fileID speed:(double)speed isTls:(BOOL)isTls;

/**
 *  Start downloading with JSON string
 *
 *  @param index       Download index value
 *  @param jsonString  JSON configuration string
 *
 *  @return 0 if API call succeeds
 *         -1 if API call fails
 */
- (NSInteger)startDownloadWithJsonString:(NSInteger)index jsonString:(NSString*)jsonString;

/**
 *  Stop downloading recording
 *
 *  @param index  Download index value
 *
 *  @return YES if API call succeeds
 *          NO if API call fails
 */
- (BOOL)stopDownload:(NSInteger)index;

/**
 *  Stop all downloads
 */
- (void)stopDownload;

/**
 *  Pause download
 *
 *  @param index  Download index value
 *
 *  @return YES if API call succeeds
 *          NO if API call fails
 */
- (BOOL)pauseDownload:(NSInteger)index;

/**
 *  Resume download
 *
 *  @param index  Download index value
 *
 *  @return YES if API call succeeds
 *          NO if API call fails
 */
- (BOOL)resumeDownload:(NSInteger)index;

/**
 *  Update download parameters with JSON data
 *
 *  @param index       Download index value
 *  @param jsonString  JSON configuration string
 */
- (void)changeDownloadParams:(NSInteger)index jsonstring:(NSString *)jsonString;

@end

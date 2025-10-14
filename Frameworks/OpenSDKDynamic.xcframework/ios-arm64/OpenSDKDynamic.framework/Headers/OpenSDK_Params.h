//
//  OpenSDK_Params.h
//  LCOpenSDK
//
//  Created by DarrenDing on 2025/5/13.
//  Copyright © 2025 Dahua. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OpenSDK_Params : NSObject

@property (nonatomic, copy) NSString* deviceId;
@property (nonatomic, copy) NSString* playInfo; // encrypted playInfo
@property (nonatomic, assign) NSInteger channelId;

@end

@interface OpenSDK_RealTimeParams : OpenSDK_Params

@property (nonatomic, assign) NSInteger streamType;
/**
 * set disableSharedLink to YES if GB or ARC device.
 * GB: "deviceList" --> deviceInfo --> "secondCategoryCode"=="gb";
 * ARC: "deviceList" --> deviceInfo --> "catalog"=="ARC".
 */
@property (nonatomic, assign) BOOL disableSharedLink;
/**
 * default NO.
 * GB device not supported.
 * Configure P2P servers firtst (OpenSDK_LoginManager configureP2PServerWithToken:).
 * Emplloy pre-hole-punching to increase P2P success rates (OpenSDK_LoginManager addDevicesWithDevicePlayInfos:).
 */
@property (nonatomic, assign) BOOL enableP2P;   // default NO;

@end

@interface OpenSDK_PlaybackParams : OpenSDK_Params

/**
 * if neither nil nor an empty string, SDK will playback by fileId.
 * otherwise, playback by time.
 * playback by fileId is recommended for it is more efficient.
 */
@property (nonatomic, copy) NSString* fileId;

/**
 * when playback by fileId, the following three params will be ignored.
 * if playback by begin-end time, the fileId should be  nil or an empty string.
 * streamType: 0 for main-stream; 1 for sub-stream.
 */
@property (nonatomic, assign) NSInteger streamType;
@property (nonatomic, assign) NSInteger beginTime;
@property (nonatomic, assign) NSInteger endTime;

@property (nonatomic, assign) NSInteger offsetTime;  // not supported yet

@property (nonatomic, assign) BOOL enableP2P;

@end



@interface OpenSDK_TalkParams : OpenSDK_Params

@property (nonatomic, copy) NSString* talkType;
@property (nonatomic, assign) BOOL disableSharedLink;
@property (nonatomic, assign) BOOL enableP2P;

@end

@interface OpenSDK_CloudParams : OpenSDK_Params

@property (nonatomic, copy) NSString* recordId;
@property (nonatomic, copy) NSString* recordPath;
@property (nonatomic, copy) NSString* recordRegionId;

@property (nonatomic, assign) NSInteger beginTime;
@property (nonatomic, assign) NSInteger endTime;

@property (nonatomic, assign) NSInteger offsetTime; // not supported yet

@end


@interface OpenSDK_RecordDownloadParams : NSObject

@property (nonatomic, assign) NSInteger fileFormat; // 0:dav 1:mp4
@property (nonatomic, copy) NSString* filePath;
@property (nonatomic, copy) NSString* thumbnailFilePath;    // .jpeg
@property (nonatomic, assign) NSInteger needBeginTime;
@property (nonatomic, assign) NSInteger needEndTime;
@property (nonatomic, assign) BOOL enableCacheMode;

@end

@interface OpenSDK_LocalRecordDownloadParams : OpenSDK_RecordDownloadParams
@property (nonatomic, strong) OpenSDK_PlaybackParams* localRecordParams;
@end

@interface OpenSDK_DevicePlayInfo : NSObject

@property (nonatomic, copy) NSString* deviceId;
@property (nonatomic, copy) NSString* playInfo; // encrypted playInfo

@end

NS_ASSUME_NONNULL_END

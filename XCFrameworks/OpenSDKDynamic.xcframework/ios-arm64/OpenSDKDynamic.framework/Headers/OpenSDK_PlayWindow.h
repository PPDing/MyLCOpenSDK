//
//  OpenSDK_PlayWindow.h
//  LCOpenSDK
//
//  Copyright (c) 2016-2025 dahua. All rights reserved.
//

#ifndef LCOpenSDK_OpenSDK_PlayWindow_h
#define LCOpenSDK_OpenSDK_PlayWindow_h

#import <OpenSDKDynamic/OpenSDK_EventListener.h>
#import <OpenSDKDynamic/OpenSDK_Define.h>
#import <OpenSDKDynamic/OpenSDK_OSDInfo.h>
#import <OpenSDKDynamic/OpenSDK_Params.h>
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

// PS/TS standard stream types
typedef NS_ENUM(NSInteger, OpenSDKOutputStreamFormat) {
    OpenSDKOutputStreamFormatNULL = 0,   // No stream export
    OpenSDKOutputStreamFormatPS,         // PS standard stream
    OpenSDKOutputStreamFormatTS          // TS standard stream
};

@interface FisheyeCorrdinate : NSObject
@property (nonatomic) NSInteger FisheyeCoordinate_X; /* X coordinate of point chain */
@property (nonatomic) NSInteger FisheyeCoordinate_Y; /* Y coordinate of point chain */
@end

@interface FisheyeSubWinInfo : NSObject
@property (nonatomic) NSInteger SubWinNum;   /* Sub-window index */
@property (nonatomic) NSInteger SubWin_Corrdinate_X; /* Sub-window X coordinate */
@property (nonatomic) NSInteger SubWin_Corrdinate_Y; /* Sub-window Y coordinate */
@property (nonatomic) NSInteger SubWin_W;    /* Sub-window width */
@property (nonatomic) NSInteger SubWin_H;    /* Sub-window height */
@end

@interface OpenSDK_PlayWindow : NSObject <OpenSDK_EventListener>

/**
 * Initialize play window
 *
 * @param frame Window frame
 * @param index Play window index
 *
 * @return OpenSDK_PlayWindow pointer
 */
- (id)initPlayWindow:(CGRect)frame Index:(NSInteger)index;

/**
 * Deinitialize play window
 */
- (void)uninitPlayWindow;

/**
 * Set whether play window gesture events are captured by upper window
 *
 * @param flag Boolean value
 */
- (void)openTouchListener:(BOOL)flag;

/**
 * Get index value
 */
- (NSInteger)getIndex;

/**
 * Set index value
 * @param index Index value, passed before playback, returned in callback for distinguishing different playback objects when using the same listener
 */
- (void)setIndex:(NSInteger)index;

/**
 * Get play window
 *
 * @return Play window pointer
 */
- (UIView*)getWindowView;

/**
 * Set play window
 *
 * @param rect Play window frame
 */
- (void)setWindowFrame:(CGRect)rect;

/**
 * Set play window listener
 *
 * @param lis Listener pointer
 */
- (void)setWindowListener:(id<OpenSDK_EventListener>)lis;

/**
 * Get play window listener pointer
 *
 * @return Listener pointer
 */
- (id<OpenSDK_EventListener>)getWindowListener;

/**
 * Set play window background color
 *
 * @param normalColor Background color
 */
- (void)setSurfaceBGColor:(UIColor*)normalColor;

/**
 * Play audio
 *
 * @return 0: Success
 *        -1: Failure
 */
- (NSInteger)playAudio;

/**
 * Stop audio
 *
 * @return 0: Success
 *        -1: Failure
 */
- (NSInteger)stopAudio;

/**
 * Seek in recording
 *
 * @param timeInfo Offset seconds from start time
 *
 * @return 0: Success
 *        -1: Failure
 */
- (NSInteger)seek:(NSInteger)timeInfo;

/**
 * Pause playback
 *
 * @return 0: Success
 *        -1: Failure
 */
- (NSInteger)pause;

/**
 * Resume playback
 *
 * @return 0: Success
 *        -1: Failure
 */
- (NSInteger)resume;

/**
 * Reconnect stream to prevent device sleep
 *
 * @return 0: Success
 *        -1: Failure
 */
- (NSInteger)rewake;

/**
 * Take snapshot
 *
 * @param filePath Image save path
 *
 * @return 0: Success
 *        -1: Failure
 */
- (NSInteger)snapShot:(NSString*)filePath;

/**
 * Start video recording
 *
 * @param filePath    Recording save path
 * @param nRecordType Recording format: 0: dav
 *                                   1: mp4
 * @param mode Recording mode: 0: Single file
 *                                   1: Multiple files
 *
 * @return 0: Success
 *        -1: Failure
 */
- (NSInteger)startRecord:(NSString*)filePath recordType:(NSInteger)nRecordType convertMode:(NSInteger)mode;

/**
 * Start video-only recording (MP4 format)
 *
 * @param filePath    Recording save path
 * @param nRecordType Recording format: 0: dav
 *                                   1: mp4
 * @param mode Recording mode: 0: Single file
 *                                   1: Multiple files
 *
 * @return 0: Success
 *        -1: Failure
 */
- (NSInteger)startRecordVideoOnly:(NSString*)filePath recordType:(NSInteger)nRecordType convertMode:(NSInteger)mode;

/**
 * Stop video recording
 *
 * @return 0: Success
 *        -1: Failure
 */
- (NSInteger)stopRecord;

/**
 * Set PS/TS standard stream export
 *
 * @param streamFormat [in] Standard stream type
 */
- (void)setStreamCallback:(OpenSDKOutputStreamFormat)streamFormat;

/**
 * EPTZ zoom operation
 *
 * @param scale Zoom ratio
 */
- (void)doScale:(CGFloat)scale;

/**
 * Get EPTZ zoom ratio
 *
 * @return -1: Failure
 *         Others: Success
 */
- (CGFloat)getScale;

/**
 * Start window panning
 *
 * @return YES: Success
 *         NO: Failure
 */
- (BOOL)doTranslateBegin;

/**
 * EPTZ slide operation
 *
 * @param x Play window X coordinate
 * @param y Play window Y coordinate
 */
- (void)doTranslateX:(CGFloat)x Y:(CGFloat)y;

/**
 * End window panning
 *
 * @return YES: Success
 *         NO: Failure
 */
- (BOOL)doTranslateEnd;

/**
 * Get current panning X position (percentage)
 *
 * @return Position (-100% to 100%)
 */
- (CGFloat)getTranslatePercentX;

/**
 * Get current panning Y position (percentage)
 *
 * @return Position (-100% to 100%)
 */
- (CGFloat)getTranslatePercentY;

/**
 * Get window movement distance (X coordinate)
 *
 * @return Movement distance
 */
- (CGFloat)getTranslateX;

/**
 * Get window movement distance (Y coordinate)
 *
 * @return Movement distance
 */
- (CGFloat)getTranslateY;

/**
 * Start electronic zoom
 */
- (void)doEZoomBegin;

/**
 * Electronic zoom
 * @param scale Zoom factor
 */
- (void)doEZooming:(CGFloat)scale;

/**
 * End electronic zoom
 */
- (void)doEZoomEnd;

/**
 * Reset zoom and pan operations
 */
- (void)setIdentity;

/**
 * Get current stream type
 * @return Current stream type (refer to E_STREAM_MODE definition)
 */
- (E_STREAM_MODE)getCurrentStreamMode;

/**
 * Play with JSON string format
 * @param jsonString JSON parameter string
 * @return 0/non-zero Success/Failure
 */
- (NSInteger)playBrotherWithJsonString:(NSInteger)baseIndex jsonParam:(NSString*)jsonString;

- (NSInteger)stopBrotherPlay;

- (BOOL)switcherPlayer:(BOOL)isStopFront bg:(BOOL)isOpenBg;

/**
 * Change playback parameters with JSON string format
 * @param jsonParams JSON format camera playback parameters
 */
- (void)changePlayParams:(NSString *)jsonParams;

/**
 * Play with JSON string format
 * @param jsonString JSON parameter string
 * @return 0/non-zero Success/Failure
 */
- (NSInteger)playWithJsonString:(NSString*)jsonString;

/**
 * Stop playback
 * @return 0/non-zero Success/Failure
 */
- (NSInteger)stopPlay;

/**
 * Stop playback while keeping last frame
 * @param isKeepLastFrame Whether to keep last frame
 * @return Result
 */
- (NSInteger)stopPlay:(BOOL)isKeepLastFrame;

/**
 * Stop playback (synchronous, called when force killing app)
 * @return 0/non-zero Success/Failure
 */
- (NSInteger)stopPlaySync;

- (void)setMaxScale:(CGFloat)scale;

/**
 * Set playback speed (normal speed is 1.0)
 * @param speed Playback speed
 */
- (void)setPlaySpeed:(float)speed;

/**
 * Get current playback speed
 * @return Playback speed
 */
- (float)getPlaySpeed;

/**
 * Enable fisheye
 * @return YES/NO Success/Failure
 */
- (BOOL)enableFishEye;

/**
 * Disable fisheye
 */
- (void)disableFishEye;

/**
 * Start fisheye operation
 * @param x x Coordinates
 * @param y y Coordinates
 * @return YES/NO
 */
- (BOOL)startFishEye:(float)x y:(float)y;

/**
 * Operate fisheye
 * @param x x Coordinates
 * @param y y Coordinates
 */
- (void)doingFishEye:(float)x y:(float)y;

/**
 * End fisheye operation
 * @return YES/NO
 */
- (BOOL)endFishEye;

/**
 * Set noise reduction mode level (effective after playsound)
 * @param mode (-1,0,1,2,3,4)
 * -1: No noise reduction
 * 0: Minimum noise reduction, least damage to useful voice signals
 * 4: Maximum noise reduction, most damage to useful voice signals
 * @return YES/NO
 */
- (BOOL)setSEnHanceMode:(NSInteger)mode;

/**
 * Play next frame
 */
- (void)playNextFrame;

/**
 * Play continuous frames
 */
- (void)playContinuousFrame;

/**
 * Check if recording is in progress
 */
- (BOOL)isRecording;

/**
 * Get playback status
 * STATUS_PLAYING      0
 * STATUS_STOPED       1
 * STATUS_PAUSE        2
 * STATUS_REQUESING    3
 * STATUS_FAILED       4
 * STATUS_SEEKING      5
 */
- (NSInteger)getPlayerStatus;

/**
 * Set fisheye installation mode and correction mode
 * @param installMode Installation mode
 * @param correctMode Correction mode
 * @return Whether setup succeeded
 * - false: Failed
 * - true: Success
 * @note After successful setup, the fisheye image will change according to correction mode
 */
- (BOOL)fishEyeSetOptInfo:(NSInteger)installMode correctMode:(NSInteger)correctMode;

/**
 * Get fisheye drawing information
 * @param winType Window type: 0 fisheye circle, 1 panorama, 2 sub-window
 * @param winId Window index (0-based, left to right, top to bottom)
 * @param screenResolutionH Desired screen output resolution height
 * @param screenResolutionW Desired screen output resolution width
 * @param pFishEyeCoordinate Fisheye point chain coordinates for drawing distortion lines
 * @param pSubWinCoordinate Sub-window coordinates for drawing borders
 * @return Whether operation succeeded
 * - false: Failed
 * - true: Success
 */
- (BOOL)fishEyeGetOptInfo:(NSInteger)winType
                    winId:(NSInteger)winId
        screenResolutionH:(NSInteger)screenResolutionH
        screenResolutionW:(NSInteger)screenResolutionW
       pFishEyeCoordinate:(NSMutableArray<FisheyeCorrdinate*>*)pFishEyeCoordinate
        pSubWinCoordinate:(NSMutableArray<FisheyeSubWinInfo*>*)pSubWinCoordinate;

/**
 * Check if specified point is within sub-window
 * @param winId Sub-window index (0-based, left to right, top to bottom)
 * @param pointX Point X coordinate
 * @param pointY Point Y coordinate
 * @return Whether point is within sub-window
 * - false: Not within
 * - true: Within
 */
- (BOOL)fishEyeCheckPointPosition:(NSInteger)winId
                           pointX:(NSInteger)pointX
                           pointY:(NSInteger)pointY;

/**
 * Fisheye drag picture function
 * @param winType Window type: 0 fisheye circle, 1 panorama, 2 sub-window
 * @param winId Window index
 * @param OffsetX Horizontal drag offset
 * @param OffsetY Vertical drag offset
 * @param pFishEyeCoordinate Fisheye point chain coordinates
 * @return Whether drag succeeded
 * - false: Failed
 * - true: Success
 */
- (BOOL)fishEyeDragPic:(NSInteger)winType
                 winId:(NSInteger)winId
               OffsetX:(NSInteger)OffsetX
               OffsetY:(NSInteger)OffsetY
    pFishEyeCoordinate:(NSMutableArray<FisheyeCorrdinate*>*)pFishEyeCoordinate;

/**
 * Fisheye move function
 * @param moveDirection 0: Left, 1: Right, 2: Up, 3: Down
 * @param moveRange Wall-mounted panorama: 1~180 * 128
 *                 Ceiling/floor mounted: 1~360 * 128
 * @param winId Window index
 * @param pFishEyeCoordinate Fisheye point chain coordinates
 * @return Whether operation succeeded
 * - false: Failed
 * - true: Success
 */
- (BOOL)fishEyeMove:(int)moveDirection
          moveRange:(int)moveRange
              winId:(int)winId
 pFishEyeCoordinate:(NSMutableArray<FisheyeCorrdinate*>*)pFishEyeCoordinate;

/**
 * Fisheye zoom function
 * @param operateMode 0: Zoom in, 1: Zoom out
 * @param multiple Zoom factor (1~8)
 * @param winId Window index
 * @param pFishEyeCoordinate Fisheye point chain coordinates
 * @return Whether operation succeeded
 * - false: Failed
 * - true: Success
 */
- (BOOL)fishEyeExtend:(int)operateMode
             multiple:(int)multiple
                winId:(int)winId
   pFishEyeCoordinate:(NSMutableArray<FisheyeCorrdinate*>*)pFishEyeCoordinate;

/**
 * Fisheye circle rotation function
 * @param direction Rotation range (only for fisheye circle or mobile mode)
 *                 Clockwise: 1~360 * 128, Counter-clockwise: -360 * 128~-1
 * @param winId Window index
 * @param pFishEyeCoordinate Fisheye point chain coordinates
 * @return Whether operation succeeded
 * - false: Failed
 * - true: Success
 */
- (BOOL)fishEyeRotate:(int)direction
                winId:(int)winId
   pFishEyeCoordinate:(NSMutableArray<FisheyeCorrdinate*>*)pFishEyeCoordinate;

/**
 * Set PLAYSDK log level
 * 0: unknown
 * 1: fatal (only fatal logs)
 * 2: error (fatal + error)
 * 3: warn (fatal + error + warn)
 * 4: info (fatal + error + warn + info)
 * 5: trace (fatal + error + warn + info + trace)
 * 6: debug (all logs)
 */
- (void)setPlaySDKLog:(int)level;

/**
 * Set GDPR encryption key
 */
- (void)setKey:(NSString*)passwordkey;

/**
 * Set decoding engine: 0: Software, 1: Hardware
 */
- (void)setDecodeEngine:(NSInteger)engineType;

/**
 * Set real-time play policy
 */
- (void)setRealPlayPolicy:(NSInteger)realPlayType playPolicy:(NSInteger)playPolicy waitTime:(NSInteger)waitTime;

- (NSNumber*)getPlayHandle;
- (NSNumber*)getLoginHandle;

/**
 * Check if shared link stream handle exists
 * @param handleKey Shared link identifier
 * @return YES: Exists, NO: Doesn't exist
 */
- (BOOL)isOptHandleOK:(NSString*)handleKey;

/**
 * Set or add display region (for partial zoom)
 * @param regionNum Display region index (0~(MAX_DISPLAY_WND-1), 0 means main window)
 * @param view Display window handle
 * @param bEnable Enable/disable display region
 */
- (BOOL)setDisplayRegion:(int)regionNum view:(void*)view bEnable:(BOOL)bEnable;

/**
 * Check if stream is fisheye
 */
- (BOOL)isFishEyeStream;

/**
 * Set play window aspect ratio
 * @param width Width
 * @param height Height
 */
- (BOOL)setViewProportionWidth:(int)width height:(int)height;

/**
 * Set audio channel switch
 * @param channelId Audio channel number (0-based)
 * @param flag YES: Enable, NO: Disable
 * @return BOOL TRUE: Success, FALSE: Failure
 */
- (BOOL)chooseAudio:(NSInteger)channelId flag:(BOOL)flag;

/**
 * Get total number of audio channels (only valid after stream parsing)
 * @return Number of channels (-1: Failure)
 */
- (NSInteger)getAudioChannelNum;

/**
 * Add file segments for segmented playback
 * @param fileListJson JSON string of file segments
 * @return -1: Failure, 0: Success
 */
- (NSInteger)addFileList:(NSString*)fileListJson;

/**
 * Update all file segments for segmented playback
 * @param fileListJson JSON string of file segments list
 * @return -1: Failure, 0: Success
 */
- (NSInteger)updateFileList:(NSString*)fileListJson;

/**
 * Set real-time playback strategy
 * @param startTime Start play time (default 240ms)
 * @param slowTime Threshold time
 * @param fastTime Catch-up time
 * @param failedTime Failure time
 */
- (void)setPlayMethod:(NSInteger)startTime slowTime:(NSInteger)slowTime fastTime:(NSInteger)fastTime failedTime:(NSInteger)failedTime;

- (NSInteger)playFile:(NSString*)fileName;

- (NSInteger)stopFile;

/**
 * IVS smart data master switch
 * @param enable 1: Enable, 0: Disable
 * @return -1: Failure, 0: Success
 */
- (NSInteger)renderPrivateData:(int)enable;

/**
 * IVS smart data sub-switch
 * @param ivsType Enum value (see OC_IVS_TYPE in OpenSDK_Define.h)
 * @param enable 1: Enable, 0: Disable
 * @return -1: Failure, 0: Success
 */
- (NSInteger)setIvsEnable:(int)ivsType enable:(int)enable;

/**
 * Set special effects
 * @param mode
 * -1: No effect
 * 0: Grayscale
 * 1: Pure black and white
 * 2: Brightness
 * 3: Saturation
 * 4: Negative
 * 5: Nostalgic
 * 6: Cool tone
 * 7: Flowing years
 * 8: Mirror
 * 9: Split screen
 * 10: Mosaic
 * 11: Soul out
 * 12: Glitch
 * 13: Chromatic aberration
 * 14: Shake
 * 15: Dynamic grid
 * 16: Fire
 * 17: Snow
 * @return -1: Failure, 0: Success
 */
- (NSInteger)setEffectMode:(NSInteger)mode;

/**
 * Set OSD information after successful playback
 * @param osdInfo OSD information
 */
- (NSInteger)setOSDInfo:(OpenSDK_OsdInfo *)osdInfo;

/**
 * Set play strategy
 * @param mode 0: Disable real-time stream adaptive buffering
 *             1: Adaptive buffering
 *             2: Real-time priority
 *             3: Smooth priority
 */
- (BOOL)setCacheMode:(NSInteger)mode;

#pragma mark - Play Group (not yet implemented)
/**
 * Synchronous playback interface group workflow:
 * openPlayGroup->addToPlayGroup->synchronous playback controls->delFromPlayGroup->closePlayGroup
 */
+ (long)openPlayGroup;
- (NSInteger)addToPlayGroup;
- (NSInteger)setPlayGroupBaseChannel;
- (NSInteger)delFromPlayGroup;
+ (NSInteger)setPlayGroupSpeed:(long)hPlayGroup speed:(float)speed;
+ (NSInteger)pausePlayGroup:(long)hPlayGroup isPause:(BOOL)isPause;
+ (NSInteger)setPlayGroupDirection:(long)hPlayGroup Direction:(NSInteger)nDirection;
+ (NSInteger)stepPlayGroup:(long)hPlayGroup;
+ (NSInteger)seekPlayGroup:(long)hPlayGroup DataTime:(long)pstDateTime;
+ (NSInteger)closePlayGroup:(long)hPlayGroup;
+ (long)queryGroupPlayingTime:(long)hPlayGroup errorCode:(int *)errorCode;
- (void)setPlayGroupHandle:(long)hPlayGroup;
- (long)getPlayGroupHandle;
+ (NSInteger)setPlayGroupCacheMoe:(long)hPlayGroup CacheMode:(int)mode;

#pragma mark - New play methods recommended

- (NSInteger)playRealTime:(OpenSDK_RealTimeParams *)realTimeParams;

- (NSInteger)playback:(OpenSDK_PlaybackParams *)playbackParams;

- (NSInteger)playCloud:(OpenSDK_CloudParams *)cloudParams;


#pragma mark - Old methods to be deprecated

/**
 * Play real-time video
 *
 * @param accessTok Admin token/user token
 * @param deviceID  Device ID
 * @param psk       Device secret key
 * @param chn       Channel ID
 * @param defiMode  Stream HD/SD mode
 * @param playInfo  Play parameters (PlayInfo)
 *
 * @return 0: Success
 *        -1: Failure
 */
- (NSInteger)playRtspReal:(NSString*)accessTok
                    devID:(NSString*)deviceID
                      psk:(NSString*)psk
                  channel:(NSInteger)chn
               definition:(NSInteger)defiMode
                 playInfo:(NSString*)playInfo __attribute__((deprecated("Use playRealTime: instead")));

/**
 * Play real-time video
 *
 * @param accessTok  Admin token/user token
 * @param deviceID   Device ID
 * @param psk        Device secret key
 * @param chn        Channel ID
 * @param defiMode   Stream HD/SD mode
 * @param playInfo   Play parameters (PlayInfo)
 * @param deviceType Device type (default is Dahua device)
 *
 * @return 0: Success
 *        -1: Failure
 */
- (NSInteger)playRtspReal:(NSString*)accessTok
                    devID:(NSString*)deviceID
                      psk:(NSString*)psk
                  channel:(NSInteger)chn
               definition:(NSInteger)defiMode
                 playInfo:(NSString*)playInfo
               deviceType:(OC_DEVICETYPE)deviceType __attribute__((deprecated("Use playRealTime: instead")));

/**
 * Stop real-time video playback
 *
 * @return 0: Success
 *        -1: Failure
 */
- (NSInteger)stopRtspReal __attribute__((deprecated("Use stopPlay instead")));

/**
 * Start device recording playback
 *
 * @param accessTok Admin token/user token
 * @param deviceID  Device ID
 * @param psk       Device secret key
 * @param chn       Channel ID
 * @param defiMode  Stream definition (only effective for time-based recording playback)
 * @param fileName  Device local recording filename
 * @param beginTime Local recording start time
 * @param endTime   Local recording end time
 *
 * @return 0: Success
 *        -1: Failure
 */
- (NSInteger)playDeviceRecord:(NSString*)accessTok
                        devID:(NSString*)deviceID
                          psk:(NSString*)psk
                      channel:(NSInteger)chn
                   definition:(NSInteger)defiMode
                     fileName:(NSString*)fileName
                        begin:(long)beginTime
                          end:(long)endTime
                   offsetTime:(double)offsetTime
                     playInfo:(NSString*)playInfo  __attribute__((deprecated("Use playback: instead")));

- (NSInteger)playDeviceRecordByFileName:(NSString*)accessTok
                                  devID:(NSString*)deviceID
                                    psk:(NSString*)psk
                               fileName:(NSString*)fileName
                             offsetTime:(double)offsetTime
                                channel:(NSInteger)chn
                               optimize:(BOOL)isOpt
                                  isTls:(BOOL)isTls
                               playInfo:(NSString*)playInfo  __attribute__((deprecated("Use playback: instead")));

- (NSInteger)playDeviceRecordByUtcTime:(NSString*)accessTok
                                 devID:(NSString*)deviceID
                                   psk:(NSString*)psk
                               channel:(NSInteger)chn
                            definition:(NSInteger)defiMode
                                 begin:(long)beginTime
                                   end:(long)endTime
                              optimize:(BOOL)isOpt
                                 isTls:(BOOL)isTls
                              playInfo:(NSString*)playInfo  __attribute__((deprecated("Use playback: instead")));

/**
 * Stop device recording playback
 *
 * @return 0: Success
 *        -1: Failure
 */
- (NSInteger)stopDeviceRecord __attribute__((deprecated("Use stopPlay instead")));

/**
 * Play cloud recording (with timeout setting)
 *
 * @param accessTok  Admin token/user token
 * @param deviceID   Device ID
 * @param channelID  Device channel number
 * @param psk        Device secret key
 * @param recordID   Recording ID
 * @param type       Cloud recording type: 0: Alarm, 1: Scheduled
 * @param timeOut    Timeout duration
 *
 * @return 0: Success
 *        -1: Failure
 */
- (NSInteger)playCloud:(NSString*)accessTok
                 devID:(NSString*)deviceID
             channelID:(NSInteger)channelID
                   psk:(NSString*)psk
              recordID:(NSString*)recordID
            offsetTime:(NSInteger)offsetTime
                  Type:(NSInteger)type
               timeOut:(NSInteger)timeOut __attribute__((deprecated("Use playCloud: instead")));

/**
 * Stop cloud recording playback
 *
 * @return 0: Success
 *        -1: Failure
 */
- (NSInteger)stopCloud __attribute__((deprecated("Use stopPlay instead")));

@end

#endif

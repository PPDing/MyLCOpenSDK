//
//  OpenSDK_AudioTalk.h
//  LCOpenSDK
//
//  Copyright (c) 2016-2025 dahua. All rights reserved.
//

#ifndef LCOpenSDK_OpenSDK_AudioTalk_h
#define LCOpenSDK_OpenSDK_AudioTalk_h

#import <OpenSDK_TalkerListener.h>
#import <OpenSDK_Define.h>
#import <OpenSDK_Params.h>
#import <Foundation/Foundation.h>

/**
 * Audio talk SDK interface
 */
@interface OpenSDK_AudioTalk: NSObject

/**
 * Set listener object
 *
 * @param lis Listener object pointer
 */
- (void)setListener:(id<OpenSDK_TalkerListener>)lis;

/**
 * Get listener object pointer
 *
 * @return Listener object pointer
 */
- (id<OpenSDK_TalkerListener>)getListener;

/**
 * Start audio talk
 *
 * @param talkParams talk params
 *
 * @return 0 for success, -1 for failure
 */
- (NSInteger)playTalk:(OpenSDK_TalkParams *)talkParams;

/**
 * Start audio talk with JSON string
 *
 * @param jsonString Configuration in JSON format
 * @return 0 for success, -1 for failure
 */
- (NSInteger)playTalkWithJsonString:(NSString*)jsonString;

/**
 * Stop audio talk
 *
 * @return 0 for success, -1 for failure
 */
- (NSInteger)stopTalk;

/**
 * Play sound
 *
 * @return 0 for success, -1 for failure
 */
- (NSInteger)playSound;

/**
 * Stop sound
 *
 * @return 0 for success, -1 for failure
 */
- (NSInteger)stopSound;

/**
 * Start audio sampling
 *
 * @return 0 for success, -1 for failure
 */
- (NSInteger)startSampleAudio;

/**
 * Stop audio sampling
 *
 * @return 0 for success, -1 for failure
 */
- (NSInteger)stopSampleAudio;

/**
 * Check if shared stream media handle exists
 *
 * @param handleKey Shared link identifier
 * @return YES if exists, NO if not exists
 */
- (BOOL)isOptHandleOK:(NSString*)handleKey;

/**
 * Set audio filter and noise reduction
 *
 * @param mode -1: No noise reduction, 0-4: Noise reduction level from low to high (higher levels may damage voice quality more)
 * @return YES for success, NO for failure
 */
- (BOOL)setSEnhanceMode:(int)mode;

/**
 * Get receive audio callback address
 *
 * @return Callback address
 */
- (long)getRecvAudioCallBack;

/**
 * Set whether to automatically enable speaker for talk
 *
 * @param bEnable TRUE to enable, FALSE to disable
 * @return YES for success, NO for failure
 */
+ (BOOL)setSpeakerAutoEnable:(BOOL)bEnable;

/**
 * Check if auto force MTS is enabled
 *
 * @param code Error code
 * @param type Type identifier
 * @return YES if enabled, NO if disabled
 */
- (BOOL)isAutoForceMtsWithCode:(NSInteger)code type:(NSInteger)type;

/**
 * Select audio channel
 *
 * @param channelId Audio channel number (starting from 0)
 * @param bFlag TRUE to enable, FALSE to disable
 * @return YES for success, NO for failure
 */
- (BOOL)chooseAudioChannel:(int)channelId flag:(BOOL)bFlag;

/**
 * Get number of audio channels
 *
 * @return Number of audio channels
 */
- (NSInteger)getAudioChannelNum;

/**
 * Set whether to send mute frame
 *
 * @param isMute YES to mute, NO to unmute
 * @return 0 for success, -1 for failure
 */
- (NSInteger)setIsSendMuteFrame:(BOOL)isMute;

/**
 * Set volume level
 *
 * @param iV Volume value
 * @return YES for success, NO for failure
 */
- (BOOL)setVolume:(int)iV;


#pragma mark - Old methods to be deprecated

/**
 * Start audio talk
 *
 * @param accessTok Admin token/user token
 * @param deviceID Device ID
 * @param chn Channel ID
 * @param psk Device secret key
 * @param playInfo Play information from APP
 * @return 0 for success, -1 for failure
 */
- (NSInteger)playTalk:(NSString*)accessTok
                devID:(NSString*)deviceID
            channelId:(NSInteger)chn
                  psk:(NSString*)psk
             playInfo:(NSString*)playInfo __attribute__((deprecated("Use playTalk: instead")));

/**
 * Start audio talk with device type
 *
 * @param accessTok Admin token/user token
 * @param deviceID Device ID
 * @param chn Channel ID
 * @param psk Device secret key
 * @param playInfo Play information from APP
 * @param deviceType Device type (0-Unknown, 1-Dahua device, 2-GB device)
 * @return 0 for success, -1 for failure
 */
- (NSInteger)playTalk:(NSString*)accessTok
                devID:(NSString*)deviceID
            channelId:(NSInteger)chn
                  psk:(NSString*)psk
             playInfo:(NSString*)playInfo
           deviceType:(OC_DEVICETYPE)deviceType __attribute__((deprecated("Use playTalk: instead")));

/**
 * Start audio talk with talk type
 *
 * @param accessTok Admin token/user token
 * @param deviceID Device ID
 * @param chn Channel ID
 * @param psk Device secret key
 * @param playInfo Play information from APP
 * @param talkType Talk type
 * @return 0 for success, -1 for failure
 */
- (NSInteger)playTalk:(NSString*)accessTok
                devID:(NSString*)deviceID
            channelId:(NSInteger)chn
                  psk:(NSString*)psk
             playInfo:(NSString*)playInfo
             talkType:(NSString*)talkType __attribute__((deprecated("Use playTalk: instead")));

/**
 * Start audio talk with device type and talk type
 *
 * @param accessTok Admin token/user token
 * @param deviceID Device ID
 * @param chn Channel ID
 * @param psk Device secret key
 * @param playInfo Play information from APP
 * @param deviceType Device type (0-Unknown, 1-Dahua device, 2-GB device)
 * @param talkType Talk type
 * @return 0 for success, -1 for failure
 */
- (NSInteger)playTalk:(NSString*)accessTok
                devID:(NSString *)deviceID
            channelId:(NSInteger)chn
                  psk:(NSString *)psk
             playInfo:(NSString *)playInfo
           deviceType:(OC_DEVICETYPE)deviceType
             talkType:(NSString*)talkType __attribute__((deprecated("Use playTalk: instead")));

@end

#endif

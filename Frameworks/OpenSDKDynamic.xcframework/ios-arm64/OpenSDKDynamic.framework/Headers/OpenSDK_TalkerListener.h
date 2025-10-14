//
//  TalkerListener.h
//  audioTalk
//
//  Copyright (c) 2016-2025 dahua. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol OpenSDK_TalkerListener <NSObject>
@optional
/**
 * Callback for voice intercom status
 *
 * @param error Error code
 * @param type  0: RTSP
 *             99: OPENAPI
 */
- (void)onTalkResult:(NSString *)error TYPE:(NSInteger)type;

/**
 * Callback for audio recording data
 *
 * @param pData        Audio data buffer
 * @param dataLen      Length of audio data
 * @param audioFormat  Audio format
 * @param sampleRate   Sample rate
 * @param sampleDepth  Sample depth (bits per sample)
 */
- (void)onAudioRecord:(Byte *)pData
             dataLen:(int)dataLen
         audioFormat:(int)audioFormat
          sampleRate:(int)sampleRate
         sampleDepth:(int)sampleDepth;

/**
 * Callback for received audio data
 *
 * @param pData        Audio data buffer
 * @param dataLen      Length of audio data
 * @param audioFormat  Audio format
 * @param sampleRate   Sample rate
 * @param sampleDepth  Sample depth (bits per sample)
 */
- (void)onAudioReceive:(Byte *)pData
              dataLen:(int)dataLen
          audioFormat:(int)audioFormat
           sampleRate:(int)sampleRate
          sampleDepth:(int)sampleDepth;

/**
 * Callback for real-time audio information
 *
 * @param realSampleRate   Actual sample rate
 * @param realSampleDepth  Actual sample depth
 * @return YES if successful, NO otherwise
 */
- (BOOL)onRealAudioInfo:(int)realSampleRate
       realSampleDepth:(int)realSampleDepth;

/**
 * Callback when talk playback is ready
 */
- (void)onTalkPlayReady;

/**
 * Callback for progress status
 *
 * @param status Current progress status
 */
- (void)onProgressStatus:(NSString *)status;

/**
 * Callback for stream log information
 *
 * @param message Log message
 */
- (void)onStreamLogInfo:(NSString *)message;

@end

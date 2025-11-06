//
//  OpenSDK_EventListener.h
//
//  Copyright (c) 2016-2025 dahua. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/**
 * OpenSDK_Direction enumeration
 */
typedef NS_ENUM(NSInteger, OpenSDKDirection) {
    OpenSDKDirectionUnkown,         ///< Unknown direction
    OpenSDKDirectionLeft,           ///< Left direction
    OpenSDKDirectionRight,          ///< Right direction
    OpenSDKDirectionUp,             ///< Up direction
    OpenSDKDirectionDown,           ///< Down direction
    OpenSDKDirectionLeftUp,         ///< Upper left direction
    OpenSDKDirectionRightUp,        ///< Upper right direction
    OpenSDKDirectionLeftDown,       ///< Lower left direction
    OpenSDKDirectionRightDown,      ///< Lower right direction
    OpenSDKDirectionUnkownValue,    ///< Unknown value
};

/**
 * OpenSDK_ZoomType type enumeration
 */
typedef NS_ENUM(NSInteger, OpenSDKZoomType) {
    OpenSDKZoomTypeIn,        ///< Zoom in
    OpenSDKZoomTypeOut        ///< Zoom out
};

/**
 * @protocol OpenSDK_EventListener
 * @brief Event listener protocol for LCOpenSDK
 */
@protocol OpenSDK_EventListener <NSObject>

@optional

#pragma mark - Window Listener
/// @name Window Listener

/**
 * @brief Single click callback
 * @param dx Window X coordinate
 * @param dy Window Y coordinate
 * @param index Window index
 */
- (void)onControlClick:(CGFloat)dx dy:(CGFloat)dy Index:(NSInteger)index;

/**
 * @brief Double click callback
 * @param dx Window X coordinate
 * @param dy Window Y coordinate
 * @param index Window index
 */
- (void)onWindowDBClick:(CGFloat)dx dy:(CGFloat)dy Index:(NSInteger)index;

/**
 * @brief Zoom begin callback
 * @param index Window index
 */
- (void)onZoomBegin:(NSInteger)index;

/**
 * @brief Zooming callback
 * @param scale Zoom scale
 * @param index Window index
 */
- (void)onZooming:(CGFloat)scale Index:(NSInteger)index;

/**
 * @brief Zoom end callback
 * @param zoom Zoom type (in/out)
 * @param index Window index
 */
- (void)onZoomEnd:(OpenSDKZoomType)zoom Index:(NSInteger)index;

/**
 * @brief Long press begin callback
 * @param dir Direction relative to window
 * @param dx Window X coordinate
 * @param dy Window Y coordinate
 * @param index Window index
 */
- (void)onWindowLongPressBegin:(OpenSDKDirection)dir dx:(CGFloat)dx dy:(CGFloat)dy Index:(NSInteger)index;

/**
 * @brief Long press end callback
 * @param index Window index
 */
- (void)onWindowLongPressEnd:(NSInteger)index;

/**
 * @brief Slip begin callback
 * @param dir Slip direction
 * @param dx Window X coordinate when slip begins
 * @param dy Window Y coordinate when slip begins
 * @param index Window index
 */
- (void)onSlipBegin:(OpenSDKDirection)dir dx:(CGFloat)dx dy:(CGFloat)dy Index:(NSInteger)index;

/**
 * @brief Slipping callback
 * @param dir Slip direction
 * @param preX Previous touch point's X coordinate in window
 * @param preY Previous touch point's Y coordinate in window
 * @param dx Current touch point's X coordinate in window
 * @param dy Current touch point's Y coordinate in window
 * @param index Window index
 */
- (void)onSlipping:(OpenSDKDirection)dir preX:(CGFloat)preX preY:(CGFloat)preY dx:(CGFloat)dx dy:(CGFloat)dy Index:(NSInteger)index;

/**
 * @brief Slip end callback
 * @param dir Slip direction
 * @param dx Window X coordinate when slip ends
 * @param dy Window Y coordinate when slip ends
 * @param index Window index
 */
- (void)onSlipEnd:(OpenSDKDirection)dir dx:(CGFloat)dx dy:(CGFloat)dy Index:(NSInteger)index;

#pragma mark - Play Listener
/// @name Play Listener

/**
 * @brief Video playback status callback
 * @param code Error code (depends on type)
 * @param type Stream type: 0-RTSP, 1-HLS, 99-OPENAPI
 * @param index Play window index
 */
- (void)onPlayerResult:(NSString*)code Type:(NSInteger)type Index:(NSInteger)index;

/**
 * @brief (Not in use)
 */
- (void)onResolutionChanged:(NSInteger)width Height:(NSInteger)height Index:(NSInteger)index;

/**
 * @brief Video playback data callback
 * @param len Data length
 * @param index Play window index
 */
- (void)onReceiveData:(NSInteger)len Index:(NSInteger)index;

/**
 * @brief TS/PS standard stream export data callback
 * @param data Standard stream export data
 * @param index Play window index
 */
- (void)onStreamCallback:(NSData*)data Index:(NSInteger)index;

/**
 * @brief Video playback begin callback
 * @param index Play window index
 */
- (void)onPlayBegan:(NSInteger)index;

/**
 * @brief Video playback end callback
 * @param index Play window index
 */
- (void)onPlayFinished:(NSInteger)index;

/**
 * @brief Callback when playing a new record file (only for playback by recordFileList)
 * @param fileInfo File information
 * @param index Play window index
 */
- (void)onPlaybackFileChanged:(NSString *)fileInfo Index:(NSInteger)index;

/**
 * @brief (Recording) Video playback time callback
 * @param time Current recording time
 * @param index Play window index
 */
- (void)onPlayerTime:(long)time Index:(NSInteger)index;

/**
 * @brief Player time and timestamp callback
 */
- (void)onPlayerTimeAndStamp:(long)time stampTime:(long)stampTime Index:(NSInteger)index;

/**
 * @brief Audio time and timestamp callback
 */
- (void)onAudioTimeAndStamp:(long)time stampTime:(long)stampTime Index:(NSInteger)index;

/**
 * @brief IVS information callback
 */
- (void)onIVSInfo:(NSString*)pBuf type:(long)lType len:(long)lLen realLen:(long)lReallen Index:(NSInteger)index;

/**
 * @brief File time range callback
 */
- (void)onFileTime:(long)beginTime EndTime:(long)endTime Index:(NSInteger)index;

/**
 * @brief Progress status callback
 */
- (void)onProgressStatus:(NSString *)status Index:(NSInteger)index;

/**
 * @brief Stream log information callback
 */
- (void)onStreamLogInfo:(NSString *)message Index:(NSInteger)index;

/**
 * @brief Request callback
 */
- (NSString*)onRequest:(NSString *)param Type:(int)type Index:(NSInteger)index;

/**
 * @brief Stream URL callback
 */
- (void)onStreamUrl:(NSString *)urlInfo Type:(int)type Index:(NSInteger)index;

@end

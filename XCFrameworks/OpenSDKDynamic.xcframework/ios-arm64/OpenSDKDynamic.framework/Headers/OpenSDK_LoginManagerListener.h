//
//  Easy4ipSDK_LoginManagerListener.h
//  Easy4ipSDK
//
//  Copyright (c) 2016-2025 dahua. All rights reserved.
//

#ifndef __LCOpenSDK_OpenSDK_LoginManagerListener_H__
#define __LCOpenSDK_OpenSDK_LoginManagerListener_H__

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/**
 * Protocol for receiving login manager events
 */
@protocol OpenSDK_LoginManagerListener <NSObject>

/**
 * Called when NetSDK connection is disconnected
 *
 * @param deviceSn Device serial number
 * @param devType Device type
 */
- (void)onNetSDKDisconnect:(NSString *)deviceSn devType:(NSInteger)devType;

/**
 * Called with login result
 *
 * @param type Login state type (1: initialization, 2: pre-punching, 3: pre-login) - Refer to OC_LOGIN_STATE enum
 * @param deviceSn Device serial number (empty string during initialization)
 * @param code Error code
 * @param devType Device type
 * @param netDeviceInfoEx Extended network device information
 * @return Processing result
 */
- (int)onLoginResult:(NSInteger)type DeviceSn:(NSString*)deviceSn Code:(NSInteger)code devType:(NSInteger)devType NetDeviceInfoEx:(NSString*)netDeviceInfoEx;

/**
 * Called with P2P login information
 *
 * @param jsonStr P2P login information in JSON format
 */
- (void)onP2PLogInfo:(NSString *)jsonStr;

@optional

/**
 * Called when device state changes
 *
 * @param deviceSN Device serial number
 * @param deviceState Current device state
 * @param ip Device IP address
 */
- (void)onDeviceState:(NSString *)deviceSN deviceState:(int)deviceState ip:(NSString*)ip;

@end

#endif /* __LCOpenSDK_OpenSDK_LoginManagerListener_H__ */

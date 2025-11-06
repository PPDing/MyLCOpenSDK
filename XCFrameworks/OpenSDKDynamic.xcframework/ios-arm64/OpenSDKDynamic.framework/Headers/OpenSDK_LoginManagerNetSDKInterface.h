//
//  Easy4ipSDK_LoginManagerListener.h
//  Easy4ipSDK
//
//  Copyright (c) 2016-2025 dahua. All rights reserved.
//

#ifndef __LCSDK_LCSDK_LoginManagerNetSDKInterface_H__
#define __LCSDK_LCSDK_LoginManagerNetSDKInterface_H__

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol OpenSDK_LoginManagerNetSDKInterface <NSObject>

/**
 Synchronous login to the device via NetSDK
 
 @param p2pPort The P2P port number for connection
 @param deviceSn The device serial number
 @return Login token string if successful, nil otherwise
 */
- (NSString*)netSDKLoginSyn:(NSInteger)p2pPort DeviceSn:(NSString*)deviceSn;

/**
 Asynchronous login to the device via NetSDK
 
 @param p2pPort The P2P port number for connection
 @param deviceSn The device serial number (empty string during initialization)
 @return Error code indicating login result:
         - 0: Success
         - Non-zero: Failure (specific error code)
 */
- (NSInteger)netSDKLoginAsyn:(NSInteger)p2pPort DeviceSn:(NSString*)deviceSn;

@end

#endif /* __LCSDK_LCSDK_LoginManagerNetSDKInterface_H__ */

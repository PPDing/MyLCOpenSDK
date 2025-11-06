//
//  OpenSDK_ConfigWifi.h
//  LCOpenSDK
//
//  Copyright (c) 2016-2025 dahua. All rights reserved.
//

#ifndef LCOpenSDK_OpenSDK_ConfigWifi_h
#define LCOpenSDK_OpenSDK_ConfigWifi_h

#import <Foundation/Foundation.h>

/**
 *  WiFi configuration event enumeration
 */
typedef NS_ENUM(NSInteger, OpenSDK_ConfigWifi_Event)
{
    /// Received LAN response
    OpenSDK_ConfigWifi_Event_Success       = 0,
    /// Unknown error
    OpenSDK_ConfigWifi_Event_Unkown        = 1,
    /// Socket error
    OpenSDK_ConfigWifi_Event_SockError     = 2,
    /// Audio player error
    OpenSDK_ConfigWifi_Event_AudioError    = 3,
    /// Timeout error
    OpenSDK_ConfigWifi_Event_Timeout       = 4,
};

/**
 *  WiFi configuration callback block
 *  @param event    Configuration event
 *  @param userData User data passed in callback
 */
typedef void (^OpenSDK_ConfigWifiCallBack)(OpenSDK_ConfigWifi_Event event, void* userData);

/**
 *  WiFi configuration class for device network setup
 */
@interface OpenSDK_ConfigWifi : NSObject

/**
 *  Start WiFi configuration process
 *
 *  @param devId    Device ID
 *  @param ssid     WiFi SSID
 *  @param pwd      WiFi password
 *  @param security Security type (optional, default is @"")
 *  @param funcPtr  Event callback block
 *  @param userData User data for callback
 *  @param timeout  Operation timeout in seconds
 *
 *  @return 0 if successful, -1 if failed
 */
- (NSInteger)configWifiStart:(NSString*)devId
                        ssid:(NSString*)ssid
                    password:(NSString*)pwd
                      secure:(NSString*)security
                    callback:(OpenSDK_ConfigWifiCallBack)funcPtr
                   userData:(id)userData
                    timeout:(NSInteger)timeout;

/**
 *  Stop WiFi configuration process
 *
 *  @return 0 if successful, -1 if failed
 */
- (NSInteger)configWifiStop;

/**
 *  Start SoftAP configuration process
 *
 *  @param deviceSN    Device serial number
 *  @param deviceKey   Device password
 *  @param wifiSSID    WiFi SSID
 *  @param wifiPasswd  WiFi password
 *  @param bIsSC       Whether using security code (pass false)
 *  @param nTimeout    Operation timeout in seconds
 *
 *  @return 0 if successful, -1 if failed
 */
- (int)startSoftAPConfig:(NSString*)deviceSN
              deviceKey:(NSString*)deviceKey
              wifiName:(NSString*)wifiSSID
            wifiPasswd:(NSString*)wifiPasswd
                 isSC:(BOOL)bIsSC
              timeout:(int)nTimeout;

@end

#endif

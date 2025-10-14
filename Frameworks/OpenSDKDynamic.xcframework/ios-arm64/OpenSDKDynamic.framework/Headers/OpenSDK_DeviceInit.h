//
//  OpenSDK_DeviceInit.h
//  LCOpenSDK
//
//  Copyright (c) 2016-2025 dahua. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 Device search error codes
 */
typedef NS_ENUM(NSInteger, DeviceSearchError) {
    /// Request timed out
    DeviceSearchErrorTimeout = -1,
    /// Invalid handle
    DeviceSearchErrorInvalidHandle = -2,
    /// Search already in progress
    DeviceSearchErrorAlreadyInProgress = -3,
    /// Search cancelled
    DeviceSearchErrorCancelled = -4
};

/**
 Device initialization information structure
 */
typedef struct {
    /// Device MAC address
    char        mac[64];
    /// Device IP address in LAN
    char        ip[64];
    /// Dahua private protocol port
    int         port;
    /**
     Device initialization status:
     0: Does not support initialization
     1: Supports initialization and is uninitialized
     2: Supports initialization and is initialized
     */
    int         status;
} OPENSDK_DEVICE_INIT_INFO;

/**
 Device initialization information model
 */
@interface OpenSDK_DeviceInitInfo : NSObject
/// Device serial number
@property (nonatomic, copy) NSString* deviceId;
/// Device MAC address
@property (nonatomic, copy) NSString* mac;
/// Device IP address in LAN
@property (nonatomic, copy) NSString* ip;
/// Dahua private protocol port
@property (nonatomic, assign) NSInteger port;
/**
 Initialization status:
 0: Does not support initialization
 1: Supports initialization and is uninitialized
 2: Supports initialization and is initialized
 */
@property (nonatomic, assign) NSInteger status;
@end

/**
 Completion block for device search
 
 @param success Whether search succeeded
 @param data    Device initialization information (nil if search failed)
 */
typedef void (^DeviceSearchCompletion)(BOOL success, OpenSDK_DeviceInitInfo *data);

/**
 Device initialization manager
 */
@interface OpenSDK_DeviceInit : NSObject

/**
 Search device initialization information (Struct version)
 
 @param deviceID Device serial number (ID)
 @param timeOut  Search timeout in milli-seconds
 @param success  Callback when search succeeds
 */
- (void)searchDeviceInitInfo:(NSString*)deviceID timeOut:(int)timeOut
                     success:(void (^)(OPENSDK_DEVICE_INIT_INFO info))success;

/**
 Search device initialization information (Model version)
 
 @param deviceID   Device serial number (ID)
 @param timeout    Search timeout in milli-seconds
 @param completion Completion callback with search result
 */
- (void)searchDeviceInitInfo:(NSString *)deviceID timeout:(NSTimeInterval)timeout completion:(DeviceSearchCompletion)completion;

/**
 Cancel current search operation
 */
- (void)cancelSearch;

/**
 Initialize device with MAC and password
 
 @param mac      Device MAC address
 @param password Device password
 @return Error code (0 for success)
 */
- (int)initDevice:(NSString*)mac password:(NSString*)password;

/**
 Initialize device with MAC, password and IP
 
 @param mac      Device MAC address
 @param password Device password
 @param ip       Device IP address
 @return Error code (0 for success)
 */
- (int)initDevice:(NSString*)mac password:(NSString*)password ip:(NSString*)ip;

/**
 Verify password validity
 
 @param deviceID Device serial number
 @param ip       Device IP address
 @param port     Device port
 @param password Password to verify
 @return Error code (0 for valid password)
 */
- (int)checkPwdValidity:(NSString*)deviceID ip:(NSString*)ip port:(NSInteger)port password:(NSString*)password;

@end

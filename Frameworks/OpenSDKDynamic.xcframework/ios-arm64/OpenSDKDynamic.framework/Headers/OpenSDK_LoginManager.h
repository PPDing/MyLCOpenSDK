//
//  OpenSDK_LoginManager.h
//  LCOpenSDK
//
//  Copyright (c) 2016-2025 dahua. All rights reserved.
//

#ifndef OpenSDK_LoginManager_h
#define OpenSDK_LoginManager_h

#import <OpenSDK_Define.h>
#import <OpenSDK_Params.h>
#import <Foundation/Foundation.h>

@protocol OpenSDK_LoginManagerListener;
@protocol OpenSDK_LoginManagerNetSDKInterface;

/**
 * Login manager class for LCOpenSDK
 */
@interface OpenSDK_LoginManager : NSObject

/**
 * Shared instance of login manager
 *
 * @return Shared instance of LCOpenSDK_LoginManager
 */
+ (instancetype)sharedLoginManager NS_SWIFT_NAME(shared());

#pragma mark - Recommended Interfaces

/**
 * Configures P2P server information.
 *
 * @param token    p2pToken, ciphertext for P2P service and authentication.
 * @param uniqueID Unique identifier for requesting P2P service information.
 *
 * @return Returns 0 if at least one P2P service was successfully configured.
 *         Returns -1 if all configurations failed.
 *
 * @note P2P service information must be configured before using P2P functionality
 *       (can be obtained via the /open-api/api-biz/p2p/info endpoint provided on the developer platform).
 *       Typically called once during app launch or after successful user login.
 */
- (NSInteger)configureP2PServerWithToken:(NSString *)token uniqueID:(NSString *)uniqueID
    NS_SWIFT_NAME(configureP2PServer(token:uniqueID:));

/**
 * Tears down the P2P server and terminates all hole-punching operations.
 *
 * @note Typically called only once when a user logs out or closes the app.
 */
- (void)teardownP2PServer
    NS_SWIFT_NAME(teardownP2PServer());

///**
// * Performs P2P pre-hole-punching using device PlayInfo.
// *
// * @param playInfos Array of decrypted device playInfo. Raw data can be obtained from the device list.
// *
// * @return YES if device information was added successfully.
// *         NO if device information addition failed.
// *
// * @note P2P service information must be initialized before pre-hole-punching.
// */
//- (BOOL)addDevicesWithPlayInfos:(NSArray<NSString*>*)playInfos
//NS_SWIFT_NAME(addDevices(playInfos:)) __attribute__((deprecated("Use addDevicesWithDevicePlayInfos instead")));;

/**
 * Performs P2P pre-hole-punching using device PlayInfo.
 *
 * @param devicePlayInfos Array of encrypted device playInfo. Raw data can be obtained from the device list.
 *
 * @return YES if device information was added successfully.
 *         NO if device information addition failed.
 *
 * @note P2P service information must be initialized before pre-hole-punching.
 */
- (BOOL)addDevicesWithDevicePlayInfos:(NSArray<OpenSDK_DevicePlayInfo*>*)devicePlayInfos
    NS_SWIFT_NAME(addDevices(devicePlayInfos:));

#pragma mark - Login Interfaces
///**
// * Gets the shared instance of login manager
// *
// * @return Shared instance of OpenSDK_LoginManager
// */
//+ (OpenSDK_LoginManager*)sharedMyInstance __attribute__((deprecated("Use sharedLoginManager instead")));

/**
 * Initializes NetSDK component
 *
 * @return 0 for success, non-zero for failure
 */
- (NSInteger)initNetSDK;

/**
 * Tests MTU (Maximum Transmission Unit) size
 *
 * @param domainName Domain name to test (e.g. "www.easy4ipcloud.com")
 * @param port Port number to test (e.g. 8800)
 * @param rcvTimeoutMs Receive timeout in milliseconds (e.g. 5000 for 5 seconds)
 * @return MTU size
 */
+ (int)testMtu:(NSString*)domainName port:(NSInteger)port timeout:(NSInteger)rcvTimeoutMs;

/**
 * Sets custom DNS server
 *
 * @param dns DNS server address
 * @param timeoutMs Timeout in milliseconds
 * @return YES for success, NO for failure
 */
+ (BOOL)setCustomDNS:(NSString*)dns timeout:(NSInteger)timeoutMs;

/**
 * Performs connection test
 *
 * @param domainName Domain name to test
 * @param port Port number to test
 * @param isUseCustomDNS Whether to use custom DNS
 * @param dnsSvr Custom DNS server address (ignored if isUseCustomDNS is NO)
 * @param timeoutMs Timeout in milliseconds
 * @return YES for success, NO for failure
 */
+ (BOOL)connectingTest:(NSString*)domainName port:(NSInteger)port isUse:(BOOL)isUseCustomDNS dns:(NSString*)dnsSvr timeout:(NSInteger)timeoutMs;

/**
 * Initializes P2P service after NetSDK initialization
 *
 * @param svrHost P2P server address
 * @param svrPort P2P server port
 * @param username P2P server username
 * @param password P2P server password
 * @param isRelay Whether to enable P2P relay
 * @return 0 for success, non-zero for failure
 */
- (NSInteger)initP2PSvrAfterSDK:(NSString* )svrHost svrPort:(ushort)svrPort usrname:(NSString* )username password:(NSString* )password isRelay:(BOOL)isRelay p2pServerType:(int)p2pServerType uuid:(NSString*)uuid;

/**
 * Initializes P2P service
 *
 * @param svrHost P2P server address
 * @param svrPort P2P server port
 * @param username P2P server username
 * @param password P2P server password
 * @param isRelay Whether to enable P2P relay
 * @return 0 for success, non-zero for failure
 */
- (NSInteger)initP2pSvrWithHost:(NSString*)svrHost svrPort:(ushort)svrPort username:(NSString*)username password:(NSString*)password isRelay:(BOOL)isRelay p2pServerType:(int)p2pServerType uuid:(NSString*)uuid;

/**
 * Adds additional P2P server (should be called after initP2pSvr and before addDevices)
 *
 * @param svrHost P2P server address
 * @param svrPort P2P server port
 * @param username P2P server username
 * @param password P2P server password
 * @param isRelay Whether to enable P2P relay
 * @return 0 for success, non-zero for failure
 */
- (NSInteger)addP2pSvrWithHost:(NSString*)svrHost svrPort:(ushort)svrPort username:(NSString*)username password:(NSString*)password isRelay:(BOOL)isRelay p2pServerType:(int)p2pServerType uuid:(NSString*)uuid;

/**
 * Initializes reporting (PSS) service
 *
 * @param svrHost Reporting server address
 * @param svrPort Reporting server port
 * @param protocolType Protocol type (0: HTTP, 1: HTTPS)
 * @param timeout Timeout for signaling interaction
 * @return 0 for success, non-zero for failure
 */
- (NSInteger)initReporterSvrWithHost:(NSString*)svrHost svrPort:(ushort)svrPort protocolType:(NSUInteger)protocolType timeout:(NSUInteger)timeout;

/**
 * Uninitializes all services
 */
- (void)unInit;

#pragma mark - Pre-Login Related Interfaces

/**
 * Sets the maximum number of devices for pre-punching
 *
 * @param maxDeviceNum Maximum number of devices
 */
- (void)setMaxDeviceNum:(NSUInteger)maxDeviceNum;

/**
 * Adds device information
 *
 * @param devicesJsonStr Device information in JSON format
 *        Example: [{"Sn":string, "Type":UINT,"Port":UINT,"User":string, "Pwd":string},{},...]
 *        Type: (0: Dahua P2P device, 1: Lechange device)
 * @return YES for success, NO for failure
 */
- (BOOL)addDevices:(NSString*)devicesJsonStr;

/**
 * Deletes device information
 *
 * @param devicesJsonStr Device information in JSON format
 *        Example: [{"Sn":string, "Type":UINT,"Port":UINT,"User":string, "Pwd":string},{},...]
 *        Type: (0: Dahua P2P device, 1: Lechange device)
 * @return YES for success, NO for failure
 */
- (BOOL)delDevices:(NSString*)devicesJsonStr;

/**
 * Deletes all device information
 *
 * @return YES for success, NO for failure
 */
- (BOOL)delAllDevices;

/**
 * Disconnects all P2P connections
 *
 * @return YES for success, NO for failure
 * @note Should be called when network disconnects or switches
 */
- (BOOL)disConnectAll;

/**
 * Reconnects all P2P connections
 *
 * @return YES for success, NO for failure
 * @note Should be called when network reconnects
 */
- (BOOL)reConnectAll;

/**
 * Disconnects specific device
 *
 * @param devID Device ID to disconnect
 * @return YES for success, NO for failure
 */
- (BOOL)disConnectByDevice:(NSString*)devID;

#pragma mark - Device Information Interfaces

/**
 * Gets NetSDK login handle for Dahua P2P device
 *
 * @param deviceJsonStr Device information in JSON format
 *        Example: [{"Sn":string, "Type":UINT,"Port":UINT,"User":string, "Pwd":string},{},...]
 *        Type: (0: Dahua P2P device, 1: Lechange device)
 * @param isUseCache Whether to use cached NetSDK handle
 * @param timeout Timeout in milliseconds
 * @return Non-nil for success, nil for failure
 * @note This is a blocking call with timeout
 */
- (void*)getNetSDKHandler:(NSString*)deviceJsonStr isUseCache:(BOOL)isUseCache timeout:(NSUInteger)timeout;

/**
 * Sets listener to receive login status callbacks
 *
 * @param lis Listener instance that conforms to OpenSDK_LoginManagerListener protocol
 */
- (void)setListener:(id<OpenSDK_LoginManagerListener>) lis;

/**
 * Checks if relay is enabled
 *
 * @return YES if relay is enabled, NO otherwise
 */
- (BOOL)isRelay;

/**
 * Sets client ID
 *
 * @param clientId Client identifier
 */
- (void)setClientId:(NSString*)clientId;

/**
 * Gets client ID
 *
 * @return Client identifier
 */
- (NSString*)getClientId;

/**
 * Gets P2P mapped port for device (used for RTSP streaming)
 *
 * @param deviceJsonStr Device information in JSON format
 *        Example: {"Sn":string, "Type":UINT,"Port":UINT,"User":string, "Pwd":string}
 *        Type: (0: Dahua P2P device, 1: Lechange device)
 * @param timeout Timeout in milliseconds
 * @return Non-zero for success, 0 for failure
 * @note This is a blocking call with timeout
 */
- (NSUInteger)getP2PPort:(NSString*)deviceJsonStr timeout:(NSUInteger)timeout;

/**
 * Gets P2P mapped port for specific device with specified listening port
 *
 * @param deviceSN Device serial number
 * @param port Device listening port
 * @param timeout Timeout in milliseconds
 * @return >0 for P2P mapped port, 0 for mapping failure
 * @note This is a blocking call with timeout
 */
- (NSUInteger)getP2PPort:(NSString*)deviceSN devicePort:(NSUInteger)port timeout:(NSUInteger)timeout;

/**
 * Gets error code after interface call failure
 *
 * @param deviceSN Device serial number
 * @param errDesc Error description (output parameter)
 *        For password errors, errDesc shows remaining login attempts
 * @return Error code (see E_LOGIN_ERROR_CODE definition)
 */
- (E_LOGIN_ERROR_CODE)getErrNo:(NSString*)deviceSN errDesc:(NSString**)errDesc;

/**
 * Queries device online status
 *
 * @param deviceSN Device serial number
 * @param serverInfoOut P2P server information (output parameter)
 * @return Device state (see E_DEVICE_STATE definition)
 */
- (E_DEVICE_STATE)getDevState:(NSString*)deviceSN p2pServer:(NSString**)serverInfoOut;

/**
 * Queries device online status with cache option
 *
 * @param deviceSN Device serial number
 * @param serverInfoOut P2P server information (output parameter)
 * @param isQueryCache Whether to query cache
 * @return Device state (see E_DEVICE_STATE definition)
 */
- (E_DEVICE_STATE)getDevState:(NSString*)deviceSN p2pServer:(NSString**)serverInfoOut isQueryCache:(BOOL)isQueryCache;

/**
 * Gets device status information (valid for NetSDK)
 *
 * @param deviceSN Device serial number
 * @return JSON string with device status information or empty string on failure
 * Successful JSON format:
 * {
 *   "InPortNum":,       // DVR alarm input count
 *   "OutPortNum":0,     // DVR alarm output count
 *   "DiskNum":0,        // DVR disk count
 *   "DVRType":0,        // DVR type (see NET_DEVICE_TYPE enum)
 *   "ChanNum":0,        // DVR channel count
 *   "LimitLoginTime":0, // Online timeout (0 means no limit)
 *   "LeftLogTimes":0,   // Remaining login attempts when password error occurs
 *   "LockLeftTime":0,   // Unlock remaining time in seconds (-1 if not set)
 * }
 */
- (NSString*)getDevLogInfo:(NSString*)deviceSN;

/**
 * Sets NetSDK login interface
 *
 * @param netsdkLogin NetSDK login interface implementation
 */
- (void)setNetSDKLogin:(id<OpenSDK_LoginManagerNetSDKInterface>)netsdkLogin;

/**
 * Notifies NetSDK login result
 *
 * @param LoginResult Login result in JSON format:
 * {
 *   "InPortNum":,       // DVR alarm input count [success]
 *   "OutPortNum":0,     // DVR alarm output count [success]
 *   "DiskNum":0,        // DVR disk count [success]
 *   "DVRType":0,        // DVR type [success]
 *   "ChanNum":0,        // DVR channel count [success]
 *   "LimitLoginTime":0, // Online timeout [success]
 *   "LeftLogTimes":0,   // Remaining login attempts [success]
 *   "LockLeftTime":0,   // Unlock remaining time [success]
 *   "Loginhandle": ""   // NetSDK login handle [success]
 *   "error": int        // NetSDK error code (0 for success)
 *   "deviceSn": ""      // Device serial number
 * }
 */
- (void)notifyLoginResult:(NSString*)LoginResult;

#pragma mark - OZ P2P Interfaces

/**
 * Starts OZ P2P service
 *
 * @param path Path for OZ P2P
 * @return YES for success, NO for failure
 */
- (BOOL)startOzP2P:(NSString*)path;

/**
 * Stops OZ P2P service and releases NetSDK handle
 *
 * @param deviceID Device ID
 * @return YES for success, NO for failure
 */
- (BOOL)destroyNetSDKHandleByOZ:(NSString*)deviceID;

/**
 * Gets OZ device login handle
 *
 * @param deviceSeq Device sequence
 * @param deviceID Device ID
 * @param user Username
 * @param psw Password
 * @param port Port number
 * @param timeout Timeout in milliseconds
 * @param devLogInfo Device log information (output parameter)
 * @return NetSDK handle
 */
- (void*)getNetSDKHandleByOZ:(NSString*)deviceSeq devID:(NSString*)deviceID user:(NSString*)user psw:(NSString*)psw port:(NSInteger)port timeout:(NSInteger)timeout LogInfo:(NSString**)devLogInfo;

#pragma mark - Session Management

/**
 * Sets session information
 *
 * @param localPort Local port
 * @param ip IP address
 * @param port Port number
 * @param requestId Request identifier
 * @param deviceSn Device serial number
 * @return YES for success, NO for failure
 */
- (BOOL)setSessionInfo:(NSInteger)localPort IP:(NSString*)ip Port:(NSInteger)port RequestId:(NSString*)requestId DeviceSn:(NSString*)deviceSn;

#pragma mark - TUTK P2P Interfaces

/**
 * Initializes TUTK P2P service
 *
 * @param maxConnectionAllowed Maximum allowed connections
 * @return 0 for success, non-zero for failure
 */
- (int)initTUTKP2P:(int)maxConnectionAllowed;

/**
 * Uninitializes TUTK P2P service
 *
 * @return 0 for success, non-zero for failure
 */
- (int)uninitTUTKP2P;

/**
 * Gets NetSDK handler for TUTK P2P
 *
 * @param uid Device UID
 * @param userName Username
 * @param passWord Password
 * @param localPort Local port
 * @param remotePort Remote port
 * @param timeOut Timeout in milliseconds
 * @param logInfoOut Log information (output parameter)
 * @return NetSDK handle
 */
- (void *)getNetSDKHanlerByTUTK:(NSString *)uid userName:(NSString *)userName passWord:(NSString *)passWord localPort:(int)localPort remotePort:(int)remotePort timeOut:(int)timeOut logInfoOut:(NSString **)logInfoOut;

/**
 * Sets TUTK P2P log path
 *
 * @param path Log file path
 * @param maxSize Maximum log file size
 */
- (void)setTUTKP2PLogPath:(NSString *)path maxSize:(int)maxSize;

#pragma mark - Utility Methods

/**
 * Gets P2P link type
 *
 * @param devSn Device serial number
 * @param port Port number
 * @return P2P link type (see E_P2P_LINK_TYPE definition)
 */
- (E_P2P_LINK_TYPE)getP2pLinkType:(NSString*)devSn port:(NSInteger)port;

/**
 * Resolves domain name to IP address with custom DNS option
 *
 * @param domain Domain name to resolve (e.g. "www.easy4ipcloud.com")
 * @param isAllowedCustomDNS Whether to use custom DNS
 * @param dnsSvr Custom DNS server address (ignored if isAllowedCustomDNS is NO)
 * @param timeoutMs Timeout in milliseconds
 * @return IP address string
 */
+ (NSString *)address2IpEx:(NSString*)domain isAllowedCustomDNS:(BOOL)isAllowedCustomDNS dnsSvr:(NSString*)dnsSvr timeout:(NSInteger)timeoutMs;

/**
 * Gets P2P device information
 *
 * @param devSn Device serial number
 * @param timeout Timeout in milliseconds
 * @return Device information in JSON format or empty string on failure
 */
- (NSString*)getP2PDeviceInfo:(NSString*)devSn timeout:(NSInteger)timeout;

@end

#endif /* OpenSDK_LoginManager_h */

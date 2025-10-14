//
//  OpenSDK_Api.h
//  LCOpenSDK
//
//  Copyright (c) 2016-2025 dahua. All rights reserved.
//

#ifndef LCOpenSDK_OpenSDK_Api_h
#define LCOpenSDK_OpenSDK_Api_h

#import "OpenSDK_Define.h"
#import "OpenSDK_Params.h"
#import <Foundation/Foundation.h>

/**
 PTZ operation parameters model
 */
@interface OpenSDK_PTZParams : NSObject

/** Device unique identifier */
@property (nonatomic, copy) NSString *deviceId;

/** Channel index (usually starts from 0) */
@property (nonatomic, assign) NSInteger channelId;

/** encrypted device playInfo  */
@property (nonatomic, copy) NSString *playInfo;

/**
 * PTZ command codes (string-encoded integer values):
 * - 0: Pan Up
 * - 1: Pan Down
 * - 2: Pan Left
 * - 3: Pan Right
 * - 4: Move Up-Left
 * - 5: Move Down-Left
 * - 6: Move Up-Right
 * - 7: Move Down-Right
 * - 8: Zoom In
 * - 9: Zoom Out
 * - 10: Stop
 */
@property (nonatomic, copy) NSString *operation;

/** Pan/Zoom speed (normalized value: 0.0 min ~ 1.0 max) */
@property (nonatomic, assign) double speed;

/** Operation duration in milliseconds  */
@property (nonatomic, assign) NSInteger duration;

@end

/**
 * Proxy server configuration information
 */
@interface OpenSDK_ProxyServerInfo : NSObject

/// Proxy server host name or IP address
@property (nonatomic, copy) NSString* host;

/// Proxy server port number
@property (nonatomic, assign) NSInteger port;

/// Whether to use HTTPS protocol
@property (nonatomic, assign) BOOL isHttps;

/// Whether to maintain persistent connection
@property (nonatomic, assign) BOOL isKeepAlive;

@end

/**
 * Main API class for LCOpenSDK operations
 */
@interface OpenSDK_Api: NSObject

/// Enable/disable AhService feature
@property (nonatomic) BOOL isAhEnable;

#pragma mark - Initialization & Configuration

/**
 * Get the singleton instance of OpenSDK_Api
 *
 * @return Singleton instance pointer
 */
+ (OpenSDK_Api*) shareMyInstance;

/**
 Configures the host information for network connections.
 
 @discussion This method sets the target host address, port, and HTTPS protocol flag.
 The `host` parameter must be a non-empty string (e.g., "api.example.com" or "192.168.1.1").

 @param host     The hostname or IP address. Must not be `nil` or empty.
 @param port     The network port number (valid range: 0-65535).
 @param isHTTPS  `YES` to use HTTPS protocol, `NO` to use HTTP.
 */
- (void)configureWithHost:(NSString *)host
                     port:(NSInteger)port
                  isHTTPS:(BOOL)isHTTPS NS_SWIFT_NAME(configure(host:port:isHTTPS:));


/**
 * Controls PTZ device movement
 * @param params Configured PTZ operation parameters
 * @return Status code (0 indicates success)
 */
- (NSInteger)controlMovePTZ:(OpenSDK_PTZParams *)params;

/**
 *
 */
- (void)configureLongConnection:(NSArray<OpenSDK_DevicePlayInfo*>*)devicePlayInfos NS_SWIFT_NAME(configureLongConnection(devicePlayInfos:));


/**
 * Initialize OpenSDK_API instance
 *
 * @param host    host Domain name or IP address
 * @param port    Port number
 * @param caPath  Path to CA certificate
 * @param isHttps Whether to use HTTPS protocol
 *
 * @return Initialized OpenSDK_Api instance
 */
- (id)initOpenApi:(NSString*)host port:(NSInteger)port CA_PATH:(NSString*)caPath isHttps:(BOOL)isHttps;

/**
 * Set application credentials
 *
 * @param appId      Application identifier
 * @param appSecret  Application secret key
 */
- (void)setAppId:(NSString *)appId appSecret:(NSString *)appSecret;

/**
 * Set user identification parameters
 *
 * @param openUserId  Unique user identifier
 * @param appSource   Application source identifier
 */
- (void)setOpenUserId:(NSString *)openUserId appSource:(NSString *)appSource;

/**
 * Set DCloud account credentials with MD5 hashed password
 *
 * @param userName  DCloud account username
 * @param pwdMd5    MD5 hash of account password
 */
- (void)setDCloudUserName:(NSString *)userName pwdMd5:(NSString *)pwdMd5;

/**
 * Set client UA information for DCloud
 *
 * @param clientUaInfo JSON string containing client User-Agent information
 */
- (void)setDCloudClientUaInfo:(NSString *)clientUaInfo;

#pragma mark - Encryption & Decryption

/**
 * Encrypt device information data
 *
 * @param source     Source data to encrypt
 * @param sDevId     [IN] Device serial number
 * @param sAppSecret [IN] Application secret key
 * @param encBufOut        [OUT] Encrypted output data
 *
 * @return Encryption result (see DECRYPT_RESULT enumeration)
 */
- (NSString *)encryptDeviceInfoData:(NSString *)source deviceID:(NSString *)sDevId appSecret:(NSString *)sAppSecret encBufOut:(NSString **)encBufOut;

/**
 * Initialize AhService component
 */
- (void)initAhService;

/**
 * Encrypt device password using AES algorithm
 *
 * @param encBuf  [IN] Data buffer to encrypt
 * @param key     [IN] Encryption key
 * @param iv      [IN] Initialization vector
 * @param encBufOut     [OUT] Encrypted output buffer
 *
 * @return Encryption result (see E_ENCRYPT_RESULT enumeration)
 */
- (E_ENCRYPT_RESULT)encryptDevPwd:(NSData *)encBuf key:(NSData *)key iv:(NSData *)iv encBufOut:(NSData **)encBufOut;

/**
 * Decrypt device password using AES algorithm
 *
 * @param decBuf     [IN] Data buffer to decrypt
 * @param key        [IN] Decryption key
 * @param iv         [IN] Initialization vector
 * @param decBufOut  [OUT] Decrypted output buffer
 *
 * @return Decryption result (see E_DECRYPT_RESULT enumeration)
 */
- (E_DECRYPT_RESULT)decryptDevPwd:(NSData *)decBuf key:(NSData *)key iv:(NSData *)iv decBufOut:(NSData **)decBufOut;

#pragma mark - Playback Security

/**
 * Decrypt play code from platform
 *
 * @param source   Encrypted play code
 * @param deviceId Target device identifier
 * @param token    Authentication token
 * @param timeout  Request timeout in seconds
 *
 * @return Decrypted play code in JSON format
 */
- (NSString *)decryptPlayCode:(NSString *)source deviceId:(NSString *)deviceId token:(NSString *)token timeout:(NSInteger)timeout;

/**
 * Decrypt play code with direct key
 *
 * @param source        Encrypted play code
 * @param deviceId      Target device identifier
 * @param playTokenKey  Play token decryption key
 *
 * @return Decrypted play code in JSON format
 */
- (NSString *)decryptPlayCode:(NSString *)source deviceId:(NSString *)deviceId playTokenKey:(NSString *)playTokenKey;

/**
 * Decrypt IoT play information
 *
 * @param playInfo  Encrypted play information
 * @param key       Decryption key
 * @param slat      Encryption salt
 *
 * @return Decrypted play information in JSON format
 */
//- (NSString *)decryptIOTPlayInfo:(NSString *)playInfo
//                             key:(NSString *)key
//                            slat:(NSString *)slat __attribute__((deprecated("Use encrypted playInfo & deviceId to play...")));

#pragma mark - Network Operations

/**
 * Send API request with default proxy settings
 *
 * @param req      Pointer to request structure
 * @param resp     Pointer to response structure
 * @param timeout  Request timeout in seconds
 *
 * @return 0 if success, -1 if failure
 */
- (NSInteger)request:(void*)req resp:(void*)resp timeout:(NSInteger)timeout;

/**
 * Send API request with custom proxy configuration
 *
 * @param req              Pointer to request structure
 * @param resp             Pointer to response structure
 * @param timeout          Request timeout in seconds
 * @param proxyServerInfo  Custom proxy server configuration
 *
 * @return 0 if success, -1 if failure
 */
- (NSInteger)request:(void*)req resp:(void*)resp timeout:(NSInteger)timeout proxyServerInfo:(OpenSDK_ProxyServerInfo*)proxyServerInfo;

#pragma mark - Cleanup & Configuration

/**
 * Clean up and release API resources
 */
- (void)uninitOpenApi;

/**
 * Configure certificate validation settings
 *
 * @param caSwitch Enable/disable certificate validation
 * @param caPath   Path to custom CA certificate (nil for default)
 */
- (void)setCaInfo:(BOOL)caSwitch caPath:(NSString* )caPath;

/**
 * Set URI prefix for API endpoints
 *
 * @param uriPrefix URI path prefix (e.g. @"/gateway/media-paas/media/")
 */
- (void)setUriPrefix:(NSString *)uriPrefix;

#pragma mark - Cloud Services Configuration

/// Cloud Object Storage authentication token
- (void)setCosAuth:(NSString *)cosAuth;

/// Cloud Object Storage request version
- (void)setCosReqVer:(NSString*)cosReqVer;

/// Cloud Object Storage signature key
- (void)setCosSignKey:(NSString*)cosSignKey;

#pragma mark - Terminal Authorization

/// Set terminal authorization header
- (void)setTerminalAuthorization:(NSString *)authorization;

/// Set terminal company identifier
- (void)setTerminalCompanyId:(NSString *)companyId;

#pragma mark - IoT Hub Configuration

/// Set DoLynk authentication token
- (void)setDoLynkToken:(NSString *)token;

/// Set DoLynk device identifier
- (void)setDoLynkDeviceId:(NSString *)deviceId;

#pragma mark - Application Metadata

/// Set application version string
- (void)setAppVersion:(NSString*)version;

/// Set unique phone identifier
- (void)setPhoneId:(NSString*)phoneId;

@end

#endif

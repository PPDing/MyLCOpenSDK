//
//  LCSDK_RestApi.h
//  LCSDK
//
//  Copyright (c) 2016-2025 dahua. All rights reserved.
//

#ifndef OpenSDK_RestApiParameter_h
#define OpenSDK_RestApiParameter_h

#import <Foundation/Foundation.h>

/**
 * REST API configuration parameters
 */
@interface OpenSDK_RestApiParameter : NSObject

/// Server host address
@property (nonatomic, copy) NSString *host;

/// Server port number
@property (nonatomic) NSUInteger port;

/// Client type identifier
@property (nonatomic, copy) NSString *clientType;

/// Unique client identifier
@property (nonatomic, copy) NSString *clientID;

/// Client version string
@property (nonatomic, copy) NSString *clientVersion;

/// Project identifier
@property (nonatomic, copy) NSString *project;

/// Push notification identifier
@property (nonatomic, copy) NSString *pushID;

/// Authentication username
@property (nonatomic, copy) NSString *authUserName;

/// MD5 hashed authentication password
@property (nonatomic, copy) NSString *authPassWordMd5;

/* Added for APP 3.3 */

/// Client operating system version
@property (nonatomic, copy) NSString *clientOV;

/// Client operating system
@property (nonatomic, copy) NSString *clientOS;

/// Terminal device model
@property (nonatomic, copy) NSString *terminalModel;

/// Terminal device identifier
@property (nonatomic, copy) NSString *terminalId;

/// Language setting
@property (nonatomic, copy) NSString *language;

/// Client protocol version
@property (nonatomic, copy) NSString *clientProtoVersion;

/* Added for Saas */

/// Application identifier
@property (nonatomic, copy) NSString *appId;

/// HTTPS flag (1 for HTTPS, 0 for HTTP)
@property (nonatomic, assign) NSInteger isHttps;

/// CA certificate path
@property (nonatomic, copy) NSString *caPath;

/// Custom CA flag (1 if using custom CA, 0 otherwise)
@property (nonatomic) NSInteger isUserCa;

/* Added for LCOpenSDK */

/// Open SDK type
@property (nonatomic, copy) NSString *lcopenType;

/// Device MAC address
@property (nonatomic, copy) NSString *lcopenMac;

/// Open SDK host address
@property (nonatomic, copy) NSString *lcopenHost;

/// Open SDK port number
@property (nonatomic, assign) NSInteger lcopenPort;

/// Open SDK CA certificate path
@property (nonatomic, copy) NSString *lcopenCaPath;

/// Open SDK application identifier
@property (nonatomic, copy) NSString *lcopenAppId;

/// Open SDK application secret
@property (nonatomic, copy) NSString *lcopenAppSecret;

/// Open SDK API version
@property (nonatomic, copy) NSString *lcopenApiVersion;

/// Open SDK OS version
@property (nonatomic, copy) NSString *lcopenOsVersion;

/// Open SDK URL prefix
@property (nonatomic, copy) NSString *lcopenPrefix;

// Set by components

/// Open SDK security code
@property (nonatomic, copy) NSString *lcopenSafeCode;

/// Open SDK version
@property (nonatomic, copy) NSString *lcopenSdkVersion;

/// Open user identifier
@property (nonatomic, copy) NSString *openUserId;

/// Application source
@property (nonatomic, copy) NSString *appSource;

/// Client user agent information
@property (nonatomic, copy) NSString *clientUaInfo;

// Set for cos-request-sign

/// COS request version
@property (nonatomic, copy) NSString *cosReqVer;

/// COS signature key
@property (nonatomic, copy) NSString *cosSignKey;

/// COS authentication token
@property (nonatomic, copy) NSString *cosAuth;

// Added for terminal

/// Authorization token
@property (nonatomic, copy) NSString *authorization;

/// Terminal company identifier
@property (nonatomic, copy) NSString *terminalCompanyId;

/// Dolynk authentication token
@property (nonatomic, copy) NSString *dolynk_token;

/// Dolynk device identifier
@property (nonatomic, copy) NSString *dolynk_deviceId;

/// Application version
@property (nonatomic, copy) NSString *appVersion;

/// Phone identifier
@property (nonatomic, copy) NSString *phoneId;

/**
 * Serialize parameters to JSON string
 *
 * @return JSON formatted string representation of parameters
 */
- (NSString *)toJSONString;

@end

/**
 * REST API parameter manager
 */
@interface OpenSDK_RestApiParameterManager : NSObject

/**
 * Get shared instance of parameter manager
 *
 * @return Singleton instance of OpenSDK_RestApiParameterManager
 */
+ (OpenSDK_RestApiParameterManager *)shareMyInstance;

/**
 * Initialize HsviewClient REST API with parameters
 *
 * @param parameter Configuration parameters (see OpenSDK_RestApiParameter)
 * @return YES if successful, NO otherwise
 */
- (BOOL)initRestWithParameter:(OpenSDK_RestApiParameter *)parameter;

/**
 * Uninitialize REST API parameters
 */
- (void)uninitRestParameter;

/**
 * Get current REST API parameters
 *
 * @return Current REST API configuration parameters
 */
- (OpenSDK_RestApiParameter *)getRestApiParameter;

@end

#endif /* OpenSDK_RestApiParameter_h */

//
//  OpenSDK_Utils.h
//  LCOpenSDK
//
//  Copyright (c) 2016-2025 dahua. All rights reserved.
//

#ifndef LCOpenSDK_OpenSDK_Utils_h
#define LCOpenSDK_OpenSDK_Utils_h

#import <Foundation/Foundation.h>

/**
 *  Decryption result codes
 *  0: Decryption success
 *  1: Integrity verification failed
 *  2: Key error
 *  3: Image is not encrypted
 *  4: Unsupported encryption method
 *  5: Insufficient buffer length
 *  99: Internal error
 */
typedef NS_ENUM(NSInteger, OpenSDK_ENCRYPT_CODE) {
    OpenSDK_ENCRYPT_SUCCESS = 0,
    OpenSDK_ENCRYPT_CHECK_FAIL,
    OpenSDK_ENCRYPT_KEY_ERROR,
    OpenSDK_ENCRTPT_NONE,
    OpenSDK_ENCRYPT_BUFFER_LACK,
    OpenSDK_ENCRYPT_INSIDE_ERROR = 99
};

/**
 *  Log levels
 */
typedef NS_ENUM(NSInteger, E_LOG_LEVEL) {
    LOGLEVEL_FATAL,     // Fatal error
    LOGLEVEL_ERR,       // Error
    LOGLEVEL_WARNING,   // May cause errors
    LOGLEVEL_INFO,      // Current running status
    LOGLEVEL_DEBUG,     // Detailed debug information
    LOGLEVEL_ALL,       // All log information
};


@interface OpenSDK_Utils: NSObject

/**
 *  Data decryption
 *
 *  @param pSrcBufIn  [in]  Data content to be decrypted
 *  @param key        [in]  Custom key (default is serial number)
 *  @param devId      [in]  Device serial number
 *  @param devPwd     [in]  Device password
 *  @param pDestBufOut [out] Decrypted data content
 *
 *  @return Decryption result code:
 *  - 0: Decryption success
 *  - 1: Integrity verification failed
 *  - 2: Key error
 *  - 3: Image is not encrypted
 *  - 4: Unsupported encryption method
 *  - 5: Insufficient buffer length
 *  - 99: Internal error
 */
- (NSInteger)decryptPic:(NSData *)pSrcBufIn
                   key:(NSString *)key
                 DevID:(NSString *)devId
                DevPwd:(NSString *)devPwd
                bufOut:(NSData **)pDestBufOut;

/**
 *  Set stream saving flag
 *
 *  @param isOpen YES to enable stream saving, NO to disable
 */
+ (void)setSaveStreamFlag:(BOOL)isOpen;

/**
 *  Get current stream saving flag status
 *
 *  @return YES if stream saving is enabled, NO otherwise
 */
+ (BOOL)getSaveStreamFlag;

/**
 *  Configure mobile log file
 *
 *  @param logFilePath Path to save log file
 *  @param maxSize     Maximum size of log file (in bytes)
 */
+ (void)setMobileLogFile:(NSString *)logFilePath maxSize:(NSUInteger)maxSize;

/**
 *  Set mobile log level
 *
 *  @note Must be called after the init interface in OpenSDK_LoginManager;
 *        Otherwise P2P logs cannot be recorded. Need to call this interface again after init.
 *
 *  @param logLevel Log level to set
 *  @param logTag   Log tag for filtering
 */
+ (void)setMobileLogLevel:(E_LOG_LEVEL)logLevel logTag:(NSString *)logTag;

/**
 *  Set Play SDK log level
 *
 *  @param logLevel Log level to set
 */
+ (void)setPlaySDKLogLevel:(E_LOG_LEVEL)logLevel;

/**
 *  Destroy thread pool
 */
+ (void)destroyThreadPool;

/**
 *  Set custom DNS server address
 *
 *  @note Must be called before streaming, otherwise it won't enter the DNS automatic allocation mechanism and may cause long delays
 *
 *  @param strDNS    DNS server address
 *  @param timeoutMs Timeout in milliseconds
 */
+ (void)setCustomDNS:(NSString *)strDNS timeout:(NSInteger)timeoutMs;

@end

#endif

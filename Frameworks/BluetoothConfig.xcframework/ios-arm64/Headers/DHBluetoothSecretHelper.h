//
//  DHBluetoothSecretHelper.h
//  bluetoothconfig
//
//  Created by dingqili on 2024/6/5.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Bluetooth security utility class providing cryptographic operations for Bluetooth communication.
 */
@interface DHBluetoothSecretHelper : NSObject

/**
 Creates cryptographic keys asynchronously.
 
 @param completion Callback block that returns the generated keys or error.
                   - First parameter: Base64 encoded public key string (nullable)
                   - Second parameter: PEM formatted private key string (nullable)
                   - Third parameter: Error object if operation failed (nullable)
 */
+ (void)createKeyWithCompletion:(void (^)(NSString * _Nullable, NSString * _Nullable, NSError *_Nullable))completion;

/**
 Creates a SecKeyRef object from PEM formatted private key string.
 
 @param pemString PEM formatted private key string
 @return SecKeyRef object representing the private key
 */
+ (SecKeyRef)privateKeyFromPEMString:(NSString *)pemString;

/**
 Decrypts encrypted data using RSA private key.
 
 @param encryptedInput Encrypted input data
 @param privateKeyString PEM formatted private key string
 @return Decrypted string or nil if decryption fails
 */
+ (NSString *)decodeStringWithEncryptedInput:(NSData *)encryptedInput privateKeyString:(NSString *)privateKeyString;

/**
 Encrypts data using AES-256 algorithm.
 
 @param data Data to be encrypted
 @param key AES encryption key string
 @param ivHexString Initialization vector in hex string format
 @return Encrypted data or nil if encryption fails
 */
+ (NSData *)aes256EncryptWithData:(NSData *)data key:(NSString *)key ivHexString:(NSString *)ivHexString;

/**
 Decrypts data using AES-256 algorithm.
 
 @param data Data to be decrypted
 @param key AES decryption key string
 @param ivHexString Initialization vector in hex string format
 @return Decrypted mutable data or nil if decryption fails
 */
+ (NSMutableData *)aes256DecryptWithData:(NSData *)data key:(NSString *)key ivHexString:(NSString *)ivHexString;

/**
 Encodes string to Base64 format.
 
 @param input String to encode
 @return Base64 encoded string
 */
+ (NSString *)encodeStringBase64:(NSString *)input;

/**
 Decodes Base64 string to original string.
 
 @param input Base64 encoded string
 @return Decoded original string
 */
+ (NSString *)decodeStringBase64:(NSString *)input;

/**
 Converts Base64 string to hex string.
 
 @param base64EncodedString Base64 encoded string
 @return Hex string representation
 */
+ (NSString *)base64ToHex:(NSString *)base64EncodedString;

/**
 Converts string to array of NSNumber objects representing each character.
 
 @param string Input string
 @return Array of NSNumber objects
 */
+ (NSArray<NSNumber *> *)transStringToArrayWithString:(NSString *)string;

/**
 Encodes NSData to custom Base64 hex string format.
 
 @param data Input data
 @return Custom Base64 encoded hex string
 */
+ (NSString *)encodeDataToHexBase64StringWithData:(NSData *)data;

/**
 Encodes hex string to custom Base64 format.
 
 @param hexString Input hex string
 @return Custom Base64 encoded string
 */
+ (NSString *)encodeHexToCustomBase64WithHexString:(NSString *)hexString;

/**
 Decodes custom Base64 string to hex string.
 
 @param base64String Custom Base64 encoded string
 @return Decoded hex string
 */
+ (NSString *)decodeBase64ToHexWithBase64String:(NSString *)base64String;

/**
 Creates NSData object from hex string.
 
 @param hexString Input hex string
 @return NSData object or nil if conversion fails
 */
+ (NSData *)dataFromHexString:(NSString *)hexString;

/**
 Calculates MD5 hash of input data.
 
 @param data Input data
 @return MD5 hash string
 */
+ (NSString *)MD5ForData:(NSData *)data;

@end

NS_ASSUME_NONNULL_END

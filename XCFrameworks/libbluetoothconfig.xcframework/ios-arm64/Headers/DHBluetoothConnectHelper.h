//
//  DHBluetoothConnectHelper.h
//  bluetoothconfig
//
//  Created by dingqili on 2024/6/5.
//

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>

NS_ASSUME_NONNULL_BEGIN

@class DHBluetoothConnectHelper;

/**
 Bluetooth connection helper delegate protocol
 */
@protocol DHBluetoothConnectHelperDelegate <NSObject>

/**
 Called when WiFi configuration is complete

 @param connectHelper The DHBluetoothConnectHelper instance
 @param error Error object if configuration failed, nil if successful
 */
- (void)bluetoothConnectHelper:(DHBluetoothConnectHelper *)connectHelper
         didConfigWifiComplete:(nullable NSError *)error;

@optional

/**
 Called when receiving public key response

 @param helper The DHBluetoothConnectHelper instance
 @param key Received public key string
 @param error Error object if request failed, nil if successful
 */
- (void)bluetoothConnectHelper:(DHBluetoothConnectHelper *)helper didResponsePublicKey:(nullable NSString *)key error:(nullable NSError *)error;

/**
 Called when receiving time check response

 @param helper The DHBluetoothConnectHelper instance
 @param error Error object if request failed, nil if successful
 */
- (void)bluetoothConnectHelper:(DHBluetoothConnectHelper *)helper didResponseCheckTime:(nullable NSError *)error;

/**
 Called when receiving serial number (SN) response

 @param helper The DHBluetoothConnectHelper instance
 @param sn Received serial number string
 */
- (void)bluetoothConnectHelper:(DHBluetoothConnectHelper *)helper didResponseSN:(nullable NSString *)sn;

/**
 Called when receiving security code (SC) response

 @param helper The DHBluetoothConnectHelper instance
 @param sc Received security code string
 */
- (void)bluetoothConnectHelper:(DHBluetoothConnectHelper *)helper didResponseSC:(nullable NSString *)sc;

/**
 Called when receiving WiFi configuration response

 @param helper The DHBluetoothConnectHelper instance
 @param error Error object if configuration failed, nil if successful
 */
- (void)bluetoothConnectHelper:(DHBluetoothConnectHelper *)helper didResponseWIFIConfig:(nullable NSError *)error;

/**
 Called when receiving network response

 @param helper The DHBluetoothConnectHelper instance
 @param error Error object if request failed, nil if successful
 */
- (void)bluetoothConnectHelper:(DHBluetoothConnectHelper *)helper didResponseNetWork:(nullable NSError *)error;

@end

/**
 Helper class for Bluetooth connection and configuration
 */
@interface DHBluetoothConnectHelper : NSObject

#pragma mark - Properties

/// Delegate for Bluetooth connection events
@property (weak, nonatomic) id<DHBluetoothConnectHelperDelegate> delegate;

/// Bluetooth advertisement data
@property (copy, nonatomic) NSDictionary<NSString *, id> *advertisementData;

/// Connected peripheral instance
@property (strong, nonatomic) CBPeripheral *peripheral;

/// Public key for encryption
@property (copy, nonatomic) NSString *publicKey;

/// Private key for encryption
@property (copy, nonatomic) NSString *privateKey;

/// Serial number parsed from Bluetooth extra information
@property (copy, nonatomic) NSString *bluetoothsn;

/// Device type parsed from Bluetooth extra information (nullable)
@property (copy, nonatomic, nullable) NSString *bluetoothType;

/// Device model parsed from Bluetooth extra information (nullable)
@property (copy, nonatomic, nullable) NSString *bluetoothModel;

/// Device SID parsed from Bluetooth extra information (nullable)
@property (copy, nonatomic, nullable) NSString *bluetoothSID;

/// Flag indicating whether SC (security code) is supported
@property (assign, nonatomic) BOOL isSupportSc;

/// Flag indicating whether the SN in Bluetooth advertisement is complete
@property (assign, nonatomic) BOOL isWholeSN;

/// Flag indicating whether initialization is complete
@property (assign, nonatomic) BOOL isInit;

/// Received signal strength indicator (RSSI) value
@property (copy, nonatomic) NSNumber *RSSI;

#pragma mark - Bluetooth Connection Status

/// Characteristic for communication (nullable)
@property (strong, nonatomic, nullable) CBCharacteristic *characteristic;

/// Flag indicating Bluetooth connection status
@property (assign, nonatomic) BOOL bluetoothConncet;

/// Flag indicating whether Bluetooth service is discovered
@property (assign, nonatomic) BOOL bluetoothServiceDiscover;

/// Flag indicating whether Bluetooth characteristic is discovered
@property (assign, nonatomic) BOOL bluetoothCharacteristicDiscover;

#pragma mark - Configuration Status

/// Flag indicating WiFi configuration success
@property (assign, nonatomic) BOOL postWIFIConfigSuccess;

/// Flag indicating WiFi configuration completion
@property (assign, nonatomic) BOOL configWifiComplete;

/// Flag indicating WiFi configuration success
@property (assign, nonatomic) BOOL configWifiSuccess;

/// Error object for WiFi configuration failure (nullable)
@property (copy, nonatomic, nullable) NSError *configWifiError;

/// Flag indicating time check success
@property (assign, nonatomic) BOOL checkTimeSuccess;

#pragma mark - Security Information

/// AES encryption key (nullable)
@property (copy, nonatomic, nullable) NSString *aesKey;

/// AES initialization vector (nullable)
@property (copy, nonatomic, nullable) NSString *aesiv;

/// Device serial number (nullable)
@property (copy, nonatomic, nullable) NSString *sn;

/// Security code (nullable)
@property (copy, nonatomic, nullable) NSString *sc;

#pragma mark - Methods

/**
 Updates value for characteristic

 @param characteristic The characteristic to update
 */
- (void)updateValueForCharacteristic:(CBCharacteristic *)characteristic;

/**
 Resets all data after disconnection
 */
- (void)reset;

/**
 Cleans up Bluetooth packet data while preserving reusable information
 
 Note:
 1. SN and SC codes can be reused
 2. Key exchange, time check, and WiFi pairing cannot be reused
 */
- (void)cleanBluetoothPacketData;

@end

NS_ASSUME_NONNULL_END

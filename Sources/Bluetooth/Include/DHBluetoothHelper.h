//
//  DHBluetoothHelper.m
//  bluetoothconfig
//
//  Created by dingqili on 2024/6/5.
//

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>
@class DHBluetoothConnectHelper;

/**
 * Bluetooth peripheral search service UUID
 */
#define DHBleSearchServiceUUID @"FFF0"

/**
 * Bluetooth peripheral write data service UUID
 */
#define DHBleWriteServiceUUID @"FFF1"

/**
 * Bluetooth peripheral read data service UUID
 */
#define DHBleReadServiceUUID @"FFF2"

/**
 * Fixed header byte length
 */
#define DHBleHeaderLength 4

/**
 * Fixed command byte length
 */
#define DHBleCmdLength 2

/**
 * Maximum packet byte length
 */
#define DHBlePacketMaxLength 20

/**
 * Bluetooth helper error codes
 */
typedef NS_ENUM(NSUInteger, DHBluetoothHelperCode) {
    kUnknowError,
    kCharacteristicError,
    kPublicKeyError,
    kGetSNError,
    kGetSCError,
    kCheckTimeError,
    kPostWIFIConfigActionError,
    kPostWIFIConfigSSIDError,
    kPostWIFIConfigPasswordError,
    kPostWIFIConfigUnknowError,
};

NS_ASSUME_NONNULL_BEGIN

/**
 * Delegate protocol for Bluetooth central manager callbacks
 */
@protocol DHBluetoothHelperDelegate <NSObject>

/**
 * Called when WiFi configuration is completed
 *
 * @param central The central manager
 * @param connectHelper The Bluetooth connection helper
 * @param error Error object if configuration failed, nil if successful
 */
- (void)centralManager:(CBCentralManager *)central
     blueConnectHelper:(DHBluetoothConnectHelper *)connectHelper
         didConfigWifiComplete:(nullable NSError *)error;

@optional

/**
 * Called when the central manager's state is updated
 *
 * @param central The central manager whose state has changed
 */
- (void)centralManagerDidUpdateState:(nonnull CBCentralManager *)central;

/**
 * Called when a peripheral is discovered
 *
 * @param central The central manager
 * @param peripheral The discovered peripheral
 * @param connectHelper The Bluetooth connection helper
 */
- (void)centralManager:(CBCentralManager *)central
 didDiscoverPeripheral:(CBPeripheral *)peripheral
     blueConnectHelper:(DHBluetoothConnectHelper *)connectHelper;

/**
 * Called when connection to a peripheral succeeds
 *
 * @param central The central manager
 * @param peripheral The connected peripheral
 * @param connectHelper The Bluetooth connection helper
 */
- (void)centralManager:(CBCentralManager *)central
  didConnectPeripheral:(CBPeripheral *)peripheral
     blueConnectHelper:(DHBluetoothConnectHelper *)connectHelper;

/**
 * Called when connection to a peripheral fails
 *
 * @param central The central manager
 * @param peripheral The peripheral that failed to connect
 * @param connectHelper The Bluetooth connection helper
 * @param error The error that occurred
 */
- (void)centralManager:(CBCentralManager *)central
didFailToConnectPeripheral:(CBPeripheral *)peripheral
     blueConnectHelper:(DHBluetoothConnectHelper *)connectHelper
                 error:(nullable NSError *)error;

/**
 * Called when a peripheral is disconnected
 *
 * @param central The central manager
 * @param peripheral The disconnected peripheral
 * @param connectHelper The Bluetooth connection helper
 * @param error The error that caused disconnection, nil if clean disconnect
 */
- (void)centralManager:(CBCentralManager *)central
didDisconnectPeripheral:(CBPeripheral *)peripheral
     blueConnectHelper:(DHBluetoothConnectHelper *)connectHelper
                 error:(nullable NSError *)error;
@end

/**
 * Main Bluetooth helper class for managing BLE connections and operations
 */
@interface DHBluetoothHelper : NSObject

/**
 * Delegate for central manager callbacks
 */
@property (weak, nonatomic) id<DHBluetoothHelperDelegate> centralDelegate;

/**
 * Initialize the Bluetooth helper
 */
- (void)setUp;

/**
 * Start scanning for peripherals
 */
- (void)startScan;

/**
 * Stop scanning for peripherals
 */
- (void)stopScan;

/**
 * Connect to a peripheral device
 *
 * @param peripheral The peripheral to connect to
 */
- (void)connect:(CBPeripheral *)peripheral;

/**
 * Close Bluetooth connection to a peripheral
 *
 * @param peripheral The peripheral to disconnect from
 */
- (void)closeBluetoothConnection:(CBPeripheral *)peripheral;

/**
 * Clear discovered peripherals and refresh
 */
- (void)clean;

/**
 * Send data packet to peripheral
 *
 * @param data The data to send
 * @param help The connection helper
 * @param useAESEncryption Whether to use AES encryption for the data
 */
- (void)sendPacketWithData:(NSData *)data
          blueConnectHelper:(DHBluetoothConnectHelper *)help
          useAESEncryption:(BOOL)useAESEncryption;

/**
 * Send WiFi configuration to device
 *
 * @param bluetoothConnectInfo The connection helper
 * @param ssid The WiFi SSID to configure
 * @param pwd The WiFi password to configure
 */
- (void)postWIFIConfig:(DHBluetoothConnectHelper *)bluetoothConnectInfo
                 ssid:(NSString *)ssid
                  pwd:(NSString *)pwd;

/**
 * Get the device's real SN (serial number)
 * Note: The SN parsed from Bluetooth broadcast might be truncated due to length limitations
 *
 * @param bluetoothConnectInfo The connection helper
 * @param block Completion block with the real SN or error
 */
- (void)getDeviceRealSN:(DHBluetoothConnectHelper *)bluetoothConnectInfo
                 block:(void (^)(NSString * _Nullable, NSError * _Nullable))block;

@end

NS_ASSUME_NONNULL_END

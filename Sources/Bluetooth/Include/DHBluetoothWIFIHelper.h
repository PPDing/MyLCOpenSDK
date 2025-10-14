//
//  DHBluetoothWIFIManager.h
//  bluetoothconfig
//
//  Created by dingqili on 2024/6/4.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class DHBluetoothWIFIHelper;

/**
 * Delegate protocol for handling Bluetooth WiFi events.
 */
@protocol DHBluetoothWIFIHelperDelegate <NSObject>

@required

/**
 * Called when the SSID is successfully retrieved.
 *
 * @param manager The Bluetooth WiFi manager instance.
 * @param ssid The retrieved SSID string.
 */
- (void)bluetoothWIFI:(DHBluetoothWIFIHelper *)manager didGetSSID:(NSString *)ssid;

/**
 * Called when failed to retrieve the SSID.
 *
 * @param manager The Bluetooth WiFi manager instance.
 * @param error The error describing the failure.
 */
- (void)bluetoothWIFI:(DHBluetoothWIFIHelper *)manager didFailToGetSSID:(NSError *)error;

@end

/**
 * Helper class for managing Bluetooth WiFi connections.
 */
@interface DHBluetoothWIFIHelper : NSObject

/**
 * The delegate object that receives Bluetooth WiFi events.
 */
@property (weak, nonatomic) id<DHBluetoothWIFIHelperDelegate> delegate;

/**
 * Reloads the current SSID information.
 * This will trigger either didGetSSID: or didFailToGetSSID: delegate callback.
 */
- (void)reloadSSID;

/**
 * Requests temporary full accuracy authorization for location services.
 *
 * @param purposeKey The purpose key string defined in Info.plist.
 * @param completion Completion block called when the request completes.
 *                   Returns an error if the request failed.
 *
 * @note Available on iOS 14.0+, macOS 11.0+, watchOS 7.0+, tvOS 14.0+.
 */
- (void)requestTemporaryFullAccuracyAuthorizationWithPurposeKey:(NSString *)purposeKey
                                                     completion:(void(^ _Nullable)(NSError * _Nullable))completion
API_AVAILABLE(ios(14.0), macos(11.0), watchos(7.0), tvos(14.0));

@end

NS_ASSUME_NONNULL_END

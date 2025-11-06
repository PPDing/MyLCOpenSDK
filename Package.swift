// swift-tools-version:5.5
// Auto-generated XCFramework Package
// Generated on: 2025-11-06

import PackageDescription

let package = Package(
    name: "MyOpenSDK",
    platforms: [.iOS(.v11)],
    products: [
        .library(
            name: "MyOpenSDK",
            targets: [
                "BusinessFrameworkDynamicGeneral",
                "DHHTTPStreamDynamicGeneral",
                "HlsStreamFrameworkDynamicGeneral",
                "LCOpenApiClientDynamic",
                "NetConfig",
                "OpenSDKDynamic",
                "RtspStreamFrameworkDynamicGeneral",
                "bluetoothconfig",
            ]
        )
    ],
    targets: [
        // Dynamic Framework binary targets
        .binaryTarget(
            name: "BusinessFrameworkDynamicGeneral",
            path: "XCFrameworks/BusinessFrameworkDynamicGeneral.xcframework"
        ),
        .binaryTarget(
            name: "DHHTTPStreamDynamicGeneral",
            path: "XCFrameworks/DHHTTPStreamDynamicGeneral.xcframework"
        ),
        .binaryTarget(
            name: "HlsStreamFrameworkDynamicGeneral",
            path: "XCFrameworks/HlsStreamFrameworkDynamicGeneral.xcframework"
        ),
        .binaryTarget(
            name: "LCOpenApiClientDynamic",
            path: "XCFrameworks/LCOpenApiClientDynamic.xcframework"
        ),
        .binaryTarget(
            name: "NetConfig",
            path: "XCFrameworks/NetConfig.xcframework"
        ),
        .binaryTarget(
            name: "OpenSDKDynamic",
            path: "XCFrameworks/OpenSDKDynamic.xcframework"
        ),
        .binaryTarget(
            name: "RtspStreamFrameworkDynamicGeneral",
            path: "XCFrameworks/RtspStreamFrameworkDynamicGeneral.xcframework"
        ),
        .binaryTarget(
            name: "bluetoothconfig",
            path: "XCFrameworks/libbluetoothconfig.xcframework"
        ),
    ]
)

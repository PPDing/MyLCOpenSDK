// swift-tools-version:5.7
import PackageDescription

let package = Package(
    name: "MyOpenSDK",
    platforms: [
        .iOS(.v11)
    ],
    products: [
        .library(
            name: "MyOpenSDK",
            targets: [
                "MyOpenSDK",
                "LCOpenApiClientDynamic",
                "OpenSDKDynamic",
                "RtspStreamFrameworkDynamicGeneral",
                "DHHTTPStreamDynamicGeneral",
                "HlsStreamFrameworkDynamicGeneral",
                "NetConfig",
                "Bluetooth"
            ]
        ),
    ],
    dependencies: [],
    targets: [
        .target(
            name: "MyOpenSDK",
            dependencies: [
                "LCOpenApiClientDynamic",
                "OpenSDKDynamic",
                "RtspStreamFrameworkDynamicGeneral",
                "DHHTTPStreamDynamicGeneral",
                "HlsStreamFrameworkDynamicGeneral",
                "NetConfig",
                "Bluetooth"
            ],
            path: "Sources/MyOpenSDK",
            publicHeadersPath: "Include",
            cSettings: [
                .headerSearchPath("../"),
                .define("SPM_INTEGRATION")
            ]
        ),
        
        .binaryTarget(
            name: "LCOpenApiClientDynamic",
            path: "Frameworks/LCOpenApiClientDynamic.xcframework"
        ),
        
        .binaryTarget(
            name: "OpenSDKDynamic",
            path: "Frameworks/OpenSDKDynamic.xcframework"
        ),
        
        .binaryTarget(
            name: "RtspStreamFrameworkDynamicGeneral",
            path: "Frameworks/RtspStreamFrameworkDynamicGeneral.xcframework"
        ),
        
        .binaryTarget(
            name: "DHHTTPStreamDynamicGeneral",
            path: "Frameworks/DHHTTPStreamDynamicGeneral.xcframework"
        ),
        
        .binaryTarget(
            name: "HlsStreamFrameworkDynamicGeneral",
            path: "Frameworks/HlsStreamFrameworkDynamicGeneral.xcframework"
        ),
        
        .binaryTarget(
            name: "NetConfig",
            path: "Frameworks/NetConfig.xcframework"
        ),
        
        .target(
            name: "Bluetooth",
            dependencies: [],
            path: "Sources/Bluetooth",
            sources: ["dummy.m"],
            publicHeadersPath: "Include",
            linkerSettings: [
                .linkedLibrary("bluetoothconfig"),
                .unsafeFlags(["-LSources/Bluetooth/Lib"])
            ]
        )
    ]
)

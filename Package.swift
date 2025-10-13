// swift-tools-version:5.6
import PackageDescription

let package = Package(
    name: "MyLCOpenSDK",
    platforms: [.iOS(.v11)],
    products: [
        .library(
            name: "LCOpenSDKDynamic",
            targets: ["LCOpenSDKDynamic"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "LCOpenSDKDynamic",
            path: "Framework/LCOpenSDKDynamic.xcframework"
        )
    ]
)

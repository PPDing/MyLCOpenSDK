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
    dependencies: [
        .package(
            url: "https://github.com/PPDing/MyLCOpenSDK.git",
            branch: "spm-compatible"
        )
    ],
    targets: [
        .binaryTarget(
            name: "LCOpenSDKDynamic",
            path: "Framework/LCOpenSDKDynamic.xcframework"
        )
    ]
)

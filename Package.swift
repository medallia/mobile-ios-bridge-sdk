// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.
//
//  Copyright © 2023 Medallia. Use subject to licensing terms.

import PackageDescription

let package = Package(
    name: "medallia-mobile-bridge-ios-sdk",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "medallia-mobile-bridge-ios-sdk",
            targets: ["MedalliaSDKEventBusInternal"]),

    ],
    targets: [
        .binaryTarget(
            name: "MedalliaSDKEventBusInternal",
            path: "MedalliaSDKEventBusInternal.xcframework"
        )
    ]
)
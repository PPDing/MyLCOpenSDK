//
//  OpenSDK_OSDInfo.h
//  LCOpenSDK
//
//  Copyright (c) 2016-2025 dahua. All rights reserved.
//

#ifndef OpenSDK_OSDInfo_h
#define OpenSDK_OSDInfo_h

#import <Foundation/Foundation.h>

/**
 *  OSD data structure definition
 */
@interface OpenSDK_OsdData : NSObject

/// X coordinate of the rotation point (in pixels)
@property (nonatomic, assign) NSInteger x;

/// Y coordinate of the rotation point (in pixels)
@property (nonatomic, assign) NSInteger y;

/// Red component of OSD color (0-255)
@property (nonatomic, assign) NSInteger r;

/// Green component of OSD color (0-255)
@property (nonatomic, assign) NSInteger g;

/// Blue component of OSD color (0-255)
@property (nonatomic, assign) NSInteger b;

/// OSD transparency (0-255)
@property (nonatomic, assign) NSInteger alpha;

/// OSD content data (UTF-8 encoded)
@property (nonatomic, copy) NSString *szOsdData;

/// Font width (invalid when using private font)
@property (nonatomic, assign) NSInteger fontX;

/// Font height (maximum 512)
@property (nonatomic, assign) NSInteger fontY;

/// Rotation angle (0-359 degrees)
@property (nonatomic, assign) NSInteger rotateAngle;

/// Reserved field
@property (nonatomic, copy) NSString *reserved;

@end


/**
 *  OSD information structure definition
 */
@interface OpenSDK_OsdInfo : NSObject

/// Flag indicating whether private font is used
@property (nonatomic, assign) NSInteger bPrivateFont;

/// Path to the font file
@property (nonatomic, copy) NSString *fontPath;

/// Number of OSD overlays (maximum 32)
@property (nonatomic, assign) NSInteger osdCount;

/// List of OSD data items
@property (nonatomic, strong) NSMutableArray<OpenSDK_OsdData*> *osdList;

/// Reserved field
@property (nonatomic, copy) NSString *reserved;

@end

#endif /* OpenSDK_OSDInfo_h */

//
//  WiimoteDelegate.h
//  Wiimote
//
//  Created by alxn1 on 30.07.12.
//  Copyright 2012 alxn1. All rights reserved.
//

#import "WiimoteNunchuckDelegate.h"
#import "WiimoteClassicControllerDelegate.h"

#define WiimoteButtonCount 11

typedef enum
{
    WiimoteLEDFlagOne           =  1,
    WiimoteLEDFlagTwo           =  2,
    WiimoteLEDFlagThree         =  4,
    WiimoteLEDFlagFour          =  8
} WiimoteLEDFlag;

typedef enum
{
    WiimoteButtonTypeLeft       =  0,
    WiimoteButtonTypeRight      =  1,
    WiimoteButtonTypeUp         =  2,
    WiimoteButtonTypeDown       =  3,
    WiimoteButtonTypeA          =  4,
    WiimoteButtonTypeB          =  5,
    WiimoteButtonTypePlus       =  6,
    WiimoteButtonTypeMinus      =  7,
    WiimoteButtonTypeHome       =  8,
    WiimoteButtonTypeOne        =  9,
    WiimoteButtonTypeTwo        = 10
} WiimoteButtonType;

FOUNDATION_EXPORT NSString *WiimoteConnectedNotification;
FOUNDATION_EXPORT NSString *WiimoteButtonPresedNotification;
FOUNDATION_EXPORT NSString *WiimoteButtonReleasedNotification;
FOUNDATION_EXPORT NSString *WiimoteVibrationStateChangedNotification;
FOUNDATION_EXPORT NSString *WiimoteHighlightedLEDMaskChangedNotification;
FOUNDATION_EXPORT NSString *WiimoteBatteryLevelUpdatedNotification;
FOUNDATION_EXPORT NSString *WiimoteAccelerometerEnabledStateChangedNotification;
FOUNDATION_EXPORT NSString *WiimoteAccelerometerGravityChangedNotification;
FOUNDATION_EXPORT NSString *WiimoteAccelerometerAnglesChangedNotification;
FOUNDATION_EXPORT NSString *WiimoteExtensionConnectedNotification;
FOUNDATION_EXPORT NSString *WiimoteExtensionDisconnectedNotification;
FOUNDATION_EXPORT NSString *WiimoteDisconnectedNotification;

FOUNDATION_EXPORT NSString *WiimoteButtonKey;
FOUNDATION_EXPORT NSString *WiimoteVibrationStateKey;
FOUNDATION_EXPORT NSString *WiimoteHighlightedLEDMaskKey;
FOUNDATION_EXPORT NSString *WiimoteBatteryLevelKey;
FOUNDATION_EXPORT NSString *WiimoteIsBatteryLevelLowKey;
FOUNDATION_EXPORT NSString *WiimoteAccelerometerEnabledStateKey;
FOUNDATION_EXPORT NSString *WiimoteAccelerometerGravityX;
FOUNDATION_EXPORT NSString *WiimoteAccelerometerGravityY;
FOUNDATION_EXPORT NSString *WiimoteAccelerometerGravityZ;
FOUNDATION_EXPORT NSString *WiimoteAccelerometerPitch;
FOUNDATION_EXPORT NSString *WiimoteAccelerometerRoll;
FOUNDATION_EXPORT NSString *WiimoteExtensionKey;

@class Wiimote;
@class WiimoteExtension;

@interface NSObject (WiimoteDelegate)

- (void)wiimote:(Wiimote*)wiimote buttonPressed:(WiimoteButtonType)button;
- (void)wiimote:(Wiimote*)wiimote buttonReleased:(WiimoteButtonType)button;
- (void)wiimote:(Wiimote*)wiimote vibrationStateChanged:(BOOL)isVibrationEnabled;
- (void)wiimote:(Wiimote*)wiimote highlightedLEDMaskChanged:(NSUInteger)mask;
- (void)wiimote:(Wiimote*)wiimote batteryLevelUpdated:(double)batteryLevel isLow:(BOOL)isLow;
- (void)wiimote:(Wiimote*)wiimote accelerometerEnabledStateChanged:(BOOL)enabled;
- (void)wiimote:(Wiimote*)wiimote accelerometerChangedGravityX:(double)x y:(double)y z:(double)z;
- (void)wiimote:(Wiimote*)wiimote accelerometerChangedPitch:(double)pitch roll:(double)roll;
- (void)wiimote:(Wiimote*)wiimote extensionConnected:(WiimoteExtension*)extension;
- (void)wiimote:(Wiimote*)wiimote extensionDisconnected:(WiimoteExtension*)extension;
- (void)wiimoteDisconnected:(Wiimote*)wiimote;

@end
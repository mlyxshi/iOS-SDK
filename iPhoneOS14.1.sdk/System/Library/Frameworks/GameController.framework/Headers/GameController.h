//
//  GameController.h
//  GameController
//
//  Copyright (c) 2012 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

#if TARGET_OS_IPHONE
#import <UIKit/UIViewController.h>
#else
#import <AppKit/NSViewController.h>
#endif

#import <GameController/GCExtern.h>
#import <GameController/GCColor.h>

#import <GameController/GCDeviceLight.h>
#import <GameController/GCDeviceBattery.h>

#import <GameController/GCControllerElement.h>
#import <GameController/GCControllerAxisInput.h>
#import <GameController/GCControllerButtonInput.h>
#import <GameController/GCControllerDirectionPad.h>
#import <GameController/GCControllerTouchpad.h>
#import <GameController/GCDeviceCursor.h>

#import <GameController/GCMotion.h>

#import <GameController/GCPhysicalInputProfile.h>
#import <GameController/GCInputNames.h>

#import <GameController/GCGamepad.h>
#import <GameController/GCGamepadSnapshot.h>

#import <GameController/GCExtendedGamepad.h>
#import <GameController/GCExtendedGamepadSnapshot.h>

#import <GameController/GCKeyCodes.h>
#import <GameController/GCKeyNames.h>
#import <GameController/GCKeyboardInput.h>
#import <GameController/GCMouseInput.h>

#import <GameController/GCXboxGamepad.h>
#import <GameController/GCDualShockGamepad.h>

#import <GameController/GCMicroGamepad.h>
#import <GameController/GCMicroGamepadSnapshot.h>

#import <GameController/GCDevice.h>
#import <GameController/GCController.h>
#import <GameController/GCKeyboard.h>
#import <GameController/GCMouse.h>
#import <GameController/GCEventViewController.h>

#import <GameController/GCDeviceHaptics.h>

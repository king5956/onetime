//
//  ZETAppDelegate.h
//  totpyk
//
//  Created by Stephen Lombardo on 12/30/11.
//  Copyright (c) 2011 Zetetic LLC. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "SGHotKey.h"
#import "ZETMenuController.h"

#define kGlobalHotKey @"GlobalHotKey"
#define kTimeStep @"TimeStep"
#define kDigits @"Digits"
#define kKeySlot @"KeySlot"

@interface ZETAppDelegate : NSObject <NSApplicationDelegate> {
    ZETMenuController *menuController;
    SGHotKey *hotKey;
}

@property (nonatomic, retain) ZETMenuController *menuController;
@property (nonatomic, retain) SGHotKey *hotKey;

- (void) registerHotKey:(NSInteger)theKeyCode modifiers:(NSUInteger)theModifiers;
- (void) registerHotKeyCombo:(SGKeyCombo *)keyCombo;
@end

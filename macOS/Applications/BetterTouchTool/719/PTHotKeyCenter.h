//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PTHotKeyCenter : NSObject
{
    NSMutableDictionary *mHotKeys;
    NSMutableDictionary *mHotKeyIDs;
    BOOL mEventHandlerInstalled;
    BOOL _upEventCameFromBTT;
}

+ (id)sharedCenter;
- (int)sendCarbonEvent:(struct OpaqueEventRef *)arg1;
- (void)sendEvent:(id)arg1;
- (void)_hotKeyUp:(id)arg1;
- (BOOL)_hotKeyDown:(id)arg1;
- (void)_updateEventHandler;
- (struct OpaqueEventHotKeyRef *)_carbonHotKeyForHotKey:(id)arg1;
- (id)_hotKeyForCarbonHotKey:(struct OpaqueEventHotKeyRef *)arg1;
- (id)hotKeyWithIdentifier:(id)arg1;
- (id)allHotKeys;
- (void)unregisterHotKey:(id)arg1;
- (void)unregisterHotKeyWithKeyCode:(long long)arg1 andModifier:(long long)arg2;
- (BOOL)registerHotKey:(id)arg1;
- (void)dealloc;
- (id)init;

@end


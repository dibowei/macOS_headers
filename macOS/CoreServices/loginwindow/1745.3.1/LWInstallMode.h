//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface LWInstallMode : NSObject
{
    int _installMode;
    long long _hardwareFixType;
}

+ (id)sharedLWInstallMode;
- (id)stringForInstallMode:(int)arg1;
- (id)softwareUpdateOptions;
- (void)setHardwareFixType:(long long)arg1;
- (void)resetInstallMode;
- (int)installMode;
- (void)dealloc;
- (id)init;

@end


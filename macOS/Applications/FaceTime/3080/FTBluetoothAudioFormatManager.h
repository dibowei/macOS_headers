//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FTBluetoothAudioFormatManager : NSObject
{
    int _currentSCOCount;
}

+ (id)sharedInstance;
@property(nonatomic) int currentSCOCount; // @synthesize currentSCOCount=_currentSCOCount;
- (void)_callStatusChanged:(id)arg1;
- (void)clearSCOMode;
- (void)pushSCOMode;
- (void)_setBTAudioFormat:(unsigned int)arg1;
- (id)init;

@end


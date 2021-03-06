//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSButton.h>

@class NSDateFormatter, NSString, NSTimer;

__attribute__((visibility("hidden")))
@interface BTTDateTimeWidgetButton : NSButton
{
    NSDateFormatter *_dateFormatter;
    NSString *_format;
    NSTimer *_updateTimer;
    double _updateInterval;
    NSString *_currentValue;
}

@property(retain, nonatomic) NSString *currentValue; // @synthesize currentValue=_currentValue;
@property(nonatomic) double updateInterval; // @synthesize updateInterval=_updateInterval;
@property(retain, nonatomic) NSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(retain, nonatomic) NSString *format; // @synthesize format=_format;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateTime;
- (void)startTime:(id)arg1;

@end


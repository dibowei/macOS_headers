//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EWSSerializableTimeZone, NSArray;

@interface EWSWorkingHours : NSObject
{
    EWSSerializableTimeZone *_TimeZone;
    NSArray *_WorkingPeriodArray;
}

+ (id)definition;
@property(copy, nonatomic) NSArray *WorkingPeriodArray; // @synthesize WorkingPeriodArray=_WorkingPeriodArray;
@property(retain, nonatomic) EWSSerializableTimeZone *TimeZone; // @synthesize TimeZone=_TimeZone;
- (void)dealloc;

@end


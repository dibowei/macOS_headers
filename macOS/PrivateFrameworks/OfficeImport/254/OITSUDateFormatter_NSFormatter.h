//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class NSString, OITSULocale;

__attribute__((visibility("hidden")))
@interface OITSUDateFormatter_NSFormatter : NSFormatter
{
    NSString *mPreferredFormat;
    BOOL isDateOnly;
    BOOL isTimeOnly;
    OITSULocale *_locale;
}

@property(retain, nonatomic) OITSULocale *locale; // @synthesize locale=_locale;
@property(nonatomic) BOOL isTimeOnly; // @synthesize isTimeOnly;
@property(nonatomic) BOOL isDateOnly; // @synthesize isDateOnly;
@property(retain, nonatomic) NSString *preferredFormat; // @synthesize preferredFormat=mPreferredFormat;
- (id)stringForObjectValue:(id)arg1;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (void)dealloc;
- (id)init;

@end


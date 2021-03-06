//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TSKAnalyticsLogger : NSObject
{
    NSString *_domain;
    long long _samplingPercentage;
    BOOL _shouldSummarize;
    BOOL _willLogAnalytics;
    BOOL _recalculateWillLog;
    CDStruct_f6aba300 _miniOSVersion;
    CDStruct_f6aba300 _minOSXVersion;
    struct __asl_object_s *_msg;
}

+ (void)logBoolValue:(BOOL)arg1 forKey:(id)arg2 inDomain:(id)arg3;
+ (void)logDoubleValue:(double)arg1 forKey:(id)arg2 inDomain:(id)arg3;
+ (void)logIntegerValue:(long long)arg1 forKey:(id)arg2 inDomain:(id)arg3;
+ (id)loggerWithDomain:(id)arg1;
@property(nonatomic) CDStruct_f6aba300 minOSXVersion; // @synthesize minOSXVersion=_minOSXVersion;
@property(nonatomic) CDStruct_f6aba300 miniOSVersion; // @synthesize miniOSVersion=_miniOSVersion;
@property(nonatomic) BOOL shouldSummarize; // @synthesize shouldSummarize=_shouldSummarize;
@property(nonatomic) long long samplingPercentage; // @synthesize samplingPercentage=_samplingPercentage;
@property(readonly, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (void)logBoolValue:(BOOL)arg1 forKey:(id)arg2;
- (void)logDoubleValue:(double)arg1 forKey:(id)arg2;
- (void)logIntegerValue:(long long)arg1 forKey:(id)arg2;
- (void)finishMessage;
- (void)startMessage;
- (void)p_logASLMessageWithDoubleValue:(double)arg1 forKey:(id)arg2;
- (void)p_logASLMessageWithIntegerValue:(long long)arg1 forKey:(id)arg2;
- (void)p_logASLMessageWithValueString:(char *)arg1 forKey:(id)arg2;
- (id)p_qualifiedStringForKey:(id)arg1;
@property(readonly, nonatomic) BOOL willLogAnalytics; // @dynamic willLogAnalytics;
@property(readonly, nonatomic) BOOL canLogAnalytics; // @dynamic canLogAnalytics;
- (id)initWithDomain:(id)arg1;
- (id)init;

@end


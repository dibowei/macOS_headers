//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CoreData/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary;

__attribute__((visibility("hidden")))
@interface NSPersistentHistoryChangeRequestToken : NSObject <NSSecureCoding>
{
    NSDictionary *_token;
    NSDate *_date;
    long long _resultType;
    BOOL _delete;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) BOOL delete; // @synthesize delete=_delete;
@property(readonly) long long resultType; // @synthesize resultType=_resultType;
@property(readonly, retain) NSDate *date; // @synthesize date=_date;
@property(readonly, retain) NSDictionary *token; // @synthesize token=_token;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initForRequest:(id)arg1;

@end


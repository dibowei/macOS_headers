//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/NSSecureCoding-Protocol.h>

@class NSData;

@interface SGBigUTF8StringArchiveStub : NSObject <NSSecureCoding>
{
    NSData *_backingData;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBackingData:(id)arg1;

@end


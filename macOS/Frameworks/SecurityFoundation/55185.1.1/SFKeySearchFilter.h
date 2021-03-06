//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/NSCopying-Protocol.h>
#import <SecurityFoundation/NSSecureCoding-Protocol.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface SFKeySearchFilter : NSObject <NSCopying, NSSecureCoding>
{
    id _keySearchFilterInternal;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *domains;
@property(copy, nonatomic) NSArray *specifiers;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


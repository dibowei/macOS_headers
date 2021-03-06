//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSArray, NSString;

@interface TSKServiceBag : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_documentId;
    NSString *_stickySessionId;
    NSArray *_iwmbURLPrefixes;
    NSArray *_scmpURLPrefixes;
    NSArray *_assetURLPrefixes;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)doesResponseContainServiceBag:(id)arg1;
+ (id)serviceBagFromLegacyResponseDictionary:(id)arg1 documentId:(id)arg2 applicationName:(id)arg3;
+ (id)serviceBagFromResponseDictionary:(id)arg1;
+ (id)serviceBagWithDocumentId:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *assetURLPrefixes; // @synthesize assetURLPrefixes=_assetURLPrefixes;
@property(readonly, copy, nonatomic) NSArray *scmpURLPrefixes; // @synthesize scmpURLPrefixes=_scmpURLPrefixes;
@property(readonly, copy, nonatomic) NSArray *iwmbURLPrefixes; // @synthesize iwmbURLPrefixes=_iwmbURLPrefixes;
@property(readonly, copy, nonatomic) NSString *stickySessionId; // @synthesize stickySessionId=_stickySessionId;
@property(readonly, copy, nonatomic) NSString *documentId; // @synthesize documentId=_documentId;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)prefixForHost:(long long)arg1 applicationName:(id)arg2 hostOverride:(id)arg3;
- (id)prefixForHost:(long long)arg1 applicationName:(id)arg2;
- (id)updatedServiceBagWithDocumentId:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithDocumentId:(id)arg1 stickySessionId:(id)arg2 iwmbURLPrefixes:(id)arg3 scmpURLPrefixes:(id)arg4 assetURLPrefixes:(id)arg5;
- (id)initWithDocumentId:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AssetCacheServicesExtensions/AssetCacheAlert.h>

@class NSString;

@interface AssetCacheRejectedParentServerRequestAlert : AssetCacheAlert
{
    NSString *_parentAddress;
}

@property(retain) NSString *parentAddress; // @synthesize parentAddress=_parentAddress;
- (void).cxx_destruct;
- (id)sharingPrefsAnchor;
- (id)verboseText;
- (id)externalRepresentation;
- (id)initWithExternalRepresentation:(id)arg1;
- (id)initWithParentAddress:(id)arg1;

@end


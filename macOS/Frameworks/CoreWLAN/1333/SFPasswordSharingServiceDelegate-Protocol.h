//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSString, SFPasswordSharingInfo, SFPasswordSharingService;

@protocol SFPasswordSharingServiceDelegate
- (BOOL)service:(SFPasswordSharingService *)arg1 shouldPromptForNetwork:(NSString *)arg2;
- (void)service:(SFPasswordSharingService *)arg1 receivedNetworkInfo:(SFPasswordSharingInfo *)arg2;
@end


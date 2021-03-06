//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "SPAService.h"

@interface SPAFacebookService : SPAService
{
}

- (id)notificationCenterBundleID;
- (id)destroyParametersForUUID:(id)arg1;
- (id)destroyURLForUUID:(id)arg1;
- (id)listURL;
- (id)registrationURL;
- (id)acAccountType;
- (unsigned long long)currentPushSettings;
- (id)registrationPlistPath;
- (id)urlForActivateNotification:(id)arg1;
- (id)noticationURLFromID:(id)arg1 eventType:(id)arg2;
- (void)handleAPSConnectionMessageForTopic:(id)arg1 userInfo:(id)arg2;
- (void)unregisterCurrentUUID;
- (BOOL)unregisterAccount:(id)arg1 uuid:(id)arg2;
- (long long)removePushDestinationsForAccount:(id)arg1 onDevice:(id)arg2 allowOtherDevices:(BOOL)arg3;
- (id)registeredPushDestinationsFromProviderWithAccount:(id)arg1;
- (void)registerForPushNotificationsAndUpdatePersistFileWithDeviceToken:(id)arg1 UUID:(id)arg2 account:(id)arg3 enabledFor:(unsigned long long)arg4;
- (id)initWithServiceType:(id)arg1 accountStore:(id)arg2;

@end


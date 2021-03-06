//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class CNApplicationProxy, NSData, NSString;

@protocol CNLaunchServicesAdapter
- (void)openUserActivityData:(NSData *)arg1 inApplication:(CNApplicationProxy *)arg2 withReply:(void (^)(BOOL, NSError *))arg3;
- (void)applicationForBundleIdentifier:(NSString *)arg1 withReply:(void (^)(CNApplicationProxy *, NSError *))arg2;
- (void)applicationsAvailableForHandlingURLScheme:(NSString *)arg1 withReply:(void (^)(NSArray *, NSError *))arg2;
- (void)applicationsForUserActivityType:(NSString *)arg1 withReply:(void (^)(NSArray *, NSError *))arg2;
@end


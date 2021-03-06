//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudKitDaemon/NSObject-Protocol.h>

@class CKOperationResult, NSDictionary, NSString;

@protocol CKDOperationInfoDelegate <NSObject>
@property(readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
- (void)wasUnexpectedlyUnregisteredForOperationID:(NSString *)arg1;
- (void)operationWithID:(NSString *)arg1 didComplete:(CKOperationResult *)arg2;
- (void)operationWithID:(NSString *)arg1 didProgress:(NSDictionary *)arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FLUApplicationEventManager : NSObject
{
    CDUnknownBlockType _accountDidSwitchCompletionBlock;
}

+ (id)shared;
@property(copy, nonatomic) CDUnknownBlockType accountDidSwitchCompletionBlock; // @synthesize accountDidSwitchCompletionBlock=_accountDidSwitchCompletionBlock;
- (void).cxx_destruct;
- (void)parseURL:(id)arg1 longPress:(BOOL)arg2;
- (void)showLinkingAccountError;
- (void)handleGetURLEvent:(id)arg1 withReplyEvent:(id)arg2;
- (void)userDidSwitchAccounts:(id)arg1;
- (void)dealloc;
- (id)init;

@end


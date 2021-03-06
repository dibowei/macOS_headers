//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock;

@interface MacMainThreadCallback : NSObject
{
    NSLock *lock;
    CDUnknownFunctionPointerType callback;
    void *context;
    BOOL pendingInvocation;
}

@property void *context; // @synthesize context;
@property CDUnknownFunctionPointerType callback; // @synthesize callback;
- (void)cancel;
- (void)invoke;
- (void)triggerAfterDelay:(int)arg1;
- (void)triggerAsync;
- (void)trigger:(BOOL)arg1;
- (void)dealloc;
- (id)initWithCallback:(CDUnknownFunctionPointerType)arg1 withContext:(void *)arg2;

@end


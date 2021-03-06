//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEODataSession-Protocol.h>

@class GEODataXPCSessionTaskQueue, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEODataXPCSession : NSObject <GEODataSession>
{
    GEODataXPCSessionTaskQueue *_taskQueue;
    NSObject<OS_dispatch_queue> *_sessionIsolation;
}

@property(readonly, nonatomic) GEODataXPCSessionTaskQueue *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *sessionIsolation; // @synthesize sessionIsolation=_sessionIsolation;
- (void).cxx_destruct;
- (id)taskWithRequest:(id)arg1 rules:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;
- (id)initWithConnectionManager:(id)arg1;
- (id)init;
- (void)restartTask:(id)arg1;
- (void)startTask:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


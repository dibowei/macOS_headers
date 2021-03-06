//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/NSProgressReporting-Protocol.h>

@class GEOApplicationAuditToken, GEOPowerAssertion, GEOReportedProgress, NSArray, NSMapTable, NSMutableArray, NSProgress, NSString;
@protocol OS_dispatch_queue;

@interface GEOResourceLoader : NSObject <NSProgressReporting>
{
    NSString *_directory;
    NSString *_additionalDirectoryToConsider;
    NSMutableArray *_resourcesToLoad;
    CDUnknownBlockType _completionHandler;
    long long _numberOfDownloadsInProgress;
    long long _numberOfCopiesInProgress;
    BOOL _canceled;
    BOOL _requiresWiFi;
    NSString *_baseURLString;
    unsigned long long _maxConcurrentLoads;
    NSArray *_resourceInfos;
    NSMutableArray *_loadedResources;
    GEOApplicationAuditToken *_auditToken;
    BOOL _allowResumingPartialDownloads;
    NSMapTable *_inProgressResourceDownloads;
    GEOPowerAssertion *_powerAssertion;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    GEOReportedProgress *_progress;
}

+ (Class)resourceLoadOperationClass;
@property(nonatomic) BOOL requiresWiFi; // @synthesize requiresWiFi=_requiresWiFi;
@property(retain, nonatomic) GEOApplicationAuditToken *auditToken; // @synthesize auditToken=_auditToken;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)_copyResource:(id)arg1 fromPath:(id)arg2 allowCreatingHardLink:(BOOL)arg3 error:(id *)arg4;
- (void)_writeResourceToDisk:(id)arg1 withData:(id)arg2 checksum:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 callbackQueue:(id)arg5;
- (void)_loadNextResourceFromNetwork;
- (void)_loadResourcesFromDisk;
- (BOOL)_establishHardLinkIfPossibleForResource:(id)arg1 toResource:(id)arg2 error:(id *)arg3;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1 callbackQueue:(id)arg2;
- (void)_cleanup;
@property(readonly) NSProgress *progress;
- (id)initWithTargetDirectory:(id)arg1 baseURLString:(id)arg2 resources:(id)arg3 maximumConcurrentLoads:(unsigned long long)arg4 additionalDirectoryToConsider:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


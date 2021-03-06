//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL, TSPDocumentResourceCache, TSUDownloadManager;
@protocol OS_dispatch_queue;

@interface TSPDocumentResourceManager : NSObject
{
    NSURL *_appDocumentResourcesURL;
    NSURL *_appDocumentResourcesMetadataURL;
    long long _documentResourcesConfigurationToken;
    NSObject<OS_dispatch_queue> *_documentResourcesConfigurationQueue;
    NSDictionary *_documentResourcesConfiguration;
    TSPDocumentResourceCache *_cache;
    TSUDownloadManager *_downloadManager;
}

+ (id)sharedManager;
+ (void)clearSharedCache;
+ (id)appDocumentResourcesMetadataURL;
+ (id)appDocumentResourcesURL;
@property(readonly, nonatomic) TSUDownloadManager *downloadManager; // @synthesize downloadManager=_downloadManager;
@property(readonly, nonatomic) TSPDocumentResourceCache *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (id)dataStorageForDigestString:(id)arg1 locator:(id)arg2 extension:(id)arg3 infoToDownload:(id *)arg4;
- (id)cachedDocumentResourceDataStorageForInfo:(id)arg1 isValidated:(BOOL)arg2;
- (id)applicationDataStorageForInfo:(id)arg1 isValidated:(BOOL)arg2;
- (void)clearCache;
- (id)newDataProviderForContext:(id)arg1;
- (id)URLForCachedDocumentResourceWithDigestString:(id)arg1;
- (id)documentResourceRelativePathWithDigestString:(id)arg1 extension:(id)arg2;
- (id)URLForAppDocumentResourceWithDigestString:(id)arg1 extension:(id)arg2;
- (id)findDocumentResourceUsingDigestString:(id)arg1 locator:(id)arg2;
- (id)documentResourcesConfiguration;
- (id)initWithAppDocumentResourcesURL:(id)arg1 appDocumentResourcesMetadataURL:(id)arg2 cache:(id)arg3 downloadManager:(id)arg4;
- (id)init;

@end


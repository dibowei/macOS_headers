//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LiLibrary, LiRidList, NSArray, NSDictionary, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSSet, RDImageAdjustmentTable;
@protocol OS_dispatch_queue;

@interface IPALegacyAdjustmentConversionSession : NSObject
{
    LiLibrary *_library;
    RDImageAdjustmentTable *_adjustmentTable;
    NSArray *_adjustmentProperties;
    NSMutableDictionary *map_versionIdToProxyId;
    NSMutableDictionary *map_versionUuidToAdjustmentRidList;
    NSSet *_adjustedVersionUuids;
    NSDictionary *map_masterModelIdToMaster;
    NSObject<OS_dispatch_queue> *_serializer;
    unsigned long long _state;
    NSMutableOrderedSet *_adjustedPhotoVersions;
    NSMutableSet *_avVersions;
    NSMutableSet *_maskDirectoriesToRemove;
    NSMutableDictionary *map_masterUuidToOriginalVersion;
    NSMutableSet *_nonOriginalVersions;
    NSMutableDictionary *map_versionIdIdToOriginalOrientation;
    NSMutableDictionary *map_orientationToVersionRidList;
    NSMutableDictionary *map_orientationToProxyRidList;
    NSMutableDictionary *map_modelIdToVersion;
    LiRidList *_unadjustedNonRawVersionIds;
    LiRidList *_unadjustedRawVersionIds;
}

+ (id)batchifyVersionArray:(id)arg1 batchSize:(unsigned long long)arg2;
+ (id)categorizeAdjustmentsByVersion:(id)arg1;
+ (void)sortVersionOrderedSetByModelId:(id)arg1;
+ (id)_convertLegacyPhotoAdjustments:(id)arg1 forVersion:(id)arg2 conversionService:(id)arg3 liveUpgradeService:(id)arg4 invalidatePreviews:(char *)arg5;
@property(retain) LiRidList *unadjustedRawVersionIds; // @synthesize unadjustedRawVersionIds=_unadjustedRawVersionIds;
@property(retain) LiRidList *unadjustedNonRawVersionIds; // @synthesize unadjustedNonRawVersionIds=_unadjustedNonRawVersionIds;
- (void).cxx_destruct;
- (id)adjustmentRidsInBatch:(id)arg1;
- (id)adjustmentsForRidList:(id)arg1;
- (BOOL)proccessVersionsWithBatchSize:(unsigned long long)arg1 onBatchCompleteBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)prepareToProcess;
- (id)addVersionIds:(id)arg1;
- (void)_removeUnadjustedVersion:(id)arg1;
- (void)_addUnadjustedVersion:(id)arg1;
- (void)associateVersion:(id)arg1 withOrientation:(long long)arg2;
- (void)_enterState:(unsigned long long)arg1;
- (id)orientationToProxyRidLists;
- (id)orientationToVersionRidLists;
- (unsigned long long)adjustedVersionCount;
- (id)initWithLibrary:(id)arg1 proxies:(id)arg2 adjustments:(id)arg3 mastersByModelId:(id)arg4;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudKit/CKRecord.h>

@interface CKRecord (CPLCloudKitImplementation)
+ (id)cpl_recordFromCPLRecordChange:(id)arg1 withRecordMap:(id)arg2 tempCKAssetURL:(id)arg3 inZone:(id)arg4;
+ (id)cpl_expungedRecordFromCPLRecordChange:(id)arg1 inZone:(id)arg2;
+ (Class)cpl_recordChangeClassForRecordType:(id)arg1;
- (void)cplAddResources:(id)arg1 clearMissing:(BOOL)arg2;
- (id)cplResourcesAreCoherent:(char *)arg1;
- (id)cplResourceWithType:(unsigned long long)arg1 isCoherent:(char *)arg2;
- (id)cpl_recordChangeMissingResourceProperties:(id *)arg1;
- (void)cpl_setEncryptedObject:(id)arg1 forKey:(id)arg2;
- (void)cpl_setNonNilEncryptedObject:(id)arg1 forKey:(id)arg2;
- (id)cpl_decryptedObjectForKey:(id)arg1 validateClass:(Class)arg2;
- (id)cpl_objectForKey:(id)arg1 validateClass:(Class)arg2;
@end


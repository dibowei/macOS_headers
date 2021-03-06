//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface ASBContainerUpgradeScript : NSObject
{
    NSArray *_actions;
}

+ (id)scriptWithActions:(id)arg1;
+ (id)scriptToUnsymlinkPreferenceDomains:(id)arg1 error:(id *)arg2;
+ (id)scriptToSymlinkPreferenceDomains:(id)arg1 includeByHostPreferences:(BOOL)arg2 error:(id *)arg3;
+ (id)scriptToMigrateAutosaveDocumentsForApplicationWithBundleId:(id)arg1 error:(id *)arg2;
+ (id)scriptToMigratePreferencesOfApplicationWithBundleId:(id)arg1 error:(id *)arg2;
+ (id)scriptWithContentsOfMigrationManifestAtURL:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (BOOL)runScriptWithContainer:(id)arg1 ignoringActionFailures:(BOOL)arg2 usingFileManager:(id)arg3 error:(id *)arg4;
- (void)enumerateActionsUsingBlock:(CDUnknownBlockType)arg1;
- (id)scriptByAppendingScript:(id)arg1;
- (id)initWithActions:(id)arg1;
- (id)init;

@end


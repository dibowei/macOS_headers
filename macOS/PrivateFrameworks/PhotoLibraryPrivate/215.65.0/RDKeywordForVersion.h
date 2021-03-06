//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDKeywordForVersionModel.h>

@interface RDKeywordForVersion : RDKeywordForVersionModel
{
}

+ (id)iLMBKeyPathsFromTable:(id)arg1;
+ (void)removeKeywords:(id)arg1 fromVersions:(id)arg2 withReason:(unsigned int)arg3;
+ (void)removeKeywords:(id)arg1 fromVersion:(id)arg2 withReason:(unsigned int)arg3;
+ (void)addKeywords:(id)arg1 toVersion:(id)arg2;
+ (void)replaceKeywordId:(id)arg1 withKeywordId:(id)arg2 forDatabase:(id)arg3 withReason:(unsigned int)arg4;
+ (void)addDuplicateVersion:(id)arg1 forOriginalVersionId:(id)arg2;
+ (id)versionsForKeyword:(id)arg1;
+ (id)countOfVersionsForKeywordId:(id)arg1 fromDatabase:(id)arg2;
+ (id)versionIdsForKeywordId:(id)arg1 fromDatabase:(id)arg2;
+ (id)keywordsForVersionIds:(id)arg1 fromDatabase:(id)arg2;
+ (id)dictionaryOfAllKeywordIdsFromDatabase:(id)arg1;
+ (id)dictionaryOfKeywordIdsForVersionIds:(id)arg1 fromDatabase:(id)arg2;
+ (id)keywordIdsForVersionIds:(id)arg1 fromDatabase:(id)arg2;
+ (id)keywordIdsForVersionId:(id)arg1 fromDatabase:(id)arg2;
+ (unsigned long long)countOfKeywordsForVersionId:(id)arg1 fromDatabase:(id)arg2;
+ (void)deleteFromAllKeywords:(id)arg1 fromDatabase:(id)arg2 withReason:(unsigned int)arg3;
+ (id)createKeywordForVersionForKeywordId:(long long)arg1 versionId:(long long)arg2 inDatabase:(id)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXKeywordManagerAction.h"

@class NSArray, NSMutableDictionary, RDDatabase;

@interface IPXDeleteKeywordAction : IPXKeywordManagerAction
{
    RDDatabase *_database;
    NSMutableDictionary *_versionIdsForKeyword;
    NSArray *_keywords;
}

@property(retain, nonatomic) NSArray *keywords; // @synthesize keywords=_keywords;
- (void).cxx_destruct;
- (id)defaultActionNameLocalizationKey;
- (int)performRedo;
- (int)performUndo;
- (int)performAction;
- (void)_delete;
- (void)_add;

@end


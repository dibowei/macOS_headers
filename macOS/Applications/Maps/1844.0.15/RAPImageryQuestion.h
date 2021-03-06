//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "RAPQuestion.h"

@class NSArray, NSString, RAPCommentQuestion, RAPImageryIssue, RAPReportContext;

__attribute__((visibility("hidden")))
@interface RAPImageryQuestion : RAPQuestion
{
    RAPImageryIssue *_selectedIssue;
    NSArray *_selectableIssues;
    RAPCommentQuestion *_commentQuestion;
    RAPReportContext *_imageryPickingMapContext;
    CDStruct_02837cd9 _incorrectImageryMapRect;
}

+ (int)mapServiceAction;
@property(retain, nonatomic) RAPReportContext *imageryPickingMapContext; // @synthesize imageryPickingMapContext=_imageryPickingMapContext;
@property(nonatomic) CDStruct_90e2a262 incorrectImageryMapRect; // @synthesize incorrectImageryMapRect=_incorrectImageryMapRect;
@property(retain, nonatomic) RAPImageryIssue *selectedIssue; // @synthesize selectedIssue=_selectedIssue;
- (void).cxx_destruct;
- (void)_fillSubmittableProblem:(id)arg1;
- (id)_alternateMapViewContext;
- (BOOL)_isRecursivelyComplete;
- (BOOL)isComplete;
@property(readonly, nonatomic) CDStruct_90e2a262 initialImageryPickingMapRect;
@property(readonly, nonatomic) RAPCommentQuestion *commentQuestion; // @synthesize commentQuestion=_commentQuestion;
- (id)_commentsPlaceholderText;
- (id)_commentsTitle;
@property(readonly, nonatomic) NSString *localizedImageryPickingPrompt;
@property(readonly, nonatomic) NSArray *selectableIssues; // @synthesize selectableIssues=_selectableIssues;
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2;

@end


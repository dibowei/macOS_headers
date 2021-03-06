//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "FBACorrespondingViewController-Protocol.h"

@class FBABugForm, FBAFormResponse, FBAStackView, NSArray, NSDate, NSMapTable, NSString;

@interface FBAFeedbackSummaryViewController : NSViewController <FBACorrespondingViewController>
{
    NSMapTable *_viewControllersByQuestionGroup;
    BOOL _observingAfterLoad;
    BOOL _shouldShowQuestionLinks;
    FBAFormResponse *_formResponse;
    FBAStackView *_groupStackView;
    NSArray *_summaryQuestionGroupViewControllers;
}

+ (id)keyPathsForValuesAffectingSubjectString;
+ (id)keyPathsForValuesAffectingCorrespondenceTime;
+ (id)keyPathsForValuesAffectingCorrespondenceSubtitle;
+ (id)keyPathsForValuesAffectingCorrespondenceTitle;
@property(retain) NSArray *summaryQuestionGroupViewControllers; // @synthesize summaryQuestionGroupViewControllers=_summaryQuestionGroupViewControllers;
@property __weak FBAStackView *groupStackView; // @synthesize groupStackView=_groupStackView;
@property BOOL shouldShowQuestionLinks; // @synthesize shouldShowQuestionLinks=_shouldShowQuestionLinks;
@property(readonly) FBAFormResponse *formResponse; // @synthesize formResponse=_formResponse;
- (void).cxx_destruct;
- (id)createDivider;
- (void)updateQuestionVisibility;
- (id)viewControllerForQuestionGroup:(id)arg1;
- (void)loadView;
@property(readonly) NSString *subjectString;
@property(readonly) BOOL correspondenceUnread;
@property(readonly) NSDate *correspondenceTime;
@property(readonly) NSString *correspondenceSubtitle;
@property(readonly) NSString *correspondenceTitle;
@property(readonly) FBABugForm *bugForm;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)answerDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithFormResponse:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


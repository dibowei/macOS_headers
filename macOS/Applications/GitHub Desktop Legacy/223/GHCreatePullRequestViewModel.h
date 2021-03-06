//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ReactiveViewModel/RVMViewModel.h>

@class GHBranch, GHExistingRepositoryViewModel, NSArray, NSString, OCTPullRequest, RACCommand, RACSignal;

@interface GHCreatePullRequestViewModel : RVMViewModel
{
    BOOL _hasUniqueCommits;
    BOOL _hasLocalCommits;
    NSString *_title;
    NSString *_body;
    NSString *_sourceBranchName;
    GHBranch *_destinationBranch;
    RACCommand *_createPullRequestCommand;
    RACSignal *_errors;
    long long _mergeState;
    NSString *_defaultTitle;
    NSString *_defaultBody;
    NSArray *_autocompletionSources;
    NSString *_statusText;
    NSString *_creatingStatusText;
    OCTPullRequest *_pullRequest;
    RACCommand *_selectDestinationBranchCommand;
    GHExistingRepositoryViewModel *_repositoryViewModel;
}

@property(readonly, nonatomic) GHExistingRepositoryViewModel *repositoryViewModel; // @synthesize repositoryViewModel=_repositoryViewModel;
@property(readonly, nonatomic) RACCommand *selectDestinationBranchCommand; // @synthesize selectDestinationBranchCommand=_selectDestinationBranchCommand;
@property(readonly, nonatomic) OCTPullRequest *pullRequest; // @synthesize pullRequest=_pullRequest;
@property(copy, nonatomic) NSString *creatingStatusText; // @synthesize creatingStatusText=_creatingStatusText;
@property(readonly, copy, nonatomic) NSString *statusText; // @synthesize statusText=_statusText;
@property(readonly, copy, nonatomic) NSArray *autocompletionSources; // @synthesize autocompletionSources=_autocompletionSources;
@property(readonly, nonatomic) BOOL hasLocalCommits; // @synthesize hasLocalCommits=_hasLocalCommits;
@property(readonly, copy, nonatomic) NSString *defaultBody; // @synthesize defaultBody=_defaultBody;
@property(readonly, copy, nonatomic) NSString *defaultTitle; // @synthesize defaultTitle=_defaultTitle;
@property(readonly, nonatomic) BOOL hasUniqueCommits; // @synthesize hasUniqueCommits=_hasUniqueCommits;
@property(readonly, nonatomic) long long mergeState; // @synthesize mergeState=_mergeState;
@property(readonly, nonatomic) RACSignal *errors; // @synthesize errors=_errors;
@property(readonly, nonatomic) RACCommand *createPullRequestCommand; // @synthesize createPullRequestCommand=_createPullRequestCommand;
@property(readonly, copy, nonatomic) GHBranch *destinationBranch; // @synthesize destinationBranch=_destinationBranch;
@property(readonly, copy, nonatomic) NSString *sourceBranchName; // @synthesize sourceBranchName=_sourceBranchName;
@property(copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithExistingRepositoryViewModel:(id)arg1 usersController:(id)arg2 userCache:(id)arg3 usageTracker:(id)arg4 issuesCache:(id)arg5;

@end


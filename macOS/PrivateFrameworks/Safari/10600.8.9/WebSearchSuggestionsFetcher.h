//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/NSURLConnectionDataDelegate-Protocol.h>

@class NSString, WBSCompletionQuery, WBSSearchSuggestionsFetcher;
@protocol WebSearchSuggestionsFetcherDelegate;

__attribute__((visibility("hidden")))
@interface WebSearchSuggestionsFetcher : NSObject <NSURLConnectionDataDelegate>
{
    WBSSearchSuggestionsFetcher *_fetcher;
    id <WebSearchSuggestionsFetcherDelegate> _delegate;
    WBSCompletionQuery *_completionQuery;
}

@property(retain, nonatomic) WBSCompletionQuery *completionQuery; // @synthesize completionQuery=_completionQuery;
@property(nonatomic) __weak id <WebSearchSuggestionsFetcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_stopLoading;
- (void)_fetch;
@property(readonly, copy, nonatomic) NSString *suggestionsURLTemplate;
- (void)disconnectFromSearchHelper;
- (void)cancelFetching;
@property(readonly, nonatomic, getter=isFetching) BOOL fetching;
- (void)fetch;
- (id)initWithSuggestionsURLTemplate:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


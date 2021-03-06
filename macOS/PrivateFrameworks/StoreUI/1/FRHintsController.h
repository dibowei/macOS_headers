//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreUI/NSTableViewDataSource-Protocol.h>
#import <StoreUI/NSTableViewDelegate-Protocol.h>
#import <StoreUI/NSTextFieldDelegate-Protocol.h>

@class FRStoreViewController, NSMutableDictionary, NSString, SuggestionsWindowController;

@interface FRHintsController : NSObject <NSTextFieldDelegate, NSTableViewDelegate, NSTableViewDataSource>
{
    NSMutableDictionary *_hintsDictionary;
    id _searchField;
    NSString *_searchString;
    SuggestionsWindowController *_suggestionsController;
    FRStoreViewController *_storeViewController;
}

@property __weak FRStoreViewController *storeViewController; // @synthesize storeViewController=_storeViewController;
- (void).cxx_destruct;
- (void)updateFieldEditor:(id)arg1 withSuggestion:(id)arg2;
- (void)updateWithSelectedSuggestion:(id)arg1;
- (void)updateSuggestionsWithDictionary:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithSearchField:(id)arg1;
- (id)control:(id)arg1 textView:(id)arg2 completions:(id)arg3 forPartialWordRange:(struct _NSRange)arg4 indexOfSelectedItem:(long long *)arg5;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)controlTextDidChange:(id)arg1;
- (void)controlTextDidBeginEditing:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


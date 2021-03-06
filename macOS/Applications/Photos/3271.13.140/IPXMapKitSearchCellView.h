//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class IPXMapKitSearchSuggestion, NSArray, NSTextField;

@interface IPXMapKitSearchCellView : NSTableCellView
{
    NSTextField *_subtitleTextField;
    IPXMapKitSearchSuggestion *_searchSuggestion;
    NSArray *_contentConstraints;
}

+ (BOOL)requiresConstraintBasedLayout;
@property(retain) NSArray *contentConstraints; // @synthesize contentConstraints=_contentConstraints;
@property(retain) IPXMapKitSearchSuggestion *searchSuggestion; // @synthesize searchSuggestion=_searchSuggestion;
@property NSTextField *subtitleTextField; // @synthesize subtitleTextField=_subtitleTextField;
- (void).cxx_destruct;
- (BOOL)_canHighlightTitleForString:(id)arg1;
- (void)_updateTextAttributesWithBackgroundStyle:(long long)arg1;
- (void)setBackgroundStyle:(long long)arg1;
- (void)updateConstraints;
- (void)_createSubviewsIfNecessary;
- (void)updateWithSuggestion:(id)arg1;

@end


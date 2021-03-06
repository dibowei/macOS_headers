//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarUI/CalUIDelayedHoverButtonTableCellView.h>

#import "NSTextFieldDelegate-Protocol.h"

@class CalUICalendarListAlertButton, CalUICalendarListBadgeCountField, CalUIColorCheckboxButton, NSLayoutConstraint, NSString;
@protocol CalUICalendarListCellViewDataSource, CalUICalendarListCellViewDelegate, CalUICalendarListViewNode;

@interface CalUICalendarListCellView : CalUIDelayedHoverButtonTableCellView <NSTextFieldDelegate>
{
    BOOL _showSharingHover;
    id <CalUICalendarListCellViewDelegate> _delegate;
    id <CalUICalendarListCellViewDataSource> _dataSource;
    CalUIColorCheckboxButton *_checkboxButton;
    CalUICalendarListBadgeCountField *_badgeCountField;
    NSLayoutConstraint *_badgeFieldWidthConstraint;
    NSLayoutConstraint *_alertButtonWidthConstraint;
}

@property BOOL showSharingHover; // @synthesize showSharingHover=_showSharingHover;
@property(retain) NSLayoutConstraint *alertButtonWidthConstraint; // @synthesize alertButtonWidthConstraint=_alertButtonWidthConstraint;
@property(retain) NSLayoutConstraint *badgeFieldWidthConstraint; // @synthesize badgeFieldWidthConstraint=_badgeFieldWidthConstraint;
@property(retain) CalUICalendarListBadgeCountField *badgeCountField; // @synthesize badgeCountField=_badgeCountField;
@property(retain) CalUIColorCheckboxButton *checkboxButton; // @synthesize checkboxButton=_checkboxButton;
@property __weak id <CalUICalendarListCellViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property __weak id <CalUICalendarListCellViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)representedNodeIsRenameable;
- (void)titleFieldDidBecomeFirstResponder:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)colorCheckboxButtonColorChanged:(id)arg1;
- (void)colorCheckboxButtonStateChanged:(id)arg1;
- (BOOL)buttonShouldAlwaysBeShown;
- (BOOL)buttonStateIsLocked;
- (void)hideButton;
- (void)showButton;
- (BOOL)shouldDisplayBadge;
- (long long)badgeCount;
- (void)updateBadge;
- (BOOL)shouldShowSharingHover;
- (BOOL)shouldDisplayAlert;
- (void)updateAlert;
- (void)alertClicked:(id)arg1;
@property(readonly) CalUICalendarListAlertButton *alertButton;
- (BOOL)shouldShowCheckbox;
- (long long)_checkboxState;
- (void)updateCheckbox;
- (void)updateSubviews;
- (void)setObjectValue:(id)arg1;
@property(readonly) __weak id <CalUICalendarListViewNode> representedNode;
- (void)viewWillDraw;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


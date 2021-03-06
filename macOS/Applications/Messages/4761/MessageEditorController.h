//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSButton, NSLayoutConstraint, NSMutableArray, NSPopUpButton, NSString, NSTableView, NSView, NSWindow;

@interface MessageEditorController : NSObject
{
    NSWindow *_window;
    NSTableView *_availableTable;
    NSTableView *_awayTable;
    NSButton *_availableAddButton;
    NSButton *_awayAddButton;
    NSButton *_availableRemoveButton;
    NSButton *_awayRemoveButton;
    NSButton *_autoCreateCheckbox;
    NSPopUpButton *_rememberLastPopup;
    NSMutableArray *_availableMessages;
    NSMutableArray *_awayMessages;
    NSMutableArray *_previousAvailableMessages;
    NSMutableArray *_previousAwayMessages;
    NSString *_messageToSet;
    BOOL _setMessage;
    unsigned long long _startingStatus;
    NSArray *_accounts;
    NSLayoutConstraint *_spuriousTableWidth;
    NSLayoutConstraint *_awayButtonsSeparationConstraint;
    NSView *_availableScrollView;
    NSView *_awayScrollView;
}

- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(int)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(int)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (BOOL)control:(id)arg1 textShouldEndEditing:(id)arg2;
- (BOOL)tableView:(id)arg1 deleteRows:(id)arg2;
- (BOOL)tableView:(id)arg1 canDeleteRows:(id)arg2;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(int)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(int)arg3;
- (int)numberOfRowsInTableView:(id)arg1;
- (void)changeNumberOfRememberedMessages:(id)arg1;
- (void)autoCreateChecked:(id)arg1;
- (void)removeItems:(id)arg1;
- (void)newItem:(id)arg1;
- (void)_determineList:(id *)arg1 andTable:(id *)arg2 toUseForStatus:(unsigned long long)arg3;
- (void)setAwayMessages:(id)arg1;
- (void)setAvailableMessages:(id)arg1;
- (id)awayMessages;
- (id)availableMessages;
- (void)endSheet:(id)arg1;
- (void)sheetDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)_trimList:(id)arg1;
- (void)runAsSheetInWindow:(id)arg1 forAccounts:(id)arg2;
- (void)setCurrentStatus:(unsigned long long)arg1 andMessage:(id)arg2;
- (id)currentMessage;
- (void)dealloc;
- (void)awakeFromNib;
- (void)_statusIndicatorDidChange:(id)arg1;

@end


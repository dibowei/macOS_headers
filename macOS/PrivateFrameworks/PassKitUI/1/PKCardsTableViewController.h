//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <PassKitUI/NSTabViewDelegate-Protocol.h>
#import <PassKitUI/NSTableViewDataSource-Protocol.h>

@class NSArray, NSString, NSTableView, PKPassLibrary, PKPaymentPass, PKPaymentService;
@protocol PKCardsTableViewControllerDelegate;

@interface PKCardsTableViewController : NSViewController <NSTabViewDelegate, NSTableViewDataSource>
{
    id <PKCardsTableViewControllerDelegate> _delegate;
    PKPaymentPass *_selectedCard;
    NSString *_autoSelectCardIdentifier;
    NSArray *_cards;
    PKPaymentPass *_defaultCard;
    NSArray *_otherActiveCards;
    PKPassLibrary *_passLibrary;
    PKPaymentService *_paymentService;
    NSTableView *_paymentPassesTable;
    NSArray *_tableContent;
    NSString *_defaultCardIdentifier;
}

@property(retain) NSString *defaultCardIdentifier; // @synthesize defaultCardIdentifier=_defaultCardIdentifier;
@property(retain) NSArray *tableContent; // @synthesize tableContent=_tableContent;
@property(retain) NSTableView *paymentPassesTable; // @synthesize paymentPassesTable=_paymentPassesTable;
@property(retain) PKPaymentService *paymentService; // @synthesize paymentService=_paymentService;
@property(retain) PKPassLibrary *passLibrary; // @synthesize passLibrary=_passLibrary;
@property(retain) NSArray *otherActiveCards; // @synthesize otherActiveCards=_otherActiveCards;
@property(retain) PKPaymentPass *defaultCard; // @synthesize defaultCard=_defaultCard;
@property(retain) NSArray *cards; // @synthesize cards=_cards;
@property(retain) NSString *autoSelectCardIdentifier; // @synthesize autoSelectCardIdentifier=_autoSelectCardIdentifier;
@property(readonly) PKPaymentPass *selectedCard; // @synthesize selectedCard=_selectedCard;
@property __weak id <PKCardsTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)nibBundle;
- (BOOL)setSelectedCard:(id)arg1;
- (void)_reloadPasses;
- (void)_updateTableContent;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


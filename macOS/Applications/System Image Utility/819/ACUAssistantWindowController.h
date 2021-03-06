//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ACUWindowController.h"

#import "NSWindowDelegate-Protocol.h"

@class ACUBackgroundColorView, NSButton, NSImage, NSString, NSTextField, NSViewController;
@protocol ACUAssistantPaneProtocol;

@interface ACUAssistantWindowController : ACUWindowController <NSWindowDelegate>
{
    NSString *mNextButtonKeyEquivalent;
    BOOL _canCancel;
    BOOL _canRetreat;
    BOOL _canAdvance;
    NSImage *_backgroundImage;
    NSString *_localizedTitle;
    NSString *_localizedCancelButtonTitle;
    NSString *_localizedPreviousButtonTitle;
    NSString *_localizedNextButtonTitle;
    ACUBackgroundColorView *_paneViewContainer;
    NSTextField *_titleTextField;
    NSViewController<ACUAssistantPaneProtocol> *_currentViewController;
    NSButton *_nextButton;
}

@property NSButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) NSViewController<ACUAssistantPaneProtocol> *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(retain, nonatomic) NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
@property(retain, nonatomic) ACUBackgroundColorView *paneViewContainer; // @synthesize paneViewContainer=_paneViewContainer;
@property(retain, nonatomic) NSString *localizedNextButtonTitle; // @synthesize localizedNextButtonTitle=_localizedNextButtonTitle;
@property(retain, nonatomic) NSString *localizedPreviousButtonTitle; // @synthesize localizedPreviousButtonTitle=_localizedPreviousButtonTitle;
@property(retain, nonatomic) NSString *localizedCancelButtonTitle; // @synthesize localizedCancelButtonTitle=_localizedCancelButtonTitle;
@property(retain, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(nonatomic) BOOL canAdvance; // @synthesize canAdvance=_canAdvance;
@property(nonatomic) BOOL canRetreat; // @synthesize canRetreat=_canRetreat;
@property(nonatomic) BOOL canCancel; // @synthesize canCancel=_canCancel;
@property(retain, nonatomic) NSImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
- (void)removePanel:(id)arg1 direction:(int)arg2;
- (void)addPanel:(id)arg1 direction:(int)arg2;
- (BOOL)windowShouldClose:(id)arg1;
- (id)paneViewControllerBeforeViewController:(id)arg1;
- (id)paneViewControllerAfterViewController:(id)arg1;
- (void)reset;
- (void)advance;
- (void)retreat;
- (void)cancel;
- (void)advance:(id)arg1;
- (void)retreat:(id)arg1;
- (void)cancel:(id)arg1;
- (void)windowDidLoad;
- (void)dealloc;
- (id)init;
- (void)setDisableKeyEquivalentForNextButton:(BOOL)arg1;
- (BOOL)disableKeyEquivalentForNextButton;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


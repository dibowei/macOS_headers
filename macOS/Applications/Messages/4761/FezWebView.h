//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WebKit/WebView.h>

#import "NSServicesMenuRequestor-Protocol.h"

@class NSObject, NSString;
@protocol FezUserScrollEventDelegate, FezWebViewDragDelegate, FezWebViewPasteboardDelegate, FezWebViewQuickLookDelegate, FezWebViewViewDelegate;

@interface FezWebView : WebView <NSServicesMenuRequestor>
{
    NSObject<FezWebViewDragDelegate> *_dragDestinationDelegate;
    NSObject<FezWebViewViewDelegate> *_viewDelegate;
    NSObject<FezWebViewQuickLookDelegate> *_quickLookDelegate;
    id <FezUserScrollEventDelegate> _userScrollEventDelegate;
    NSObject<FezWebViewPasteboardDelegate> *_pasteboardDelegate;
}

@property(nonatomic) NSObject<FezWebViewPasteboardDelegate> *pasteboardDelegate; // @synthesize pasteboardDelegate=_pasteboardDelegate;
- (BOOL)writeSelectionToPasteboard:(id)arg1 types:(id)arg2;
- (id)validRequestorForSendType:(id)arg1 returnType:(id)arg2;
- (void)scrollToEndOfDocument:(id)arg1;
- (void)scrollToBeginningOfDocument:(id)arg1;
- (void)scrollLineDown:(id)arg1;
- (void)scrollLineUp:(id)arg1;
- (void)scrollPageDown:(id)arg1;
- (void)scrollPageUp:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)setUserScrollEventDelegate:(id)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)quickLookWithEvent:(id)arg1;
- (void)setQuickLookDelegate:(id)arg1;
- (id)quickLookDelegate;
- (void)viewDidMoveToWindow;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setViewDelegate:(id)arg1;
- (id)viewDelegate;
- (BOOL)wantsPeriodicDraggingUpdates;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)setDragDestinationDelegate:(id)arg1;
- (id)dragDestinationDelegate;
- (BOOL)isOpaque;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)makeTextStandardSize:(id)arg1;
- (BOOL)canMakeTextStandardSize;
- (void)makeTextSmaller:(id)arg1;
- (BOOL)canMakeTextSmaller;
- (void)makeTextLarger:(id)arg1;
- (BOOL)canMakeTextLarger;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "NSDraggingDestination-Protocol.h"

@class NSArray, NSResponder, NSString, SplashScreenDragNDropOverlayView;

@interface SplashScreenView : NSView <NSDraggingDestination>
{
    BOOL _privateHighlight;
    NSArray *_contentViews;
    SplashScreenDragNDropOverlayView *_dndOverlay;
    NSResponder *_savedFirstResponder;
    double _scaleFactor;
}

@property(nonatomic) double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(nonatomic) NSResponder *savedFirstResponder; // @synthesize savedFirstResponder=_savedFirstResponder;
@property(retain, nonatomic) SplashScreenDragNDropOverlayView *dndOverlay; // @synthesize dndOverlay=_dndOverlay;
@property(copy, nonatomic) NSArray *contentViews; // @synthesize contentViews=_contentViews;
@property(nonatomic) BOOL privateHighlight; // @synthesize privateHighlight=_privateHighlight;
- (void).cxx_destruct;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)generateImagesIfNecessary;
- (void)clearOverlay;
- (void)showOverlay;
- (void)recreateKeyViewChain;
- (void)setUpUI;
- (void)drawRect:(struct CGRect)arg1;
@property(nonatomic) BOOL highlighted;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSMenu, NSMenuItem, NSTrackingArea, TSTMacFormulaCellEditorWindowController;

@interface TSTMacFormulaCellEditorWindowArrow : NSView
{
    TSTMacFormulaCellEditorWindowController *_windowController;
    NSMenuItem *_toggleTokenizationItem;
    NSMenuItem *_transitionToTextItem;
    NSMenu *_arrowMenu;
    NSTrackingArea *_trackingArea;
}

@property(nonatomic) __weak TSTMacFormulaCellEditorWindowController *windowController; // @synthesize windowController=_windowController;
- (void)mouseDown:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end


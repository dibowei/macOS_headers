//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class BadgedGlyphButton, CALayer, GlyphButton, NSArray, NSLayoutConstraint, NSMutableArray, NSTrackingArea;
@protocol ChatModernInputViewMenuDelegate;

@interface ChatModernInputViewMenu : NSView
{
    BOOL _animating;
    BOOL _collapsed;
    BOOL _manuallyUncollapsed;
    BOOL _mediaButtonsDisabled;
    BOOL _constraintsSet;
    BOOL _observingMouseDown;
    id <ChatModernInputViewMenuDelegate> _delegate;
    double _spacing;
    BadgedGlyphButton *_emoticonButton;
    NSLayoutConstraint *_leftMostConstraint;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_animatedSendButtonWidthConstraint;
    NSLayoutConstraint *_animatedSendButtonHeightConstraint;
    NSLayoutConstraint *_collapseButtonRightMargin;
    NSMutableArray *_mediaButtonRightMargins;
    id _eventMonitor;
    GlyphButton *_collapseButton;
    NSArray *_mediaButtons;
    NSTrackingArea *_trackingArea;
    CALayer *_backgroundLayer;
    CALayer *_hoverLayer;
    id _windowObserver;
}

+ (BOOL)requiresConstraintBasedLayout;
@property(retain) id windowObserver; // @synthesize windowObserver=_windowObserver;
@property(nonatomic, getter=isObservingMouseDown) BOOL observingMouseDown; // @synthesize observingMouseDown=_observingMouseDown;
@property(nonatomic) BOOL constraintsSet; // @synthesize constraintsSet=_constraintsSet;
@property(nonatomic) __weak CALayer *hoverLayer; // @synthesize hoverLayer=_hoverLayer;
@property(nonatomic) __weak CALayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(retain, nonatomic) NSArray *mediaButtons; // @synthesize mediaButtons=_mediaButtons;
@property(retain, nonatomic) GlyphButton *collapseButton; // @synthesize collapseButton=_collapseButton;
@property(retain, nonatomic) id eventMonitor; // @synthesize eventMonitor=_eventMonitor;
@property(retain, nonatomic) NSMutableArray *mediaButtonRightMargins; // @synthesize mediaButtonRightMargins=_mediaButtonRightMargins;
@property(retain, nonatomic) NSLayoutConstraint *collapseButtonRightMargin; // @synthesize collapseButtonRightMargin=_collapseButtonRightMargin;
@property(retain, nonatomic) NSLayoutConstraint *animatedSendButtonHeightConstraint; // @synthesize animatedSendButtonHeightConstraint=_animatedSendButtonHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *animatedSendButtonWidthConstraint; // @synthesize animatedSendButtonWidthConstraint=_animatedSendButtonWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leftMostConstraint; // @synthesize leftMostConstraint=_leftMostConstraint;
@property(retain, nonatomic) BadgedGlyphButton *emoticonButton; // @synthesize emoticonButton=_emoticonButton;
@property(nonatomic, getter=isMediaButtonsDisabled) BOOL mediaButtonsDisabled; // @synthesize mediaButtonsDisabled=_mediaButtonsDisabled;
@property(nonatomic, getter=isManuallyUncollapsed) BOOL manuallyUncollapsed; // @synthesize manuallyUncollapsed=_manuallyUncollapsed;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
@property(nonatomic, getter=isCollapsed) BOOL collapsed; // @synthesize collapsed=_collapsed;
@property(nonatomic, getter=isAnimating) BOOL animating; // @synthesize animating=_animating;
@property(nonatomic) __weak id <ChatModernInputViewMenuDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)triggerCollapseAction:(id)arg1;
- (void)emoticonButtonAction:(id)arg1;
- (struct CGSize)uncollapsedSize;
- (void)userFiredAction;
- (void)disableMediaButtons;
- (void)enableMediaButtons;
- (void)updateMediaButtonsEnabled:(BOOL)arg1;
- (void)collapse;
- (BOOL)canCollapse;
- (void)uncollapse;
- (void)changeSpacingTo:(double)arg1;
- (void)updateVisibleViewsWithAnimation:(BOOL)arg1;
- (void)updateViewPositions;
- (void)updateView;
@property(nonatomic, getter=isShowingEmoticonsBadge) BOOL showEmoticonsBadge;
- (id)allButtons;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)handleMouseOverChanged:(id)arg1;
- (void)stopObservingMouseDown;
- (void)startObservingMouseDown;
- (void)updateTrackingAreas;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)resetCursorRects;
- (void)updateConstraints;
- (void)viewDidMoveToWindow;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)commonInit;

@end


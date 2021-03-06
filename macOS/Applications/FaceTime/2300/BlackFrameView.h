//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSFrameView.h>

@class BlackTitlebarView, NSColor;

@interface BlackFrameView : NSFrameView
{
    BlackTitlebarView *_titlebarView;
    NSColor *_backgroundColor;
    struct CGImage *_backBufferCornerImage;
    struct CGRect _backBufferDirtyRects[2];
    unsigned long long _backBufferDirtyRectsCount;
    long long _resizeFlags;
    long long _overrideShadowType;
    unsigned int _movingDisabled:1;
    unsigned int _resizingDisabled:1;
    unsigned int _automaticallyManagesTitlebarFrame:1;
    unsigned int _hasRoundedCorners:1;
    unsigned int _entireBackBufferIsDirty:1;
    unsigned int _useWindowShapeForRoundedCorners:1;
    unsigned int _alphaShapeNeedsUpdate:1;
    unsigned int _hasTexturedBackground:1;
    unsigned int _shouldOverrideShadowType:1;
}

+ (struct CGSize)minContentSizeForMinFrameSize:(struct CGSize)arg1 styleMask:(unsigned long long)arg2;
+ (struct CGSize)minFrameSizeForMinContentSize:(struct CGSize)arg1 styleMask:(unsigned long long)arg2;
+ (struct CGRect)contentRectForFrameRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2;
+ (struct CGRect)frameRectForContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2;
+ (unsigned long long)_validateStyleMask:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)viewDidEndLiveResize;
- (BOOL)_shouldBeTreatedAsInkEventInInactiveWindow:(id)arg1;
- (BOOL)shouldBeTreatedAsInkEvent:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (long long)resizeFlags;
- (void)resizeWithEvent:(id)arg1;
- (BOOL)shouldResizeWithEvent:(id)arg1;
- (BOOL)_isResizable;
- (void)_setFrameNeedsDisplay:(BOOL)arg1;
- (double)contentBorderDistanceFromTop;
- (struct CGRect)_maxTitlebarTitleRect;
- (struct CGRect)_defaultTitlebarViewFrame;
- (void)tileAndSetWindowShape:(BOOL)arg1;
- (void)setStyleMask:(unsigned long long)arg1;
- (void)_updateButtonState;
- (void)_resetDragMargins;
- (struct CGSRegionObject *)_regionForOpaqueDescendants:(struct CGRect)arg1 forMove:(BOOL)arg2;
- (struct CGSRegionObject *)_resizeRegion;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)_drawsNothing;
- (void)windowDidChangeBackingProperties:(id)arg1;
- (void)displayIfNeeded;
- (void)_drawBackground;
- (BOOL)needsToDrawRectInBackBuffer:(struct CGRect)arg1;
- (BOOL)preservesContentDuringLiveResize;
- (void)shapeWindow;
- (struct CGSRegionObject *)_createWindowOpaqueShape;
- (void)createWindowShape:(struct CGSRegionObject **)arg1 opaqueShape:(struct CGSRegionObject **)arg2 alphaShape:(struct CGSRegionObject **)arg3 eventShape:(struct CGSRegionObject **)arg4;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (BOOL)isTitlebarVisible;
- (id)fileButton;
@property(nonatomic) BOOL automaticallyManagesTitlebarFrame; // @dynamic automaticallyManagesTitlebarFrame;
@property(nonatomic, getter=isResizingDisabled) BOOL resizingDisabled; // @dynamic resizingDisabled;
@property(nonatomic, getter=isMovingDisabled) BOOL movingDisabled; // @dynamic movingDisabled;
- (void)addSubviewBelowTitlebar:(id)arg1;
- (id)titlebarView;
- (void)overrideShadow:(BOOL)arg1 withType:(long long)arg2;
@property(nonatomic) BOOL hasTexturedBackground; // @dynamic hasTexturedBackground;
@property(nonatomic) BOOL hasRoundedCorners; // @dynamic hasRoundedCorners;
@property(copy, nonatomic) NSColor *backgroundColor; // @dynamic backgroundColor;
- (void)updateBackgroundLayerProperties;
- (void)setRepresentedURL:(id)arg1;
- (void)setDocumentEdited:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (id)_displayName;
- (long long)_shadowType;
- (unsigned int)_CAViewFlags;
- (BOOL)isWindowOpaque;
- (BOOL)isOpaque;
- (double)cornerRadiusInPixels;
- (double)cornerRadius;
- (id)contentFill;
- (double)contentAlpha;
- (struct CGRect)dragRectForFrameRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 owner:(id)arg3;

@end


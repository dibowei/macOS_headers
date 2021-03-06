//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CLgFrameWindow.h"

@class MAHUDWindowFrame, NSObject;
@protocol MALastClickedParameterHandler;

@interface CLgDocwPanel : CLgFrameWindow
{
    int _docwType;
    BOOL _preserveHeight;
    BOOL _preserveWidth;
    BOOL _ignorePreserveSize;
    BOOL _isMatteAndNotRaised;
    BOOL _isFullScreen;
    BOOL _behavesLikeWindow;
    MAHUDWindowFrame *_HUDFrame;
    BOOL _canBecomeKey;
    NSObject<MALastClickedParameterHandler> *_lastClickedParameterHandler;
}

+ (struct CGRect)windowContentRectForFrameRect:(struct CGRect)arg1 isFloatWindow:(BOOL)arg2 matteAndNotRaised:(BOOL)arg3 hasCloseBox:(BOOL)arg4 isResizable:(BOOL)arg5 isMiniaturizable:(BOOL)arg6 isHud:(BOOL)arg7 isUtility:(BOOL)arg8;
+ (struct CGRect)windowFrameRectForContentRect:(struct CGRect)arg1 isFloatWindow:(BOOL)arg2 matteAndNotRaised:(BOOL)arg3 hasCloseBox:(BOOL)arg4 isResizable:(BOOL)arg5 isMiniaturizable:(BOOL)arg6 isHud:(BOOL)arg7 isUtility:(BOOL)arg8;
+ (unsigned long long)windowStyleMask_isFloatWindow:(BOOL)arg1 matteAndNotRaised:(BOOL)arg2 hasCloseBox:(BOOL)arg3 isResizable:(BOOL)arg4 isMiniaturizable:(BOOL)arg5 isHud:(BOOL)arg6 isUtility:(BOOL)arg7;
- (void)setLastClickedParameterHandler:(id)arg1;
- (id)lastClickedParameterHandler;
- (id)_findFirstKeyViewInDirection:(unsigned long long)arg1 forKeyLoopGroupingView:(id)arg2;
- (void)handleHUDFrameCloseAction:(id)arg1;
- (void)updateWindowTitleTileNumberOfRows:(unsigned long long)arg1;
- (void)selectKeyViewPrecedingView:(id)arg1;
- (void)selectKeyViewFollowingView:(id)arg1;
- (void)resetNextKeyViews;
- (BOOL)makeFirstResponder:(id)arg1;
- (void)resignKeyWindow;
- (void)becomeKeyWindow;
- (void)setFrame:(struct CGRect)arg1 display:(BOOL)arg2 animate:(BOOL)arg3;
- (void)setFrame:(struct CGRect)arg1 display:(BOOL)arg2;
- (void)docwWindowSetFrame:(struct CGRect *)arg1 display:(char *)arg2;
- (struct CGSize)minSize;
- (struct CGSize)correctProposedSize:(struct CGSize)arg1;
- (int)docwType;
- (void)setDocwType:(int)arg1;
- (void)setIgnorePreserveWidthAndHeight:(BOOL)arg1;
- (void)setPreserveWidth:(BOOL)arg1 andHeight:(BOOL)arg2;
- (int)frameWindowType;
- (void)close;
- (void)toggleToolbarShown:(id)arg1;
- (BOOL)matteAndNotRaised;
- (id)title;
- (void)setTitle:(id)arg1;
- (BOOL)isHUDWindow;
@property(readonly, nonatomic) BOOL isFullScreen;
- (struct CGRect)frameRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)contentRectForFrameRect:(struct CGRect)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (BOOL)canBecomeKeyWindow;
- (void)setCanBecomeKey:(BOOL)arg1;
- (BOOL)canBecomeMainWindow;
- (void)dealloc;
- (id)initAsWindow:(BOOL)arg1 frameRect:(struct CGRect)arg2 isFloatWindow:(BOOL)arg3 hasBigTitlebar:(BOOL)arg4 matteAndNotRaised:(BOOL)arg5 hasCloseBox:(BOOL)arg6 isResizable:(BOOL)arg7 isMiniaturizable:(BOOL)arg8 isHud:(BOOL)arg9 isUtility:(BOOL)arg10 screen:(id)arg11 isOpeningScreenset:(BOOL)arg12 fullScreen:(BOOL)arg13;
- (void)delayRefreshTouchBar;
- (void)refreshTouchBarDisplay;
- (id)makeTouchBar;
- (id)touchBarCommander;
- (id)touchBarCache;

@end


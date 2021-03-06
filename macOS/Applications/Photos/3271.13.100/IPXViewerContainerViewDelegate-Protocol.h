//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IPXViewerContainerView;

@protocol IPXViewerContainerViewDelegate <NSObject>
- (void)bottomButtonClickedInContainerView:(IPXViewerContainerView *)arg1 animate:(BOOL)arg2;
- (void)topButtonClickedInContainerView:(IPXViewerContainerView *)arg1 animate:(BOOL)arg2;
- (void)rightButtonClickedInContainerView:(IPXViewerContainerView *)arg1 animate:(BOOL)arg2;
- (void)leftButtonClickedInContainerView:(IPXViewerContainerView *)arg1 animate:(BOOL)arg2;
- (BOOL)isBottomButtonHiddenInContainerView:(IPXViewerContainerView *)arg1;
- (BOOL)isTopButtonHiddenInContainerView:(IPXViewerContainerView *)arg1;
- (BOOL)isRightButtonHiddenInContainerView:(IPXViewerContainerView *)arg1;
- (BOOL)isLeftButtonHiddenInContainerView:(IPXViewerContainerView *)arg1;
@end


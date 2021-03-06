//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSPanel.h>

@class CALayer, _NSFullScreenTileResizeCrossfadeOverlayLayer;

__attribute__((visibility("hidden")))
@interface _NSFullScreenTileResizeCrossfadeOverlayWindow : NSPanel
{
    CALayer *_rootLayer;
    unsigned long long _tileID;
    unsigned long long _parentID;
    unsigned long long _closingSpaceID;
    unsigned long long _openingSpaceID;
    BOOL _doResize;
    struct CGRect _targetFrame;
    struct CGRect _targetTileFrame;
    _NSFullScreenTileResizeCrossfadeOverlayLayer *_beforeTileLayer;
    _NSFullScreenTileResizeCrossfadeOverlayLayer *_afterTileLayer;
    _NSFullScreenTileResizeCrossfadeOverlayLayer *_closingTileLayer;
    _NSFullScreenTileResizeCrossfadeOverlayLayer *_openingTileLayer;
}

@property unsigned long long openingSpaceID; // @synthesize openingSpaceID=_openingSpaceID;
- (void)dealloc;
- (void)disableAutomaticTermination;
- (void)enableAutomaticTermination;
- (struct CGRect)constrainFrameRect:(struct CGRect)arg1 toScreen:(id)arg2;
- (void)_setWindowTag;
- (BOOL)_shouldAutoFlattenLayerTree;
- (void)animateSwapWithDuration:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)captureAfterWindowsUsingTileFrame:(struct CGRect)arg1;
- (void)captureBeforeWindowsUsingTileFrame:(struct CGRect)arg1;
- (id)windowIDsForCaptureOnSpace:(unsigned long long)arg1;
- (id)initWithTileID:(unsigned long long)arg1 parentSpaceID:(unsigned long long)arg2 closingSpaceID:(unsigned long long)arg3 screen:(id)arg4 doResize:(BOOL)arg5 placeInWallSpace:(BOOL)arg6;

@end


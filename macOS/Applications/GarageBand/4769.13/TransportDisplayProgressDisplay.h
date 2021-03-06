//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSControl.h>

#import "MAPopoverDelegate-Protocol.h"

@class MATransportDisplayProgressIndicator, NSString, NSTrackingArea, TransportDisplayProgressWindowViewController;

@interface TransportDisplayProgressDisplay : NSControl <MAPopoverDelegate>
{
    TransportDisplayProgressWindowViewController *_transportDisplayProgressWindowViewController;
    BOOL _progressWindowWasOpenedByModalState;
    NSTrackingArea *_trackingArea;
    long long _displayColor;
    BOOL _altColor;
    BOOL _determinate;
    BOOL _rollover;
    MATransportDisplayProgressIndicator *_progressIndicator;
}

+ (void)sendTransportDisplayProgressDisplayNotificationVisible:(long long)arg1 altColor:(BOOL)arg2 modal:(BOOL)arg3 indeterminate:(BOOL)arg4 min:(double)arg5 max:(double)arg6 val:(double)arg7;
+ (id)assetSetPathForProgressIndicatorDisplayColor:(long long)arg1 altColor:(BOOL)arg2 determinate:(BOOL)arg3 rollover:(BOOL)arg4;
@property(retain) MATransportDisplayProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property TransportDisplayProgressWindowViewController *transportDisplayProgressWindowViewController; // @synthesize transportDisplayProgressWindowViewController=_transportDisplayProgressWindowViewController;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)popoverWillClose:(id)arg1;
- (void)showProgressDisplayPopoverWindow;
- (void)updateProgressDisplayColor;
- (void)setProgressDisplayColor:(long long)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (void)resetCursorRects;
- (void)setFrame:(struct CGRect)arg1;
- (void)resizeLayer;
- (void)updateProgressIndicator;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)transportDisplayProgressDisplayNotification:(id)arg1;
- (void)removeProgressIndicator;
- (void)addProgressIndicator;
- (double)doubleValue;
- (void)setDoubleValue:(double)arg1;
- (double)maxValue;
- (void)setMaxValue:(double)arg1;
- (double)minValue;
- (void)setMinValue:(double)arg1;
- (BOOL)indeterminate;
- (void)setIndeterminate:(BOOL)arg1;
- (void)setAltColor:(BOOL)arg1;
- (void)setModal:(BOOL)arg1;
- (BOOL)progressIndicatorVisible;
- (void)setProgressIndicatorVisible:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


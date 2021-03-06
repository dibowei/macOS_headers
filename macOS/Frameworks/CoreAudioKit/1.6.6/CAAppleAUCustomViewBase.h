//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <CoreAudioKit/AUCustomViewPersistentData-Protocol.h>

@class CAAppleAUGraphView, NSButton, NSDictionary, NSGradient, NSLayoutConstraint, NSTextField, NSTimer;

@interface CAAppleAUCustomViewBase : NSView <AUCustomViewPersistentData>
{
    CAAppleAUGraphView *graphView;
    struct ComponentInstanceRecord *mAU;
    struct AUListenerBase *mAUEventListener;
    NSTextField *detailsLabel;
    NSButton *detailsButton;
    NSView *detailsView;
    NSLayoutConstraint *detailsViewVerticalHeightConstraint;
    BOOL drawsBackground;
    BOOL hasDetails;
    BOOL detailsDefaultsToOpen;
    double detailsViewHeight;
    BOOL needsRealtimeDrawing;
    BOOL auRendering;
    double realtimeDrawingInterval;
    double lastRenderedSampleTime;
    BOOL initialized;
    NSGradient *backgroundGradient;
    NSGradient *blueGradient;
    NSDictionary *cachedPersistantViewData;
    NSDictionary *cachedGenericViewData;
    NSTimer *meterTimer;
}

@property BOOL detailsDefaultsToOpen; // @synthesize detailsDefaultsToOpen;
@property double realtimeDrawingInterval; // @synthesize realtimeDrawingInterval;
- (BOOL)showExpertParams;
- (id)joinedClumps;
- (id)includedParams;
- (id)excludedParams;
- (void)priv_eventListener:(void *)arg1 event:(const struct AudioUnitEvent *)arg2 value:(float)arg3;
- (void)postEndGestureNotificationForParameter:(unsigned int)arg1;
- (void)postBeginGestureNotificationForParameter:(unsigned int)arg1;
- (void)handleEndGesture:(unsigned int)arg1;
- (void)handleBeginGesture:(unsigned int)arg1;
- (void)viewDidMoveToWindow;
- (void)detailsViewSizeChanged:(id)arg1;
- (void)toggleDetails:(id)arg1;
- (void)priv_removeListenerForParameter:(unsigned int)arg1 scope:(unsigned int)arg2 element:(unsigned int)arg3;
- (void)priv_addListenerForParameter:(unsigned int)arg1 scope:(unsigned int)arg2 element:(unsigned int)arg3;
- (void)priv_removeListeners;
@property(nonatomic) NSDictionary *customViewPersistentData;
- (void)updateViewWithPersistentData:(id)arg1;
- (void)cleanup;
- (void)handleParameterListChanged;
- (void)initializeView;
- (void)synchronizeUIWithParameterValues;
- (void)registerParameters;
- (void)prepareData;
- (void)setAU:(struct ComponentInstanceRecord *)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)doRealtimeDrawing;
- (void)checkLastRenderedTime:(id)arg1;
- (void)realtimeDrawingInterval:(double)arg1;
@property BOOL needsRealtimeDrawing; // @synthesize needsRealtimeDrawing;
@property BOOL drawsBackground; // @synthesize drawsBackground;
@property BOOL hasDetails; // @synthesize hasDetails;

@end


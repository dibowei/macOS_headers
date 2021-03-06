//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSDGestureDelegate-Protocol.h"

@class NSMutableArray, NSString, TSDInteractiveCanvasController, TSUNoCopyDictionary;

@interface TSDGestureDispatcher : NSObject <TSDGestureDelegate>
{
    TSDInteractiveCanvasController *_interactiveCanvasController;
    NSMutableArray *_simultaneitySets;
    TSUNoCopyDictionary *_priorityMap;
    BOOL _runningTargetHandleGesture;
    BOOL _gestureDidFire;
}

@property(nonatomic) TSDInteractiveCanvasController *interactiveCanvasController; // @synthesize interactiveCanvasController=_interactiveCanvasController;
- (BOOL)gestureActionShouldBegin:(id)arg1;
- (id)p_getGestureTarget:(id)arg1;
- (void)handleGesture:(id)arg1 withTarget:(id)arg2;
- (void)handleGesture:(id)arg1;
- (void)teardown;
- (void)dealloc;
- (id)initWithInteractiveCanvasController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


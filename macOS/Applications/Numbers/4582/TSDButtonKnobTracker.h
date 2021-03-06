//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDKnobTracker.h"

@interface TSDButtonKnobTracker : TSDKnobTracker
{
    id mTarget;
    SEL mAction;
}

@property(nonatomic) SEL action; // @synthesize action=mAction;
@property(nonatomic) __weak id target; // @synthesize target=mTarget;
- (void).cxx_destruct;
- (BOOL)traceIfDesiredForEndOperation;
- (BOOL)traceIfDesiredForBeginOperation;
- (void)endMovingKnob;
- (void)moveKnobToRepPosition:(struct CGPoint)arg1;
- (BOOL)p_knobContainsCurrentPosition;
- (BOOL)shouldHideSelectionHighlight;
- (BOOL)shouldHideOtherKnobs;
- (BOOL)operationShouldBeDynamic;
- (BOOL)allowHUDToDisplay;
- (id)initWithRep:(id)arg1 knob:(id)arg2;

@end


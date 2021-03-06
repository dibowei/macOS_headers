//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PlacesKit/PXPlacesMapUpdatePlanResult-Protocol.h>

@class NSMutableSet, NSString;

@interface PXPlacesMapUpdatePlanResultImpl : NSObject <PXPlacesMapUpdatePlanResult>
{
    NSMutableSet *_annotationsToAddImmediately;
    NSMutableSet *_annotationsToRemoveImmediately;
    NSMutableSet *_annotationsToRemoveAfterAnimationHasStarted;
    NSMutableSet *_annotationsToRemoveAfterAnimationHasEnded;
    NSMutableSet *_annotationsToRedraw;
    NSMutableSet *_annotationsWithUpdatedIndex;
    NSMutableSet *_overlaysToAddImmediately;
    NSMutableSet *_overlaysToRemoveImmediately;
}

@property(readonly) NSMutableSet *overlaysToRemoveImmediately; // @synthesize overlaysToRemoveImmediately=_overlaysToRemoveImmediately;
@property(readonly) NSMutableSet *overlaysToAddImmediately; // @synthesize overlaysToAddImmediately=_overlaysToAddImmediately;
@property(readonly) NSMutableSet *annotationsWithUpdatedIndex; // @synthesize annotationsWithUpdatedIndex=_annotationsWithUpdatedIndex;
@property(readonly) NSMutableSet *annotationsToRedraw; // @synthesize annotationsToRedraw=_annotationsToRedraw;
@property(readonly) NSMutableSet *annotationsToRemoveAfterAnimationHasEnded; // @synthesize annotationsToRemoveAfterAnimationHasEnded=_annotationsToRemoveAfterAnimationHasEnded;
@property(readonly) NSMutableSet *annotationsToRemoveAfterAnimationHasStarted; // @synthesize annotationsToRemoveAfterAnimationHasStarted=_annotationsToRemoveAfterAnimationHasStarted;
@property(readonly) NSMutableSet *annotationsToRemoveImmediately; // @synthesize annotationsToRemoveImmediately=_annotationsToRemoveImmediately;
@property(readonly) NSMutableSet *annotationsToAddImmediately; // @synthesize annotationsToAddImmediately=_annotationsToAddImmediately;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


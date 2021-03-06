//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDRep.h"

#import "TSDContainerRep-Protocol.h"
#import "TSWPStorageObserver-Protocol.h"

@class NSObject, NSString, TSWPRep;
@protocol TSDContainerInfo;

@interface KNNoteRep : TSDRep <TSDContainerRep, TSWPStorageObserver>
{
    TSWPRep *mContainedRep;
}

@property(readonly, nonatomic) TSWPRep *containedRep; // @synthesize containedRep=mContainedRep;
- (void)hideCollaboratorCursors;
- (void)collaboratorCursorChangedToSelectionPath:(id)arg1;
- (void)storage:(id)arg1 didChangeRange:(struct _NSRange)arg2 delta:(long long)arg3 broadcastKind:(int)arg4;
- (void)willEndEditingContainedRep;
- (void)willBeginEditingContainedRep;
@property(readonly, nonatomic) NSObject<TSDContainerInfo> *containerInfo;
- (void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelector:(SEL)arg1;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1;
- (BOOL)shouldShowCollaboratorCursorHighlight;
- (id)editingRep;
- (double)columnHeight;
- (id)hitRep:(struct CGPoint)arg1;
- (id)childReps;
- (void)updateChildrenFromLayout;
- (void)addAdditionalChildLayersToArray:(id)arg1;
- (BOOL)canSelectChildRep:(id)arg1;
- (BOOL)canBeginEditingChildRepOnDoubleTap:(id)arg1;
- (void)selectChildRep:(id)arg1 extendingSelection:(BOOL)arg2;
- (void)willBeRemoved;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


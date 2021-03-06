//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSDEditor-Protocol.h"

@class NSSet, NSString, TSDEditorController, TSKDocumentRoot, TSTStrokeSelection;

@interface TSTStrokeEditor : NSObject <TSDEditor>
{
    TSTStrokeSelection *_strokeSelection;
    TSKDocumentRoot *_documentRoot;
    TSDEditorController *_editorController;
}

+ (id)editorFromEditorController:(id)arg1;
@property(retain, nonatomic) TSDEditorController *editorController; // @synthesize editorController=_editorController;
@property(retain, nonatomic) TSTStrokeSelection *strokeSelection; // @synthesize strokeSelection=_strokeSelection;
- (void)willResignCurrentEditor;
- (void)didBecomeCurrentEditorForEditorController:(id)arg1;
@property(readonly, nonatomic) TSKDocumentRoot *documentRoot;
- (void)dealloc;
- (id)nextEditorForSelection:(id)arg1 withNewEditorStack:(id)arg2 selectionPath:(id)arg3;
- (BOOL)shouldRemainOnEditorStackForSelection:(id)arg1 inSelectionPath:(id)arg2 withNewEditors:(id)arg3;
- (void)selectionDidChangeFromSelection:(id)arg1 toSelection:(id)arg2 withFlags:(unsigned long long)arg3;
- (id)selectionWillChangeFromSelection:(id)arg1 toSelection:(id)arg2 withFlags:(unsigned long long)arg3 inSelectionPath:(id)arg4 withNewEditors:(id)arg5;
- (id)initWithDocumentRoot:(id)arg1 editorController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingCalloutAttributes;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingConnectionLineAttributes;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingEndpoints;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingFill;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingOpacity;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingReflection;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingResize;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingShadow;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingShrinkTextToFit;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingSmartShapeAttributes;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingStroke;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingTextInset;
@property(readonly) Class superclass;

@end


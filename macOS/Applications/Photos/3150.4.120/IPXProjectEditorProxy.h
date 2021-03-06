//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXModel.h"

#import "IPXAutomationProjectEditor-Protocol.h"
#import "PFResourceAccessClient-Protocol.h"

@class IPXBrowserController, IPXBrowserModel, IPXLibrary, IPXPrintProductEditorModel, IPXSlideshowEditorModel, IPXWorkspaceModel, NSString;
@protocol IPXCollection_deprecated;

@interface IPXProjectEditorProxy : IPXModel <IPXAutomationProjectEditor, PFResourceAccessClient>
{
    BOOL _archivedShowSlideshowEditor;
    IPXSlideshowEditorModel *_slideshowEditor;
    IPXBrowserController *_editorController;
    IPXWorkspaceModel *_workspace;
    IPXLibrary *_library;
    IPXPrintProductEditorModel *_printProductEditor;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) IPXPrintProductEditorModel *printProductEditor; // @synthesize printProductEditor=_printProductEditor;
@property(nonatomic) __weak IPXLibrary *library; // @synthesize library=_library;
@property(nonatomic) __weak IPXWorkspaceModel *workspace; // @synthesize workspace=_workspace;
@property(retain, nonatomic) IPXBrowserController *editorController; // @synthesize editorController=_editorController;
@property(readonly) IPXSlideshowEditorModel *slideshowEditor; // @synthesize slideshowEditor=_slideshowEditor;
- (void).cxx_destruct;
- (BOOL)isPlaying;
- (void)pause;
- (id)playAndLoop:(BOOL)arg1 fullscreen:(BOOL)arg2 shouldBlock:(BOOL)arg3;
- (id)currentProject;
- (void)editProject:(id)arg1;
- (void)requestProductEditorController:(CDUnknownBlockType)arg1;
@property(readonly) __weak IPXBrowserModel *browser;
@property(retain, nonatomic) id <IPXCollection_deprecated> collection;
- (void)resourceWillShutdown:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)_syncMainThread:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


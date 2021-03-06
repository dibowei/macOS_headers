//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "NSMenuDelegate-Protocol.h"
#import "NSOutlineViewDataSource-Protocol.h"
#import "NSOutlineViewDelegate-Protocol.h"

@class AMSAudioDeviceManager, AMSAudioDeviceWrapper, AMSSpeakerWindowController, NSButton, NSMenu, NSMutableDictionary, NSOutlineView, NSPopUpButton, NSString, NSTableCellView, NSView, NSViewController, iDamDeviceManager;

@interface AMSAudioPanelController : NSWindowController <NSOutlineViewDataSource, NSOutlineViewDelegate, NSMenuDelegate>
{
    NSOutlineView *deviceTable;
    NSButton *addAggregateButton;
    NSButton *removeAggregateButton;
    NSPopUpButton *deviceActionButton;
    NSMenu *actionMenu;
    NSView *detailView;
    AMSAudioDeviceManager *deviceManager;
    iDamDeviceManager *idamManager;
    AMSSpeakerWindowController *speakerManager;
    NSViewController *viewController;
    NSMutableDictionary *deviceActivePanelList;
    AMSAudioDeviceWrapper *previousDevice;
    NSTableCellView *reusableView;
    BOOL selectNewDevice;
}

- (void).cxx_destruct;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)outlineViewSelectionIsChanging:(id)arg1;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 shouldExpandItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (void)selectDeviceWithUID:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)contextualMenu;
- (void)populateActionMenuForDevice:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)openCustomConfigAppAction:(id)arg1;
- (void)configureSpeakers:(id)arg1;
- (void)performRudeSpeakerConfigurationCancel;
- (BOOL)speakersAreBeingConfigured;
- (void)configureSpeakersForDevice:(id)arg1;
- (void)setSystemOutputDevice:(id)arg1;
- (void)setDefaultOutputDevice:(id)arg1;
- (void)setDefaultInputDevice:(id)arg1;
- (void)createStackAction:(id)arg1;
- (void)removeSelectedAggregateAction:(id)arg1;
- (void)createAggregateAction:(id)arg1;
- (void)panelDidLoad;
- (unsigned long long)getPreferredDeviceIndex;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSArray, NSArrayController, NSImage, NSIndexSet;

@interface MGShareToiTunesWindowController : NSWindowController
{
    NSArrayController *_presetsArrayController;
    id _iPodPreset;
    id _iPhone4AndiPadPreset;
    id _macAndPCPreset;
    NSImage *_image;
    NSArray *_exportPresetsArray;
    NSIndexSet *_exportPresetsSelectionIndexSet;
}

+ (id)shareToiTunesWindowController;
+ (id)iTunesMusicWatchFolderURL;
@property(copy) NSIndexSet *exportPresetsSelectionIndexSet; // @synthesize exportPresetsSelectionIndexSet=_exportPresetsSelectionIndexSet;
@property(readonly, copy) NSArray *exportPresetsArray; // @synthesize exportPresetsArray=_exportPresetsArray;
- (void).cxx_destruct;
- (void)exportAndShare;
- (void)stopModalWithCode:(long long)arg1;
- (void)closeWindow:(id)arg1;
- (void)save:(id)arg1;
@property(readonly) NSImage *image;
@property(readonly, copy) id macAndPCPreset;
@property(readonly, copy) id iPhone4AndiPadPreset;
@property(readonly, copy) id iPodPreset;
- (void)setDocument:(id)arg1;
- (void)takeSelectedFrom:(id)arg1;
- (id)initWithWindowNibName:(id)arg1;
- (id)init;
- (void)windowDidLoad;

@end


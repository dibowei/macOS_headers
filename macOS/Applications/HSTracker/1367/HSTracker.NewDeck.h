//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSButton, NSComboBox, NSProgressIndicator, NSTextField;

@interface HSTracker.NewDeck : NSWindowController
{
    // Error parsing type: , name: hstrackerDeckBuilder
    // Error parsing type: , name: fromAFile
    // Error parsing type: , name: fromTheWeb
    // Error parsing type: , name: classesCombobox
    // Error parsing type: , name: urlDeck
    // Error parsing type: , name: chooseFile
    // Error parsing type: , name: okButton
    // Error parsing type: , name: arenaDeck
    // Error parsing type: , name: loader
    // Error parsing type: , name: delegate
    // Error parsing type: , name: defaultClass
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithWindow:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)checkToEnableSave;
- (void)openDeck:(id)arg1;
- (void)okClicked:(id)arg1;
- (void)cancelClicked:(id)arg1;
- (void)radioChange:(id)arg1;
- (id)radios;
- (void)windowDidLoad;
@property(nonatomic) __weak NSProgressIndicator *loader; // @synthesize loader;
@property(nonatomic) __weak NSButton *arenaDeck; // @synthesize arenaDeck;
@property(nonatomic) __weak NSButton *okButton; // @synthesize okButton;
@property(nonatomic) __weak NSButton *chooseFile; // @synthesize chooseFile;
@property(nonatomic) __weak NSTextField *urlDeck; // @synthesize urlDeck;
@property(nonatomic) __weak NSComboBox *classesCombobox; // @synthesize classesCombobox;
@property(nonatomic) __weak NSButton *fromTheWeb; // @synthesize fromTheWeb;
@property(nonatomic) __weak NSButton *fromAFile; // @synthesize fromAFile;
@property(nonatomic) __weak NSButton *hstrackerDeckBuilder; // @synthesize hstrackerDeckBuilder;

@end


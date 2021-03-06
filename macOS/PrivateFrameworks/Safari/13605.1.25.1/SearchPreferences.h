//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/PreferencesModule.h>

#import <Safari/SecureUI-Protocol.h>

@class NSButton, NSPopUpButton, NSString, NSWindow, WebsiteSpecificSearchEditor;

__attribute__((visibility("hidden")))
@interface SearchPreferences : PreferencesModule <SecureUI>
{
    BOOL _hasReceivedUntrustedEvents;
    BOOL _runningUnderSecureUIEventSanitizer;
    WebsiteSpecificSearchEditor *_websiteSpecificSearchEditor;
    NSPopUpButton *_defaultSearchEnginePopUpButton;
    NSButton *_enableParsecCheckbox;
}

@property(nonatomic) __weak NSButton *enableParsecCheckbox; // @synthesize enableParsecCheckbox=_enableParsecCheckbox;
@property(nonatomic) __weak NSPopUpButton *defaultSearchEnginePopUpButton; // @synthesize defaultSearchEnginePopUpButton=_defaultSearchEnginePopUpButton;
@property(retain, nonatomic) WebsiteSpecificSearchEditor *websiteSpecificSearchEditor; // @synthesize websiteSpecificSearchEditor=_websiteSpecificSearchEditor;
@property(nonatomic) BOOL runningUnderSecureUIEventSanitizer; // @synthesize runningUnderSecureUIEventSanitizer=_runningUnderSecureUIEventSanitizer;
@property(nonatomic) BOOL hasReceivedUntrustedEvents; // @synthesize hasReceivedUntrustedEvents=_hasReceivedUntrustedEvents;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSWindow *window;
- (void)_updateParsecCheckboxState;
- (void)changeDefaultSearchEngine:(id)arg1;
- (void)_updateDefaultSearchEngineMenu;
- (void)suppressSearchSuggestionsPreferenceDidChange:(id)arg1;
- (void)toggleParsecEnabled:(id)arg1;
- (void)moduleWillBeRemoved;
- (void)moduleWasInstalled;
- (void)initializeFromDefaults;
- (id)helpAnchor;
- (id)imageForPreferenceNamed:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "MASPreferencesViewController-Protocol.h"
#import "NSTextViewDelegate-Protocol.h"

@class FLULabel, FLUView, NSImage, NSPopUpButton, NSString, NSTextField;

@interface FLUNotificationPreferencesViewController : NSViewController <NSTextViewDelegate, MASPreferencesViewController>
{
    NSTextField *_pushNotificationModeLabel;
    FLULabel *_pushNotificationModeExplanationLabel;
    NSPopUpButton *_pushNotificationModePopupButton;
    FLUView *_pushNotificationModeStatusView;
    NSTextField *_postsLabel;
    NSPopUpButton *_postsButton;
    NSTextField *_activityLabel;
    NSPopUpButton *_activityButton;
    NSTextField *_messagesLabel;
    NSPopUpButton *_messagesButton;
    NSTextField *_commentsLabel;
    NSPopUpButton *_commentsButton;
    NSTextField *_followerRequestsLabel;
    NSTextField *_followerRequestsExplanationLabel;
    NSPopUpButton *_followerRequestsButton;
    unsigned long long _pushManagerStatus;
}

@property(nonatomic) unsigned long long pushManagerStatus; // @synthesize pushManagerStatus=_pushManagerStatus;
@property(nonatomic) __weak NSPopUpButton *followerRequestsButton; // @synthesize followerRequestsButton=_followerRequestsButton;
@property(nonatomic) __weak NSTextField *followerRequestsExplanationLabel; // @synthesize followerRequestsExplanationLabel=_followerRequestsExplanationLabel;
@property(nonatomic) __weak NSTextField *followerRequestsLabel; // @synthesize followerRequestsLabel=_followerRequestsLabel;
@property(nonatomic) __weak NSPopUpButton *commentsButton; // @synthesize commentsButton=_commentsButton;
@property(nonatomic) __weak NSTextField *commentsLabel; // @synthesize commentsLabel=_commentsLabel;
@property(nonatomic) __weak NSPopUpButton *messagesButton; // @synthesize messagesButton=_messagesButton;
@property(nonatomic) __weak NSTextField *messagesLabel; // @synthesize messagesLabel=_messagesLabel;
@property(nonatomic) __weak NSPopUpButton *activityButton; // @synthesize activityButton=_activityButton;
@property(nonatomic) __weak NSTextField *activityLabel; // @synthesize activityLabel=_activityLabel;
@property(nonatomic) __weak NSPopUpButton *postsButton; // @synthesize postsButton=_postsButton;
@property(nonatomic) __weak NSTextField *postsLabel; // @synthesize postsLabel=_postsLabel;
@property(nonatomic) __weak FLUView *pushNotificationModeStatusView; // @synthesize pushNotificationModeStatusView=_pushNotificationModeStatusView;
@property(nonatomic) __weak NSPopUpButton *pushNotificationModePopupButton; // @synthesize pushNotificationModePopupButton=_pushNotificationModePopupButton;
@property(nonatomic) FLULabel *pushNotificationModeExplanationLabel; // @synthesize pushNotificationModeExplanationLabel=_pushNotificationModeExplanationLabel;
@property(nonatomic) __weak NSTextField *pushNotificationModeLabel; // @synthesize pushNotificationModeLabel=_pushNotificationModeLabel;
- (void).cxx_destruct;
- (id)explanationLinkAttributes;
- (id)explanationAttributes;
- (id)menuForNotificationType:(unsigned long long)arg1;
- (BOOL)allNotificationsDisabledForType:(unsigned long long)arg1;
- (BOOL)allNotificationsEnabledForType:(unsigned long long)arg1;
- (void)didChangeNotificationOptionForNone:(id)arg1;
- (void)didChangeNotificationOptionForAll:(id)arg1;
- (void)didChangeNotificationOptionForAudioAlert:(id)arg1;
- (void)didChangeNotificationOptionForDesktopNotification:(id)arg1;
- (void)didChangeNotificationOptionForDockIcon:(id)arg1;
- (void)refreshMenus;
- (void)updateMenuTitleForNotificationType:(unsigned long long)arg1;
- (void)updateStatus;
- (void)refreshView;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)didSelectFromPushNotificationsModeButton:(id)arg1;
@property(readonly, nonatomic) NSString *toolbarItemLabel;
@property(readonly, nonatomic) NSImage *toolbarItemImage;
@property(readonly, nonatomic) NSString *identifier;
- (void)pushManagerDidDisconnect:(id)arg1;
- (void)pushManagerDidStartConnecting:(id)arg1;
- (void)pushManagerDidConnect:(id)arg1;
- (void)userDidLogout:(id)arg1;
- (void)userDidLogin:(id)arg1;
- (void)windowDidChangeBackingProperties:(id)arg1;
- (void)didChangeDesignModeOption:(id)arg1;
- (void)initializeFromUserDefaults;
- (void)viewWillAppear;
- (void)setupAccessibility;
- (void)localizeUserInterface;
- (void)dealloc;
- (void)awakeFromNib;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL hasResizableHeight;
@property(readonly, nonatomic) BOOL hasResizableWidth;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


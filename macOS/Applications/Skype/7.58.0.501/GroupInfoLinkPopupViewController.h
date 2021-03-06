//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NSSharingServicePickerDelegate-Protocol.h"
#import "SKPopoverDelegate-Protocol.h"

@class NSButton, NSString, SKConversation, SKLinkButton;

@interface GroupInfoLinkPopupViewController : NSViewController <NSSharingServicePickerDelegate, SKPopoverDelegate>
{
    SKConversation *_conversation;
    SKLinkButton *_cpButton;
    NSButton *_shareButton;
}

@property(nonatomic) __weak NSButton *shareButton; // @synthesize shareButton=_shareButton;
@property(nonatomic) __weak SKLinkButton *cpButton; // @synthesize cpButton=_cpButton;
@property(nonatomic) __weak SKConversation *conversation; // @synthesize conversation=_conversation;
- (void).cxx_destruct;
- (id)initialFirstResponderForPopover:(id)arg1;
- (id)popoverWindowAccessibilityDescriptionForPopover:(id)arg1;
- (id)sharingServicePicker:(id)arg1 sharingServicesForItems:(id)arg2 proposedSharingServices:(id)arg3;
- (void)sharingServicePicker:(id)arg1 didChooseSharingService:(id)arg2;
- (void)awakeFromNib;
- (void)inviteViaMail:(id)arg1;
- (void)animateCopyAction;
- (void)sendLinkToPasteboard:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


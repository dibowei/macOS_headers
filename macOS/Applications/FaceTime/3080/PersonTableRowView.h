//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableRowView.h>

@class CNAvatarViewController, FTHighlightView, NSButton, NSImage, NSImageView, NSLayoutConstraint, NSTextField, NSView, VibrantBox;
@protocol PersonTableRowViewDelegate, TUSearchResult;

@interface PersonTableRowView : NSTableRowView
{
    BOOL _isFirstRow;
    BOOL _isLastRow;
    id <PersonTableRowViewDelegate> _delegate;
    NSView *_avatarViewContainer;
    NSImageView *_faceTimeIconImageView;
    NSButton *_audioButton;
    NSButton *_videoButton;
    NSButton *_infoButton;
    NSTextField *_label;
    NSTextField *_dateLabel;
    VibrantBox *_bottomLine;
    NSLayoutConstraint *_dateLabelLeadingConstraint;
    CNAvatarViewController *_avatarViewController;
    id <TUSearchResult> _rowItem;
    FTHighlightView *_highlightView;
    NSImage *_lightIconImage;
    NSImage *_darkIconImage;
}

+ (id)darkVideoFaceTimeIcon;
+ (id)lightVideoFaceTimeIcon;
+ (id)darkAudioFaceTimeIcon;
+ (id)lightAudioFaceTimeIcon;
+ (id)darkAlternateInfoImage;
+ (id)darkInfoImage;
+ (id)lightInfoImage;
+ (id)darkAlternateVideoImage;
+ (id)darkVideoImage;
+ (id)lightVideoImage;
+ (id)darkAlternateAudioImage;
+ (id)darkAudioImage;
+ (id)lightAudioImage;
+ (id)darkButtonPressColor;
@property(retain, nonatomic) NSImage *darkIconImage; // @synthesize darkIconImage=_darkIconImage;
@property(retain, nonatomic) NSImage *lightIconImage; // @synthesize lightIconImage=_lightIconImage;
@property(retain, nonatomic) FTHighlightView *highlightView; // @synthesize highlightView=_highlightView;
@property(retain, nonatomic) id <TUSearchResult> rowItem; // @synthesize rowItem=_rowItem;
@property(retain, nonatomic) CNAvatarViewController *avatarViewController; // @synthesize avatarViewController=_avatarViewController;
@property(nonatomic) __weak NSLayoutConstraint *dateLabelLeadingConstraint; // @synthesize dateLabelLeadingConstraint=_dateLabelLeadingConstraint;
@property(nonatomic) __weak VibrantBox *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(nonatomic) __weak NSTextField *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(nonatomic) __weak NSTextField *label; // @synthesize label=_label;
@property(nonatomic) __weak NSButton *infoButton; // @synthesize infoButton=_infoButton;
@property(nonatomic) __weak NSButton *videoButton; // @synthesize videoButton=_videoButton;
@property(nonatomic) __weak NSButton *audioButton; // @synthesize audioButton=_audioButton;
@property(nonatomic) __weak NSImageView *faceTimeIconImageView; // @synthesize faceTimeIconImageView=_faceTimeIconImageView;
@property(nonatomic) __weak NSView *avatarViewContainer; // @synthesize avatarViewContainer=_avatarViewContainer;
@property(nonatomic) BOOL isLastRow; // @synthesize isLastRow=_isLastRow;
@property(nonatomic) BOOL isFirstRow; // @synthesize isFirstRow=_isFirstRow;
@property(nonatomic) __weak id <PersonTableRowViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)callMenuDidEndTracking:(id)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (void)infoButton:(id)arg1;
- (void)audioButton:(id)arg1;
- (void)videoButton:(id)arg1;
- (id)phoneNumbers;
- (void)showVideoButtonAnimated:(BOOL)arg1;
- (void)enableVideoButton:(BOOL)arg1;
- (void)showAudioButtonAnimated:(BOOL)arg1;
- (void)enableAudioButton:(BOOL)arg1;
- (void)disableCallButtons;
- (void)hideCallButtons:(BOOL)arg1;
- (void)faceTimeAudioActionSelected:(id)arg1;
- (void)telephonyActionSelected:(id)arg1;
- (void)setFaceTimeIconHidden:(BOOL)arg1;
- (void)setName:(id)arg1;
- (BOOL)isRecentsRow;
- (void)setNextRowSelected:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setSelectedUI:(BOOL)arg1;
- (void)setItem:(id)arg1;
- (void)awakeFromNib;
- (void)drawRect:(struct CGRect)arg1;

@end


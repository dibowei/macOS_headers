//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSAttributedString;

@interface SIUPlaceholderView : NSView
{
    NSAttributedString *_titleText;
    NSAttributedString *_messageText;
}

@property(retain, nonatomic) NSAttributedString *messageText; // @synthesize messageText=_messageText;
@property(retain, nonatomic) NSAttributedString *titleText; // @synthesize titleText=_titleText;
- (void)viewWillStartLiveResize;
- (void)viewDidEndLiveResize;
- (void)viewDidMoveToSuperview;
- (void)drawRect:(struct CGRect)arg1;
- (void)setMessageString:(id)arg1;
- (void)setTitleString:(id)arg1;
- (void)dealloc;
- (id)initForView:(id)arg1;

@end


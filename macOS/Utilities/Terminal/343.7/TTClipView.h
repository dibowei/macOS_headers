//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSClipView.h>

@interface TTClipView : NSClipView
{
    double _documentHeight;
    struct CGPoint _lastScrollPoint;
}

- (void)scrollToPoint:(struct CGPoint)arg1;
- (void)viewFrameChanged:(id)arg1;
- (void)setDocumentView:(id)arg1;

@end


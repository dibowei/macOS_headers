//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXPhotoCell.h"

@class NSButton;

@interface IPXFacePhotoCell : IPXPhotoCell
{
    NSButton *_checkmark;
}

- (void).cxx_destruct;
- (void)indicateSelectionState:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateWithMediaItem:(id)arg1;
- (void)setShowCheckmark:(BOOL)arg1 withPersonsName:(id)arg2;
- (void)setShowCheckmark:(BOOL)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)accessibilityPerformShowMenu;
- (id)accessibilityChildren;

@end


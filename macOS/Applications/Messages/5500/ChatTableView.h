//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableView.h>

@interface ChatTableView : NSTableView
{
}

- (BOOL)validateProposedFirstResponder:(id)arg1 forEvent:(id)arg2;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (id)dragImageForRowsWithIndexes:(id)arg1 tableColumns:(id)arg2 event:(id)arg3 offset:(struct CGPoint *)arg4;
- (void)drawBackgroundInClipRect:(struct CGRect)arg1;
- (void)_drawGridLinesInClipRect:(struct CGRect)arg1;

@end


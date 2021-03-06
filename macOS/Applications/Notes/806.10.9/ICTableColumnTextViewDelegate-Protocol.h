//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ICTableColumnTextView, NSUUID;

@protocol ICTableColumnTextViewDelegate <NSObject>
- (void)tappedTableAtLocation:(struct CGPoint)arg1;
- (void)beginEditingSelectedRangeInTextView:(ICTableColumnTextView *)arg1;
- (BOOL)containedInNoteSelection;
- (void)updateColumnWidthForColumn:(NSUUID *)arg1;
- (BOOL)pasteCellRange;
- (void)moveRightCell;
- (void)moveLeftCell;
- (void)moveDownCell;
- (void)moveUpCell;
- (void)moveReturnCell;
- (void)moveShiftReturnCell;
- (void)moveNextCell;
- (void)moveTabCell;
- (void)movePrevCell;

@optional
- (void)selectCell;
@end


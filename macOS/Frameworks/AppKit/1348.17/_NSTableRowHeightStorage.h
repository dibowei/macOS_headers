//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSCopying-Protocol.h>

@class NSTableView;

@interface _NSTableRowHeightStorage : NSObject <NSCopying>
{
    NSTableView *_tableView;
    double *_rowHeights;
    long long _heightsSize;
    long long _numberOfRows;
    long long _gapRow;
    double _gapRowHeight;
    unsigned int _rowHeightsAreValid:1;
    unsigned int _numberOfRowsIsValid:1;
    unsigned int _supportsVariableRowHeights:1;
    unsigned int _updatingRowHeights:1;
}

@property double gapRowHeight; // @synthesize gapRowHeight=_gapRowHeight;
- (void)deleteRowsInRange:(struct _NSRange)arg1;
- (void)_variableDeleteRowsWithRange:(struct _NSRange)arg1;
- (void)_normalDeleteRowsWithRange:(struct _NSRange)arg1;
- (void)addInsertionHoleForRange:(struct _NSRange)arg1;
- (void)_normalAddInsertionHoleAtRange:(struct _NSRange)arg1;
- (void)_variableAddInsertionHolesAtRange:(struct _NSRange)arg1;
- (void)applyRowDeletions:(id)arg1 insertions:(id)arg2;
- (void)_normalApplyRowDeletions:(id)arg1 insertions:(id)arg2;
- (void)_variableApplyRowDeletions:(id)arg1 insertions:(id)arg2;
- (void)insertRowCount:(long long)arg1 atIndex:(long long)arg2;
- (void)deleteRowCount:(long long)arg1 atIndex:(long long)arg2;
@property long long gapRow; // @dynamic gapRow;
- (void)_internalDeleteRows:(long long)arg1 atIndex:(long long)arg2;
- (double)_internalChangeForDeleteRows:(long long)arg1 atIndex:(long long)arg2 withPriorChange:(double)arg3;
- (id)_debugRowHeights;
- (void)_internalInsertRows:(long long)arg1 atIndex:(long long)arg2;
- (void)_internalChangeForZeroHeightInsertOfRows:(long long)arg1 atIndex:(long long)arg2;
- (double)_internalChangeForInsertRows:(long long)arg1 atIndex:(long long)arg2;
- (void)_ensureRowHeightsIsAtLeastThisSize:(long long)arg1;
- (BOOL)noteHeightOfRowsWithIndexesChanged:(id)arg1;
- (double)computeTableHeightForNumberOfRows:(long long)arg1;
- (long long)computeRowAtPoint:(struct CGPoint)arg1;
- (long long)_normalComputeRowAtPoint:(struct CGPoint)arg1;
- (long long)_adjustRowForGapRow:(long long)arg1;
- (long long)_variableComputeRowAtPoint:(struct CGPoint)arg1;
- (struct CGRect)computeRectOfRow:(long long)arg1 assumingExists:(BOOL)arg2;
- (struct CGRect)computeRectOfRow:(long long)arg1;
- (struct CGRect)_normalComputeRectOfRow:(long long)arg1 assumingExists:(BOOL)arg2;
- (struct CGRect)_variableComputeRectOfRow:(long long)arg1;
- (double)_standardFullRowHeight;
- (void)_ensureRowHeights;
- (void)_createRowHeightsArray;
- (void)_cacheRowHeights;
- (double)_uncachedRectHeightOfRow:(long long)arg1;
- (struct CGRect)backgroundFillerRect;
@property(readonly) long long numberOfRows;
- (void)invalidateNumberOfRowsCache;
- (void)invalidateCacheAndStorage;
@property(readonly, getter=isValid) BOOL valid;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTableView:(id)arg1;

@end


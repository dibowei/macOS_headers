//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, TSWPParagraphStyle;

@interface TSTLayoutContentCachedKey : NSObject <NSCopying>
{
    NSString *mString;
    double mWidth;
    double mHeight;
    TSWPParagraphStyle *mParagraphStyle;
    BOOL mCellWraps;
    int mValueType;
    struct NSEdgeInsets mPaddingInsets;
    int mVerticalAlignment;
    int mWritingDirection;
}

@property(readonly, nonatomic) int writingDirection; // @synthesize writingDirection=mWritingDirection;
@property(readonly, nonatomic) int verticalAlignment; // @synthesize verticalAlignment=mVerticalAlignment;
@property(readonly, nonatomic) struct NSEdgeInsets paddingInsets; // @synthesize paddingInsets=mPaddingInsets;
@property(readonly, nonatomic) int valueType; // @synthesize valueType=mValueType;
@property(readonly, nonatomic) BOOL cellWraps; // @synthesize cellWraps=mCellWraps;
@property(readonly, nonatomic) TSWPParagraphStyle *paragraphStyle; // @synthesize paragraphStyle=mParagraphStyle;
@property(readonly, nonatomic) double height; // @synthesize height=mHeight;
@property(readonly, nonatomic) double width; // @synthesize width=mWidth;
@property(readonly, nonatomic) NSString *string; // @synthesize string=mString;
- (id)description;
- (BOOL)isEqualToLayoutContentCachedKey:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithString:(id)arg1 width:(double)arg2 height:(double)arg3 paragraphStyle:(id)arg4 cellWraps:(BOOL)arg5 valueType:(int)arg6 paddingInsets:(struct NSEdgeInsets)arg7 verticalAlignment:(int)arg8 writingDirection:(int)arg9;

@end


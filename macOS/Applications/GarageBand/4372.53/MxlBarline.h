//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "MxlMeasureElem.h"

@interface MxlBarline : MxlMeasureElem
{
    int barlineType;
}

- (id)description;
- (id)descriptionString;
- (void)xmlDebugMeasureElem:(id)arg1 elemIndex:(long long)arg2;
- (long long)xmlCreateBarlineData:(id)arg1 currentDivision:(long long)arg2;
- (int)mxlElemType;
- (void)dealloc;
- (id)initWithBarlineType:(int)arg1 staffNumber:(long long)arg2;

@end


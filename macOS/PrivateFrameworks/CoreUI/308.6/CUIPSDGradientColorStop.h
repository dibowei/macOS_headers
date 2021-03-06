//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreUI/CUIPSDGradientStop.h>

#import <CoreUI/NSCoding-Protocol.h>

@interface CUIPSDGradientColorStop : CUIPSDGradientStop <NSCoding>
{
    struct _psdGradientColor gradientColor;
}

+ (id)colorStopWithLocation:(double)arg1 gradientColor:(struct _psdGradientColor)arg2;
+ (void)initialize;
- (id)description;
- (BOOL)isColorStop;
- (double)colorLocation;
- (struct _psdGradientColor)gradientColor;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLocation:(double)arg1 gradientColor:(struct _psdGradientColor)arg2;
- (void)_setGradientColor:(struct _psdGradientColor)arg1;

@end


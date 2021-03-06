//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSColor.h>

@class NSString;

@interface NSCatalogColor : NSColor
{
    NSString *catalogNameComponent;
    NSString *colorNameComponent;
    NSColor *genericColor;
}

+ (id)newWithCoder:(id)arg1 zone:(struct _NSZone *)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isUniform;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (Class)classForCoder;
- (id)description;
- (id)localizedColorNameComponent;
- (id)localizedCatalogNameComponent;
- (id)colorNameComponent;
- (id)catalogNameComponent;
- (id)colorUsingColorSpace:(id)arg1;
- (id)colorUsingColorSpaceName:(id)arg1 device:(id)arg2;
- (id)colorWithAlphaComponent:(double)arg1;
- (double)alphaComponent;
- (void)drawSwatchInRect:(struct CGRect)arg1;
- (void)drawSwatchOfColor:(id)arg1 inRect:(struct CGRect)arg2;
- (struct CGColor *)_createCGColorWithAlpha:(double)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (struct CGColor *)CGColor;
- (void)setStroke;
- (void)setFill;
- (void)set;
- (id)colorSpaceName;
- (id)initWithCatalogName:(id)arg1 colorName:(id)arg2 genericColor:(id)arg3;

@end


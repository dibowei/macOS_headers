//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSFont;

__attribute__((visibility("hidden")))
@interface CPKFontObj : NSObject
{
    NSFont *fNSFont;
    struct privateFontObjectRecord *fFontObject;
    struct CGFont *fCGFontRef;
    unsigned short fMaxGlyphID;
    unsigned int fUnicodeEncodingIndex;
    unsigned int fMacJapaneseEncodingIndex;
    struct ZapfHeader *fZapfHeader;
    NSDictionary *fStyleAttribute;
    unsigned int fEncodingBase;
    unsigned short fGlyphCollection;
    double fUnitScalingFactor;
    double fLineHeightUnit;
    unsigned long long fMaxUnicharForGlyph;
    unsigned int fLastMeasuredGlyph;
    struct CGRect fLastGlyphBoundsUnit;
}

+ (id)glyphInfoArrayForAttributedString:(id)arg1;
+ (id)fontWithName:(id)arg1 size:(double)arg2;
- (id)description;
- (double)_fontSizeForFittingGlyph:(unsigned int)arg1 inRect:(struct CGRect)arg2 preferredFontSize:(double)arg3 useLineHeight:(BOOL)arg4 layoutBounds:(struct CGRect *)arg5;
- (struct CGRect)layoutBoundsForGlyph:(unsigned int)arg1 inRect:(struct CGRect)arg2 useLineHeight:(BOOL)arg3;
- (double)fontSizeForFittingGlyph:(unsigned int)arg1 inRect:(struct CGRect)arg2 useLineHeight:(BOOL)arg3 layoutBounds:(struct CGRect *)arg4;
- (double)lineHeight;
- (struct CGRect)boundingRectForGlyph:(unsigned int)arg1;
- (id)glyphInfoWithGlyph:(unsigned int)arg1 baseString:(id)arg2;
- (unsigned short)glyphCollection;
- (unsigned int)encodingBase;
- (void)setFontSize:(double)arg1;
- (double)fontSize;
- (struct CGFont *)cgFontRef;
- (unsigned int)glyphForString:(id)arg1 fallbackFontName:(id *)arg2;
- (unsigned int)glyphForString:(id)arg1;
- (unsigned int)glyphForCharacter:(unsigned int)arg1;
- (id)getNSFont;
- (void)dealloc;
- (id)initWithName:(id)arg1 size:(double)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GSSPCmdChartBaseWithChartInfoId.h"

#import "GSSPAutoDecodable-Protocol.h"

@class NSString, TSCHSemanticParagraphStyleMutationMap;

@interface GSSPCmdSetFontFamily : GSSPCmdChartBaseWithChartInfoId <GSSPAutoDecodable>
{
    BOOL mIsItalic;
    BOOL mIsBold;
    NSString *mFwdFontFamilyName;
    TSCHSemanticParagraphStyleMutationMap *mFwdParaStyleMutationMaps;
    NSString *mRevFontFamilyName;
    BOOL mDefinedFwdFontFamilyName;
    BOOL mDefinedFwdParaStyleMutationMaps;
    BOOL mDefinedRevFontFamilyName;
}

+ (Class)realClass;
+ (void)registerRealGsspClass:(Class)arg1;
+ (CDUnknownFunctionPointerType)defaultDecodeConversionFunc;
+ (CDUnknownFunctionPointerType)autoDecodeConversionFunc;
+ (void)setAutoDecodeConversionFuncForDocServer:(CDUnknownFunctionPointerType)arg1;
+ (Class)autoDecodedClass;
@property(readonly, nonatomic) BOOL definedRevFontFamilyName; // @synthesize definedRevFontFamilyName=mDefinedRevFontFamilyName;
@property(readonly, nonatomic) BOOL definedFwdParaStyleMutationMaps; // @synthesize definedFwdParaStyleMutationMaps=mDefinedFwdParaStyleMutationMaps;
@property(readonly, nonatomic) BOOL definedFwdFontFamilyName; // @synthesize definedFwdFontFamilyName=mDefinedFwdFontFamilyName;
- (id)description;
- (id)dspClassName;
- (id)jsonNSDictionaryValue;
- (void)populateJsonNSDictionaryValueToDictionary:(id)arg1;
- (int)p_getDiffEncodingScoreWith:(id)arg1;
- (void)p_populateStructHashKey:(struct GSSPHashKeyBuilder *)arg1;
- (unsigned long long)p_getStructHashKeyLength;
- (int)getStructHashId;
- (void)serializeRequiredFieldsWithSerializationContext:(struct GSSPSerializationContext *)arg1 withNextFieldNeedSerialize:(BOOL)arg2 diffBy:(id)arg3;
- (void)serializeOptionalFieldsWithSerializationContext:(struct GSSPSerializationContext *)arg1 withNextFieldNeedSerialize:(BOOL)arg2 diffBy:(id)arg3;
- (id)dspTypeIdString;
- (void)populateRequiredField:(int)arg1 fromContext:(struct GSSPDeserializationContext *)arg2;
- (void)populateOptionalField:(int)arg1 fromContext:(struct GSSPDeserializationContext *)arg2;
- (void)shallowCopyAllFieldsFrom:(id)arg1;
- (void)dealloc;
- (BOOL)clearRevFontFamilyName;
- (BOOL)clearFwdParaStyleMutationMaps;
- (BOOL)clearFwdFontFamilyName;
- (void)setRevFontFamilyName:(id)arg1;
- (id)revFontFamilyName;
- (void)setFwdParaStyleMutationMaps:(id)arg1;
- (id)fwdParaStyleMutationMaps;
- (void)setFwdFontFamilyName:(id)arg1;
- (id)fwdFontFamilyName;
- (void)setIsBold:(BOOL)arg1;
- (BOOL)isBold;
- (void)setIsItalic:(BOOL)arg1;
- (BOOL)isItalic;

@end


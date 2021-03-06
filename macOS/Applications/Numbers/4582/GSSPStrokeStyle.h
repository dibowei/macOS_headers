//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GSSPMessageBase.h"

@class NSString, TSDStrokePattern;

@interface GSSPStrokeStyle : GSSPMessageBase
{
    NSString *mFrameName;
    TSDStrokePattern *mStrokePattern;
    int mStrokeLineCap;
    int mStrokeLineJoin;
    double mStrokeMiterLimit;
    BOOL mDefinedFrameName;
    BOOL mDefinedStrokePattern;
    BOOL mDefinedStrokeLineCap;
    BOOL mDefinedStrokeLineJoin;
    BOOL mDefinedStrokeMiterLimit;
}

+ (Class)realClass;
+ (void)registerRealGsspClass:(Class)arg1;
@property(readonly, nonatomic) BOOL definedStrokeMiterLimit; // @synthesize definedStrokeMiterLimit=mDefinedStrokeMiterLimit;
@property(readonly, nonatomic) BOOL definedStrokeLineJoin; // @synthesize definedStrokeLineJoin=mDefinedStrokeLineJoin;
@property(readonly, nonatomic) BOOL definedStrokeLineCap; // @synthesize definedStrokeLineCap=mDefinedStrokeLineCap;
@property(readonly, nonatomic) BOOL definedStrokePattern; // @synthesize definedStrokePattern=mDefinedStrokePattern;
@property(readonly, nonatomic) BOOL definedFrameName; // @synthesize definedFrameName=mDefinedFrameName;
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
- (BOOL)clearStrokeMiterLimit;
- (BOOL)clearStrokeLineJoin;
- (BOOL)clearStrokeLineCap;
- (BOOL)clearStrokePattern;
- (BOOL)clearFrameName;
- (void)setStrokeMiterLimit:(double)arg1;
- (double)strokeMiterLimit;
- (void)setStrokeLineJoin:(int)arg1;
- (int)strokeLineJoin;
- (void)setStrokeLineCap:(int)arg1;
- (int)strokeLineCap;
- (void)setStrokePattern:(id)arg1;
- (id)strokePattern;
- (void)setFrameName:(id)arg1;
- (id)frameName;

@end


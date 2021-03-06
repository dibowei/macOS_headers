//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSCH3DMaterial.h"

#import "GSSPAutoEncodable-Protocol.h"

@class NSArray, TSCH3DVector;

@interface TSCH3DTexturesMaterial : TSCH3DMaterial <GSSPAutoEncodable>
{
    TSCH3DVector *_color;
    NSArray *_textures;
    NSArray *_tilings;
}

+ (id)instanceWithArchive:(const struct Chart3DTexturesMaterialArchive *)arg1 unarchiver:(id)arg2;
- (void)didInitFromSOS;
- (id)firstTiling;
- (id)firstTexture;
- (void)addTexture:(id)arg1 tiling:(id)arg2;
- (id)textureEnumerator;
- (unsigned long long)textureCount;
- (id)tilings;
- (id)textures;
- (BOOL)hasCompleteData;
@property(nonatomic) tvec4_ac57c72d color;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (void)saveToArchive:(struct Chart3DTexturesMaterialArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct Chart3DTexturesMaterialArchive *)arg1 unarchiver:(id)arg2;
- (void)populateGSSPChart3dTexturesMaterial:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end


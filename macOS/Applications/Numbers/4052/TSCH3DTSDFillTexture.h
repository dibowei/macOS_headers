//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSCH3DTexture.h"

@class TSDFill;

@interface TSCH3DTSDFillTexture : TSCH3DTexture
{
    TSDFill *mFill;
}

+ (id)textureWithTSDFill:(id)arg1;
- (id)databufferForDataCache:(id)arg1;
- (BOOL)hasCompleteData;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithTSDFill:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAsset, AVAssetTrack, VideoAccessRand;

@interface VideoAccessIndex : NSObject
{
    vector_4f732a7b mFrameTimes;
    unsigned int numFrames;
    AVAssetTrack *videoTrack;
    AVAsset *asset;
    VideoAccessRand *accessRand;
}

@property(retain) VideoAccessRand *accessRand; // @synthesize accessRand;
@property(readonly) AVAsset *asset; // @synthesize asset;
@property(readonly) AVAssetTrack *videoTrack; // @synthesize videoTrack;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)getFrameAtIndex:(unsigned int)arg1 pixBuf:(struct __CVBuffer **)arg2;
- (id)initFromFile:(id)arg1 pixelFormat:(unsigned int)arg2 frameTimes:(const vector_4f732a7b *)arg3;

@end


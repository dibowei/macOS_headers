//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VideoCaptureProtocol-Protocol.h>

@protocol CannedVideoFrameFeeder;

__attribute__((visibility("hidden")))
@interface CannedVideoCapture : NSObject <VideoCaptureProtocol>
{
    struct CannedVideoCapturePrivate *_pimpl;
    id <CannedVideoFrameFeeder> _frameFeeder;
}

+ (int)createPixelBufferPool:(struct __CVPixelBufferPool **)arg1 withWidth:(int)arg2 height:(int)arg3;
+ (int)cannedVideoTypeForPath:(id)arg1;
@property(retain, nonatomic) id <CannedVideoFrameFeeder> frameFeeder; // @synthesize frameFeeder=_frameFeeder;
@property(readonly, nonatomic) struct CannedVideoCapturePrivate *pimpl; // @synthesize pimpl=_pimpl;
- (void)stopThreads;
- (int)startThreads;
- (BOOL)isFrontCamera;
- (int)stop:(BOOL)arg1;
- (int)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (int)startPreview;
- (int)setFrameRate:(int)arg1;
- (BOOL)isPreviewRunning;
- (id)getCameraUID;
- (int)setCameraWithUID:(id)arg1;
- (int)copyColorInfo:(const struct __CFDictionary **)arg1;
- (int)setWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (void)dealloc;
- (id)initWithOptions:(void *)arg1 callback:(CDUnknownFunctionPointerType)arg2 width:(int)arg3 height:(int)arg4 frameRate:(int)arg5 cameraUID:(id)arg6 folder:(id)arg7 withError:(int *)arg8;

@end


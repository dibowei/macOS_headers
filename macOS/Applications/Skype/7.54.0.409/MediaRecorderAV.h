//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVCaptureAudioDataOutputSampleBufferDelegate-Protocol.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"

@class AVAssetWriter, AVCaptureAudioDataOutput, AVCaptureDevice, AVCaptureSession, AVCaptureVideoDataOutput, NSArray, NSDate, NSError, NSLock, NSMutableDictionary, NSScreen, NSString, NSTimer, NSURL, SKDispatcher;
@protocol OS_dispatch_queue;

@interface MediaRecorderAV : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureAudioDataOutputSampleBufferDelegate>
{
    NSScreen *_screenRecordingScreen;
    NSTimer *recordingDurationTimer;
    struct {
        long long value;
        int timescale;
        unsigned int flags;
        long long epoch;
    } lastSampleBufferPresentationTime;
    NSObject<OS_dispatch_queue> *mediaRecorderQueue;
    NSObject<OS_dispatch_queue> *mediaRecorderQueueAudio;
    NSObject<OS_dispatch_queue> *screenRecorderQueue;
    NSLock *capturerLock;
    NSLock *capturerLockAudio;
    NSLock *deviceChangeLock;
    BOOL _audioOnlyRecording;
    BOOL _videoDeviceIsLocked;
    BOOL _recording;
    BOOL _screenCapturing;
    BOOL _recorded;
    BOOL _previewRunning;
    BOOL _stoppingRecording;
    BOOL _videoOnlyRecording;
    BOOL _holdVideoDeviceLock;
    BOOL _openedVideoDevice;
    BOOL _openedAudioDevice;
    BOOL _renderingPrerecordScreen;
    BOOL _pendingStartSession;
    BOOL _pendingOpenDevices;
    NSDate *_recordingStartTime;
    NSError *_recordingError;
    double _maximumRecordDuration;
    double _recordedDuration;
    AVCaptureSession *_session;
    AVCaptureDevice *_videoDevice;
    AVCaptureDevice *_audioDevice;
    AVAssetWriter *_assetWriter;
    double _recordedFileDuration;
    AVCaptureVideoDataOutput *_videoDataOutput;
    AVCaptureAudioDataOutput *_audioDataOutput;
    NSMutableDictionary *_mirroredCaptureLayers;
    NSArray *_captureLayers;
    SKDispatcher *_dispatcher;
    struct CGSize _videoSize;
    struct CGSize _screenCaptureSize;
}

+ (id)keyPathsForValuesAffectingOpen;
@property(retain, nonatomic) SKDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property(readonly, nonatomic) NSArray *captureLayers; // @synthesize captureLayers=_captureLayers;
@property(readonly, nonatomic) NSMutableDictionary *mirroredCaptureLayers; // @synthesize mirroredCaptureLayers=_mirroredCaptureLayers;
@property(readonly, nonatomic) AVCaptureAudioDataOutput *audioDataOutput; // @synthesize audioDataOutput=_audioDataOutput;
@property(readonly, nonatomic) AVCaptureVideoDataOutput *videoDataOutput; // @synthesize videoDataOutput=_videoDataOutput;
@property(nonatomic) double recordedFileDuration; // @synthesize recordedFileDuration=_recordedFileDuration;
@property(nonatomic) BOOL pendingOpenDevices; // @synthesize pendingOpenDevices=_pendingOpenDevices;
@property(nonatomic) BOOL pendingStartSession; // @synthesize pendingStartSession=_pendingStartSession;
@property(nonatomic, getter=isRenderingPrerecordScreen) BOOL renderingPrerecordScreen; // @synthesize renderingPrerecordScreen=_renderingPrerecordScreen;
@property(retain, nonatomic) AVAssetWriter *assetWriter; // @synthesize assetWriter=_assetWriter;
@property(retain, nonatomic) AVCaptureDevice *audioDevice; // @synthesize audioDevice=_audioDevice;
@property(retain, nonatomic) AVCaptureDevice *videoDevice; // @synthesize videoDevice=_videoDevice;
@property(retain, nonatomic) AVCaptureSession *session; // @synthesize session=_session;
@property(nonatomic) BOOL openedAudioDevice; // @synthesize openedAudioDevice=_openedAudioDevice;
@property(nonatomic) BOOL openedVideoDevice; // @synthesize openedVideoDevice=_openedVideoDevice;
@property(nonatomic) double recordedDuration; // @synthesize recordedDuration=_recordedDuration;
@property(nonatomic) BOOL holdVideoDeviceLock; // @synthesize holdVideoDeviceLock=_holdVideoDeviceLock;
@property(readonly, nonatomic, getter=isVideoOnlyRecording) BOOL videoOnlyRecording; // @synthesize videoOnlyRecording=_videoOnlyRecording;
@property(readonly, nonatomic, getter=isAudioOnlyRecording) BOOL audioOnlyRecording; // @synthesize audioOnlyRecording=_audioOnlyRecording;
@property(nonatomic) double maximumRecordDuration; // @synthesize maximumRecordDuration=_maximumRecordDuration;
@property(retain, nonatomic) NSError *recordingError; // @synthesize recordingError=_recordingError;
@property(retain, nonatomic) NSDate *recordingStartTime; // @synthesize recordingStartTime=_recordingStartTime;
@property(nonatomic) struct CGSize screenCaptureSize; // @synthesize screenCaptureSize=_screenCaptureSize;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic, getter=isStoppingRecording) BOOL stoppingRecording; // @synthesize stoppingRecording=_stoppingRecording;
@property(nonatomic, getter=isPreviewRunning) BOOL previewRunning; // @synthesize previewRunning=_previewRunning;
@property(nonatomic, getter=isRecorded) BOOL recorded; // @synthesize recorded=_recorded;
@property(nonatomic, getter=isScreenCapturing) BOOL screenCapturing; // @synthesize screenCapturing=_screenCapturing;
@property(nonatomic, getter=isRecording) BOOL recording; // @synthesize recording=_recording;
- (void).cxx_destruct;
- (void)durationTimerFired:(id)arg1;
- (void)updateDuration;
- (void)stopDurationTimer;
- (void)startDurationTimer;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
@property(readonly, nonatomic) NSURL *captureFileURL;
@property(readonly, nonatomic, getter=isOpen) BOOL open;
@property(readonly, nonatomic) unsigned long long numberOfPreviews;
@property(retain, nonatomic) NSScreen *screenRecordingScreen;
- (void)stopScreenCapturing;
- (BOOL)startScreenCapturing:(id)arg1;
- (void)stopRecording;
- (BOOL)startRecording;
- (void)setMirroringForPreviewLayers;
- (void)setLimitedFramerate:(BOOL)arg1;
- (void)setMirroring:(BOOL)arg1 forCaptureLayerAtIndex:(unsigned long long)arg2;
- (id)previewLayerAtIndex:(unsigned long long)arg1;
- (void)close;
- (BOOL)open:(id *)arg1;
- (void)unlockVideoDevice;
- (BOOL)lockVideoDevice:(id *)arg1;
@property(readonly, nonatomic) __weak NSURL *screenCaptureRecordingURL;
@property(readonly, nonatomic) __weak NSURL *temporaryRecordingURL;
- (void)changeAudioDeviceTo:(id)arg1;
- (void)changeVideoDeviceTo:(id)arg1;
- (void)screenConfigurationDidChange:(id)arg1;
- (void)sessionStopped:(id)arg1;
- (void)runtimeErrorNotification:(id)arg1;
- (void)closeCaptureDeviceNotification:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)handleIsCaptureDeviceInUseChanged;
- (id)assetWriterWithVideoHeight:(unsigned long long)arg1 width:(unsigned long long)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)initWithAudioDeviceID:(id)arg1;
- (id)initWithVideoDeviceID:(id)arg1 audioDeviceID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


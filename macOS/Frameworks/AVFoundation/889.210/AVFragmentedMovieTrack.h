//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AVFoundation/AVMovieTrack.h>

@class AVFragmentedMovieTrackInternal;

@interface AVFragmentedMovieTrack : AVMovieTrack
{
    AVFragmentedMovieTrackInternal *_fragmentedMovieTrack;
}

- (void)finalize;
- (void)dealloc;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;
- (void)_stopListeningToTrackReaderNotifications;
- (void)_startListeningToTrackReaderNotifications;

@end


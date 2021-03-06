//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDModelAction.h>

@class IPXSharedStream, NSArray, NSWindow;

@interface IPXDeleteSharedStreamAssetAction : RDModelAction
{
    NSArray *_deletableAssets;
    CDUnknownBlockType _completeCallback;
    BOOL _skipPrompt;
    IPXSharedStream *_sharedStream;
    NSWindow *_hostWindow;
}

@property __weak NSWindow *hostWindow; // @synthesize hostWindow=_hostWindow;
@property(readonly) IPXSharedStream *sharedStream; // @synthesize sharedStream=_sharedStream;
- (void).cxx_destruct;
- (void)determineDeletableAssets:(CDUnknownBlockType)arg1;
- (BOOL)iCloudAgentReady;
- (void)performAction:(CDUnknownBlockType)arg1;
- (void)actionCompleteReply:(int)arg1;
- (void)_promptUser:(CDUnknownBlockType)arg1;
- (void)_deleteAssets;
- (id)initWithAssets:(id)arg1 sharedStream:(id)arg2 skipPrompt:(BOOL)arg3;

@end


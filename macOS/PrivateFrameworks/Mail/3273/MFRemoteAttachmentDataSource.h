//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Mail/MCRemoteAttachmentDataSource-Protocol.h>

@class MFLibraryMessage, NSConditionLock, NSMutableDictionary, NSOperationQueue, NSProgress, NSString;

@interface MFRemoteAttachmentDataSource : NSObject <MCRemoteAttachmentDataSource>
{
    NSConditionLock *_attachmentFetchLock;
    NSMutableDictionary *_completionBlocksByMimePartNumber;
    id _completionBlocksByMimePartNumberLock;
    MFLibraryMessage *_message;
    NSOperationQueue *_attachmentFetchCompletionQueue;
    NSProgress *_downloadProgress;
}

+ (id)remoteAttachmentDataSourceForMessage:(id)arg1;
@property(readonly, nonatomic) NSProgress *downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(readonly, nonatomic) NSOperationQueue *attachmentFetchCompletionQueue; // @synthesize attachmentFetchCompletionQueue=_attachmentFetchCompletionQueue;
@property(readonly, nonatomic) MFLibraryMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)fetchAttachmentForAccessLevel:(long long)arg1 mimePartNumber:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)_attachmentBecameAvailable:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;
- (id)initWithMessage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


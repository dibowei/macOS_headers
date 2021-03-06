//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLConnectionDataDelegate-Protocol.h"

@class NSData, NSString, NSURL, NSURLConnection, TSKICloudHTTPRequestSender, TSKICloudHTTPRequestSenderFactory, TSKSharingState, TSPDocumentRevision, TSUWeakReference;
@protocol OS_dispatch_queue;

@interface TSACollaborationValidator : NSObject <NSURLConnectionDataDelegate>
{
    TSKICloudHTTPRequestSenderFactory *_requestSenderFactory;
    TSKICloudHTTPRequestSender *_requestSender;
    NSData *_requestData;
    TSKSharingState *_sharingState;
    NSURL *_documentURL;
    TSUWeakReference *_documentRootReference;
    NSString *_passphrase;
    TSPDocumentRevision *_documentRevision;
    BOOL _skipWaitingIfUnsupported;
    BOOL _expectSameRevision;
    BOOL _ignoreCache;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _completionBlock;
    NSURLConnection *_connection;
}

+ (id)validateCollaborativeDocumentURL:(id)arg1 documentRoot:(id)arg2 requestSenderFactory:(id)arg3 sharingState:(id)arg4 passphrase:(id)arg5 skipWaitingIfUnsupported:(BOOL)arg6 expectSameRevision:(BOOL)arg7 ignoreCache:(BOOL)arg8 queue:(id)arg9 completionBlock:(CDUnknownBlockType)arg10;
@property(readonly, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
- (BOOL)p_diffResponsePayloadHasCommands:(id)arg1;
- (id)p_buildDiffResponsePayload:(id)arg1 error:(id *)arg2;
- (void)processData:(id)arg1;
- (void)callCompletionWithResult:(id)arg1;
- (void)callCompletionWithNetworkError:(BOOL)arg1 serverSideError:(BOOL)arg2 noLongerSharedWithYou:(BOOL)arg3 error:(id)arg4;
- (void)cancelValidation;
- (void)scheduleRequest;
- (BOOL)setupRequestDataWithError:(id *)arg1;
- (void)validate;
- (id)documentRoot;
- (void)dealloc;
- (id)initWithRequestSenderFactory:(id)arg1 sharingState:(id)arg2 documentURL:(id)arg3 documentRoot:(id)arg4 passphrase:(id)arg5 documentRevision:(id)arg6 skipWaitingIfUnsupported:(BOOL)arg7 expectSameRevision:(BOOL)arg8 ignoreCache:(BOOL)arg9 queue:(id)arg10 completionBlock:(CDUnknownBlockType)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


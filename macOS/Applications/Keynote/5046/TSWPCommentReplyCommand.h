//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKCommand.h"

#import "GSSPAutoEncodable-Protocol.h"
#import "TSDAnnotationChangingCommand-Protocol.h"
#import "TSDAnnotationDisplayingCommand-Protocol.h"
#import "TSDCommentCommand-Protocol.h"

@class NSString, TSDCommentStorage, TSUUUIDPath, TSWPHighlight;
@protocol TSDAnnotation;

@interface TSWPCommentReplyCommand : TSKCommand <GSSPAutoEncodable, TSDAnnotationDisplayingCommand, TSDAnnotationChangingCommand, TSDCommentCommand>
{
    TSUUUIDPath *_textStorageUUIDPath;
    NSString *_annotationUUID;
    TSDCommentStorage *_forwardCommentStorage;
    unsigned long long _variant;
    TSDCommentStorage *_inverseCommentStorage;
    unsigned long long _inverseVariant;
}

@property(nonatomic) unsigned long long inverseVariant; // @synthesize inverseVariant=_inverseVariant;
@property(nonatomic) unsigned long long variant; // @synthesize variant=_variant;
@property(retain, nonatomic) TSDCommentStorage *inverseCommentStorage; // @synthesize inverseCommentStorage=_inverseCommentStorage;
@property(retain, nonatomic) TSDCommentStorage *forwardCommentStorage; // @synthesize forwardCommentStorage=_forwardCommentStorage;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
@property(readonly, nonatomic) id <TSDAnnotation> changedAnnotation;
- (id)commentToDisplayForUndo;
- (id)commentToDisplayForDo;
- (void)applyRootCommentStorage:(id)arg1;
@property(readonly, nonatomic) TSDCommentStorage *rootCommentStorage;
- (id)makeInverse;
- (void)rollback;
- (BOOL)supportsCollaboration;
- (void)redo;
- (void)undo;
- (void)commit;
- (BOOL)process;
- (id)actionString;
@property(readonly) TSWPHighlight *comment;
- (id)initWithVariant:(unsigned long long)arg1 comment:(id)arg2 reply:(id)arg3;
- (id)initWithContext:(id)arg1 storageUUIDPath:(id)arg2 annotationUUID:(id)arg3 reply:(id)arg4 variant:(unsigned long long)arg5;
- (void)populateGSSPCmdTextCommentReply:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


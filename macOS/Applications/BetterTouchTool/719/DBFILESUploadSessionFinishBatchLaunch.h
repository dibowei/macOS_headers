//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DBSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class DBFILESUploadSessionFinishBatchResult, NSString;

@interface DBFILESUploadSessionFinishBatchLaunch : NSObject <DBSerializable, NSCopying>
{
    NSString *_asyncJobId;
    DBFILESUploadSessionFinishBatchResult *_complete;
    long long _tag;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) long long tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (BOOL)isEqualToUploadSessionFinishBatchLaunch:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)tagName;
- (BOOL)isOther;
- (BOOL)isComplete;
- (BOOL)isAsyncJobId;
@property(readonly, nonatomic) DBFILESUploadSessionFinishBatchResult *complete; // @synthesize complete=_complete;
@property(readonly, copy, nonatomic) NSString *asyncJobId; // @synthesize asyncJobId=_asyncJobId;
- (id)initWithOther;
- (id)initWithComplete:(id)arg1;
- (id)initWithAsyncJobId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


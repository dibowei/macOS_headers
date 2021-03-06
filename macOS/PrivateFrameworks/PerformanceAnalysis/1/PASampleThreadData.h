//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PerformanceAnalysis/PASerializable-Protocol.h>

@class NSString, PASampleFrame;

@interface PASampleThreadData : NSObject <PASerializable>
{
    PASampleFrame *leafFrame;
    unsigned long long dispatchQueueId;
    unsigned long long waitEvent;
    unsigned long long continuation;
    unsigned long long userTimeInNs;
    unsigned long long systemTimeInNs;
    unsigned long long threadId;
    int state;
    int staticPriority;
    int currentScheduledPriority;
    int schedulerFlags;
    unsigned int threadQos;
    unsigned char ioTier;
    BOOL ioPassive;
    BOOL isSuspended;
    BOOL ss_flags;
}

+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void *)arg1;
+ (id)classDictionaryKey;
- (BOOL)isStackEqualTo:(id)arg1;
- (id)stack;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)dealloc;
- (id)initWithStackshotThread:(id)arg1 andLeafFrame:(id)arg2;
@property(readonly) BOOL hasDispatchQueue;
@property(readonly) unsigned int powerstatsFlags;
@property(readonly) BOOL hasValidPowerstatsFlags;
@property(readonly) BOOL isDarwinBG;
@property(readonly) BOOL stackTracesHaveNoFramePointers;
@property(readonly) BOOL hasDispatchSerial;
@property(readonly) BOOL is64bitKernel;
@property(readonly) BOOL is64bitUser;
@property(readonly) BOOL isProcessorIdleThread;
@property(readonly) BOOL isAbortingInterruptibleWaitsAtSafePoints;
@property(readonly) BOOL isAbortingInterruptibleWaits;
@property(readonly) BOOL isHaltedAtTermination;
@property(readonly) BOOL isWaitingUninterruptibly;
@property(readonly) BOOL isRunning;
@property(readonly) BOOL isStopped;
@property(readonly) BOOL isWaiting;
- (void)populateReferencesUsingBufferPosition:(const void *)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (BOOL)addSelfToBufferAtPosition:(void *)arg1 withCompletedSerializationDictionary:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


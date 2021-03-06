//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffers/PBGeneratedMessage.h>

@class Pair;

__attribute__((visibility("hidden")))
@interface HistoryEntry : PBGeneratedMessage
{
    unsigned int hasValue1_:1;
    unsigned int hasUnknown4_:1;
    unsigned int hasValue2_:1;
    unsigned int hasPair1_:1;
    unsigned int hasPair2_:1;
    long long value1;
    long long unknown4;
    long long value2;
    Pair *pair1;
    Pair *pair2;
}

+ (id)builderWithPrototype:(id)arg1;
+ (id)builder;
+ (id)parseFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromCodedInputStream:(id)arg1;
+ (id)parseFromInputStream:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromInputStream:(id)arg1;
+ (id)parseFromData:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromData:(id)arg1;
+ (id)defaultInstance;
+ (void)initialize;
@property long long value2; // @synthesize value2;
@property long long unknown4; // @synthesize unknown4;
@property(retain) Pair *pair2; // @synthesize pair2;
@property long long value1; // @synthesize value1;
@property(retain) Pair *pair1; // @synthesize pair1;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeDescriptionTo:(id)arg1 withIndent:(id)arg2;
- (id)toBuilder;
- (id)builder;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)defaultInstance;
- (id)init;
- (void)setHasValue2:(BOOL)arg1;
- (BOOL)hasValue2;
- (void)setHasUnknown4:(BOOL)arg1;
- (BOOL)hasUnknown4;
- (void)setHasPair2:(BOOL)arg1;
- (BOOL)hasPair2;
- (void)setHasValue1:(BOOL)arg1;
- (BOOL)hasValue1;
- (void)setHasPair1:(BOOL)arg1;
- (BOOL)hasPair1;

@end


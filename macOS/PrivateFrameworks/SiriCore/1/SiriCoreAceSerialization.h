//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SiriCoreAceSerialization : NSObject
{
}

+ (id)_insufficientDataErrorForBytesNeeded:(unsigned long long)arg1 available:(unsigned long long)arg2;
+ (BOOL)tryParsingPacketWithBytes:(const void *)arg1 length:(unsigned long long)arg2 rawPacket:(CDStruct_95d471ab *)arg3 object:(id *)arg4 bytesRead:(unsigned long long *)arg5 error:(id *)arg6;
+ (id)_tryParsingSpeechPacketBytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (id)_tryParsingPlistPacketBytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (BOOL)tryParsingAceHeaderData:(id)arg1 compressionType:(unsigned char *)arg2 bytesRead:(unsigned long long *)arg3 error:(id *)arg4;
+ (id)aceDataForSpeechPacket:(id)arg1 error:(id *)arg2;
+ (id)aceDataForStreamEnd;
+ (id)aceDataForNop;
+ (id)aceDataForPong:(unsigned int)arg1;
+ (id)aceDataForPing:(unsigned int)arg1;
+ (id)aceDataForObject:(id)arg1 error:(id *)arg2;
+ (id)aceDataForStreamHeaderWithCompressionType:(unsigned char)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "AFHTTPRequestSerializer.h"

__attribute__((visibility("hidden")))
@interface AFJSONRequestSerializer : AFHTTPRequestSerializer
{
    unsigned long long _writingOptions;
}

+ (id)serializerWithWritingOptions:(unsigned long long)arg1;
+ (id)serializer;
@property(nonatomic) unsigned long long writingOptions; // @synthesize writingOptions=_writingOptions;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)requestBySerializingRequest:(id)arg1 withParameters:(id)arg2 error:(id *)arg3;

@end


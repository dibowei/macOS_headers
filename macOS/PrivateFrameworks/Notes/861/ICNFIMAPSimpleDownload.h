//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Notes/ICNFIMAPDownload.h>

@class ICNFMCError, NSMutableData, NSString;

@interface ICNFIMAPSimpleDownload : ICNFIMAPDownload
{
    NSMutableData *_mdata;
    BOOL _knownLength;
    unsigned int _bytesFetched;
    BOOL _isComplete;
    unsigned int _expectedLength;
    ICNFMCError *_error;
    NSString *_partSectionSpecifier;
    long long _textSectionSpecifier;
}

@property long long textSectionSpecifier; // @synthesize textSectionSpecifier=_textSectionSpecifier;
@property(retain) NSString *partSectionSpecifier; // @synthesize partSectionSpecifier=_partSectionSpecifier;
@property(nonatomic) BOOL isComplete; // @synthesize isComplete=_isComplete;
@property(readonly, nonatomic) unsigned int expectedLength; // @synthesize expectedLength=_expectedLength;
- (void)setError:(id)arg1;
- (id)error;
- (void).cxx_destruct;
- (id)data;
- (void)addCommandsToPipeline:(id)arg1 withCache:(id)arg2;
- (void)processResults;
- (void)handleFetchResult:(id)arg1;
- (unsigned int)bytesFetched;
- (id)description;
- (id)createCopy;
- (id)initWithUid:(unsigned int)arg1;
- (id)initWithUid:(unsigned int)arg1 partSectionSpecifier:(id)arg2 textSectionSpecifier:(long long)arg3 length:(unsigned int)arg4;
- (id)initWithUid:(unsigned int)arg1 partSectionSpecifier:(id)arg2 textSectionSpecifier:(long long)arg3 estimatedLength:(unsigned int)arg4;

@end


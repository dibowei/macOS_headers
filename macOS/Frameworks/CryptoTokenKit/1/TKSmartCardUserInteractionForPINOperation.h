//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CryptoTokenKit/TKSmartCardUserInteraction.h>

#import <CryptoTokenKit/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSLocale;

@interface TKSmartCardUserInteractionForPINOperation : TKSmartCardUserInteraction <NSSecureCoding>
{
    NSLocale *_locale;
    unsigned short _resultSW;
    unsigned long long _PINCompletion;
    NSArray *_PINMessageIndices;
    NSData *_resultData;
}

+ (BOOL)supportsSecureCoding;
@property(retain) NSData *resultData; // @synthesize resultData=_resultData;
@property unsigned short resultSW; // @synthesize resultSW=_resultSW;
@property(retain) NSArray *PINMessageIndices; // @synthesize PINMessageIndices=_PINMessageIndices;
@property unsigned long long PINCompletion; // @synthesize PINCompletion=_PINCompletion;
- (void).cxx_destruct;
@property(retain) NSLocale *locale;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "MQTTTransport.h"

#import "MQTTCFSocketDecoderDelegate-Protocol.h"
#import "MQTTCFSocketEncoderDelegate-Protocol.h"
#import "MQTTTransport-Protocol.h"

@class MQTTCFSocketDecoder, MQTTCFSocketEncoder, NSArray, NSRunLoop, NSString;
@protocol MQTTTransportDelegate;

@interface MQTTCFSocketTransport : MQTTTransport <MQTTTransport, MQTTCFSocketDecoderDelegate, MQTTCFSocketEncoderDelegate>
{
    BOOL _tls;
    BOOL _voip;
    long long state;
    id <MQTTTransportDelegate> delegate;
    NSRunLoop *runLoop;
    NSString *runLoopMode;
    NSArray *_certificates;
    MQTTCFSocketEncoder *_encoder;
    MQTTCFSocketDecoder *_decoder;
}

+ (id)clientCertsFromP12:(id)arg1 passphrase:(id)arg2;
@property(retain, nonatomic) MQTTCFSocketDecoder *decoder; // @synthesize decoder=_decoder;
@property(retain, nonatomic) MQTTCFSocketEncoder *encoder; // @synthesize encoder=_encoder;
@property(retain, nonatomic) NSArray *certificates; // @synthesize certificates=_certificates;
@property(nonatomic) BOOL voip; // @synthesize voip=_voip;
@property(nonatomic) BOOL tls; // @synthesize tls=_tls;
@property(retain, nonatomic) NSString *runLoopMode; // @synthesize runLoopMode;
@property(retain, nonatomic) NSRunLoop *runLoop; // @synthesize runLoop;
@property(retain, nonatomic) id <MQTTTransportDelegate> delegate; // @synthesize delegate;
@property(nonatomic) long long state; // @synthesize state;
- (void).cxx_destruct;
- (void)encoderDidOpen:(id)arg1;
- (void)decoderDidOpen:(id)arg1;
- (void)encoderdidClose:(id)arg1;
- (void)decoderdidClose:(id)arg1;
- (void)encoder:(id)arg1 didFailWithError:(id)arg2;
- (void)decoder:(id)arg1 didFailWithError:(id)arg2;
- (void)decoder:(id)arg1 didReceiveMessage:(id)arg2;
- (BOOL)send:(id)arg1;
- (void)close;
- (void)open;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *host; // @dynamic host;
@property(nonatomic) unsigned int port; // @dynamic port;
@property(readonly) Class superclass;

@end


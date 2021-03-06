//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AudioToolbox/AUAudioUnitBus.h>

#import <AudioToolbox/NSSecureCoding-Protocol.h>

@class AUAudioUnit_XH, AVAudioFormat, NSArray;
@protocol AUAudioUnitXPCProtocol;

__attribute__((visibility("hidden")))
@interface AUAudioUnitBus_XPC : AUAudioUnitBus <NSSecureCoding>
{
    AUAudioUnit_XH *_audioUnit;
    id <AUAudioUnitXPCProtocol> _remoteAU;
    unsigned int _scope;
    unsigned int _element;
    AVAudioFormat *_format;
    NSArray *_supportedChannelLayoutTags;
    _Bool _removingObserverWithContext;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (id)format;
- (void)propertyChanged:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
- (BOOL)setFormat:(id)arg1 error:(id *)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CAContext, NSString;

__attribute__((visibility("hidden")))
@interface DFRElement : NSObject
{
    NSString *_name;
    NSString *_minimizedIdentifier;
    NSString *_systemIdentifier;
    CAContext *_context;
    id _accessibility;
    long long _placement;
    CDUnknownBlockType _animationHandler;
    struct CGSize _preferredSize;
    struct CGRect _bounds;
    _Bool _registered;
    _Bool _active;
    long long _colorTemperature;
    double _bezelBrightness;
    double _glyphBrightness;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)_initWithAttrs:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GCControllerElement : NSObject
{
}

- (BOOL)setHIDValue:(struct __IOHIDValue *)arg1 queue:(id)arg2;
- (BOOL)setHIDValue:(struct __IOHIDValue *)arg1;
- (BOOL)_setValue:(float)arg1 queue:(id)arg2;
- (BOOL)_setValue:(float)arg1;
@property(readonly, nonatomic, getter=isAnalog) BOOL analog;
@property(readonly, nonatomic) __weak GCControllerElement *collection;
- (float)value;
- (id)controller;

@end


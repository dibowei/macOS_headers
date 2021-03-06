//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableData;

__attribute__((visibility("hidden")))
@interface LeapVector : NSObject
{
    float _x;
    float _y;
    float _z;
}

+ (id)backward;
+ (id)forward;
+ (id)up;
+ (id)down;
+ (id)right;
+ (id)left;
+ (id)zAxis;
+ (id)yAxis;
+ (id)xAxis;
+ (id)zero;
@property(readonly, nonatomic) float z; // @synthesize z=_z;
@property(readonly, nonatomic) float y; // @synthesize y=_y;
@property(readonly, nonatomic) float x; // @synthesize x=_x;
@property(readonly, nonatomic, getter=toFloatPointer) NSMutableData *toFloatPointer;
@property(readonly, nonatomic, getter=toNSArray) NSArray *toNSArray;
@property(readonly, nonatomic, getter=normalized) LeapVector *normalized;
- (id)cross:(id)arg1;
- (float)dot:(id)arg1;
- (BOOL)equals:(id)arg1;
- (id)divide:(float)arg1;
- (id)times:(float)arg1;
- (id)negate;
- (id)minus:(id)arg1;
- (id)plus:(id)arg1;
@property(readonly, nonatomic, getter=yaw) float yaw;
@property(readonly, nonatomic, getter=roll) float roll;
@property(readonly, nonatomic, getter=pitch) float pitch;
- (float)angleTo:(id)arg1;
- (float)distanceTo:(id)arg1;
@property(readonly, nonatomic, getter=magnitudeSquared) float magnitudeSquared;
@property(readonly, nonatomic, getter=magnitude) float magnitude;
- (id)description;
- (id)initWithLeapVector:(void *)arg1;
- (id)initWithVector:(id)arg1;
- (id)initWithX:(float)arg1 y:(float)arg2 z:(float)arg3;

@end


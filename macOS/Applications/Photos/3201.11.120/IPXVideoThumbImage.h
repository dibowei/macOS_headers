//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IPXVideoThumbImage : NSObject
{
    struct CGImage *_image;
    CDStruct_1b6d18a9 _sourceTime;
}

@property(readonly, nonatomic) CDStruct_1b6d18a9 sourceTime; // @synthesize sourceTime=_sourceTime;
@property(readonly, nonatomic) struct CGImage *image; // @synthesize image=_image;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToThumbImage:(id)arg1;
- (id)initWithImage:(struct CGImage *)arg1 sourceTime:(CDStruct_1b6d18a9)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NUScalePolicy-Protocol.h>

@class NSString;

@interface NUZoomFactorScalePolicy : NSObject <NUScalePolicy>
{
    double _zoomFactor;
}

@property(readonly, copy) NSString *debugDescription;
- (CDStruct_912cb5d2)scaleForImageSize:(CDStruct_912cb5d2)arg1;
- (id)initWithZoomFactor:(double)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


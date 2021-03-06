//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class CALayer, StackElement;

@protocol StackElementDelegate
- (void)stackElement:(StackElement *)arg1 targetStateDidChangeFrom:(int)arg2 to:(int)arg3;
- (void)stackElement:(StackElement *)arg1 currentStateDidChangeFrom:(int)arg2 to:(int)arg3;
- (void)stackElement:(StackElement *)arg1 willRemoveLayer:(CALayer *)arg2;
- (CALayer *)layerForStackElement:(StackElement *)arg1;
- (BOOL)stackIsTerminating;
- (struct CGSize)stackCenterOffset;
- (CALayer *)stackContainerLayer;
@end


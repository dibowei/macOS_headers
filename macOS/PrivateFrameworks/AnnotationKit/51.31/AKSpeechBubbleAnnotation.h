//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AnnotationKit/AKRectangularShapeAnnotation.h>

@interface AKSpeechBubbleAnnotation : AKRectangularShapeAnnotation
{
    double _pointyBitBaseWidthAngle;
    struct CGPoint _pointyBitPoint;
}

+ (BOOL)supportsSecureCoding;
+ (id)placeholderText;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingHitTestBounds;
@property double pointyBitBaseWidthAngle; // @synthesize pointyBitBaseWidthAngle=_pointyBitBaseWidthAngle;
@property struct CGPoint pointyBitPoint; // @synthesize pointyBitPoint=_pointyBitPoint;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)translateBy:(struct CGPoint)arg1;
- (void)adjustModelToCompensateForOriginalExif;
- (struct CGRect)hitTestBounds;
- (id)keysForValuesToObserveForAdornments;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;
- (id)displayName;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKAnnotationFindController.h"

@class TSDInteractiveCanvasController;

@interface TSAAnnotationFindController : TSKAnnotationFindController
{
    BOOL _returnFirstVisibleResultIfPossible;
    TSDInteractiveCanvasController *_interactiveCanvasController;
}

@property(nonatomic) BOOL returnFirstVisibleResultIfPossible; // @synthesize returnFirstVisibleResultIfPossible=_returnFirstVisibleResultIfPossible;
@property(nonatomic) TSDInteractiveCanvasController *interactiveCanvasController; // @synthesize interactiveCanvasController=_interactiveCanvasController;
- (id)searchReferenceAfterReference:(id)arg1 inDirection:(unsigned long long)arg2;
- (void)locateSearchReference:(id)arg1;
- (void)findNextResultInDirection:(unsigned long long)arg1;
- (void)setCurrentAnnotationResult:(id)arg1;

@end


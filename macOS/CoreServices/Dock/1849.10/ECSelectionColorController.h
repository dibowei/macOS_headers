//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ECSelectionColorController : NSObject
{
    struct CGColor *_selectionColor;
    struct CGColor *_opaqueSelectionColor;
}

+ (id)sharedController;
@property(readonly, nonatomic) struct CGColor *opaqueSelectionColor; // @synthesize opaqueSelectionColor=_opaqueSelectionColor;
@property(readonly, nonatomic) struct CGColor *selectionColor; // @synthesize selectionColor=_selectionColor;
- (BOOL)_setColorFromPreferences;
- (void)_selectionColorChanged:(id)arg1;
- (void)dealloc;

@end


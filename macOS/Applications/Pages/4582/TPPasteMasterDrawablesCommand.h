//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TPInsertMasterDrawablesCommand.h"

@class NSArray, TPDrawablePositioner;

@interface TPPasteMasterDrawablesCommand : TPInsertMasterDrawablesCommand
{
    NSArray *_providedDrawables;
    TPDrawablePositioner *_positioner;
}

- (id)redoDolcContext;
- (void)commit;
- (id)actionString;
- (void)dealloc;
- (id)initWithContext:(id)arg1 masterDrawableProvider:(id)arg2 drawables:(id)arg3 positioner:(id)arg4;

@end


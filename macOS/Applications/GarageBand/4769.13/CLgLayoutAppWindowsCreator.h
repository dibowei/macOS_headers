//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CLgUnilibAppManager, NSMutableArray;

@interface CLgLayoutAppWindowsCreator : NSObject
{
    CLgUnilibAppManager *appManager;
    NSMutableArray *appWindows;
}

- (void)showAllWindows;
- (BOOL)createOneAppGenwWindow:(id)arg1 genwStateDict:(id)arg2;
- (void)dealloc;
- (id)initWithAppManager:(id)arg1;

@end


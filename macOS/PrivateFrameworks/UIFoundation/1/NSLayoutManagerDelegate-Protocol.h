//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIFoundation/NSObject-Protocol.h>

@class NSDictionary, NSLayoutManager, NSTextContainer;

@protocol NSLayoutManagerDelegate <NSObject>

@optional
- (NSDictionary *)layoutManager:(NSLayoutManager *)arg1 shouldUseTemporaryAttributes:(NSDictionary *)arg2 forDrawingToScreen:(BOOL)arg3 atCharacterIndex:(unsigned long long)arg4 effectiveRange:(struct _NSRange *)arg5;
- (void)layoutManager:(NSLayoutManager *)arg1 didCompleteLayoutForTextContainer:(NSTextContainer *)arg2 atEnd:(BOOL)arg3;
- (void)layoutManagerDidInvalidateLayout:(NSLayoutManager *)arg1;
@end


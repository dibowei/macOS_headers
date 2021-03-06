//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ODDPointPropertySet : NSObject
{
    NSString *mLayoutTypeId;
    NSString *mPresentationName;
    NSString *mPresentationStyleLabel;
    int mPresentationStyleIndex;
    int mPresentationStyleCount;
    NSObject *mPresentationAssociatedId;
    BOOL mCustomVerticalFlip;
}

- (id)description;
- (void)setCustomVerticalFlip:(BOOL)arg1;
- (BOOL)customVerticalFlip;
- (void)setPresentationAssociatedId:(id)arg1;
- (id)presentationAssociatedId;
- (void)setPresentationStyleCount:(int)arg1;
- (int)presentationStyleCount;
- (void)setPresentationStyleIndex:(int)arg1;
- (int)presentationStyleIndex;
- (void)setPresentationStyleLabel:(id)arg1;
- (id)presentationStyleLabel;
- (void)setPresentationName:(id)arg1;
- (id)presentationName;
- (void)setLayoutTypeId:(id)arg1;
- (id)layoutTypeId;
- (void)dealloc;

@end


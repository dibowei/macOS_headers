//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface SSConnectionOptions : NSObject
{
    long long mMinimumEncryptionLevel;
    BOOL mShouldGetUserInfo;
    long long mControlType;
    BOOL mShouldFallbackToObserve;
    long long mAuthMethod;
    NSMutableDictionary *mHints;
    NSArray *mVideoEncodings;
    BOOL mSkipAddressPresentation;
    void *mReservedForInstanceVariables;
    BOOL shouldScaleScreen;
    BOOL shouldCurtainScreen;
    BOOL shouldSharePasteboard;
    BOOL openInFullScreen;
    BOOL showConnectionProgress;
    BOOL skipUserPassDialogIfPossible;
    BOOL _connectingToIOSdevice;
    long long sessionSelectionAction;
    long long panningMode;
    long long screenQualityMode;
    unsigned long long selectedScreen;
    struct CGSize maxSize;
    struct CGRect restoreWindowFrame;
    struct CGRect restoreContentFrame;
}

+ (id)defaultOptions;
@property BOOL connectingToIOSdevice; // @synthesize connectingToIOSdevice=_connectingToIOSdevice;
@property BOOL skipUserPassDialogIfPossible; // @synthesize skipUserPassDialogIfPossible;
@property BOOL skipAddressPresentation; // @synthesize skipAddressPresentation=mSkipAddressPresentation;
@property(copy) NSArray *videoEncodings; // @synthesize videoEncodings=mVideoEncodings;
@property(copy) NSMutableDictionary *hints; // @synthesize hints=mHints;
@property BOOL showConnectionProgress; // @synthesize showConnectionProgress;
@property BOOL openInFullScreen; // @synthesize openInFullScreen;
@property unsigned long long selectedScreen; // @synthesize selectedScreen;
@property struct CGRect restoreContentFrame; // @synthesize restoreContentFrame;
@property struct CGRect restoreWindowFrame; // @synthesize restoreWindowFrame;
@property struct CGSize maxSize; // @synthesize maxSize;
@property long long screenQualityMode; // @synthesize screenQualityMode;
@property long long panningMode; // @synthesize panningMode;
@property long long sessionSelectionAction; // @synthesize sessionSelectionAction;
@property long long controlType; // @synthesize controlType=mControlType;
@property BOOL shouldGetUserInfo; // @synthesize shouldGetUserInfo=mShouldGetUserInfo;
@property BOOL shouldSharePasteboard; // @synthesize shouldSharePasteboard;
@property BOOL shouldCurtainScreen; // @synthesize shouldCurtainScreen;
@property BOOL shouldScaleScreen; // @synthesize shouldScaleScreen;
@property long long authMethod; // @synthesize authMethod=mAuthMethod;
@property BOOL shouldFallbackToObserve; // @synthesize shouldFallbackToObserve=mShouldFallbackToObserve;
@property long long minimumEncryptionLevel; // @synthesize minimumEncryptionLevel=mMinimumEncryptionLevel;
- (id)description;
- (void)dealloc;
- (id)init;

@end


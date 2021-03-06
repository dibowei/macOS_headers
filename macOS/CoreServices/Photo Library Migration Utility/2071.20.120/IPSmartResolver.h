//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

@class ImageDB, NSString;

@interface IPSmartResolver : NSObject
{
    ImageDB *mDB;
    NSString *mPath;
    struct IPFileImage *mFileImage;
    _Bool mWithUI;
    NSString *mResolvedPath;
}

+ (void)addResolution:(id)arg1 forPath:(id)arg2;
+ (id)resolvePath:(id)arg1 inDB:(id)arg2 forFileImage:(struct IPFileImage *)arg3 withUI:(_Bool)arg4;
- (id)_checkResolveHistory:(id)arg1;
- (void)_resolvePathOnMainThread;
- (void)_setResolvedPath:(id)arg1;
- (id)_resolvedPath;
- (void)dealloc;
- (id)_initWithDB:(id)arg1 path:(id)arg2 forFileImage:(struct IPFileImage *)arg3 withUI:(_Bool)arg4;

@end


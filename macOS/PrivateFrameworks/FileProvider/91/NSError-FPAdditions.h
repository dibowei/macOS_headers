//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (FPAdditions)
+ (id)fp_invalidArgumentError:(id)arg1;
+ (id)fp_errorWithPOSIXCode:(int)arg1 description:(id)arg2;
@property(readonly, nonatomic) BOOL fp_isRemoteCrashError;
- (id)fp_strippedError;
@end


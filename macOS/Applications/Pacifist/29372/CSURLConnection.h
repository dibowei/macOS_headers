//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface CSURLConnection : NSObject
{
    void *ivar_curl;
    NSURL *_url;
    NSURL *_URL;
}

+ (BOOL)downloadFileAtURL:(id)arg1 toURL:(id)arg2 dataBlock:(CDUnknownBlockType)arg3 progressBlock:(CDUnknownBlockType)arg4 cancelBlock:(CDUnknownBlockType)arg5 actualURL:(id *)arg6 downloadedData:(id *)arg7 error:(id *)arg8;
+ (id)downloadFileAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
+ (id)sendSynchronousRequestWithURL:(id)arg1 HTTPMethod:(id)arg2 range:(struct _NSRange)arg3 response:(id *)arg4 error:(id *)arg5;
+ (id)sendSynchronousHeaderRequestWithURL:(id)arg1 response:(id *)arg2 error:(id *)arg3;
+ (void)load;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (BOOL)downloadFileToURL:(id)arg1 dataBlock:(CDUnknownBlockType)arg2 progressBlock:(CDUnknownBlockType)arg3 cancelBlock:(CDUnknownBlockType)arg4 actualURL:(id *)arg5 downloadedData:(id *)arg6 error:(id *)arg7;
- (id)downloadFileToURL:(id)arg1 error:(id *)arg2;
- (id)sendSynchronousRequestWithHTTPMethod:(id)arg1 range:(struct _NSRange)arg2 response:(id *)arg3 error:(id *)arg4;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)init;

@end


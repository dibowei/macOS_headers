//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/NSURLConnectionDelegate-Protocol.h>

@class NSMutableData, NSString, NSURLConnection, NSURLResponse;

__attribute__((visibility("hidden")))
@interface _GEONSURLConnectionWaiter : NSObject <NSURLConnectionDelegate>
{
    NSURLConnection *_conn;
    CDUnknownBlockType _callback;
    NSMutableData *_data;
    NSURLResponse *_response;
}

@property(retain, nonatomic) NSURLConnection *conn; // @synthesize conn=_conn;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


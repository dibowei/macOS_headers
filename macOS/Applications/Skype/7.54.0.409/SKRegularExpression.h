//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SKRegularExpression : NSObject
{
    struct {
        int re_magic;
        unsigned long long re_nsub;
        char *re_endp;
        struct re_guts *re_g;
    } _preg;
}

+ (id)regularExpressionWithPattern:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)matchString:(id)arg1 count:(unsigned long long)arg2 ranges:(id *)arg3;
- (void)dealloc;
- (id)initWithPattern:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;

@end


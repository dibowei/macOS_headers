//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSArray.h>

__attribute__((visibility("hidden")))
@interface CALayerArray : NSArray
{
    struct _CALayerArrayIvars _ivars;
}

- (id).cxx_construct;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (void)getObjects:(id *)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)finalize;
- (void)dealloc;
- (id)initWithLayers:(id *)arg1 count:(unsigned long long)arg2 retain:(BOOL)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSMutableSet.h>

__attribute__((visibility("hidden")))
@interface __NSPlaceholderSet : NSMutableSet
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)mutablePlaceholder;
+ (id)immutablePlaceholder;
+ (void)initialize;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (id)objectEnumerator;
- (id)member:(id)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;

@end


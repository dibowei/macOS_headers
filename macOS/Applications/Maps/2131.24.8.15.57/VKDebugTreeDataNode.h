//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "VKDebugTreeNode.h"

__attribute__((visibility("hidden")))
@interface VKDebugTreeDataNode : VKDebugTreeNode
{
    shared_ptr_62bc874f _data;
}

@property shared_ptr_62bc874f data; // @synthesize data=_data;
- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)propertyCount;
- (void)expandNodes:(id)arg1 withArray:(id)arg2;
- (void)searchNodes:(id)arg1 withParameter:(id)arg2;
- (id)tagsColumn;
- (id)valueColumn;
- (id)propertyColumn;
- (BOOL)isExpandable;
- (void)buildChildren;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol ABUserInterfaceAction;

@interface ABGroupListActions : NSObject
{
    id <ABUserInterfaceAction> _createGroupAction;
    id <ABUserInterfaceAction> _createSmartGroupAction;
}

@property(readonly) id <ABUserInterfaceAction> createSmartGroupAction; // @synthesize createSmartGroupAction=_createSmartGroupAction;
@property(readonly) id <ABUserInterfaceAction> createGroupAction; // @synthesize createGroupAction=_createGroupAction;
- (void)dealloc;
- (id)initWithGroupListController:(id)arg1 helperFactory:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "RemindersList.h"

@class NSString;

@interface SearchResultsList : RemindersList
{
    NSString *_query;
}

@property(retain) NSString *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (id)swipeType;
- (BOOL)isVisibleInSidebar;
- (BOOL)isReorderable;
- (id)identifier;
- (id)fetchReminders;
- (id)title;
- (void)updateWithQuery:(id)arg1;
- (id)init;

@end


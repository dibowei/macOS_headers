//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CUIKEventSuggestion, NSArray, NSString;

@interface CUIKEventSuggestionGenerator : NSObject
{
    NSArray *_lastSuggestions;
    NSString *_lastQueryString;
    CUIKEventSuggestion *_lastDefaultSuggestion;
}

+ (BOOL)scanStringForFlights:(id)arg1 flightNumber:(unsigned long long *)arg2 airlineCode:(id *)arg3;
+ (id)eventWithSuggestedTimeFromString:(id)arg1 referenceDate:(id)arg2 inEventStore:(id)arg3 options:(unsigned long long)arg4;
@property(retain) CUIKEventSuggestion *lastDefaultSuggestion; // @synthesize lastDefaultSuggestion=_lastDefaultSuggestion;
@property(retain) NSString *lastQueryString; // @synthesize lastQueryString=_lastQueryString;
@property(retain) NSArray *lastSuggestions; // @synthesize lastSuggestions=_lastSuggestions;
- (void).cxx_destruct;
- (id)fetchEventsWithTitleMatchingQuery:(id)arg1 inEventStore:(id)arg2;
- (void)generateEventSuggestionsAsynchronouslyFromString:(id)arg1 options:(unsigned long long)arg2 defaultCalendar:(id)arg3 referenceDate:(id)arg4 initialEvent:(id)arg5 handler:(CDUnknownBlockType)arg6;
- (void)eventSuggestionsFromString:(id)arg1 defaultCalendar:(id)arg2 referenceDate:(id)arg3 options:(unsigned long long)arg4 handler:(CDUnknownBlockType)arg5;
- (void)eventSuggestionsFromString:(id)arg1 initialEvent:(id)arg2 options:(unsigned long long)arg3 handler:(CDUnknownBlockType)arg4;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OfficeImport/CMProperty.h>

__attribute__((visibility("hidden")))
@interface CMLengthProperty : CMProperty
{
    double value;
    int unitType;
}

+ (double)convertToPoints:(double)arg1 unit:(int)arg2;
+ (id)cssStringValue:(double)arg1 unit:(int)arg2;
- (void)addNumber:(double)arg1 unit:(int)arg2;
- (id)description;
- (id)cssString;
- (id)cssStringForName:(id)arg1;
- (int)compareValue:(id)arg1;
- (int)unitType;
- (int)intValue;
- (double)value;
- (id)initWithNumber:(double)arg1 unit:(int)arg2;
- (id)initWithNumber:(double)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSMutableArray, NSString, TSUColor;

@interface TSTDataSourceRadarEntry : NSObject <NSCoding>
{
    NSString *_modelTypeName;
    NSMutableArray *_attributes;
    TSUColor *_color;
}

@property(retain, nonatomic) TSUColor *color; // @synthesize color=_color;
@property(retain, nonatomic) NSMutableArray *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) NSString *modelTypeName; // @synthesize modelTypeName=_modelTypeName;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


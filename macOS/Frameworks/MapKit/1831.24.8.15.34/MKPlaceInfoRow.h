//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MKPlaceSectionRowView;

@interface MKPlaceInfoRow : NSObject
{
    BOOL _enable;
    BOOL _showIcon;
    unsigned long long _type;
    MKPlaceSectionRowView *_rowView;
}

+ (id)infoRow:(id)arg1 ofType:(unsigned long long)arg2;
@property(nonatomic) BOOL showIcon; // @synthesize showIcon=_showIcon;
@property(nonatomic) BOOL enable; // @synthesize enable=_enable;
@property(readonly, nonatomic) MKPlaceSectionRowView *rowView; // @synthesize rowView=_rowView;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end


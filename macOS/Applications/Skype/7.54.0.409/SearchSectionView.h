//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ChatSectionView.h"

@class NSTextField;

@interface SearchSectionView : ChatSectionView
{
    NSTextField *_titleField;
}

@property(retain, nonatomic) NSTextField *titleField; // @synthesize titleField=_titleField;
- (void).cxx_destruct;
- (void)updateLayout;
- (void)loadLayoutForSectionStyle:(unsigned long long)arg1;
- (void)updateSectionTitle;
- (void)sizeToFit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)commonSearchSectionViewInit;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXSameSizedItemsGridLayoutSection.h"

@class NSArray, NSDictionary;

@interface IPXImportLayoutAlreadyImportedSection2 : IPXSameSizedItemsGridLayoutSection
{
    BOOL _showsAllAssets;
    CDStruct_e29a1851 _compactContentCalculations;
    NSDictionary *_cachedCompactLayoutItemsDictionary;
    NSArray *_cachedCompactLayoutSupplementaryViewsArray;
    BOOL _showsCompactLayoutOfItems;
}

+ (double)headerHeight;
+ (void)getDefaultConfigurationParameters:(struct *)arg1;
@property(nonatomic) BOOL showsCompactLayoutOfItems; // @synthesize showsCompactLayoutOfItems=_showsCompactLayoutOfItems;
@property(nonatomic) BOOL showsAllAssets; // @synthesize showsAllAssets=_showsAllAssets;
- (void).cxx_destruct;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)indexPathsForItemsInRect:(struct CGRect)arg1;
- (struct CGRect)bounds;
- (void)prepareInBounds:(struct CGRect)arg1 withPlacement:(unsigned long long)arg2;
- (void)_cacheLayoutAttributesForItemAtIndex:(long long)arg1 placedInColumn:(long long)arg2 row:(long long)arg3 inDictionary:(id)arg4;

@end


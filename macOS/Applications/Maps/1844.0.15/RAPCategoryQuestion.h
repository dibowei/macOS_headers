//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "RAPQuestion.h"

@class GEOComposedRoute, MKMapItem, NSArray, NSMutableDictionary, NSString, NSURL, RAPCategory, RAPPlaceIssueQuestion;

__attribute__((visibility("hidden")))
@interface RAPCategoryQuestion : RAPQuestion
{
    NSMutableDictionary *_categoriesByKind;
    RAPPlaceIssueQuestion *_placeIssueQuestion;
    NSArray *_problemCategories;
    RAPCategory *_selectedCategory;
    RAPCategory *_notListedCategory;
}

@property(retain, nonatomic) RAPCategory *selectedCategory; // @synthesize selectedCategory=_selectedCategory;
- (void).cxx_destruct;
- (id)_newCategoryWithFollowUpClass:(Class)arg1;
@property(readonly, nonatomic) NSString *localizedCategoriesHeaderText;
- (id)_alternateMapViewContext;
- (BOOL)_isRecursivelyComplete;
- (BOOL)isComplete;
- (void)_fillSubmittableProblem:(id)arg1;
- (BOOL)_getDirectionsMapItemsForStart:(out id *)arg1 end:(out id *)arg2;
- (id)placeIssueQuestion;
@property(readonly, nonatomic) RAPCategory *notListedCategory; // @synthesize notListedCategory=_notListedCategory;
@property(readonly, nonatomic) NSArray *problemCategories; // @synthesize problemCategories=_problemCategories;
@property(readonly, nonatomic) NSString *businessPortalDescriptionText;
@property(readonly, nonatomic) NSString *businessPortalTitleText;
@property(readonly, nonatomic) NSString *businessPortalButtonText;
@property(readonly, nonatomic) NSURL *businessPortalClaimURL;
@property(readonly, nonatomic) BOOL showsBusinessPortalClaim;
- (BOOL)_canSegueToProblemWithDirections;
- (id)_categoryWithFollowUpClass:(Class)arg1;
@property(readonly, nonatomic) GEOComposedRoute *snippetComposedRoute;
@property(readonly, nonatomic) NSString *snippetDirectionsEndWaypointTitle;
@property(readonly, nonatomic) NSString *snippetDirectionsStartWaypointTitle;
@property(readonly, nonatomic) MKMapItem *snippetMapItem;
@property(readonly, nonatomic) long long snippetKind;
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2;

@end


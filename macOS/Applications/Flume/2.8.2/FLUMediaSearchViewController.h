//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FLUMediaViewController.h"

#import "CLLocationManagerDelegate-Protocol.h"
#import "FLUMediaProfileUserTableCellViewDelegate-Protocol.h"
#import "FLUMediaSearchLocationTableCellViewDelegate-Protocol.h"
#import "FLUMediaSearchTagTableCellViewDelegate-Protocol.h"
#import "FLUMediaTableSearchBookmarksSectionHeaderCellViewDelegate-Protocol.h"
#import "FLUMediaTableSearchHeaderViewDelegate-Protocol.h"
#import "FLUTableViewDataSource-Protocol.h"
#import "FLUTableViewDelegate-Protocol.h"
#import "NSMenuDelegate-Protocol.h"

@class CLLocationManager, FLUMediaTableSearchBookmarksSectionHeaderCellView, FLUMediaTableSearchHeaderView, FLUTableView, NSArrayController, NSIndexPath, NSMutableDictionary, NSString;

@interface FLUMediaSearchViewController : FLUMediaViewController <FLUTableViewDataSource, FLUTableViewDelegate, FLUMediaTableSearchHeaderViewDelegate, FLUMediaProfileUserTableCellViewDelegate, FLUMediaSearchTagTableCellViewDelegate, FLUMediaSearchLocationTableCellViewDelegate, CLLocationManagerDelegate, FLUMediaTableSearchBookmarksSectionHeaderCellViewDelegate, NSMenuDelegate>
{
    BOOL _hideMenuOnNextScroll;
    BOOL _loadingMoreContent;
    BOOL _disableLoadMoreView;
    unsigned long long _viewMode;
    FLUMediaTableSearchHeaderView *_tableHeaderView;
    NSString *_searchTerm;
    FLUTableView *_tableView;
    FLUMediaTableSearchBookmarksSectionHeaderCellView *_sectionHeaderView;
    NSArrayController *_savedArrayController;
    NSArrayController *_topArrayController;
    NSArrayController *_peopleArrayController;
    NSArrayController *_tagsArrayController;
    NSArrayController *_locationsArrayController;
    unsigned long long _keyboardScrollDirection;
    unsigned long long _mouseScrollDirection;
    double _lastScrollViewContentOffset;
    NSIndexPath *_selectedIndexPath;
    unsigned long long _lastRowIndex;
    NSString *_topRankToken;
    NSString *_peopleRankToken;
    NSString *_tagsRankToken;
    NSString *_placesRankToken;
    CLLocationManager *_locationManager;
    NSMutableDictionary *_cachedRowHeightsDict;
}

@property(retain, nonatomic) NSMutableDictionary *cachedRowHeightsDict; // @synthesize cachedRowHeightsDict=_cachedRowHeightsDict;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) NSString *placesRankToken; // @synthesize placesRankToken=_placesRankToken;
@property(retain, nonatomic) NSString *tagsRankToken; // @synthesize tagsRankToken=_tagsRankToken;
@property(retain, nonatomic) NSString *peopleRankToken; // @synthesize peopleRankToken=_peopleRankToken;
@property(retain, nonatomic) NSString *topRankToken; // @synthesize topRankToken=_topRankToken;
@property(nonatomic) BOOL disableLoadMoreView; // @synthesize disableLoadMoreView=_disableLoadMoreView;
@property(nonatomic) BOOL loadingMoreContent; // @synthesize loadingMoreContent=_loadingMoreContent;
@property(nonatomic) unsigned long long lastRowIndex; // @synthesize lastRowIndex=_lastRowIndex;
@property(nonatomic) BOOL hideMenuOnNextScroll; // @synthesize hideMenuOnNextScroll=_hideMenuOnNextScroll;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(nonatomic) double lastScrollViewContentOffset; // @synthesize lastScrollViewContentOffset=_lastScrollViewContentOffset;
@property(nonatomic) unsigned long long mouseScrollDirection; // @synthesize mouseScrollDirection=_mouseScrollDirection;
@property(nonatomic) unsigned long long keyboardScrollDirection; // @synthesize keyboardScrollDirection=_keyboardScrollDirection;
@property(retain, nonatomic) NSArrayController *locationsArrayController; // @synthesize locationsArrayController=_locationsArrayController;
@property(retain, nonatomic) NSArrayController *tagsArrayController; // @synthesize tagsArrayController=_tagsArrayController;
@property(retain, nonatomic) NSArrayController *peopleArrayController; // @synthesize peopleArrayController=_peopleArrayController;
@property(retain, nonatomic) NSArrayController *topArrayController; // @synthesize topArrayController=_topArrayController;
@property(retain, nonatomic) NSArrayController *savedArrayController; // @synthesize savedArrayController=_savedArrayController;
@property(retain, nonatomic) FLUMediaTableSearchBookmarksSectionHeaderCellView *sectionHeaderView; // @synthesize sectionHeaderView=_sectionHeaderView;
@property(nonatomic) __weak FLUTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;
@property(retain, nonatomic) FLUMediaTableSearchHeaderView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long viewMode; // @synthesize viewMode=_viewMode;
- (void)scrollToTopAnimated:(BOOL)arg1;
- (void)focusSearchField;
- (BOOL)clearSearchField;
- (void)refreshView;
- (void)updateSearchResults;
- (void)fetchSearchResultsWithSearchTerm:(id)arg1 loadMore:(BOOL)arg2;
- (id)currentArrayController;
- (void)updateFrames;
- (void)resetMenu;
- (BOOL)loadMoreViewIsVisible;
- (void)setDefaultTableViewContentInset:(BOOL)arg1 menuVisible:(BOOL)arg2;
- (void)setMenuVisibleTableViewContentInset:(BOOL)arg1;
- (void)setDefaultTableViewContentInset:(BOOL)arg1;
- (void)didPressSearchBookmarksSuggestedSearchesMenuItem:(id)arg1;
- (void)didPressSearchBookmarksRecentSearchesMenuItem:(id)arg1;
- (void)didPressSearchBookmarksSavedMenuItem:(id)arg1;
- (void)flu_didPressSearchBookmarksSectionHeaderCellView:(id)arg1 optionsButton:(id)arg2;
- (void)flu_mediaTableSearchHeaderView:(id)arg1 didPressLocationsButton:(id)arg2;
- (void)flu_mediaTableSearchHeaderView:(id)arg1 didPressTagsButton:(id)arg2;
- (void)flu_mediaTableSearchHeaderView:(id)arg1 didPressPeopleButton:(id)arg2;
- (void)flu_mediaTableSearchHeaderView:(id)arg1 didPressTopButton:(id)arg2;
- (void)flu_mediaTableSearchHeaderView:(id)arg1 searchWithTerm:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)scrollViewDidEndLiveScroll:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillStartLiveScroll:(id)arg1;
- (void)flu_didPressMediaSearchLocationTableCellViewFavouriteButtonForLocation:(id)arg1;
- (void)flu_didPressMediaSearchTagTableCellViewFavouriteButtonForTag:(id)arg1;
- (void)flu_didPressMediaProfileUserCellViewFavouriteButtonForUser:(id)arg1;
- (void)flu_didPressMediaProfileUserCellViewAvatarButtonForUser:(id)arg1 longPress:(BOOL)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)cachedRowHeightForIndexPath:(id)arg1;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (void)updateRowHeightsCache;
- (void)checkForMoreContentWithRequest:(id)arg1;
- (void)checkLoadMoreScrollingThreshold:(id)arg1;
- (void)didClickRowAtIndexPath:(id)arg1 scrollPosition:(unsigned long long)arg2 animated:(BOOL)arg3;
- (void)didClickRowAtIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didClickRowAtIndexPath:(id)arg2 withEvent:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableViewDidReloadData:(id)arg1;
- (void)tableViewWillReloadData:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectRowAtIndexPath:(id)arg2 forEvent:(id)arg3;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (id)tableView:(id)arg1 headerViewForSection:(long long)arg2;
- (void)reloadCoreDataObjectsAndReloadTableView:(BOOL)arg1;
- (void)reloadCoreDataObjects;
- (void)menuDidClose:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)scrollToNextItem;
- (void)scrollToFirstItem;
- (void)scrollToPreviousItem;
- (void)scrollToLastItem;
- (void)scrollToNextPage;
- (void)scrollToPreviousPage;
- (void)bookmarksDidUpdate:(id)arg1;
- (void)bookmarksDidImport:(id)arg1;
- (void)windowDidChangeFullScreenStatus:(id)arg1;
- (void)didChangeAlwaysShowMenuOption:(id)arg1;
- (void)menuWillHide:(id)arg1;
- (void)menuDidShow:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (void)windowDidResize:(id)arg1;
- (void)userDidSwitchAccounts:(id)arg1;
- (void)didChangeDesignModeOption:(id)arg1;
- (void)setupAccessibility;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)localizeUserInterface;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


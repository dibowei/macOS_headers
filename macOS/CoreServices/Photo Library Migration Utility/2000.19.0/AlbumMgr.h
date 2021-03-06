//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

@class Album, DBDocument, FilterAlbum, IPMessageReceiver, IPQueryResultsAlbum, ImageDB, LatestEventAlbum, NSMutableSet, RotationAlbum;

@interface AlbumMgr : NSObject
{
    DBDocument *mDocument;
    ImageDB *mDB;
    struct IPAlbumList *mAlbumList;
    NSMutableSet *mNonSourceListAlbums;
    IPMessageReceiver *mDBMessageReceiver;
    BOOL mReadOnly;
    BOOL mIncludeCountWithName;
    BOOL mShowLastNMonthsAlbum;
    RotationAlbum *mRotationAlbum;
    struct IPAlbumList *mCameraAlbums;
    Album *mLastImportAlbum;
    Album *mPhotostreamAlbum;
    Album *mPrintingAlbum;
    LatestEventAlbum *mEmptyEventAlbum;
    FilterAlbum *mLastNMonthsAlbum;
    IPQueryResultsAlbum *mEventsAlbum;
    FilterAlbum *mPeopleAlbum;
    FilterAlbum *mPlacesAlbum;
    Album *mShelfAlbum;
    BOOL mArchiveAlbumInitialized;
    BOOL mLastImportInitialized;
    BOOL mPhotostreamInitialized;
    BOOL mRotationInitialized;
    BOOL mTrashInitialized;
    BOOL mRebuildArchiveAlbum;
    BOOL mNeedsEmptyEventUpdate;
}

+ (void)writeLibraryLocationToGlobalPrefs:(id)arg1;
+ (BOOL)isBuiltinAlbumOrFolder:(id)arg1;
+ (Class)_albumClassForSqAlbum:(id)arg1;
+ (void)initialize;
- (void)touchXmlFile;
- (void)queueXMLFileAsynch:(BOOL)arg1;
- (void)updateHiddenPublishedAlbumsWithList:(id)arg1 withUuidKeys:(id)arg2;
- (void)addHiddenPublishedAlbumToList:(struct IPAlbumList *)arg1;
- (void)hidePublishedAlbumInUids:(id)arg1;
- (void)showHiddenPublishedAlbumInUids:(id)arg1;
- (id)showHiddenPublishedAlbums;
- (id)hidePublishedAlbum:(id)arg1;
- (id)allPublishedAlbums;
- (void)removeKeyFromDetailFilter:(unsigned long long)arg1 withBaseKeys:(id)arg2;
- (void)_removeKeyFromDetailFilter:(unsigned long long)arg1 withBaseKeys:(id)arg2 album:(id)arg3 updateName:(BOOL)arg4 updateHeaderVisibility:(BOOL)arg5;
- (void)addKeyToDetailFilter:(unsigned long long)arg1 withBaseKeys:(id)arg2;
- (void)_addKeyToDetailFilter:(unsigned long long)arg1 withBaseKeys:(id)arg2 album:(id)arg3 updateName:(BOOL)arg4 updateHeaderVisibility:(BOOL)arg5;
- (id)eventKeysInDetailAlbum:(id)arg1;
- (id)personKeysInDetailAlbum:(id)arg1;
- (unsigned long long)placeCountInDetailAlbum:(id)arg1;
- (id)description;
- (void)ejectAlbum:(id)arg1;
- (void)_removedCamera:(id)arg1;
- (void)_newCamera:(id)arg1;
- (void)_renameCamera:(id)arg1;
- (void)_addCameraAlbumOnMainThread:(id)arg1;
- (void)_finishAddCameraAlbumOnMainThread:(id)arg1 messageMask:(unsigned long long)arg2;
- (void)resortAllAlbumContents;
- (void)nameSortAlbums;
- (void)_sortAlbumList:(struct IPAlbumList *)arg1 basedOnCurrentOrder:(BOOL)arg2;
- (void)sortAlbums:(BOOL)arg1;
- (void)_renumberAlbumList:(struct IPAlbumList *)arg1 persistently:(BOOL)arg2 processChildren:(BOOL)arg3;
- (id)readAlbums;
- (void)_reconstructAlbumOrderForList:(struct IPAlbumList *)arg1;
- (id)_recursivelySqInitAlbumsWithParent:(id)arg1 parentId:(id)arg2 fromDB:(id)arg3;
- (void)_evaluateIfSpecialAlbum:(id)arg1 sqAlbum:(id)arg2;
- (id)recursivelyInitChildrenOfFolder:(id)arg1 album:(id)arg2 loadedUuids:(id)arg3;
- (BOOL)_putRKAlbumOrFolder:(id)arg1 fromRKFolder:(id)arg2 forAlbum:(id)arg3 intoParent:(id)arg4;
- (Class)albumClassForRKFolder:(id)arg1;
- (Class)albumClassForRKAlbum:(id)arg1;
- (void)setIncludeCountWithName:(BOOL)arg1;
- (BOOL)includeCountWithName;
- (id)validateName:(id)arg1 forAlbum:(id)arg2;
- (void)addAlbumData:(id)arg1 toXMLDict:(id)arg2 baseDict:(id)arg3;
- (void)addImageIfNeeded:(struct IPPhotoInfo *)arg1 toXMLDict:(id)arg2 minCount:(unsigned long long)arg3;
- (BOOL)albumExistsWithNameWithSameCapitalization:(id)arg1;
- (BOOL)albumExistsWithName:(id)arg1;
- (id)uniqueNameFromStringIfNeeded:(id)arg1 forAlbumGroup:(unsigned long long)arg2;
- (id)uniqueNameFromStringIfNeeded:(id)arg1;
- (id)uniqueNameFromString:(id)arg1;
- (BOOL)isModified;
- (id)firstAlbumContainingPhoto:(struct IPPhotoInfo *)arg1 inGroup:(unsigned long long)arg2;
- (id)firstAlbumContainingPhoto:(struct IPPhotoInfo *)arg1;
- (struct IPAlbumList *)albumsInGroup:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (struct IPAlbumList *)albumsInGroup:(unsigned long long)arg1 containingAnyPhoto:(struct IPPhotoList *)arg2;
- (struct IPAlbumList *)albumsInGroup:(unsigned long long)arg1 containingPhoto:(struct IPPhotoInfo *)arg2;
- (void)setStackOpenEverywhere:(BOOL)arg1 photo:(struct IPPhotoInfo *)arg2;
- (void)setStackOpenEverywhere:(BOOL)arg1 key:(unsigned long long)arg2;
- (struct IPAlbumList *)allAlbums;
- (id)lastAlbumInGroup:(unsigned long long)arg1;
- (id)firstAlbumInGroup:(unsigned long long)arg1;
- (unsigned long long)endIndexOfGroup:(unsigned long long)arg1;
- (unsigned long long)startIndexOfGroup:(unsigned long long)arg1;
- (struct IPAlbumList *)allVisibleLocalAlbumsInGroup:(unsigned long long)arg1;
- (struct IPAlbumList *)visibleAlbumsInGroup:(unsigned long long)arg1 inSubgroup:(id)arg2;
- (struct IPAlbumList *)visibleAlbumsInGroup:(unsigned long long)arg1;
- (struct IPAlbumList *)allVisibleAlbumsInGroup:(unsigned long long)arg1;
- (void)_removeInvisibleAlbumsFromList:(struct IPAlbumList *)arg1;
- (void)_dumpAlbum:(id)arg1 depth:(int)arg2;
- (void)postLaunchCleanup;
- (void)dumpAlbumsToConsole;
- (struct IPAlbumList *)allAlbumsInGroup:(unsigned long long)arg1;
- (struct IPAlbumList *)allLocalAlbumsInGroup:(unsigned long long)arg1;
- (struct IPAlbumList *)albumsInGroup:(unsigned long long)arg1 inSubgroup:(id)arg2;
- (struct IPAlbumList *)albumsInGroup:(unsigned long long)arg1;
- (void)deregisterNonSourceListAlbum:(id)arg1;
- (void)registerNonSourceListAlbum:(id)arg1;
- (void)setAlbumRecs:(struct IPAlbumList *)arg1;
- (struct IPAlbumList *)albumRecs;
- (void)_removeAlbumRecs:(struct IPAlbumList *)arg1;
- (void)_removeAlbumRec:(id)arg1;
- (void)removeAlbum:(id)arg1 fromDB:(BOOL)arg2 notify:(BOOL)arg3;
- (void)removeAlbums:(id)arg1 fromDB:(BOOL)arg2 notify:(BOOL)arg3;
- (id)findWithSameCapitalization:(id)arg1;
- (struct IPAlbumList *)findAlbums:(id)arg1 withOperation:(int)arg2 inGroup:(unsigned long long)arg3;
- (BOOL)_findDupes:(id)arg1 forAlbumGroup:(unsigned long long)arg2;
- (BOOL)_findDupes:(id)arg1;
- (id)find:(id)arg1;
- (id)albumWithUid:(id)arg1;
- (id)albumWithKey:(unsigned long long)arg1;
- (unsigned long long)indexOfAlbum:(id)arg1;
- (BOOL)hasAlbum:(id)arg1;
- (id)albumAtIndex:(unsigned long long)arg1;
- (void)addAlbums:(struct IPAlbumList *)arg1;
- (void)moveAlbumsToTrash:(struct IPAlbumList *)arg1;
- (void)_addAlbum:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)moveAlbum:(id)arg1 afterAlbum:(id)arg2;
- (void)addAlbum:(id)arg1 afterAlbum:(id)arg2 notify:(BOOL)arg3;
- (void)addAlbum:(id)arg1 afterAlbum:(id)arg2;
- (void)addAlbum:(id)arg1 withName:(id)arg2 afterAlbum:(id)arg3;
- (unsigned long long)indexOfAlbum:(id)arg1 inGroup:(unsigned long long)arg2 inSubgroup:(id)arg3 visibleOnly:(BOOL)arg4;
- (unsigned long long)indexOfAlbum:(id)arg1 inGroup:(unsigned long long)arg2 visibleOnly:(BOOL)arg3;
- (id)albumAtIndex:(unsigned long long)arg1 inGroup:(unsigned long long)arg2 inSubgroup:(id)arg3 visibleOnly:(BOOL)arg4;
- (id)albumAtIndex:(unsigned long long)arg1 inGroup:(unsigned long long)arg2 visibleOnly:(BOOL)arg3;
- (unsigned long long)countAlbumsInGroup:(unsigned long long)arg1 inSubgroup:(id)arg2 visibleOnly:(BOOL)arg3;
- (unsigned long long)countAlbumsInGroup:(unsigned long long)arg1 visibleOnly:(BOOL)arg2;
- (void)setReadOnly:(BOOL)arg1;
- (BOOL)readOnly;
- (void)_removeLegacyFilterAlbums;
- (void)_ensureEventFilterAlbumIsInRightPlace;
- (void)_initializePlacesAlbum;
- (id)placesAlbumIfExists;
- (id)placesAlbum;
- (void)_initializePeopleAlbum;
- (id)peopleAlbum;
- (void)_initializeEventsAlbum;
- (id)placesDetailAlbum;
- (id)peopleDetailAlbum;
- (id)detailAlbum;
- (id)eventsAlbum;
- (void)_updateEmptyEventAlbum;
- (void)_initializeEmptyEventAlbum;
- (id)emptyEventAlbum;
- (BOOL)emptyEventAlbumVisible;
- (void)removePrintingAlbum;
- (void)_fixUpPrintingAlbum;
- (void)_initializePrintingAlbum:(BOOL)arg1;
- (id)createPrintingAlbumIfRKAlbumExists;
- (id)printingAlbum;
- (void)updatePhotoStreamAlbumConfiguration;
- (void)_fixUpPhotostreamAlbum;
- (void)_initializePhotostreamAlbum;
- (id)photostreamAlbum;
- (void)_fixUpLastImportAlbum;
- (void)_initializeLastImportAlbum;
- (id)lastImportAlbum;
- (void)_updateLastNMonthsAlbum;
- (void)_initializeLastNMonthsAlbum;
- (id)lastNMonthsAlbum;
- (void)resetOrganizeAlbums;
- (id)shelfAlbum;
- (id)trashAlbum;
- (id)rotationAlbum;
- (id)launchAlbum;
- (id)archiveAlbum;
- (void)_setRotationAlbum:(id)arg1;
- (void)setSingletonAlbum:(id)arg1 group:(unsigned long long)arg2;
- (vector_5dbb424c *)rollNMinus:(long long)arg1;
- (vector_5dbb424c *)lastNRollAlbums:(long long)arg1;
- (vector_5dbb424c *)firstNRollAlbums:(long long)arg1;
- (void)ensureRollAlbums;
- (void)reallyEnsureRollAlbums;
- (void)convertRollAlbums;
- (id)albumViewController;
- (id)albumView;
- (void)setDB:(id)arg1;
- (id)db;
- (BOOL)needsEmptyEventUpdate;
- (void)setNeedsEmptyEventUpdate:(BOOL)arg1;
- (void)delayedInitialization;
- (void)_scrubTrash;
- (void)_deferredAddToDB:(id)arg1;
- (void)notifyLoadedAlbums;
- (void)loadFromDB;
- (id)initWithDocument:(id)arg1 rebuildArchiveAlbum:(BOOL)arg2;
- (void)prepareForRelease;
- (void)dealloc;
- (id)init;

@end


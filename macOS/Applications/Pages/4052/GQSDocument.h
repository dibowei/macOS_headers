//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GQWrapPointGenerator-Protocol.h"

@class GQDRoot, GQDSStylesheet, GQPProcessor, GQSTable, NSString, SFUZipArchive;
@protocol GQUOutputBundle, GQWrapPointGenerator;

@interface GQSDocument : NSObject <GQWrapPointGenerator>
{
    GQPProcessor *mProcessor;
    GQDRoot *mRoot;
    struct __CFURL *mBundleUrl;
    SFUZipArchive *mArchive;
    id <GQUOutputBundle> mOutputBundle;
    struct __CFArray *mObjectStack;
    id mGeneratorState;
    GQSTable *mTableState;
    Class mCurrentDrawablesGenerator;
    Class mCurrentTableGenerator;
    id <GQWrapPointGenerator> mCurrentWrapPointGenerator;
    BOOL mMustRegisterDrawables;
    BOOL mMustRegisterStorages;
    NSString *mPathForConvertingDatasToApplicationRelative;
    BOOL mAddAnonymousStylesToStylesheet;
    BOOL mReadMissingTableInfoReferencesAsStrings;
    struct __CFDictionary *mTableUidToNativeUUIDMap;
    BOOL mGeneratorBeginWasCalled;
    BOOL mShouldStreamTables;
    BOOL mDoExternalTextWrap;
    BOOL mGeneratingThumbnail;
    BOOL mThumbnailGenerationDone;
    int mUniqueIDValue;
    unsigned int mTextScale;
    set_80ec8016 *mWrapPoints;
    struct __CFDictionary *mBundleResourceUriMap;
    GQDSStylesheet *mStylesheet;
    BOOL mIsReadingStorageAttachments;
}

@property(nonatomic) BOOL addAnonymousStylesToStylesheet; // @synthesize addAnonymousStylesToStylesheet=mAddAnonymousStylesToStylesheet;
@property(copy, nonatomic) NSString *pathForConvertingDatasToApplicationRelative; // @synthesize pathForConvertingDatasToApplicationRelative=mPathForConvertingDatasToApplicationRelative;
@property(nonatomic) BOOL readMissingTableInfoReferencesAsStrings; // @synthesize readMissingTableInfoReferencesAsStrings=mReadMissingTableInfoReferencesAsStrings;
- (BOOL)isReadingStorageAttachments;
- (void)setIsReadingStorageAttachments:(BOOL)arg1;
- (void)setStylesheet:(id)arg1;
- (id)stylesheet;
- (void)setCurrentWrapPointGenerator:(id)arg1;
- (id)currentWrapPointGenerator;
- (struct __CFString *)uriForBundleResource:(struct __CFString *)arg1 ofType:(struct __CFString *)arg2;
- (void)clearWrapPoints;
- (vector_dadce35e *)createListOfWrapPointsAlongY:(float)arg1 minX:(float)arg2 maxX:(float)arg3 zIndex:(int)arg4;
- (const set_80ec8016 *)wrapPoints;
- (void)addWrapPoint:(id)arg1;
- (void)setThumbnailGenerationDone:(BOOL)arg1;
- (BOOL)isThumbnailGenerationDone;
- (void)setGeneratingThumbnail:(BOOL)arg1;
- (BOOL)isGeneratingThumbnail;
- (void)setGeneratorBeginWasCalled;
- (BOOL)generatorBeginWasCalled;
- (void)setDoExternalTextWrap:(BOOL)arg1;
- (BOOL)doExternalTextWrap;
- (void)setShouldStreamTables:(BOOL)arg1;
- (BOOL)shouldStreamTables;
- (struct __CFDictionary *)tableUidToNativeUUIDMap;
- (void)setTableUidToNativeUUIDMap:(struct __CFDictionary *)arg1;
- (void)setMustRegisterStorages:(BOOL)arg1;
- (BOOL)mustRegisterStorages;
- (void)setMustRegisterDrawables:(BOOL)arg1;
- (BOOL)mustRegisterDrawables;
- (char *)uniqueUIDForObject:(id)arg1;
- (void)setCurrentTableGenerator:(Class)arg1;
- (Class)currentTableGenerator;
- (void)setCurrentDrawablesGenerator:(Class)arg1;
- (Class)currentDrawablesGenerator;
- (void)setGeneratorState:(id)arg1;
- (id)generatorState;
- (void)setTableState:(id)arg1;
- (id)tableState;
- (int)objectStackDepth;
- (void)pushObject:(id)arg1;
- (id)popRetainedObject;
- (id)topObjectOfClass:(Class)arg1;
- (id)peekObject;
- (id)outputBundle;
- (struct __CFURL *)createUriToDocumentBundleResource:(struct __CFString *)arg1;
- (id)newDataRepresentationForDocumentBundleResource:(struct __CFString *)arg1 size:(unsigned long long)arg2;
- (id)newDataRepresentationForApplicationResource:(id)arg1 size:(unsigned long long)arg2;
- (id)root;
- (id)processor;
- (void)dealloc;
- (id)initWithRoot:(id)arg1 processor:(id)arg2 archive:(id)arg3 outputBundle:(id)arg4;
- (id)initWithRoot:(id)arg1 processor:(id)arg2 bundleUrl:(struct __CFURL *)arg3 outputBundle:(id)arg4;
- (id)initWithRoot:(id)arg1 processor:(id)arg2 outputBundle:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


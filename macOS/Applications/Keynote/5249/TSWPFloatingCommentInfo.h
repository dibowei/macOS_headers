//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSWPShapeInfo.h"

#import "GSSPAutoEncodable-Protocol.h"
#import "TSDComment-Protocol.h"

@class NSDate, NSString, TSDCommentStorage, TSKAnnotationAuthor;

@interface TSWPFloatingCommentInfo : TSWPShapeInfo <GSSPAutoEncodable, TSDComment>
{
    TSDCommentStorage *_commentStorage;
}

+ (id)p_defaultShadow;
+ (id)p_defaultFill;
+ (id)p_defaultPadding;
+ (id)p_defaultStroke;
+ (id)commentInfoWithContext:(id)arg1 size:(struct CGSize)arg2 storage:(id)arg3;
+ (id)p_commentInfoWithContext:(id)arg1 geometry:(id)arg2 storage:(id)arg3;
+ (struct CGSize)commentInitialSizeWithContext:(id)arg1;
+ (void)upgradeCommentInfoStorage:(id)arg1;
+ (void)upgradeCommentParagraphStylesForStylesheet:(id)arg1 withCommentScale:(double)arg2;
+ (void)upgradeCommentInfoStyle:(id)arg1;
+ (void)createCommentInfoStyleInStylesheetIfNeeded:(id)arg1;
+ (id)p_commentParagraphStyleForStylesheet:(id)arg1 fontSize:(unsigned long long)arg2;
+ (id)commentParagraphStyleForStylesheet:(id)arg1 scalingMultiplier:(double)arg2;
+ (id)commentParagraphStyleForStylesheet:(id)arg1;
+ (id)commentParagraphStyleIdentifierForFontSize:(unsigned long long)arg1;
+ (id)p_defaultCommentInfoStyleInStylesheet:(id)arg1;
+ (id)commentStyleIdentifier;
+ (id)bezierPathForExportCommentOutline;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *annotationUUID;
- (id)commandForTransformingByTransform:(struct CGAffineTransform)arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(struct CGRect)arg4;
- (id)commandWithVariant:(unsigned long long)arg1 reply:(id)arg2;
- (id)commandForUpgradingToACommentForAuthor:(id)arg1;
- (id)commandForDeletingComment;
- (id)commandForChangingCommentText:(id)arg1;
- (id)commandForInsertingWithCommentText:(id)arg1;
- (BOOL)isInDocument;
- (BOOL)isFloatingComment;
@property(copy, nonatomic) TSDCommentStorage *storage;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)commentWillBeAddedToDocumentRoot;
@property(readonly, nonatomic) NSDate *date;
@property(retain, nonatomic) TSKAnnotationAuthor *author;
- (id)selectionPathForLayoutSearchWithCanvasEditor:(id)arg1;
- (id)selectionPathForCanvasEditor:(id)arg1;
- (void)saveToArchive:(struct CommentInfoArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
@property(readonly, nonatomic) double commentScalingMultiplier;
- (void)loadFromArchive:(const struct CommentInfoArchive *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)enumerateAllAnnotationsInModelWithHitBlock:(CDUnknownBlockType)arg1;
- (id)searchForAnnotationsWithHitBlock:(CDUnknownBlockType)arg1;
- (BOOL)allowedToBeDragAndDropped;
- (Class)editorClass;
- (double)transformGeometryRatioForTransform:(struct CGAffineTransform)arg1;
- (BOOL)supportsAttachedComments;
@property(readonly, nonatomic) BOOL isHighlight;
@property(readonly, nonatomic) int annotationDisplayStringType;
@property(readonly, nonatomic) int annotationType;
- (Class)layoutClass;
- (Class)repClass;
- (BOOL)supportsHyperlinks;
- (BOOL)isLockable;
- (int)elementKind;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4 wpStorage:(id)arg5;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4 wpStorage:(id)arg5 commentStorage:(id)arg6;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4 commentStorage:(id)arg5;
- (id)creationDateString;
- (id)pathSourceForExportCommentOutline;
@property(retain, nonatomic) TSDCommentStorage *commentStorage;
- (BOOL)needsBuildChunkUpdates;
- (id)kn_typeName;
- (id)kn_thumbnailImageInSmallSize:(BOOL)arg1 lightTint:(BOOL)arg2;
- (BOOL)kn_renderThumbnail;
- (void)populateGSSPFloatingCommentInfo:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


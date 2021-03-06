//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXViewerItemController.h"

#import "PADescriptionEditReceiver-Protocol.h"
#import "PAImageItemViewControllerStatusReceiver-Protocol.h"

@class FaceTile, IPXAdjustmentFactory, IPXDelayedTimer, NSImage, NSObject, NSProgressIndicator, NSSet, NSString, NSView, PADescriptionEditController, PAImageItemController, PAImageItemView, PAImageItemViewController, PAImageItemViewMode, PAThumbnailRenderer, PFTraceBuffer, _IPXViewerImageEditReceiver;

@interface IPXViewerImageController : IPXViewerItemController <PADescriptionEditReceiver, PAImageItemViewControllerStatusReceiver>
{
    NSView *_loadingIndicatorView;
    NSProgressIndicator *_spinner;
    BOOL _finishedLoading;
    BOOL _shouldShowLoadingIndicatorAfterDelay;
    IPXDelayedTimer *_straightenTimer;
    NSObject *_observedCanvasView;
    PAThumbnailRenderer *_thumbnailRenderer;
    PADescriptionEditController *_descriptionEditController;
    _IPXViewerImageEditReceiver *_descriptionEditReceiver;
    NSImage *_dragPreviewImage;
    double _zoomFactor;
    long long _originalRenderMode;
    PAImageItemViewMode *_normalMode;
    PAImageItemViewMode *_originalMode;
    PFTraceBuffer *_trace;
    BOOL _showsBadges;
    BOOL _showsBurstBadge;
    BOOL _showsFaces;
    BOOL _showsBurstFavoritingCheckmark;
    BOOL _unconditionallyHighlightsAllFaces;
    PAImageItemController *_imageItemController;
    IPXAdjustmentFactory *_adjustmentFactory;
    NSSet *_facesMetadataEditorSelectedFaceTiles;
    FaceTile *_facesMetadataEditorFaceTileUnderMouseCursor;
}

+ (BOOL)toolMode:(long long)arg1 isValidForOperation:(id)arg2;
+ (long long)toggleMasterModeForVersion:(id)arg1;
+ (long long)masterModeForVersion:(id)arg1;
@property(retain, nonatomic) FaceTile *facesMetadataEditorFaceTileUnderMouseCursor; // @synthesize facesMetadataEditorFaceTileUnderMouseCursor=_facesMetadataEditorFaceTileUnderMouseCursor;
@property(retain, nonatomic) NSSet *facesMetadataEditorSelectedFaceTiles; // @synthesize facesMetadataEditorSelectedFaceTiles=_facesMetadataEditorSelectedFaceTiles;
@property(nonatomic) BOOL unconditionallyHighlightsAllFaces; // @synthesize unconditionallyHighlightsAllFaces=_unconditionallyHighlightsAllFaces;
@property(nonatomic) BOOL showsBurstFavoritingCheckmark; // @synthesize showsBurstFavoritingCheckmark=_showsBurstFavoritingCheckmark;
@property(nonatomic) BOOL showsFaces; // @synthesize showsFaces=_showsFaces;
@property(nonatomic) BOOL showsBurstBadge; // @synthesize showsBurstBadge=_showsBurstBadge;
@property(nonatomic) BOOL showsBadges; // @synthesize showsBadges=_showsBadges;
@property(readonly, nonatomic) IPXAdjustmentFactory *adjustmentFactory; // @synthesize adjustmentFactory=_adjustmentFactory;
@property(readonly, nonatomic) PAImageItemController *imageItemController; // @synthesize imageItemController=_imageItemController;
- (void).cxx_destruct;
- (void)_restoreNormalMode:(id)arg1;
- (void)resetShowOriginalMode;
- (long long)originalMode;
- (void)_didLoadOriginalMode:(id)arg1;
- (BOOL)_loadMode:(id)arg1 waitFor:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_pushOriginalMode:(id)arg1;
- (void)setShowOriginalMode:(long long)arg1;
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)_loadPreviewImageAsynchronously:(BOOL)arg1;
- (BOOL)allowsZooming;
- (BOOL)allowsEditing;
- (void)descriptionEditController:(id)arg1 renderDescriptionOrientationChanged:(id)arg2;
- (void)_animateOverlayFadeForOrientationChange:(id)arg1;
- (void)descriptionEditController:(id)arg1 renderDescription:(id)arg2 endInteractiveForOperationAtIndex:(unsigned long long)arg3;
- (void)descriptionEditController:(id)arg1 renderDescription:(id)arg2 beginInteractiveForOperationAtIndex:(unsigned long long)arg3;
- (void)descriptionEditController:(id)arg1 renderDescription:(id)arg2 operationDidChangeAtIndex:(unsigned long long)arg3 invalidMasterRect:(struct CGRect)arg4;
- (void)operationsChangedForDescriptionController:(id)arg1 renderDescription:(id)arg2;
- (void)setToolMode:(long long)arg1 forActiveOperationUUID:(id)arg2;
- (void)mouseDown:(id)arg1;
- (void)_updateLoadingIndicatorVisiblility:(BOOL)arg1;
- (void)viewController:(id)arg1 statusChanged:(int)arg2 estimatedTimeUntilUpToDate:(double)arg3;
- (id)multicaster:(id)arg1 queueForSelector:(SEL)arg2;
- (void)_infoPopoverDidBecomeHidden:(id)arg1;
- (void)_infoPopoverDidBecomeVisible:(id)arg1;
- (void)_facesMetadataEditorFaceTileUnderMouseCursorDidChange:(id)arg1;
- (void)_facesMetadataEditorFaceTileSelectionDidChange:(id)arg1;
- (void)_userDidAddFaceNotification:(id)arg1;
- (void)updateFacesOverlayVisibility;
- (BOOL)_shouldShowFaces;
- (void)updateShowsBurstBadge;
- (BOOL)_shouldShowBurstBadge;
- (void)updateBadgesAnimated:(BOOL)arg1;
- (void)_animateOverlaysForOrientationChange;
- (void)_applyOrientationChange:(long long)arg1;
- (void)_animateApplyOrientationChange:(long long)arg1;
- (void)_flipActionNotification:(id)arg1;
- (void)_rotateActionNotification:(id)arg1;
- (void)_rotateBy:(long long)arg1;
- (void)flipVertical;
- (void)flipHorizontal;
- (void)rotateLeft;
- (void)rotateRight;
- (void)_prepareOverlaysForRotate;
- (void)_prepareOverlaysForFlip;
- (void)a_switchRAWJpeg:(id)arg1;
- (void)a_reprocessRaw:(id)arg1;
- (void)a_revealOriginal:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)_imageItemViewDidChangeDisplay:(id)arg1;
- (struct CGPoint)panOffsetForShowingContentPoint:(struct CGPoint)arg1 atViewPoint:(struct CGPoint)arg2;
- (struct CGPoint)contentPointAtViewPoint:(struct CGPoint)arg1;
- (struct CGPoint)panOffsetForViewPoint:(struct CGPoint)arg1;
- (BOOL)acceptsFirstResponder;
- (id)_imageItemViewModeForViewerMode:(long long)arg1;
@property(readonly, nonatomic) PAImageItemViewMode *imageItemViewMode;
- (void)setRenderMode:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateFacesOverlay;
- (void)_updateZoomOverlay;
- (BOOL)isZoomed;
- (void)setZoomValue:(double)arg1;
- (double)zoomFactor;
- (void)_updatePanOffset;
- (void)_updateZoomFactor;
- (double)zoomValueForZoomingBy:(double)arg1;
- (void)setViewFrame:(struct CGRect)arg1 animated:(BOOL)arg2;
- (void)didEndLiveResize;
- (void)willStartLiveResize;
- (void)setEdgeInsets:(struct NSEdgeInsets)arg1;
- (id)imageItemView;
- (id)itemView;
- (void)viewDidLoad;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_removeItemViewController;
- (void)_setupItemViewController;
@property(readonly, nonatomic) PAImageItemView *imageView;
@property(readonly, nonatomic) PAImageItemViewController *imagingController;
- (id)_newPAImageItemViewController;
- (void)_startThumbnailRenderer;
- (void)_startThumbnailRenderAfterDelay;
- (void)setEditing:(BOOL)arg1;
@property(readonly, nonatomic) NSProgressIndicator *loadingIndicator;
- (void)ensureItemIsReady;
- (void)loadItem;
- (struct CGSize)itemSize;
- (void)endAnimate;
- (void)beginAnimate;
- (void)viewWillAppear;
- (void)removeFromParentViewController;
- (void)setPanOffset:(struct CGPoint)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXModel.h"

@class IPXViewerModel, PAImageItemController, RDVersion;

@interface IPXViewerItemModel : IPXModel
{
    PAImageItemController *_imageItemController;
    IPXViewerModel *_viewerModel;
    RDVersion *_version;
}

@property(retain, nonatomic) RDVersion *version; // @synthesize version=_version;
@property(nonatomic) __weak IPXViewerModel *viewerModel; // @synthesize viewerModel=_viewerModel;
- (void).cxx_destruct;
- (unsigned long long)hash;

@end


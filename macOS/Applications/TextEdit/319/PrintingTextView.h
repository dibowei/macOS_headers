//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextView.h>

@class PrintPanelAccessoryController;

@interface PrintingTextView : NSTextView
{
    PrintPanelAccessoryController *printPanelAccessoryController;
    struct CGSize originalSize;
    struct CGSize previousValueOfDocumentSizeInPage;
    BOOL previousValueOfWrappingToFit;
}

@property struct CGSize originalSize; // @synthesize originalSize;
@property PrintPanelAccessoryController *printPanelAccessoryController; // @synthesize printPanelAccessoryController;
- (BOOL)knowsPageRange:(struct _NSRange *)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSTextField;

@interface ChatBubbleSMSDetailCellView : NSTableCellView
{
    NSTextField *_errorField;
    NSTextField *_iconField;
}

@property __weak NSTextField *iconField; // @synthesize iconField=_iconField;
@property __weak NSTextField *errorField; // @synthesize errorField=_errorField;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end


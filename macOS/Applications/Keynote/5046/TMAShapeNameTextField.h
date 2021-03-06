//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextField.h>

#import "NSTextFieldDelegate-Protocol.h"

@class NSMenu, NSObject, NSString, TMAInsertButton;
@protocol TMAShapeNameTextFieldDelegate;

@interface TMAShapeNameTextField : NSTextField <NSTextFieldDelegate>
{
    NSObject<TMAShapeNameTextFieldDelegate> *_shapeNameTextFieldDelegate;
    TMAInsertButton *_associatedButton;
    NSMenu *_contextMenu;
}

@property(retain) NSMenu *contextMenu; // @synthesize contextMenu=_contextMenu;
@property __weak TMAInsertButton *associatedButton; // @synthesize associatedButton=_associatedButton;
@property __weak NSObject<TMAShapeNameTextFieldDelegate> *shapeNameTextFieldDelegate; // @synthesize shapeNameTextFieldDelegate=_shapeNameTextFieldDelegate;
- (void).cxx_destruct;
- (void)controlTextDidEndEditing:(id)arg1;
- (id)p_placeholderString;
- (void)p_commonInit;
- (void)cancelOperation:(id)arg1;
- (void)beginEditingIfAppropriate;
- (void)mouseUp:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)endEditing;
- (void)beginEditing;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


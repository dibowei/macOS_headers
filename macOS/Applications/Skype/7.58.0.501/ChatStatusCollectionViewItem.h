//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ChatRichDetailedBaseCollectionViewItem.h"

@class NSArray;

@interface ChatStatusCollectionViewItem : ChatRichDetailedBaseCollectionViewItem
{
    NSArray *_targetContacts;
}

+ (id)richContentStringForMessage:(id)arg1 style:(id)arg2 attachmentAppearance:(unsigned long long)arg3;
+ (id)boldReplacementAttributesForStyle:(id)arg1 alternative:(BOOL)arg2;
+ (BOOL)shouldUseAlternativeStyleForMessage:(id)arg1;
+ (id)alternativeStatusTransformerForStyle:(id)arg1 attachmentAppearance:(unsigned long long)arg2;
+ (id)statusTransformerForStyle:(id)arg1 attachmentAppearance:(unsigned long long)arg2;
+ (BOOL)shouldHideTimestampForMessage:(id)arg1 style:(id)arg2 compact:(BOOL)arg3;
+ (id)accessibilityDescriptionForMessage:(id)arg1;
@property(retain, nonatomic) NSArray *targetContacts; // @synthesize targetContacts=_targetContacts;
- (void).cxx_destruct;
- (id)localizedTimeDescription;
- (id)textSelectionTextFields;
- (void)setRepresentedObject:(id)arg1;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObservingTargetContacts;
- (void)startObservingTargetContacts;
- (void)updateBackgroundColor;

@end


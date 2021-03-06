//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ScreenReader/SCRGuide.h>

#import <ScreenReader/AXEEventTapListener-Protocol.h>

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SCRSpeechAttributeGuide : SCRGuide <AXEEventTapListener>
{
    long long __currentAttributeIndex;
    NSArray *__orderedSpeechAttributeTypes;
    NSDictionary *__attributeTypeToKeyNames;
    NSArray *__percentValueGuideItems;
    NSArray *__voiceGuideItems;
}

+ (unsigned long long)_currentSpeechAttributeTypeFromPreferences;
@property(readonly, nonatomic) NSArray *_voiceGuideItems; // @synthesize _voiceGuideItems=__voiceGuideItems;
@property(readonly, nonatomic) NSArray *_percentValueGuideItems; // @synthesize _percentValueGuideItems=__percentValueGuideItems;
@property(readonly, nonatomic) NSDictionary *_attributeTypeToKeyNames; // @synthesize _attributeTypeToKeyNames=__attributeTypeToKeyNames;
@property(readonly, nonatomic) NSArray *_orderedSpeechAttributeTypes; // @synthesize _orderedSpeechAttributeTypes=__orderedSpeechAttributeTypes;
@property(nonatomic, setter=_setCurrentAttributeIndex:) long long _currentAttributeIndex; // @synthesize _currentAttributeIndex=__currentAttributeIndex;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_removeSpeechAttributeGuideObservers;
- (void)_closeSpeechAttributeRotor;
- (id)_buildSpeechAttributeVoiceGuideItems;
- (id)_buildSpeechAttributePercentValueGuideItems;
- (double)_valueAsPercentForAttribute:(unsigned long long)arg1;
- (void)_persistCurrentAttributeValueToUserDefaults;
- (unsigned long long)_indexOfGuideItemMatchingCurrentSettingsValueForAttribute:(unsigned long long)arg1;
- (void)processPassiveEventTapEvent:(struct __CGEvent *)arg1 type:(unsigned int)arg2 withProxy:(struct __CGEventTapProxy *)arg3;
- (void)_closeWithOutputRequest:(id)arg1;
- (void)_addDescriptionToOutputRequest:(id)arg1;
- (void)selectItemAtIndex:(unsigned long long)arg1 indexForView:(unsigned long long)arg2;
- (BOOL)_handleEvent:(id)arg1 request:(id)arg2;
- (void)openWithSelectionIndex:(unsigned long long)arg1;
@property(nonatomic) unsigned long long currentAttributeType;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


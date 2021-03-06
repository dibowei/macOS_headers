//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSDKeyValueProxyVending-Protocol.h"
#import "TSUDateTimeFormatInspectorPropertyVendor-Protocol.h"
#import "TSUDurationFormatInspectorPropertyVendor-Protocol.h"

@class NSArray, NSNumber, NSSet, NSString, TSTCachedPropertiesForSelection, TSTCellRegion, TSTCellUIDList, TSTTableEditor, TSUColor;
@protocol TSTMacCellFillStandIn;

@interface TSTCellInspectorPropertyVendor : NSObject <TSUDateTimeFormatInspectorPropertyVendor, TSUDurationFormatInspectorPropertyVendor, TSDKeyValueProxyVending>
{
    BOOL mSelectionIsInfos;
    int mWorkingCellFormatType;
    double mGiveUpOnMixedStateAfter;
    NSArray *mPreviousModelChanges;
    BOOL mEditingConditionalStyles;
    BOOL mUpdatedSinceModelChange;
    BOOL mIgnoringChanges;
    TSTTableEditor *mTableEditor;
    TSTCachedPropertiesForSelection *mCachedPropertiesForSelection;
    TSTCellRegion *mSelectedCellRegion;
    NSSet *mSelectedInfos;
    TSTCellUIDList *mEmptyCellUIDListForPopups;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property(nonatomic) BOOL ignoringChanges; // @synthesize ignoringChanges=mIgnoringChanges;
@property(retain, nonatomic) TSTCellUIDList *emptyCellUIDListForPopups; // @synthesize emptyCellUIDListForPopups=mEmptyCellUIDListForPopups;
@property(nonatomic) BOOL updatedSinceModelChange; // @synthesize updatedSinceModelChange=mUpdatedSinceModelChange;
@property(retain, nonatomic) NSSet *selectedInfos; // @synthesize selectedInfos=mSelectedInfos;
@property(retain, nonatomic) TSTCellRegion *selectedCellRegion; // @synthesize selectedCellRegion=mSelectedCellRegion;
@property(retain, nonatomic) TSTCachedPropertiesForSelection *cachedPropertiesForSelection; // @synthesize cachedPropertiesForSelection=mCachedPropertiesForSelection;
@property(nonatomic) TSTTableEditor *tableEditor; // @synthesize tableEditor=mTableEditor;
- (id)conditionalStyleRuleCount;
- (id)conditionalStyleSet;
- (id)customFormatSampleValueObject;
- (id)customFormatSamplePreviewString;
@property(readonly, nonatomic) NSSet *selectedDurationStyles;
@property(readonly, nonatomic) NSNumber *durationStyle;
@property(readonly, nonatomic) NSNumber *durationUnitLargest;
@property(readonly, nonatomic) NSNumber *durationUnitSmallest;
@property(readonly, nonatomic) NSNumber *durationUnitsAutomatic;
@property(readonly, nonatomic) NSNumber *popupMenusMixed;
- (id)popupInitialValue;
- (id)popupMenuChoices;
@property(readonly, nonatomic) NSSet *selectedTimeFormats;
@property(readonly, nonatomic) NSSet *selectedDateFormats;
@property(readonly, nonatomic) NSString *timeFormat;
@property(readonly, nonatomic) NSString *dateFormat;
- (double)controlIncValidationValue;
- (double)controlMaxValidationValue;
- (double)controlMinValidationValue;
- (id)controlIncrement;
- (id)controlMaximum;
- (id)controlMinimum;
- (id)selectedControlFormatTypes;
@property(readonly, nonatomic) NSNumber *controlFormatType;
- (id)paragraphBorderType;
- (id)paragraphRuleOffset;
- (id)paragraphStroke;
- (id)paragraphFill;
- (id)textBackground;
- (id)decimalTab;
- (id)tabs;
- (id)defaultTabStops;
- (id)writingDirection;
- (id)lineSpacing;
- (id)tracking;
- (id)rightIndent;
- (id)leftIndent;
- (id)firstLineIndent;
- (id)baselineShift;
- (id)spaceAfter;
- (id)spaceBefore;
- (id)padding;
- (id)valueForUndefinedKey:(id)arg1;
- (id)paragraphStyles;
- (id)alignment;
- (id)verticalAlignment;
- (id)textWrapped;
@property(readonly, nonatomic) NSSet *selectedFills;
- (id)fill;
- (id)singleCellHigh;
- (id)singleCellWide;
- (id)cellBorderInfo;
- (id)outlineLevel;
- (id)textShadow;
- (id)outline;
- (id)strikethrough;
- (id)underline;
- (id)hyphenate;
- (id)ligatures;
- (id)superscript;
- (BOOL)isStrikethru;
- (BOOL)isUnderline;
- (BOOL)isItalic;
- (BOOL)isBold;
- (id)emphasisMarks;
- (id)fontColor;
- (id)fontSize;
- (id)fontFamilies;
- (id)fonts;
- (id)numeralSystemTwosComplementEnabled;
- (id)numeralSystemUseTwosComplement;
- (id)numeralSystemUseMinusSign;
- (id)numeralSystemBasePlaces;
- (id)numeralSystemBase;
- (id)effectiveCurrencyDecimalPlacesValue;
- (id)currencyDecimalPlacesValue;
- (id)currencyDecimalPlacesString;
- (id)effectiveDecimalPlacesValue;
- (id)decimalPlacesValue;
- (id)decimalPlacesString;
- (id)selectedFractionAccuracies;
- (id)fractionAccuracy;
- (id)currencyThousandsSeparator;
- (id)thousandsSeparator;
- (id)selectedCurrencyNegativeStyles;
- (id)selectedNegativeStyles;
- (id)currencyNegativeStyleEnabled;
- (id)currencyNegativeStyle;
- (id)negativeStyle;
- (id)accountingStyle;
- (id)selectedCurrencyCodes;
- (id)currencyCode;
- (id)defaultCurrencyCode;
@property(readonly, nonatomic) NSNumber *unmixedImplicitFormatType;
- (id)selectedFormatTypesRespectingWorkingCellFormatType;
- (id)selectedFormatTypes;
@property(readonly, nonatomic) NSNumber *formatType;
- (BOOL)p_workingCellFormatTypeIsValid;
- (void)setWorkingCellFormatTypeInvalid;
- (void)setWorkingCellFormatType:(int)arg1;
- (id)multipleTablesSelected;
@property(readonly, nonatomic) BOOL timedOutComputingMixedState;
- (id)newProxyWithEditor:(id)arg1 documentRoot:(id)arg2;
- (void)p_cachePropertiesForTableSelectionIfNecessary;
- (void)p_cachePropertiesForInfoSelectionIfNecessary;
- (double)p_calculateMixedStateTimeoutForDynamicSelection:(BOOL)arg1;
- (void)p_cachePropertiesForSelectionIfNecessary;
- (BOOL)p_cachePropertiesForSelectionOnTable:(id)arg1 processingBaseCell:(char *)arg2;
- (void)p_cacheStrokesFor:(id)arg1 withCellID:(struct TSUCellCoord)arg2 mergeRange:(struct TSUCellRect)arg3;
- (void)p_cacheBasePropertiesFromCellStyle:(id)arg1;
- (void)p_cacheBasePropertiesFromParagraphStyle:(id)arg1;
- (long long)p_effectiveDecimalPlacesFromDecimalPlaces:(long long)arg1 cell:(id)arg2;
- (void)p_cachePropertiesFromBaseCellID:(struct TSUCellCoord)arg1 inTable:(id)arg2;
- (void)p_setEverythingMixed;
- (void)p_cachePropertiesFromParagraphStyle:(id)arg1;
- (void)p_cachePropertiesFromCellStyle:(id)arg1 inTable:(id)arg2 withCellID:(struct TSUCellCoord)arg3;
- (void)p_cacheCommonPropertiesForNonMergeOriginCell:(id)arg1 andCellID:(struct TSUCellCoord)arg2 inTable:(id)arg3 mergeRange:(struct TSUCellRect)arg4;
- (void)p_cacheCommonPropertiesForCell:(id)arg1 andCellID:(struct TSUCellCoord)arg2 inTable:(id)arg3 mergeRange:(struct TSUCellRect)arg4;
- (void)invalidateForModelChange:(id)arg1;
@property(readonly, nonatomic) NSObject<TSTMacCellFillStandIn> *cachedCellFillStandIn;
@property(readonly, nonatomic) TSUColor *cachedFontColor;
@property(readonly, nonatomic) double cachedFontSize;
- (void)dealloc;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CHDrawing, NSCharacterSet, NSMutableIndexSet, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface CHRecognizer : NSObject
{
    BOOL _saveDrawingUntilNextCandidateAccepted;
    int _recognitionType;
    int _recognitionMode;
    unsigned long long _maxRecognitionResultCount;
    NSCharacterSet *_activeCharacterSet;
    struct CHNeuralNetwork *_engine;
    struct CHNeuralNetwork *_freeformEngine;
    NSObject<OS_dispatch_queue> *_recognitionQueue;
    struct Network *_radicalClusterFST;
    struct Network *_formatGrammarFST;
    void *_languageModel;
    struct __Mecabra *_mecabra;
    void *_mecabraStaticLexicon;
    void *_mecabraDynamicLexicon;
    NSURL *_learningDictionaryURL;
    CHDrawing *_savedDrawing;
    NSString *_savedTop1CandidateString;
    CHDrawing *_cachedDrawing;
    struct VariantMap *_scVariantMap;
    struct VariantMap *_tcVariantMap;
    void **_icuTransliterator;
    unsigned long long _lastCharacterStrokeCount;
    NSMutableIndexSet *_lastCharacterStrokeIndexes;
    struct CGSize _minimumDrawingSize;
    map_6bca5f83 _cachedResults;
}

+ (id)defaultPunctuationResultsForRecognitionType:(int)arg1;
@property(nonatomic) NSMutableIndexSet *lastCharacterStrokeIndexes; // @synthesize lastCharacterStrokeIndexes=_lastCharacterStrokeIndexes;
@property(nonatomic) unsigned long long lastCharacterStrokeCount; // @synthesize lastCharacterStrokeCount=_lastCharacterStrokeCount;
@property(nonatomic) void **icuTransliterator; // @synthesize icuTransliterator=_icuTransliterator;
@property(nonatomic) struct VariantMap *tcVariantMap; // @synthesize tcVariantMap=_tcVariantMap;
@property(nonatomic) struct VariantMap *scVariantMap; // @synthesize scVariantMap=_scVariantMap;
@property(nonatomic) map_6bca5f83 cachedResults; // @synthesize cachedResults=_cachedResults;
@property(copy, nonatomic) CHDrawing *cachedDrawing; // @synthesize cachedDrawing=_cachedDrawing;
@property(nonatomic) BOOL saveDrawingUntilNextCandidateAccepted; // @synthesize saveDrawingUntilNextCandidateAccepted=_saveDrawingUntilNextCandidateAccepted;
@property(copy, nonatomic) NSString *savedTop1CandidateString; // @synthesize savedTop1CandidateString=_savedTop1CandidateString;
@property(copy, nonatomic) CHDrawing *savedDrawing; // @synthesize savedDrawing=_savedDrawing;
@property(retain, nonatomic) NSURL *learningDictionaryURL; // @synthesize learningDictionaryURL=_learningDictionaryURL;
@property(nonatomic) void *mecabraDynamicLexicon; // @synthesize mecabraDynamicLexicon=_mecabraDynamicLexicon;
@property(nonatomic) void *mecabraStaticLexicon; // @synthesize mecabraStaticLexicon=_mecabraStaticLexicon;
@property(nonatomic) struct __Mecabra *mecabra; // @synthesize mecabra=_mecabra;
@property(nonatomic) void *languageModel; // @synthesize languageModel=_languageModel;
@property(nonatomic) struct Network *formatGrammarFST; // @synthesize formatGrammarFST=_formatGrammarFST;
@property(nonatomic) struct Network *radicalClusterFST; // @synthesize radicalClusterFST=_radicalClusterFST;
@property(readonly, nonatomic) struct CGSize minimumDrawingSize; // @synthesize minimumDrawingSize=_minimumDrawingSize;
@property(nonatomic) NSObject<OS_dispatch_queue> *recognitionQueue; // @synthesize recognitionQueue=_recognitionQueue;
@property(nonatomic) struct CHNeuralNetwork *freeformEngine; // @synthesize freeformEngine=_freeformEngine;
@property(nonatomic) struct CHNeuralNetwork *engine; // @synthesize engine=_engine;
@property(retain, nonatomic) NSCharacterSet *activeCharacterSet; // @synthesize activeCharacterSet=_activeCharacterSet;
@property(nonatomic) int recognitionMode; // @synthesize recognitionMode=_recognitionMode;
@property(nonatomic) int recognitionType; // @synthesize recognitionType=_recognitionType;
@property(nonatomic) unsigned long long maxRecognitionResultCount; // @synthesize maxRecognitionResultCount=_maxRecognitionResultCount;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)rescoreCandidatesWithLangaugeModel:(vector_06f11b7b *)arg1 history:(id)arg2;
- (void)applyTransliterationAndSyntheticCandidates:(vector_06f11b7b *)arg1;
- (id)applySentenceTransliterationCandidates:(unsigned short *)arg1 codesLen:(int)arg2 codesMax:(int)arg3;
- (id)recognitionResultsForDrawing:(id)arg1 options:(id)arg2;
- (id)recognitionResultsForDrawing:(id)arg1 options:(id)arg2 shouldCancel:(CDUnknownBlockType)arg3;
- (id)recognitionResultsForMultipleCharacterDrawing:(id)arg1 sortedStrokeIndices:(vector_eb9481f9 *)arg2 network:(struct Network *)arg3 options:(id)arg4 ch:(struct Hanzi *)arg5 shouldCancel:(CDUnknownBlockType)arg6;
- (id)bestNetworkPaths:(struct Network *)arg1 count:(unsigned long long)arg2 mecabraIDs:(vector_3203cf93 *)arg3;
- (id)recognitionResultsForSingleCharacterDrawing:(id)arg1 options:(id)arg2;
- (id)recognitionResultsForSketchDrawing:(id)arg1 options:(id)arg2;
- (id)manhattanLineCandidateResultForDrawing:(id)arg1 candidate:(struct CHCandidateResult *)arg2 rejectionResult:(id *)arg3;
- (id)lineCandidateResultForDrawing:(id)arg1 candidate:(struct CHCandidateResult *)arg2 rejectionResult:(id *)arg3;
- (id)outlineArrowCandidateResultForDrawing:(id)arg1 candidate:(struct CHCandidateResult *)arg2;
- (id)rectangleCandidateResultForDrawing:(id)arg1 candidate:(struct CHCandidateResult *)arg2;
- (id)pentagonCandidateResultForDrawing:(id)arg1 candidate:(struct CHCandidateResult *)arg2;
- (id)ellipseCandidateResultForDrawing:(id)arg1 candidate:(struct CHCandidateResult *)arg2;
- (id)chatBubbleCandidateResultForDrawing:(id)arg1 candidate:(struct CHCandidateResult *)arg2;
- (id)triangleCandidateResultForDrawing:(id)arg1 candidate:(struct CHCandidateResult *)arg2;
- (id)starCandidateResultForDrawing:(id)arg1 candidate:(struct CHCandidateResult *)arg2;
- (void)endpointsForDrawing:(id)arg1 startLocation:(struct CGPoint *)arg2 endLocation:(struct CGPoint *)arg3;
- (id)characterSetForStrings:(id)arg1;
- (id)supportedStrings;
- (id)supportedCharacterSet;
- (id)sketchCodeForDescription:(id)arg1;
- (id)sketchDescriptionForCode:(int)arg1;
- (void)dealloc;
- (id)initWithType:(int)arg1 mode:(int)arg2;
- (id)strokeIndexesForLastCharacter;
- (vector_de520796)completionsForCandidate:(id)arg1 candidateContext:(id)arg2 prefix:(id)arg3 option:(unsigned long long)arg4;
- (vector_de520796)completionsForCandidate:(id)arg1 prefix:(id)arg2 option:(unsigned long long)arg3;
- (void)candidateAccepted:(void *)arg1;
- (void)candidatesCleared;
- (void)updateUserDictionaryLexicon:(id)arg1;
- (void)updateAddressBookLexicon:(id)arg1;
- (void)logCandidateIfAppropriate:(void *)arg1;
- (void)releaseLMResources;
- (void)loadEngineModel;
- (id)initWithType:(int)arg1 mode:(int)arg2 learningDictionaryURL:(id)arg3;

@end


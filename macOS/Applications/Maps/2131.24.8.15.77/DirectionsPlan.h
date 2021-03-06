//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class DirectionsPlanTransitPreferences, GEOStorageRouteRequestStorage, NSString;

__attribute__((visibility("hidden")))
@interface DirectionsPlan : PBCodable <NSCopying>
{
    double _arrivalTime;
    unsigned long long _currentRouteIndex;
    unsigned long long _currentRouteStep;
    double _departureTime;
    double _expiryTime;
    NSString *_destinationString;
    int _displayMethod;
    unsigned int _earlierPagesLoaded;
    unsigned int _laterPagesLoaded;
    NSString *_originString;
    GEOStorageRouteRequestStorage *_routeRequestStorage;
    unsigned int _routesPerEarlierPage;
    unsigned int _routesPerInitialPage;
    unsigned int _routesPerLaterPage;
    DirectionsPlanTransitPreferences *_transitPreferences;
    int _transitPrioritization;
    int _transitSurchargeOption;
    BOOL _isPlayingTrace;
    struct {
        unsigned int arrivalTime:1;
        unsigned int currentRouteIndex:1;
        unsigned int currentRouteStep:1;
        unsigned int departureTime:1;
        unsigned int expiryTime:1;
        unsigned int displayMethod:1;
        unsigned int earlierPagesLoaded:1;
        unsigned int laterPagesLoaded:1;
        unsigned int routesPerEarlierPage:1;
        unsigned int routesPerInitialPage:1;
        unsigned int routesPerLaterPage:1;
        unsigned int transitPrioritization:1;
        unsigned int transitSurchargeOption:1;
        unsigned int isPlayingTrace:1;
    } _has;
}

@property(nonatomic) BOOL isPlayingTrace; // @synthesize isPlayingTrace=_isPlayingTrace;
@property(nonatomic) double expiryTime; // @synthesize expiryTime=_expiryTime;
@property(nonatomic) int transitSurchargeOption; // @synthesize transitSurchargeOption=_transitSurchargeOption;
@property(nonatomic) unsigned int routesPerLaterPage; // @synthesize routesPerLaterPage=_routesPerLaterPage;
@property(nonatomic) unsigned int routesPerEarlierPage; // @synthesize routesPerEarlierPage=_routesPerEarlierPage;
@property(nonatomic) unsigned int laterPagesLoaded; // @synthesize laterPagesLoaded=_laterPagesLoaded;
@property(nonatomic) unsigned int earlierPagesLoaded; // @synthesize earlierPagesLoaded=_earlierPagesLoaded;
@property(nonatomic) unsigned int routesPerInitialPage; // @synthesize routesPerInitialPage=_routesPerInitialPage;
@property(retain, nonatomic) DirectionsPlanTransitPreferences *transitPreferences; // @synthesize transitPreferences=_transitPreferences;
@property(nonatomic) unsigned long long currentRouteStep; // @synthesize currentRouteStep=_currentRouteStep;
@property(nonatomic) unsigned long long currentRouteIndex; // @synthesize currentRouteIndex=_currentRouteIndex;
@property(nonatomic) double arrivalTime; // @synthesize arrivalTime=_arrivalTime;
@property(nonatomic) double departureTime; // @synthesize departureTime=_departureTime;
@property(retain, nonatomic) NSString *destinationString; // @synthesize destinationString=_destinationString;
@property(retain, nonatomic) NSString *originString; // @synthesize originString=_originString;
@property(retain, nonatomic) GEOStorageRouteRequestStorage *routeRequestStorage; // @synthesize routeRequestStorage=_routeRequestStorage;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasIsPlayingTrace;
@property(nonatomic) BOOL hasExpiryTime;
@property(nonatomic) BOOL hasTransitSurchargeOption;
- (int)StringAsTransitPrioritization:(id)arg1;
- (id)transitPrioritizationAsString:(int)arg1;
@property(nonatomic) BOOL hasTransitPrioritization;
@property(nonatomic) int transitPrioritization; // @synthesize transitPrioritization=_transitPrioritization;
@property(nonatomic) BOOL hasRoutesPerLaterPage;
@property(nonatomic) BOOL hasRoutesPerEarlierPage;
@property(nonatomic) BOOL hasLaterPagesLoaded;
@property(nonatomic) BOOL hasEarlierPagesLoaded;
@property(nonatomic) BOOL hasRoutesPerInitialPage;
@property(readonly, nonatomic) BOOL hasTransitPreferences;
- (int)StringAsDisplayMethod:(id)arg1;
- (id)displayMethodAsString:(int)arg1;
@property(nonatomic) BOOL hasDisplayMethod;
@property(nonatomic) int displayMethod; // @synthesize displayMethod=_displayMethod;
@property(nonatomic) BOOL hasCurrentRouteStep;
@property(nonatomic) BOOL hasCurrentRouteIndex;
@property(nonatomic) BOOL hasArrivalTime;
@property(nonatomic) BOOL hasDepartureTime;
@property(readonly, nonatomic) BOOL hasDestinationString;
@property(readonly, nonatomic) BOOL hasOriginString;
@property(readonly, nonatomic) BOOL hasRouteRequestStorage;

@end


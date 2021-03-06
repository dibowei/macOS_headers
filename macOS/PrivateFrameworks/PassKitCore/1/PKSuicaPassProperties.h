//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDecimalNumber, NSString, PKFelicaPassProperties;

@interface PKSuicaPassProperties : NSObject
{
    PKFelicaPassProperties *_felicaProperties;
}

+ (id)passPropertiesForPass:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isBlacklisted) BOOL blacklisted;
@property(readonly, nonatomic, getter=isGreenCarTicketUsed) BOOL greenCarTicketUsed;
@property(readonly, nonatomic, getter=isInShinkansenStation) BOOL inShinkansenStation;
@property(readonly, nonatomic, getter=isInStation) BOOL inStation;
@property(readonly, copy, nonatomic) NSString *transitBalanceCurrencyCode;
@property(readonly, copy, nonatomic) NSDecimalNumber *transitBalance;
- (id)_initWithProperties:(id)arg1;

@end


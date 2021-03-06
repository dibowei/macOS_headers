//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOActiveResourceFilters, GEOResourceManifestConfiguration, NSLock, NSSet;
@protocol GEOResourceFiltersManagerDelegate;

__attribute__((visibility("hidden")))
@interface GEOResourceFiltersManager : NSObject
{
    GEOResourceManifestConfiguration *_configuration;
    GEOActiveResourceFilters *_activeFilters;
    NSLock *_lock;
    id <GEOResourceFiltersManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <GEOResourceFiltersManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)deactivateScenario:(int)arg1;
- (void)activateScenario:(int)arg1;
- (void)deactivateScale:(int)arg1;
- (void)activateScale:(int)arg1;
- (void)_deactivateFilters:(CDUnknownBlockType)arg1;
- (void)_activateFilters:(CDUnknownBlockType)arg1 setValueBlock:(CDUnknownBlockType)arg2;
- (void)_writeToDisk;
@property(readonly, nonatomic) NSSet *activeScenarios;
@property(readonly, nonatomic) NSSet *activeScales;
- (id)initWithConfiguration:(id)arg1;
- (id)init;

@end


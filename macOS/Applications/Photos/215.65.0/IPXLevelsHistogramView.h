//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSArray, NSColor, NSDictionary, NSImage, NSMutableDictionary, NSSet, NSString;

@interface IPXLevelsHistogramView : NSView
{
    id m_delegate;
    NSMutableDictionary *m_attributes;
    BOOL m_disableValidation;
    BOOL m_ignoreQuadtoneMovement;
    NSString *m_notifyDelegateOfValueChangeKey;
    struct CGRect m_layoutBounds;
    struct CGRect m_upperControlBounds;
    struct CGRect m_upperControlVisualBounds;
    struct CGRect m_dataBounds;
    struct CGRect m_lowerControlBounds;
    struct CGRect m_lowerControlVisualBounds;
    NSSet *m_immovableControls;
    NSSet *m_quadtoneControls;
    NSDictionary *m_controlPairs;
    NSArray *m_inputOrdering;
    NSArray *m_outputOrdering;
    NSSet *m_connectedControls;
    NSMutableDictionary *m_controls;
    NSString *m_lastControlHit;
    NSString *m_lastControlHitPair;
    double m_lastControlOffset;
    NSImage *m_bufferedImage;
    NSColor *m_connectorColor;
    NSColor *m_connectorActiveColor;
    NSColor *m_frameColor;
    NSColor *m_backgroundColor;
    NSColor *m_fillColor[5];
    NSColor *m_lineColor[5];
    char m_channelEnabled[5];
    BOOL m_isEnabled;
    BOOL m_drawsBackground;
    BOOL m_drawsRawBadge;
    int _mode;
}

@property BOOL drawsRawBadge; // @synthesize drawsRawBadge=m_drawsRawBadge;
@property BOOL drawsBackground; // @synthesize drawsBackground=m_drawsBackground;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_drawImage:(id)arg1 inRect:(struct CGRect)arg2 flipped:(BOOL)arg3 height:(long long)arg4 operation:(unsigned long long)arg5;
- (void)_drawImage:(id)arg1 inRect:(struct CGRect)arg2 inView:(id)arg3;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2 andChannel:(int)arg3;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (BOOL)validateValue:(id *)arg1 forKey:(id)arg2 error:(id *)arg3;
- (void)flagsChanged:(id)arg1;
- (void)handleMouseUp:(id)arg1;
- (void)handleMouseDragged:(id)arg1;
- (void)_setClippedPixelOverlay:(int)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)getControlName:(id *)arg1 controlFrame:(struct CGRect *)arg2 controlPairName:(id *)arg3 forEvent:(id)arg4;
- (BOOL)isOpaque;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isEnabled;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)validationIsEnabled;
- (void)setValidationEnabled:(BOOL)arg1;
- (void)setDefaults;
- (id)attributes;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setMode:(int)arg1;
- (BOOL)isHud;
- (void)_updateHistogramForChannel:(int)arg1;
- (BOOL)_adjustParametersForKey:(id)arg1 value:(id)arg2 ordering:(id)arg3;
- (id)_adjustQuarterPointsForLevel:(id)arg1 forKey:(id)arg2 value:(id)arg3;
- (void)_drawControls:(struct CGRect)arg1;
- (BOOL)_quarterTonesAreAtDefault;
- (BOOL)_quarterTonesAreAtDefaultsForLevel:(id)arg1;
- (void)_drawInputControlNamed:(id)arg1 output:(id)arg2 rect:(struct CGRect)arg3;
- (void)_drawControlNamed:(id)arg1;
- (void)_drawHistogram:(struct CGRect)arg1;
- (void)_drawInputOutputConnectors:(struct CGRect)arg1;
- (void)_drawConnectorsForInput:(id)arg1 rect:(struct CGRect)arg2;
- (void)_invalidateControlNamed:(id)arg1;
- (void)_invalidateConnectorForInput:(id)arg1;
- (void)_invalidateBufferedHistogramImage;
- (void)_layoutForBounds:(struct CGRect)arg1;
- (void)_ensureControls;
- (struct CGRect)_boundsForControl:(id)arg1;
- (id)_setupControl:(id)arg1 part:(id)arg2;
- (BOOL)_value:(id)arg1 forKey:(id)arg2 isOrderedInArray:(id)arg3;
- (void)_setFloat:(double)arg1 forKey:(id)arg2;
- (double)_floatForKey:(id)arg1;
- (void)_setDefaultsForChannel:(int)arg1;
- (id)_dictionaryForActiveChannel;
- (int)_activeChannel;
- (id)_dictionaryForChannel:(int)arg1;

@end


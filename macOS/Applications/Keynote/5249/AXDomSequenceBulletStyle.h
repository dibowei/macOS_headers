//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "AXDomBulletStyle.h"

#import "AXSequenceBulletStyle-Protocol.h"

@interface AXDomSequenceBulletStyle : AXDomBulletStyle <AXSequenceBulletStyle>
{
}

+ (void)initialize;
- (void)validateSelf;
- (void)axSetFormatString:(id)arg1;
- (BOOL)_isValidFormatString:(id)arg1;
- (id)axGetFormatString;
- (void)axSetSequenceType:(int)arg1;
- (int)axGetSequenceType;

@end


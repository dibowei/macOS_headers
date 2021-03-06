//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, _SFPBAppIconImage, _SFPBContactImage, _SFPBGraphicalFloat, _SFPBLocalImage, _SFPBMonogramImage, _SFPBPointSize, _SFPBURLImage;

@protocol _SFPBImage <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) BOOL hasAppIconImage;
@property(retain, nonatomic) _SFPBAppIconImage *appIconImage;
@property(readonly, nonatomic) BOOL hasLocalImage;
@property(retain, nonatomic) _SFPBLocalImage *localImage;
@property(readonly, nonatomic) BOOL hasMonogramImage;
@property(retain, nonatomic) _SFPBMonogramImage *monogramImage;
@property(readonly, nonatomic) BOOL hasContactImage;
@property(retain, nonatomic) _SFPBContactImage *contactImage;
@property(readonly, nonatomic) BOOL hasUrlImage;
@property(retain, nonatomic) _SFPBURLImage *urlImage;
@property(readonly, nonatomic) BOOL hasType;
@property(nonatomic) int type;
@property(readonly, nonatomic) BOOL hasSource;
@property(nonatomic) int source;
@property(readonly, nonatomic) BOOL hasIdentifier;
@property(copy, nonatomic) NSString *identifier;
@property(readonly, nonatomic) BOOL hasKeyColor;
@property(copy, nonatomic) NSString *keyColor;
@property(readonly, nonatomic) BOOL hasContentType;
@property(copy, nonatomic) NSString *contentType;
@property(readonly, nonatomic) BOOL hasSize;
@property(retain, nonatomic) _SFPBPointSize *size;
@property(readonly, nonatomic) BOOL hasScale;
@property(retain, nonatomic) _SFPBGraphicalFloat *scale;
@property(readonly, nonatomic) BOOL hasCornerRadius;
@property(retain, nonatomic) _SFPBGraphicalFloat *cornerRadius;
@property(readonly, nonatomic) BOOL hasShouldCropToCircle;
@property(nonatomic) BOOL shouldCropToCircle;
@property(readonly, nonatomic) BOOL hasIsTemplate;
@property(nonatomic) BOOL isTemplate;
@property(readonly, nonatomic) BOOL hasImageData;
@property(copy) NSData *imageData;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end


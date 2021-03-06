//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>

@class NSString;

@interface SFText : NSObject <NSSecureCoding>
{
    NSString *_text;
    unsigned long long _maxLines;
}

+ (BOOL)supportsSecureCoding;
+ (id)textWithString:(id)arg1;
@property(nonatomic) unsigned long long maxLines; // @synthesize maxLines=_maxLines;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)length;

@end


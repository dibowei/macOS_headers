//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSNumber, NSString;

@interface DeviceUser : NSObject <NSCoding>
{
    NSNumber *_idNumber;
    NSString *_fullName;
    NSString *_username;
    NSString *_password;
    NSNumber *_hasPassword;
}

@property(retain, nonatomic) NSNumber *hasPassword; // @synthesize hasPassword=_hasPassword;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(retain, nonatomic) NSNumber *idNumber; // @synthesize idNumber=_idNumber;
- (void).cxx_destruct;
- (id)copyCustom;
- (void)decodeWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MailboxPrediction/MPMailbox-Protocol.h>
#import <MailboxPrediction/NSSecureCoding-Protocol.h>

@class NSString;
@protocol MPAccount;

@interface MPMailbox : NSObject <MPMailbox, NSSecureCoding>
{
    id <MPAccount> _account;
    NSString *_name;
    NSString *_persistentID;
}

+ (BOOL)supportsSecureCoding;
+ (id)mailboxWithAccount:(id)arg1 name:(id)arg2 persistentID:(id)arg3;
@property(retain, nonatomic) NSString *persistentID; // @synthesize persistentID=_persistentID;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) id <MPAccount> account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAccount:(id)arg1 name:(id)arg2 persistentID:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


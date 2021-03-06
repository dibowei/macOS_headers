//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ReactiveViewModel/RVMViewModel.h>

@class NSString, OCTServer, OCTUser, RACCommand, RACSignal;

@interface GHLoginViewModel : RVMViewModel
{
    BOOL _logInEnabled;
    OCTServer *_server;
    NSString *_username;
    NSString *_password;
    OCTUser *_loggedInUser;
    OCTServer *_loginServer;
    RACSignal *_usersByServer;
    RACSignal *_clientsByServer;
    RACCommand *_logInCommand;
}

@property(readonly, nonatomic) RACCommand *logInCommand; // @synthesize logInCommand=_logInCommand;
@property(readonly, nonatomic) RACSignal *clientsByServer; // @synthesize clientsByServer=_clientsByServer;
@property(readonly, nonatomic) RACSignal *usersByServer; // @synthesize usersByServer=_usersByServer;
@property(readonly, nonatomic) OCTServer *loginServer; // @synthesize loginServer=_loginServer;
@property(readonly, nonatomic) OCTUser *loggedInUser; // @synthesize loggedInUser=_loggedInUser;
@property(readonly, nonatomic, getter=isLogInEnabled) BOOL logInEnabled; // @synthesize logInEnabled=_logInEnabled;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, nonatomic) OCTServer *server; // @synthesize server=_server;
- (void).cxx_destruct;
- (id)wrapLoginError:(id)arg1;
- (id)loginFailedErrorWithUserInfo:(id)arg1;
- (id)logIn;
- (id)updateGitConfigWithUser:(id)arg1;
- (id)initWithServer:(id)arg1;

@end


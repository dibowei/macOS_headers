//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AuthKit/AKAppleIDAuthenticationContext.h>

#import <AuthKitUI/AKAppleIDAuthenticationUIProvider-Protocol.h>
#import <AuthKitUI/AKSecondFactorCodeEntryDelegate-Protocol.h>
#import <AuthKitUI/AKiCDPValidationDelegate-Protocol.h>
#import <AuthKitUI/AuthWebViewDelegate-Protocol.h>
#import <AuthKitUI/MBUIDelegate-Protocol.h>
#import <AuthKitUI/MBWebKitViewControllerDelegate-Protocol.h>
#import <AuthKitUI/NSSecureCoding-Protocol.h>
#import <AuthKitUI/NSTextFieldDelegate-Protocol.h>

@class AKAuthWebTabView, AKInAssistantSecondFactorCodeEntry, AKiCDPDeviceValidationFlowViewController, CDPRemoteDeviceSecretValidator, NSArray, NSMutableArray, NSMutableDictionary, NSObject, NSProgressIndicator, NSSecureTextField, NSString, NSTextField;
@protocol AKAppleIDAuthenticationAssistant;

@interface AKAppleIDAuthenticationInAssistantContext : AKAppleIDAuthenticationContext <AKAppleIDAuthenticationUIProvider, NSTextFieldDelegate, AuthWebViewDelegate, MBUIDelegate, MBWebKitViewControllerDelegate, AKSecondFactorCodeEntryDelegate, AKiCDPValidationDelegate, NSSecureCoding>
{
    long long layoutOnceToken;
    BOOL _hasButtonControl;
    BOOL _continueMeansOptOut;
    BOOL _offerRemoteApproval;
    BOOL _offerToUseRecoveryKey;
    NSObject<AKAppleIDAuthenticationAssistant> *_assistant;
    unsigned long long _state;
    id _previousButtonTarget;
    SEL _previousButtonAction;
    CDUnknownBlockType _previousBlock;
    NSMutableArray *_previousBlockNavigationStack;
    id _nextButtonTarget;
    SEL _nextButtonAction;
    CDUnknownBlockType _nextBlock;
    NSMutableArray *_nextBlockNavigationStack;
    id _alternateButtonTarget;
    SEL _alternateButtonAction;
    CDUnknownBlockType _alternateBlock;
    NSMutableArray *_alternateBlockNavigationStack;
    CDUnknownBlockType _forgotBlock;
    CDUnknownBlockType _createBlock;
    NSTextField *_usernameField;
    NSSecureTextField *_passwordField;
    NSProgressIndicator *_spinner;
    AKAuthWebTabView *_webViewUI;
    AKInAssistantSecondFactorCodeEntry *_secondFactorUI;
    AKiCDPDeviceValidationFlowViewController *_flowController;
    NSMutableArray *_clientDevices;
    NSMutableDictionary *_cdpDevices;
    CDPRemoteDeviceSecretValidator *_deviceValidator;
}

+ (BOOL)supportsSecureCoding;
@property BOOL offerToUseRecoveryKey; // @synthesize offerToUseRecoveryKey=_offerToUseRecoveryKey;
@property BOOL offerRemoteApproval; // @synthesize offerRemoteApproval=_offerRemoteApproval;
@property(retain) CDPRemoteDeviceSecretValidator *deviceValidator; // @synthesize deviceValidator=_deviceValidator;
@property(retain) NSMutableDictionary *cdpDevices; // @synthesize cdpDevices=_cdpDevices;
@property(retain) NSMutableArray *clientDevices; // @synthesize clientDevices=_clientDevices;
@property(retain) AKiCDPDeviceValidationFlowViewController *flowController; // @synthesize flowController=_flowController;
@property(retain) AKInAssistantSecondFactorCodeEntry *secondFactorUI; // @synthesize secondFactorUI=_secondFactorUI;
@property(retain) AKAuthWebTabView *webViewUI; // @synthesize webViewUI=_webViewUI;
@property(retain) NSProgressIndicator *spinner; // @synthesize spinner=_spinner;
@property(retain) NSSecureTextField *passwordField; // @synthesize passwordField=_passwordField;
@property(retain) NSTextField *usernameField; // @synthesize usernameField=_usernameField;
@property(copy, nonatomic) CDUnknownBlockType createBlock; // @synthesize createBlock=_createBlock;
@property(copy, nonatomic) CDUnknownBlockType forgotBlock; // @synthesize forgotBlock=_forgotBlock;
@property(retain, nonatomic) NSMutableArray *alternateBlockNavigationStack; // @synthesize alternateBlockNavigationStack=_alternateBlockNavigationStack;
@property(copy, nonatomic) CDUnknownBlockType alternateBlock; // @synthesize alternateBlock=_alternateBlock;
@property(nonatomic) SEL alternateButtonAction; // @synthesize alternateButtonAction=_alternateButtonAction;
@property(retain, nonatomic) id alternateButtonTarget; // @synthesize alternateButtonTarget=_alternateButtonTarget;
@property(retain, nonatomic) NSMutableArray *nextBlockNavigationStack; // @synthesize nextBlockNavigationStack=_nextBlockNavigationStack;
@property(copy, nonatomic) CDUnknownBlockType nextBlock; // @synthesize nextBlock=_nextBlock;
@property(nonatomic) SEL nextButtonAction; // @synthesize nextButtonAction=_nextButtonAction;
@property(retain, nonatomic) id nextButtonTarget; // @synthesize nextButtonTarget=_nextButtonTarget;
@property(retain, nonatomic) NSMutableArray *previousBlockNavigationStack; // @synthesize previousBlockNavigationStack=_previousBlockNavigationStack;
@property(copy, nonatomic) CDUnknownBlockType previousBlock; // @synthesize previousBlock=_previousBlock;
@property(nonatomic) SEL previousButtonAction; // @synthesize previousButtonAction=_previousButtonAction;
@property(retain, nonatomic) id previousButtonTarget; // @synthesize previousButtonTarget=_previousButtonTarget;
@property BOOL continueMeansOptOut; // @synthesize continueMeansOptOut=_continueMeansOptOut;
@property BOOL hasButtonControl; // @synthesize hasButtonControl=_hasButtonControl;
@property unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak NSObject<AKAppleIDAuthenticationAssistant> *assistant; // @synthesize assistant=_assistant;
- (void).cxx_destruct;
- (void)userCancelled;
@property(readonly) BOOL allowCancel;
@property(readonly) NSArray *devices;
- (void)userSkipped;
- (void)triggerEscapeHatch;
@property(readonly) BOOL offerServerRecovery;
- (void)cancelApproveFromAnotherDevice;
- (void)approveFromAnotherDevice;
- (void)validateDevice:(id)arg1 withSecret:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)cdpContext:(id)arg1 showError:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)cdpContext:(id)arg1 promptForInteractiveAuthenticationWithCompletion:(CDUnknownBlockType)arg2;
- (void)cdpContext:(id)arg1 promptToInformUserOfAccountLockOutWithCompletion:(CDUnknownBlockType)arg2;
- (void)cdpContext:(id)arg1 promptToInformUserOfAccountUnlockWithCompletion:(CDUnknownBlockType)arg2;
- (void)cdpContext:(id)arg1 promptForAdoptionOfMultipleICSC:(CDUnknownBlockType)arg2;
- (void)cdpContext:(id)arg1 promptForICSCWithIsNumeric:(BOOL)arg2 numericLength:(id)arg3 isRandom:(BOOL)arg4 validator:(id)arg5;
- (void)cdpContext:(id)arg1 promptForRemoteSecretWithDevices:(id)arg2 offeringRemoteApproval:(BOOL)arg3 validator:(id)arg4;
- (void)cdpContext:(id)arg1 promptForLocalSecretWithHandler:(id)arg2;
- (void)pinEntryComplete:(BOOL)arg1;
- (void)mbRunAppleIDOptOut:(id)arg1;
- (void)mbWebkitViewSaveFile:(id)arg1 withLocalizedDisplayName:(id)arg2 content:(id)arg3;
- (void)mbWebkitViewSaveFile:(id)arg1 content:(id)arg2;
- (void)mbWebkitViewControllerDidFailWithError:(id)arg1;
- (void)mbWebkitViewControllerDidSucceed;
- (void)mbWebkitViewControllerDidCancel;
- (void)mbWebkitViewControllerModifyURLRequest:(id)arg1;
- (void)mbWebkitViewControllerSkipSignIn;
- (void)mbWebkitViewControllerDidDismissWithReason:(id)arg1;
- (void)mbWebkitViewControllerDidFinishLoading;
- (void)mbWebkitViewSetAlternateNavigationButtonEnabled:(BOOL)arg1;
- (void)mbWebkitViewSetAlternateNavigationButtonTitle:(id)arg1;
- (void)mbWebkitViewSetRightNavigationButtonEnabled:(BOOL)arg1;
- (void)mbWebkitViewSetRightNavigationButtonTitle:(id)arg1;
- (void)mbWebkitViewSetLeftNavigationButtonEnabled:(BOOL)arg1;
- (void)mbWebkitViewSetLeftNavigationButtonTitle:(id)arg1;
- (void)mbWebkitViewSetWindowMessage:(id)arg1;
- (void)mbWebkitViewSetWindowTitle:(id)arg1;
- (void)setSkipLoginOnContinue:(BOOL)arg1;
- (void)createButtonPressed:(id)arg1;
- (void)forgotButtonPressed:(id)arg1;
- (void)alternateButtonPressed:(id)arg1;
- (void)previousButtonPressed:(id)arg1;
- (void)nextButtonPressed:(id)arg1;
- (void)setLoginContolsEnabled:(BOOL)arg1;
- (void)revokeButtonControl;
- (void)grantButtonControl;
- (void)setNavigationControls;
- (void)popNavigationStack;
- (void)setupSecondFactorAuthNavigation;
- (void)setupWebviewNavigation;
- (void)setupNoUILoginNavigationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setupLoginNavigationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)layoutView:(id)arg1 centeredInView:(id)arg2;
- (void)layoutLoginControls;
- (void)switchToCenteredView:(id)arg1;
- (void)completelyFillView:(id)arg1 withView:(id)arg2;
- (void)switchToFullAssistantView:(id)arg1;
- (void)skipAndContinueSignIn;
- (BOOL)shouldHideCancelButton;
- (void)sizeChangedFrom:(struct CGSize)arg1 toSize:(struct CGSize)arg2 webViewName:(id)arg3 callback:(id)arg4;
- (void)loadFailed:(id)arg1 withError:(id)arg2;
- (void)endWebView:(id)arg1;
- (void)presentServerUIErrorAlertWithTitle:(id)arg1 message:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissServerProvidedUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentServerProvidedUIWithURLRequest:(id)arg1 delegate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentSecondFactorAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dismissSecondFactorUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentSecondFactorUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dismissBasicLoginUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentBasicLoginUIWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly) BOOL approvalOnlyMode;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


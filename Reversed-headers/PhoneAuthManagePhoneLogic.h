//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "MMTipsViewControllerDelegate-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSString;
@protocol PhoneAuthManagePhoneLogicDelegate, PhoneAuthManagePhoneLogicOperationDelegate;

@interface PhoneAuthManagePhoneLogic : MMObject <PBMessageObserverDelegate, MMTipsViewControllerDelegate>
{
    id <PhoneAuthManagePhoneLogicDelegate> _delegate;
    id <PhoneAuthManagePhoneLogicOperationDelegate> _operationDelegate;
    NSString *_appid;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(nonatomic) __weak id <PhoneAuthManagePhoneLogicOperationDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
@property(nonatomic) __weak id <PhoneAuthManagePhoneLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleUpdateUserPhoneResponse:(id)arg1;
- (void)handleCheckVerifyCodeResponse:(id)arg1;
- (void)handleSendCustomPhoneVerifyCodeResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)notifyCheckVerifyCodeSuccess;
- (void)notifySendVerifyCodeSuccess;
- (void)notifyCheckVerifyCodeFailMsg:(id)arg1;
- (void)notifySendVerifyCodeFailMsg:(id)arg1;
- (void)updatePhoneToSvrWithPhoneNumber:(id)arg1 type:(unsigned int)arg2;
- (void)deletePhoneFromSvrUsageList:(id)arg1;
- (void)addPhoneToSvrUsageList:(id)arg1;
- (void)verifyCode:(id)arg1 withPhoneNumber:(id)arg2 saveFlag:(_Bool)arg3;
- (void)sendConfirmCodeToPhoneNumber:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMKFingerprintService-Protocol.h"
#import "WCPayBioPayV2UpdateAuthKeyCgiDelegate-Protocol.h"

@class NSString, WCPayBioPayV2UpdateAuthKeyCgi;

@interface KindaFingerprintService : NSObject <WCPayBioPayV2UpdateAuthKeyCgiDelegate, MMKFingerprintService>
{
    WCPayBioPayV2UpdateAuthKeyCgi *_updateAuthKeyCgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayBioPayV2UpdateAuthKeyCgi *updateAuthKeyCgi; // @synthesize updateAuthKeyCgi=_updateAuthKeyCgi;
- (void)onWCPayBioPayV2UpdateAuthKeyCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayBioPayV2UpdateAuthKeyCgiResponseOK:(id)arg1;
- (void)showBioAuthViewImpl:(id)arg1 challenge:(id)arg2 successEvent:(id)arg3 failEvent:(id)arg4 cancelEvent:(id)arg5 forgetPwdEvent:(id)arg6;
- (void)changeAuthKey:(_Bool)arg1 isPayOk:(_Bool)arg2 pwd:(id)arg3;
- (_Bool)isNeedChangeAuthKey;
- (void)setNeedChangeAuthKey:(_Bool)arg1;
- (void)userCancel;
- (void)showFaceIdAuthDialogImpl:(id)arg1 success:(id)arg2 fail:(id)arg3 cancel:(id)arg4;
- (void)reGenFpRsaKeyImpl:(_Bool)arg1 fid:(int)arg2 reqKey:(id)arg3 success:(id)arg4 fail:(id)arg5;
- (void)releaseService;
- (void)authenticateImpl:(id)arg1 challenge:(id)arg2 success:(id)arg3 fail:(id)arg4 change2Pwd:(id)arg5 showErrThenChange2Pwd:(id)arg6;
- (long long)supportBioType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

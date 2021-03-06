//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"
#import "WXIAPReprovideLogicDelegate-Protocol.h"

@class NSString, WXIAPInitLogic, WXIAPReprovideLogic;

@interface WXIAPMgr : MMUserService <WXIAPReprovideLogicDelegate, MMServiceProtocol>
{
    WXIAPInitLogic *_initializeLogic;
    WXIAPReprovideLogic *_reprovideLogic;
    CDUnknownBlockType _reprovideCompletion;
}

+ (void)handleLaunchPayResult:(_Bool)arg1 isCancel:(_Bool)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)launchPay:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType reprovideCompletion; // @synthesize reprovideCompletion=_reprovideCompletion;
@property(retain, nonatomic) WXIAPReprovideLogic *reprovideLogic; // @synthesize reprovideLogic=_reprovideLogic;
@property(retain, nonatomic) WXIAPInitLogic *initializeLogic; // @synthesize initializeLogic=_initializeLogic;
- (void)reprovideFail:(id)arg1 error:(id)arg2;
- (void)reprovideSuccess:(id)arg1 result:(id)arg2;
- (void)reprovide:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getMidasInitResult;
- (void)updateOpenKey:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)initMidasIfNeededFromAdvance:(_Bool)arg1 scene:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)initMidasInLaunchPayIfNeed:(CDUnknownBlockType)arg1;
- (void)advanceInitMidasIfNeed:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)hasMidasInited;
- (id)getOpenID;
- (unsigned long long)getIAPEnvironment;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


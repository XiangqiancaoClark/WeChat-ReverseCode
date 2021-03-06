//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "IOplogExt-Protocol.h"
#import "IUpdateProfileMgrExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class NSString;

@interface MMLimitedModeMgr : MMUserService <IOplogExt, IUpdateProfileMgrExt, MMServiceProtocol>
{
    _Bool _isLimitedModeOn;
    _Bool _isChangingSwitch;
    _Bool _isChangingLevel;
    _Bool _syncSwitch;
    long long _finderBizLevel;
    long long _weappBizLevel;
    long long _brandBizLevel;
    long long _recentEntryScene;
    long long _syncBizType;
    long long _syncLevel;
}

+ (_Bool)isFinderLiveLimitModeLevelAllow;
+ (_Bool)isFinderNearbyLimitModeLevelAllow;
+ (_Bool)isFinderLimitModeLevelLimited;
+ (_Bool)isFinderLimitModeLevelBlock;
+ (_Bool)isFinderLimitModeLevelAllow;
+ (long long)finderLimitModeLevel;
@property(nonatomic) long long syncLevel; // @synthesize syncLevel=_syncLevel;
@property(nonatomic) long long syncBizType; // @synthesize syncBizType=_syncBizType;
@property(nonatomic) _Bool syncSwitch; // @synthesize syncSwitch=_syncSwitch;
@property(nonatomic) _Bool isChangingLevel; // @synthesize isChangingLevel=_isChangingLevel;
@property(nonatomic) _Bool isChangingSwitch; // @synthesize isChangingSwitch=_isChangingSwitch;
@property(nonatomic) long long recentEntryScene; // @synthesize recentEntryScene=_recentEntryScene;
@property(nonatomic) long long brandBizLevel; // @synthesize brandBizLevel=_brandBizLevel;
@property(nonatomic) long long weappBizLevel; // @synthesize weappBizLevel=_weappBizLevel;
@property(nonatomic) long long finderBizLevel; // @synthesize finderBizLevel=_finderBizLevel;
@property(nonatomic) _Bool isLimitedModeOn; // @synthesize isLimitedModeOn=_isLimitedModeOn;
- (void)updateLimitedModeEntryScene:(long long)arg1;
- (void)checkInvalidLogic;
- (void)checkUpdateAndNotify;
- (void)onProfileChange;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (id)encryptIndependentPwd:(id)arg1;
- (_Bool)shouldBlockUrlInLimitedMode:(id)arg1;
- (_Bool)isBizTypeAllowed:(long long)arg1;
- (void)changeLevel:(long long)arg1 forBiz:(long long)arg2 ticket:(id)arg3;
- (long long)levelForBiz:(long long)arg1;
- (void)setLimitedModeOn:(_Bool)arg1 ticket:(id)arg2;
- (_Bool)isLimitedModeOnCore;
- (_Bool)canShowLimitedModeEntry;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


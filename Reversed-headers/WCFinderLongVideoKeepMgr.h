//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "ILiveTaskMgrExt-Protocol.h"
#import "IMinimizeTaskDelegateInterface-Protocol.h"
#import "IVOIPWindowExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "MinimizationTransitionControllerDelegate-Protocol.h"
#import "MultiTalkMgrExt-Protocol.h"

@class NSMutableDictionary, NSString, WCFinderLongVideoPlayViewController;

@interface WCFinderLongVideoKeepMgr : MMUserService <IMinimizeTaskDelegateInterface, IVOIPWindowExt, ILiveTaskMgrExt, MultiTalkMgrExt, MMServiceProtocol, MinimizationTransitionControllerDelegate>
{
    WCFinderLongVideoPlayViewController *_vcContext;
    NSMutableDictionary *_caches;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *caches; // @synthesize caches=_caches;
@property(nonatomic) __weak WCFinderLongVideoPlayViewController *vcContext; // @synthesize vcContext=_vcContext;
- (void)updateVcContextUsedRecord;
- (_Bool)videoPlayCompleted;
- (id)shareListViewControllerWithMegaVideo:(id)arg1;
- (void)onEnterRecentUsedTask:(id)arg1;
- (void)onRecoverTaskData:(id)arg1;
- (void)dismissVCAndUpdateMinimieInfoIfNeed:(id)arg1;
- (void)updateMinizedVC:(id)arg1;
- (void)minizeVC:(id)arg1;
- (_Bool)isMinizing:(id)arg1;
- (_Bool)shouldBlockMinimizationEntryInInteractivePop;
- (_Bool)minimizationInteractivePopGestureRecognizerShouldBegin;
- (id)minimizationInteractivePopGetPendingTaskContextWithGenerateType:(unsigned long long)arg1;
- (void)updateSnapShotWithVC:(id)arg1;
- (void)minimizationInteractivePopToMinimizeTask:(_Bool)arg1;
- (id)currentMinimizationTaskBizKey;
- (id)currentMinimizationTaskBizName;
- (void)minimizationInteractivePopGestureRecognizerDidBegin;
- (_Bool)onRetryAddPendingTaskAfterUserDeleteOneTask:(id)arg1;
- (id)getLastViewControllerOnLeaveTaskBeforeEnterAnother:(id)arg1;
- (void)onRemoveMinimizedTask:(id)arg1;
- (void)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (id)taskDataWithType:(unsigned long long)arg1;
- (id)minimizeKey;
- (id)taskDataForVC:(id)arg1;
- (void)removeVC:(id)arg1;
- (id)cachedPlayerVCForKey:(id)arg1;
- (void)cachePlayerVC:(id)arg1 forKey:(id)arg2;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


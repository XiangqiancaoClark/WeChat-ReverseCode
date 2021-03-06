//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "IContactMgrExt-Protocol.h"
#import "IMMNewSessionMgrExt-Protocol.h"
#import "IMMNewSessionMgrFilterExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "MMImageLoaderEventNotification-Protocol.h"
#import "MMImageLoaderObserver-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "MMSessionRefreshExt-Protocol.h"
#import "MMTipsViewControllerDelegate-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"
#import "WXGImportMessageNotification-Protocol.h"

@class BTOftenReadBizCache, BrandMainSessionExposeItem, BrandSessionCache, BrandTimelineMsgDB, MMBaseSessionStorage, MMTimer, MemoryMappedKV, NSData, NSDate, NSMutableArray, NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface BrandTimelineMsgMgr : MMUserService <IMMNewSessionMgrFilterExt, WXGImportMessageNotification, MMSessionRefreshExt, IMsgExt, IMMNewSessionMgrExt, IContactMgrExt, PBMessageObserverDelegate, MMTipsViewControllerDelegate, MMImageLoaderEventNotification, MMServiceProtocol, MMImageLoaderObserver>
{
    _Bool _isMigratingData;
    _Bool _needUpdateMainSession;
    _Bool _isTimelinePageActive;
    _Bool _hasShowFirstGuideLine;
    _Bool _isCurrentResorting;
    _Bool _isTlPicPreloadCgiRequesting;
    _Bool _hasMainBizCellExposed;
    unsigned int _tlPicPreloadSyncGapTimerLoopCount;
    unsigned int _tlPicPreloadUnreadCountBeforeSync;
    unsigned int _tlPicPreloadDownloadPicTimerLoopCount;
    unsigned int _tlPicPreloadDownloadStartTimeSec;
    unsigned int _tlPicPreloadDownloadPicCount;
    MemoryMappedKV *_mappedKV;
    BrandTimelineMsgDB *_brandMsgDB;
    MMBaseSessionStorage *_sessionStorage;
    BrandSessionCache *_mainSessionCache;
    NSData *_oldSessionCacheData;
    NSObject<OS_dispatch_queue> *_m_workerThread;
    NSMutableArray *_arrTmpToAddMsg;
    unsigned long long _lastDeleteTooOldTLRecordTime;
    BTOftenReadBizCache *_oftenReadBizCache;
    NSData *_oldOftenReadBizCacheData;
    NSDate *_lastExpandMoreSubscribedMsgDate;
    NSMutableSet *_recoFlowFeedbackCardIdHistory;
    CDUnknownBlockType _tlResortCompleteBlock;
    MMTimer *_tlPicPreloadSyncGapTimer;
    MMTimer *_tlPicPreloadDownloadPicTimer;
    NSMutableArray *_tlPicPreloadDownloadPicUrlArr;
    BrandMainSessionExposeItem *_exposeItemInMainSession;
    unsigned long long _lastInsertRecCardFakeSvrId;
}

+ (_Bool)isBrandTimelineOpen;
+ (id)bizUserNameForMsgWrap:(id)arg1;
+ (id)getMainSessionNoPrefixContentByMsg:(id)arg1;
+ (_Bool)isBrandNotifyNoPrefixNameWithWrapMsg:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasMainBizCellExposed; // @synthesize hasMainBizCellExposed=_hasMainBizCellExposed;
@property(nonatomic) unsigned long long lastInsertRecCardFakeSvrId; // @synthesize lastInsertRecCardFakeSvrId=_lastInsertRecCardFakeSvrId;
@property(retain, nonatomic) BrandMainSessionExposeItem *exposeItemInMainSession; // @synthesize exposeItemInMainSession=_exposeItemInMainSession;
@property(nonatomic) unsigned int tlPicPreloadDownloadPicCount; // @synthesize tlPicPreloadDownloadPicCount=_tlPicPreloadDownloadPicCount;
@property(nonatomic) unsigned int tlPicPreloadDownloadStartTimeSec; // @synthesize tlPicPreloadDownloadStartTimeSec=_tlPicPreloadDownloadStartTimeSec;
@property(retain, nonatomic) NSMutableArray *tlPicPreloadDownloadPicUrlArr; // @synthesize tlPicPreloadDownloadPicUrlArr=_tlPicPreloadDownloadPicUrlArr;
@property(nonatomic) unsigned int tlPicPreloadDownloadPicTimerLoopCount; // @synthesize tlPicPreloadDownloadPicTimerLoopCount=_tlPicPreloadDownloadPicTimerLoopCount;
@property(retain, nonatomic) MMTimer *tlPicPreloadDownloadPicTimer; // @synthesize tlPicPreloadDownloadPicTimer=_tlPicPreloadDownloadPicTimer;
@property(nonatomic) unsigned int tlPicPreloadUnreadCountBeforeSync; // @synthesize tlPicPreloadUnreadCountBeforeSync=_tlPicPreloadUnreadCountBeforeSync;
@property(nonatomic) unsigned int tlPicPreloadSyncGapTimerLoopCount; // @synthesize tlPicPreloadSyncGapTimerLoopCount=_tlPicPreloadSyncGapTimerLoopCount;
@property(retain, nonatomic) MMTimer *tlPicPreloadSyncGapTimer; // @synthesize tlPicPreloadSyncGapTimer=_tlPicPreloadSyncGapTimer;
@property(nonatomic) _Bool isTlPicPreloadCgiRequesting; // @synthesize isTlPicPreloadCgiRequesting=_isTlPicPreloadCgiRequesting;
@property(copy, nonatomic) CDUnknownBlockType tlResortCompleteBlock; // @synthesize tlResortCompleteBlock=_tlResortCompleteBlock;
@property(nonatomic) _Bool isCurrentResorting; // @synthesize isCurrentResorting=_isCurrentResorting;
@property(nonatomic) _Bool hasShowFirstGuideLine; // @synthesize hasShowFirstGuideLine=_hasShowFirstGuideLine;
@property(retain, nonatomic) NSMutableSet *recoFlowFeedbackCardIdHistory; // @synthesize recoFlowFeedbackCardIdHistory=_recoFlowFeedbackCardIdHistory;
@property(retain, nonatomic) NSDate *lastExpandMoreSubscribedMsgDate; // @synthesize lastExpandMoreSubscribedMsgDate=_lastExpandMoreSubscribedMsgDate;
@property(nonatomic) _Bool isTimelinePageActive; // @synthesize isTimelinePageActive=_isTimelinePageActive;
@property(retain, nonatomic) NSData *oldOftenReadBizCacheData; // @synthesize oldOftenReadBizCacheData=_oldOftenReadBizCacheData;
@property(retain, nonatomic) BTOftenReadBizCache *oftenReadBizCache; // @synthesize oftenReadBizCache=_oftenReadBizCache;
@property(nonatomic) unsigned long long lastDeleteTooOldTLRecordTime; // @synthesize lastDeleteTooOldTLRecordTime=_lastDeleteTooOldTLRecordTime;
@property(retain, nonatomic) NSMutableArray *arrTmpToAddMsg; // @synthesize arrTmpToAddMsg=_arrTmpToAddMsg;
@property(nonatomic) _Bool needUpdateMainSession; // @synthesize needUpdateMainSession=_needUpdateMainSession;
@property(nonatomic) _Bool isMigratingData; // @synthesize isMigratingData=_isMigratingData;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *m_workerThread; // @synthesize m_workerThread=_m_workerThread;
@property(retain, nonatomic) NSData *oldSessionCacheData; // @synthesize oldSessionCacheData=_oldSessionCacheData;
@property(retain, nonatomic) BrandSessionCache *mainSessionCache; // @synthesize mainSessionCache=_mainSessionCache;
@property(retain, nonatomic) MMBaseSessionStorage *sessionStorage; // @synthesize sessionStorage=_sessionStorage;
@property(retain, nonatomic) BrandTimelineMsgDB *brandMsgDB; // @synthesize brandMsgDB=_brandMsgDB;
@property(retain, nonatomic) MemoryMappedKV *mappedKV; // @synthesize mappedKV=_mappedKV;
- (void)onLiveTaskUpdateStatus:(id)arg1;
- (void)onBatchBrandLivingStatusChange:(id)arg1;
- (void)onBrandLivingStatusChange:(id)arg1 isLiving:(_Bool)arg2 finderFeedExportId:(id)arg3;
- (void)onEventImageLoadNotificationType:(int)arg1 reqContext:(id)arg2 url:(id)arg3 extraInfo:(id)arg4;
- (void)onDeleteSessionOfUser:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onModifyContact:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onFinishMigrate;
- (void)OnDelMsg:(id)arg1 DelAll:(_Bool)arg2;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)handleNewMsg:(id)arg1 msgWrap:(id)arg2;
- (void)OnMsgNotAddDBNotify:(id)arg1 MsgWrap:(id)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)onMsgDBInitFinish;
- (void)handleStrategyResp:(id)arg1;
- (void)sendBizStrategyRequest;
- (void)setDisplayMode:(unsigned int)arg1;
- (unsigned int)getDisplayMode;
- (_Bool)canBrandTimelineVideoItemAutoPlayByNetworkStatus;
- (_Bool)canBrandTimelineVideoItemAutoPlay;
- (_Bool)isABTestOpen;
- (_Bool)checkCGIBaseRespSuccess:(id)arg1;
- (void)resetMappedKv;
- (void)checkIfNeedHandleMsg;
- (void)checkIfNeedMigrate;
- (void)onServiceClearData;
- (void)onMainControllStart;
- (void)onServiceEnterForeground;
- (void)onServiceInit;
- (void)dealloc;
- (id)getMsgByMsgId:(unsigned int)arg1;
- (void)clearBrandTimelineData;
- (void)migrateBrandSessionAndMsg2Timeline;
- (_Bool)isFinishMigrateBrandMsg;
- (void)setMigrateFinishFlag:(_Bool)arg1;
- (void)OnUnReadCountChange:(id)arg1;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (_Bool)sectionIsFold:(id)arg1;
- (unsigned long long)sectionShowCount:(id)arg1;
- (unsigned long long)preloadPicCountWithMsg:(id)arg1;
- (_Bool)isTopItemShowLargeCover:(id)arg1;
- (void)downloadReaderWrapsListCoverImageIfNeed:(id)arg1;
- (void)downloadReaderWrapsCoverImageIfNeed:(id)arg1;
- (void)tryDeleteTooOldRecordIfNeed;
- (void)handleNewMsgByTimeline:(id)arg1;
- (_Bool)isListMsgClearUnread;
- (void)setListMsgClearUnread:(_Bool)arg1;
- (void)setStarContactMsgUnreadStatus:(id)arg1;
- (void)clearStarContactMsgUnreadStatus:(id)arg1;
- (void)clearAllTimelineMsgUnreadStatus;
- (unsigned int)getTimelineUnreadMsgCount;
- (unsigned int)getStarUnreadMsgCount;
- (unsigned int)getTimelineMsgMaxGroupId;
- (void)refreshDividingLineSequenceIdFromDB;
- (unsigned long long)getDividingLineSequenceId;
- (void)setDividingLineSequenceId:(unsigned long long)arg1;
- (void)setTimelinePageActive:(_Bool)arg1;
- (void)asyncSetTimelineMsgArrExposureInTL:(id)arg1;
- (void)setTimelineMsgWrap:(id)arg1 unfold:(_Bool)arg2;
- (void)setTimelineMsgWrapExpand:(id)arg1;
- (id)getMsgForNewResortPlanWithMsgCount:(unsigned int)arg1 bAllNewMsgResorted:(_Bool *)arg2;
- (void)notifyAddBrandTimelineMsg:(id)arg1;
- (void)asyncUpdateMsgOnByteBuffer:(id)arg1;
- (_Bool)deleteMsgWithMsgId:(unsigned int)arg1;
- (_Bool)deleteMsg:(id)arg1;
- (void)deleteBrandMsg:(id)arg1 msgWrap:(id)arg2;
- (void)deleteBrandSession:(id)arg1;
- (id)getMsgForOldResortPlanBySequenceId:(unsigned long long)arg1 limit:(unsigned int)arg2 notInSeqIdArr:(id)arg3;
- (id)getTimelineMsgFromSequenceId:(unsigned long long)arg1 toCreateTime:(unsigned int)arg2 limit:(unsigned int)arg3;
- (id)getTimelineMsgFromSequenceId:(unsigned long long)arg1 toSequenceId:(unsigned long long)arg2 limit:(unsigned int)arg3;
- (id)getTimelineMsgToSequenceId:(unsigned long long)arg1 limit:(unsigned int)arg2;
- (id)getTimelineMsgFromSequenceId:(unsigned long long)arg1 limit:(unsigned int)arg2 includeMsgTypeArr:(id)arg3;
- (id)getTimelineMsgFromSequenceId:(unsigned long long)arg1 limit:(unsigned int)arg2 excludeMsgTypeArr:(id)arg3;
- (id)getTimelineMsgFromSequenceId:(unsigned long long)arg1 groupId:(id)arg2 limit:(unsigned int)arg3;
- (id)getTimelineMsgFromSequenceId:(unsigned long long)arg1 limit:(unsigned int)arg2;
- (id)getLastTimelineMsgByCreateTime:(id)arg1;
- (id)getLastTimelineMsgByCreateTime:(id)arg1 changeForDisplay:(_Bool)arg2;
- (id)getLastTimelineMsgByCreateTime;
- (id)getMsgByMsgSvrId:(unsigned long long)arg1 userName:(id)arg2;
- (id)getMsgBySeqId:(unsigned long long)arg1;
- (id)getLastTimelineMsgBySequenceId;
- (id)getLastLiveNotifyMsg;
- (id)getLastMsg;
- (unsigned int)getTimelineMsgMaxCreateTime;
- (void)reportWithScene:(unsigned int)arg1;
- (void)resetPicPreloadState;
- (_Bool)isPicPreloadSwitchOpen:(unsigned int)arg1;
- (void)onPreloadFinish;
- (void)onAfterDownloadPicGap;
- (void)startDownloadPicTask;
- (void)onAfterSyncGap;
- (void)tryPreloadTLPicIfNeed:(unsigned int)arg1;
- (void)onRefreshStrategyFinish:(_Bool)arg1;
- (void)handleRefreshTLPicPreloadStrategyRsp:(id)arg1;
- (void)tryRefreshTLPicPreloadStrategyIfNeed;
- (void)reportMainSessionMsgExpose:(id)arg1 exposeItem:(id)arg2 isExposed:(_Bool)arg3;
- (void)refreshServiceTriggerToRefresh:(id)arg1;
- (id)isUserHasSpecalSessionInfo:(id)arg1;
- (_Bool)isMessageShouldHandled:(id)arg1;
- (_Bool)isUserShouldHandled:(id)arg1;
- (void)onTimelineAbtestChange:(_Bool)arg1;
- (void)onImportMessageSuccess;
- (void)onRebuildSessionStorage;
- (void)workThread_reportAndUpdateExposeItem:(id)arg1 isExpose:(_Bool)arg2;
- (void)handleMainSessionDisappearWithMsg:(id)arg1 rowIndex:(unsigned int)arg2 sessionInfo:(id)arg3;
- (void)handleMainSessionExposeWithMsg:(id)arg1 rowIndex:(unsigned int)arg2 sessionInfo:(id)arg3;
- (void)onMainSessionTabSelect;
- (void)onMainSessionExpose:(id)arg1 isExpose:(_Bool)arg2 rowIndex:(unsigned int)arg3;
- (void)addBrandSessionHolderToSessionList;
- (void)getBrandNotificationPrefixNameFromMsgContent:(id)arg1 getNickName:(id *)arg2 getNewContent:(id *)arg3;
- (_Bool)shouldShowNewNotifyMsgCount:(id)arg1;
- (id)genMainFrameSessionInfo;
- (_Bool)needShowUnreadCountOnMainSession;
- (void)clearMainSessionCacheRedDot;
- (void)updateMainSessionLatestMsg;
- (void)updateMainSessionCache;
- (void)rebuildMainSessionCacheFromDB;
- (void)tryLoadMainSessionCache;
- (void)saveMainSessionCache;
- (id)pathForMainSessionCache;
- (_Bool)isMainSessionCacheValid;
- (void)onUpdateMainSessionByFinishMigration;
- (void)onUpdateMainSessionByModMsg:(id)arg1 msgWrap:(id)arg2;
- (void)onUpdateMainSessionByDelMsg:(id)arg1 msgWrap:(id)arg2;
- (void)onUpdateMainSessionByDelBrandSession:(id)arg1;
- (void)onUpdateMainSessionByModifyContactIfNeed:(id)arg1;
- (void)onUpdateMainSession;
- (void)innerNotifyDeletedMainSessionCache;
- (unsigned int)unreadCountFromMainSessionCache;
- (id)lastMessageFromMainSessionCache;
- (void)clearMainSessionRedDot;
- (_Bool)hasMainSessionRedDot;
- (void)removeOftenReadNewLiveStatus:(id)arg1;
- (void)tryUpdateBrandOftenReadLive;
- (_Bool)updateOftenReadContactData:(id)arg1 isLiving:(_Bool)arg2 feedExportId:(id)arg3;
- (void)tryUpdateOftenReadWithBatchStatusChange:(id)arg1;
- (void)handleOftenReadContact:(id)arg1 isLiving:(_Bool)arg2 feedExportId:(id)arg3;
- (void)openLiveWithContact:(id)arg1 fromVC:(id)arg2;
- (_Bool)isOftenReadContactHasNewLive:(id)arg1;
- (_Bool)isOftenReadContactLiving:(id)arg1;
- (id)getOftenReadContactData:(id)arg1;
- (_Bool)isContactHasMsgInTime:(unsigned int)arg1 contact:(id)arg2;
- (void)handleDeleteOftenReadContact:(id)arg1;
- (void)handleDeleteOftenReadMsg:(id)arg1;
- (void)handleFetchOftenReadResp:(id)arg1;
- (void)updateOftenReadContactByClickMsg:(id)arg1;
- (void)updateOftenReadContactByEnterSession:(id)arg1;
- (void)updateOftenReadByNewMsg:(id)arg1 userName:(id)arg2;
- (_Bool)isContactHasNewMsg:(id)arg1;
- (_Bool)isContactOftenRead:(id)arg1;
- (void)fetchOftenReadBizFromSvr;
- (void)asyncUpdateOftenReadContactByLastMsgTime;
- (void)updateOftenReadContactByLastMsgTime;
- (id)getOftenReadBizContactCache:(_Bool)arg1;
- (void)tryLoadOftenReadFromCache;
- (void)saveOftenReadBizCache;
- (id)pathForOftenReadBizCache;
- (void)setOftenReadNewMsgTime:(unsigned int)arg1;
- (unsigned int)oftenReadNewMsgTime;
- (void)setIsOftenReadRankByServer:(_Bool)arg1;
- (_Bool)isOftenReadRankByServer;
- (id)mmkvKeyWithPrefix:(id)arg1 wrapMsg:(id)arg2;
- (void)handleRecycleReportCgiWrap:(id)arg1;
- (void)reportRecycleSuccessWithReportArr:(id)arg1;
- (void)reportRecycleFailWithReason:(unsigned long long)arg1 msg:(id)arg2;
- (unsigned int)recycleCgiReqInterval;
- (unsigned int)recycleCountWithScene:(unsigned long long)arg1;
- (id)recyclableCardArrByteStrWithScene:(unsigned long long)arg1;
- (id)recyclableCardArrWithScene:(unsigned long long)arg1;
- (void)handleRecCardRecycleRspWithScene:(unsigned long long)arg1 maxMsgCount:(unsigned int)arg2 recycleList:(id)arg3;
- (void)handleRecCardRecycleCgiWrap:(id)arg1;
- (void)sendRecycleRecCardCgiWithScene:(unsigned long long)arg1;
- (void)handleRecCardClickFeedbackConfirmBtnCgiWrap:(id)arg1;
- (void)reportRecCardClickFeedbackConfirmBtnCgiWithSectionData:(id)arg1 extInfo:(id)arg2;
- (_Bool)shouldDeleteArticleCardWhenRefreshCard:(id)arg1;
- (void)handleRefreshRecommendArticleCard:(id)arg1;
- (void)handleRefreshRecommendArticleRsp:(id)arg1;
- (void)refreshRecommendArticleIfNeed:(id)arg1;
- (void)refreshRecommendArticleArrIfNeed:(id)arg1;
- (void)handleRefreshRecommendCardRsp:(id)arg1;
- (void)refreshRecommendCardIfNeed:(id)arg1;
- (void)refreshRecommendMsgIfNeed:(id)arg1;
- (_Bool)isAnyRecommendCardInLastGroup;
- (_Bool)shouldDiscardAfterFilterSubscribedContact:(id)arg1;
- (_Bool)hasSameCardIdMsgInTL:(id)arg1;
- (_Bool)hasSameSvrIdMsgInTL:(id)arg1;
- (unsigned long long)genSvrIdIfZero:(unsigned long long)arg1;
- (void)deleteAllRecommendMsg;
- (_Bool)insertRecCardWrapperToDBAndUpdateMainSessionIfNeed:(id)arg1;
- (void)tryInsertRecommendCardToDBWhenClickBrandSession;
- (void)checkAdvanceLaunchCanvasClient:(id)arg1;
- (void)reportHandleRecommendXml:(unsigned long long)arg1 recCardWrapper:(id)arg2;
- (void)handleRecommendXmlContent:(id)arg1 msgSvrId:(unsigned long long)arg2 createTime:(unsigned int)arg3 fromScene:(unsigned long long)arg4;
- (void)handleXmlPushRecommendMsg:(id)arg1;
- (_Bool)isXmlPushRecommendMsg:(id)arg1;
- (void)reportResortIdKey:(unsigned int)arg1 value:(unsigned int)arg2;
- (void)reportResortIdKey:(unsigned int)arg1;
- (void)callCompleteBlockInMainThread;
- (void)notifyHandleResortFinish:(_Bool)arg1 resortedMsgArr:(id)arg2;
- (_Bool)resortMsgArr:(id)arg1 maxGroupId:(unsigned int)arg2 rankSessionId:(id)arg3 pGetMinSeqId:(unsigned long long *)arg4 pGetResortedMsgArr:(id *)arg5;
- (void)handleResortResp:(id)arg1;
- (void)realTryResortTimelineIfNeed:(unsigned long long)arg1 bUseNewPlan:(_Bool)arg2;
- (void)tryResortTimelineIfNeed:(unsigned long long)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)tryResortTimelineIfNeed:(unsigned long long)arg1;
- (_Bool)isTimelineResortSwitchOpenForScene:(unsigned long long)arg1;
- (_Bool)isTimelineResortSwitchOpen;
- (void)internalHandleNewNotificationByNewXml:(id)arg1;
- (void)internalHandleNewNotification:(id)arg1;
- (void)clearAllNotificationUnreadStatus;
- (_Bool)setNotificationDelFlag:(id)arg1 msgWrap:(id)arg2;
- (void)deleteUnreadNotificationForSession:(id)arg1;
- (_Bool)deleteNotification:(id)arg1;
- (id)getNotificationBySvrId:(unsigned long long)arg1;
- (id)getNotificationFromCreateTime:(unsigned int)arg1 limit:(unsigned int)arg2;
- (id)getUnreadNotificationFromCreateTime:(unsigned int)arg1 limit:(unsigned int)arg2;
- (unsigned int)getNotificationUnreadCountByUserName:(id)arg1;
- (unsigned int)getNotificationUnreadCount;
- (id)getLastUnreadNotification;
- (id)getLastNotification;
- (void)reportMonitorIdKey:(unsigned int)arg1;
- (unsigned long long)isAdDataLegal:(id)arg1 getExpiredTime:(unsigned int *)arg2;
- (id)getAdInfoDicFromContent:(id)arg1;
- (id)getAdIdFromContent:(id)arg1;
- (id)getAdInfoDicFromMsgWrap:(id)arg1;
- (id)getAdIdFromMsgWrap:(id)arg1;
- (id)__canvasIdWithBizType:(unsigned int)arg1 bizId:(id)arg2;
- (void)doLaunchJsEngineWithItem:(id)arg1;
- (void)advanceLaunchJsEngineWithItem:(id)arg1;
- (_Bool)isAdvanceLaunchJSCoreOpen;
- (_Bool)isCheckFrequency;
- (void)sendCgiWithReq:(id)arg1 userData:(id)arg2;
- (void)handleTimelineCardCgiRsp:(id)arg1;
- (void)onCanvasAdCardFirstExposed:(id)arg1;
- (void)handleADCheckCgiRsp:(id)arg1;
- (id)genCheckAdCgiDataStrWithMsgArr:(id)arg1 pGetUserData:(id *)arg2;
- (void)sendCheckAdCgiWithMsgArr:(id)arg1;
- (_Bool)hasEnoughADCardExposedCountInOneDay;
- (id)getInsertedAdCardListWithLimit:(unsigned int)arg1;
- (_Bool)isAnyADCardInLastGroup;
- (void)deleteAdCardExposedInfo;
- (void)deleteAllAdCardMsg;
- (void)deleteAllExpiredADCardMsg;
- (void)deleteAllADCardMsgCreatedBeforeOneDay;
- (void)deleteAllExposedADCardMsg;
- (void)deleteADCardMsg:(id)arg1;
- (_Bool)canDeleteADCard;
- (_Bool)insertADCardMsg:(id)arg1 atPos:(unsigned int)arg2;
- (void)adjustADCardInDBIfNeed;
- (unsigned int)refreshIntervalSecWithScene:(unsigned long long)arg1;
- (void)handleADDataCgiRsp_Other:(id)arg1;
- (void)handleADDataCgiRsp_ExtInfo:(id)arg1;
- (void)handleADDataCgiRsp_Data:(id)arg1;
- (void)updateAdDataWithAId:(id)arg1 data:(id)arg2 expiredTimeSec:(unsigned int)arg3;
- (void)handleGetADDataFromPrefetcher:(id)arg1;
- (id)genADCardCgiDataStrWithScene:(unsigned long long)arg1;
- (void)handleAdvertisementExtInfo:(id)arg1;
- (void)handleADDataCgiRsp:(id)arg1;
- (void)delayDispatchMainCellExposeToAd;
- (void)dispatchAdPrefetcherEvent:(unsigned long long)arg1;
- (void)requestAdDataWithScene:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


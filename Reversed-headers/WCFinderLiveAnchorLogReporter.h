//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderLiveBaseLogReporter.h"

#import "IWCFinderLiveAnchorReporterCallback-Protocol.h"
#import "MMLiveReportEventMgrExt-Protocol.h"
#import "MMLiveTaskMgrExt-Protocol.h"
#import "WCFinderLiveExt-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSMutableString, NSString;

@interface WCFinderLiveAnchorLogReporter : WCFinderLiveBaseLogReporter <IWCFinderLiveAnchorReporterCallback, MMLiveReportEventMgrExt, WCFinderLiveExt, MMLiveTaskMgrExt>
{
    unsigned long long m_shareScene;
    unsigned long long m_profileViewShowTime;
    unsigned long long m_profileViewScene;
    unsigned int m_exchangeCameraCount;
    unsigned int m_complainCount;
    unsigned int m_allCommentCloseCount;
    unsigned int m_allCommentOpenCount;
    unsigned int m_personalCommentCloseCount;
    unsigned int m_personalCommentOpenCount;
    unsigned int m_kickOutCount;
    NSMutableDictionary *m_promoteGoodsDic;
    NSMutableDictionary *m_promoteGoodsStay;
    NSString *m_currPromoteGoods;
    unsigned int m_topCommentCount;
    unsigned int m_lotteryCount;
    unsigned int m_clapCount;
    unsigned int m_connectCount;
    NSMutableString *m_connectTime;
    unsigned long long m_connectStartTime;
    _Bool m_isConnecting;
    _Bool m_isGift;
    _Bool m_isLike;
    NSMutableString *m_anchorConnectTime;
    unsigned long long m_anchorConnectStartTime;
    unsigned long long m_shareTextStateCount;
    NSMutableArray *m_filePresentationInfos;
}

+ (void)reportOpenWxaShopWithLiveTask:(id)arg1 clickScene:(long long)arg2 appId:(id)arg3 clickId:(id)arg4;
- (void).cxx_destruct;
- (void)reportDropGiftAction:(unsigned long long)arg1;
- (id)reportStructWithFinderLiveTask:(id)arg1 actionType:(unsigned long long)arg2 actionResult:(id)arg3;
- (void)reportFansGroupAction:(long long)arg1;
- (void)reportClipTopicAction:(unsigned long long)arg1 topic:(id)arg2;
- (void)reportClipModeAction:(unsigned long long)arg1;
- (void)reportBannerAction:(unsigned long long)arg1 bannerId:(id)arg2;
- (void)reportScreenSharingAction:(long long)arg1 fileType:(id)arg2 duration:(double)arg3;
- (void)reportKnowAlertActionWithResult:(unsigned long long)arg1;
- (void)reportPauseAction:(long long)arg1 accumulatedTime:(long long)arg2;
- (void)reportMuteMicAction:(long long)arg1;
- (void)reportBeautyContainerActionWithType:(unsigned long long)arg1;
- (void)reportBGMusicAction:(long long)arg1 musicIdArr:(id)arg2;
- (void)reportClapAction;
- (void)reportAnchorRandomMicAction:(unsigned long long)arg1 withSessionId:(id)arg2;
- (void)reportAnchorMicPkAtion:(unsigned long long)arg1 withBattleSessionID:(id)arg2 active:(_Bool)arg3;
- (void)reportEnterMicProfile:(id)arg1;
- (void)reportAnchorMicAtion:(unsigned long long)arg1 withUsername:(id)arg2 withMictype:(unsigned long long)arg3 withInvitetype:(unsigned long long)arg4;
- (void)reportMicAtion:(unsigned long long)arg1;
- (void)reportMicSwitch:(unsigned long long)arg1;
- (void)reportRedPacketAction:(unsigned long long)arg1;
- (void)reportGiftRankAction:(unsigned long long)arg1;
- (void)reportAnchorCommentAction:(unsigned long long)arg1;
- (void)reportLotteryAction:(unsigned long long)arg1 withResult:(id)arg2;
- (void)reportFaceVerify:(unsigned long long)arg1;
- (void)notePromoteGoods:(id)arg1 promoteStatus:(_Bool)arg2;
- (void)reportHandoffAction:(unsigned long long)arg1;
- (void)reportLikeSwitch:(_Bool)arg1;
- (void)reportGiftSwitch:(_Bool)arg1;
- (void)reportCommerce:(unsigned long long)arg1 sceneNote:(id)arg2 productId:(unsigned long long)arg3;
- (void)reportShareSession:(unsigned long long)arg1 andUserArray:(id)arg2;
- (void)reportShareTextSate:(unsigned long long)arg1;
- (void)reportShareSns:(unsigned long long)arg1;
- (void)reportMinizaion:(unsigned long long)arg1;
- (void)reportOperaAction:(unsigned long long)arg1 withResult:(id)arg2;
- (void)reportExchangCamera;
- (void)reportPersonalAction:(unsigned long long)arg1 andUsr:(id)arg2;
- (void)reportAllComment:(unsigned long long)arg1 andTask:(id)arg2;
- (void)reportCommentTop:(id)arg1 withContent:(id)arg2;
- (void)reportLiveOut:(id)arg1;
- (void)reportStartLive;
- (void)reportLiveResult:(id)arg1 finderDataItem:(id)arg2 liveDurationSeconds:(unsigned int)arg3 liveAudiencesNum:(unsigned int)arg4 liveBeLikedNum:(unsigned int)arg5 liveNewFansNum:(unsigned int)arg6;
- (void)onAnchorLiveDropGiftAction:(unsigned long long)arg1;
- (void)onAnchorLiveClipTopicAction:(unsigned long long)arg1 topic:(id)arg2;
- (void)onAnchorLiveClipModeAction:(unsigned long long)arg1;
- (void)onAnchorLiveWeakNetWithContent:(long long)arg1;
- (void)onAnchorBannerAction:(unsigned long long)arg1 bannerId:(id)arg2;
- (void)onAnchorCommentAction:(unsigned long long)arg1;
- (void)onHandoffAction:(unsigned long long)arg1;
- (void)onScreenSharingAction:(long long)arg1 fileType:(id)arg2 duration:(double)arg3;
- (void)onClapAction;
- (void)onRedPacketAction:(unsigned long long)arg1;
- (void)onAnchorRandomMicAction:(unsigned long long)arg1 withSessionId:(id)arg2;
- (void)onAnchorMicPkAtion:(unsigned long long)arg1 withBattleSessionID:(id)arg2 active:(_Bool)arg3;
- (void)onEnterMicProfile:(id)arg1;
- (void)onAnchorMicClose:(id)arg1;
- (void)onAnchorMicAtion:(unsigned long long)arg1 withUsername:(id)arg2 withMictype:(unsigned long long)arg3 withInvitetype:(unsigned long long)arg4;
- (void)onMicSwitchAtion:(unsigned long long)arg1;
- (void)onMicAtion:(unsigned long long)arg1;
- (void)onOpenEncashPage;
- (void)onGiftRankAction:(unsigned long long)arg1;
- (void)onLotteryAction:(unsigned long long)arg1;
- (void)onLotteryCreate:(id)arg1;
- (void)onGoodsOrderButtonClicked:(id)arg1;
- (void)onOperationLiveShoppingButtonClicked:(id)arg1;
- (void)onGoodsItemSelected:(id)arg1 sceneNote:(id)arg2 shopContext:(id)arg3;
- (void)onOperateCoupon:(_Bool)arg1;
- (void)onAddGoodsButtonClicked:(id)arg1 withSceneNote:(id)arg2;
- (void)onPromoteStatusChanged:(id)arg1 promoteStatus:(_Bool)arg2;
- (void)onDeleteFinderShopShelfProduct:(id)arg1 productIds:(id)arg2;
- (void)onSetTopFinderShopShelfProduct:(id)arg1 productId:(unsigned long long)arg2;
- (void)onCloseFinderLiveError:(id)arg1 finderDataItem:(id)arg2 liveDurationSeconds:(unsigned int)arg3 liveAudiencesNum:(unsigned int)arg4 liveBeLikedNum:(unsigned int)arg5 liveNewFansNum:(unsigned int)arg6 maxOnlineCount:(unsigned int)arg7 audiencesAvgSeconds:(unsigned int)arg8;
- (void)noteFinderLiveStart:(id)arg1 isJoin:(_Bool)arg2;
- (void)onJoinLiveAfterAbnormal:(id)arg1;
- (void)onMMLiveStartFinishedWithLiveTask:(id)arg1 startExtraInfo:(id)arg2 startSuccess:(_Bool)arg3;
- (void)onCommentTop:(id)arg1 withContent:(id)arg2;
- (void)onFloatOperation:(unsigned long long)arg1;
- (void)onVerifyAction:(unsigned long long)arg1;
- (void)onCancleShareSession:(id)arg1;
- (void)onCancleShareTimeline;
- (void)onShareTextState;
- (void)onShareSession:(id)arg1;
- (void)onShareTimeline;
- (void)onProfileViewShow:(unsigned long long)arg1 andContact:(id)arg2;
- (void)onActionSheetClicked:(id)arg1 controller:(id)arg2 button:(id)arg3 buttonTitle:(id)arg4;
- (void)onBeautyResult:(id)arg1;
- (void)onFilterResult:(id)arg1;
- (void)onClickOperationView:(unsigned long long)arg1;
- (void)onReportEventTriggered:(id)arg1 controller:(id)arg2 view:(id)arg3 action:(SEL)arg4 target:(id)arg5;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


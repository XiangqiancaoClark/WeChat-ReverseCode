//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMLiveOperationView.h"

#import "GoodsPubbleUpdateExt-Protocol.h"
#import "MMFinderLiveDropGiftViewDelegate-Protocol.h"
#import "MMFinderLiveDropGiftViewModelDelegate-Protocol.h"
#import "MMFinderLiveMusicSettingInteractiveDelegate-Protocol.h"
#import "MMFinderLiveMusicSettingOperationDelegate-Protocol.h"
#import "MMFinderLiveMusicSettingReportDelegate-Protocol.h"
#import "MMFinderLiveRedPacketViewModelObserver-Protocol.h"
#import "MMLiveAnchorSEISynchronizeExt-Protocol.h"
#import "MMLiveBeautyOperationContainerViewDelegate-Protocol.h"
#import "MMLiveCameraOperationPanelDelegate-Protocol.h"
#import "MMLiveFilterOperationPanelDelegate-Protocol.h"
#import "MMLiveGameJoinTeamSettingViewDelegate-Protocol.h"
#import "MMLiveGameJoinTeamViewDelegate-Protocol.h"
#import "MMLiveLikeDataMgrExt-Protocol.h"
#import "MMLiveMorphTransitionExt-Protocol.h"
#import "MMLiveOperationPanelDelegate-Protocol.h"
#import "MMLivePauseViewDelegate-Protocol.h"
#import "MMLiveRewardGainRecordsViewDelegate-Protocol.h"
#import "MMLiveRewardGiftSelectionViewDelegate-Protocol.h"
#import "MMLiveRewardRecipientSelectionLogicDelegate-Protocol.h"
#import "MMWebImageViewDelegate-Protocol.h"
#import "PAGViewListener-Protocol.h"
#import "WCFinderHeadImageViewDelegate-Protocol.h"
#import "WCFinderLiveExt-Protocol.h"

@class FinderShopCouponInfo, GoodsPubbleTipView, LOTAnimationView, MMAudienceLiveLikePlayUtil, MMFinderLiveAdsItem, MMFinderLiveBannerView, MMFinderLiveCommentInputEmoticonView, MMFinderLiveCommentView, MMFinderLiveConnectMicAllUserInfoView, MMFinderLiveConnectMicUserView, MMFinderLiveDetailCardBaseView, MMFinderLiveDropGiftView, MMFinderLiveDropGiftViewModel, MMFinderLiveFansGroupDetailPanel, MMFinderLiveFansGroupJoinPanel, MMFinderLiveFansGroupMemberListPanel, MMFinderLiveFansGroupPayPanel, MMFinderLiveGoodsItem, MMFinderLiveHeaderView, MMFinderLiveLittleLotteryPacketView, MMFinderLiveLotteryDisplayLogic, MMFinderLiveLotteryPacketDisplayLogic, MMFinderLiveMusicSettingInteractiveView, MMFinderLiveMusicSettingOperationPanel, MMFinderLiveOnlineStateBar, MMFinderLiveOnlineStateView, MMFinderLiveRedPacketView, MMFinderLiveRedPacketViewModel, MMFinderLiveRewardRecievingLogic, MMFinderLiveRewardSendingLogic, MMFinderLiveTask, MMLiveAchorTimeLabel, MMLiveAchorWeakNetTipView, MMLiveBeautyOperationContainerView, MMLiveCameraOperationPanel, MMLiveFilterOperationPanel, MMLiveFollowConfirmView, MMLiveGameJoinTeamSettingView, MMLiveLikeAnimationUtil, MMLiveLikeButton, MMLiveLikeClapVoicePlayQueue, MMLiveLikeDataMgr, MMLiveLikePlayUtil, MMLiveLotteryDetailCardView, MMLiveMoreLivesIndicatorBar, MMLiveMuteMicAnimatedButton, MMLiveOperationPanel, MMLiveOperationPanelCell, MMLivePauseView, MMLiveRewardGainRecordsView, MMLiveRewardGiftRecievingAnimationView, MMLiveRewardGiftSelectionView, MMLiveRewardGiftSendingMoreBubbleView, MMLiveRewardRecipientSelectionView, MMLiveStarterWeakNetTipView, MMLoadingView, MMNormalTipsView, MMPageSheetBaseView, MMRectTriangleArrowView, MMUIButton, MMWebImageView, NSArray, NSDictionary, NSMutableArray, NSString, NSTimer, PAGView, UIImageView, UILabel, UIView, WCLiveBlurButton, WCLiveBottomTextButton;
@protocol MMFinderLiveOperationViewDelegate;

@interface MMFinderLiveOperationView : MMLiveOperationView <WCFinderHeadImageViewDelegate, GoodsPubbleUpdateExt, MMLiveLikeDataMgrExt, MMLiveCameraOperationPanelDelegate, MMLiveBeautyOperationContainerViewDelegate, MMLiveFilterOperationPanelDelegate, MMLiveRewardGainRecordsViewDelegate, MMLiveRewardRecipientSelectionLogicDelegate, MMLiveRewardGiftSelectionViewDelegate, MMFinderLiveRedPacketViewModelObserver, MMLiveGameJoinTeamViewDelegate, MMLiveGameJoinTeamSettingViewDelegate, MMLiveAnchorSEISynchronizeExt, MMFinderLiveMusicSettingOperationDelegate, MMFinderLiveMusicSettingInteractiveDelegate, MMFinderLiveMusicSettingReportDelegate, MMLivePauseViewDelegate, MMLiveOperationPanelDelegate, MMWebImageViewDelegate, WCFinderLiveExt, MMFinderLiveDropGiftViewDelegate, MMFinderLiveDropGiftViewModelDelegate, MMLiveMorphTransitionExt, PAGViewListener>
{
    _Bool _isLiveGameButtonButtonHighLighted;
    _Bool _canShowRedPacketView;
    _Bool _isShowGoToGameAppAlert;
    _Bool _isMuteAudioForIntterupted;
    _Bool _isInLive;
    _Bool _hideOperation;
    _Bool _isAssumingAudienceCommentEnabled;
    _Bool _isContentShow;
    _Bool _isControlButtonsShow;
    _Bool _isShoppingAvailable;
    _Bool _shouldShowRedPacketPanel;
    _Bool _isShakeForLike;
    _Bool _hasCloseBannerView;
    _Bool _isEditTopic;
    id <MMFinderLiveOperationViewDelegate> _operationDelegate;
    MMFinderLiveOnlineStateView *onlineStateView;
    NSMutableArray *_displayingWidgetViews;
    MMFinderLiveConnectMicUserView *_connectMicUserView;
    WCLiveBottomTextButton *_connectMicButton;
    MMFinderLiveConnectMicAllUserInfoView *_connectMicAllUserInfoView;
    WCLiveBottomTextButton *_liveGameButton;
    FinderShopCouponInfo *_currentDisplayCouponInfo;
    MMFinderLiveGoodsItem *_currentDisplayGoodsItem;
    MMLivePauseView *_pauseView;
    MMLiveMoreLivesIndicatorBar *_moreLivesIndicatorBar;
    NSString *_gameFrameSetRootId;
    NSString *_gamePkgAppId;
    NSDictionary *_gameFrameSetViews;
    CDUnknownBlockType _hitTestWithEventAction;
    MMLoadingView *_loadingView;
    unsigned long long _onlineUserCount;
    unsigned long long _onlineViewCount;
    unsigned long long _rewardWecoinCnt;
    unsigned long long _rewardTotalAmountInHeat;
    unsigned long long _heatValue;
    long long _currentOrientation;
    UIView *_backTapView;
    MMFinderLiveHeaderView *_liveHeaderView;
    MMFinderLiveOnlineStateBar *_onlineStateBar;
    MMLiveAchorTimeLabel *_anchorTimeLabel;
    MMLiveAchorWeakNetTipView *_anchorWeakTipView;
    MMLiveStarterWeakNetTipView *_weakNetTipView;
    GoodsPubbleTipView *_goodsTipView;
    MMUIButton *_goodsTipCloseBtn;
    MMFinderLiveAdsItem *_currentDisplayAdsItem;
    NSTimer *_syncCouponInfoTimer;
    LOTAnimationView *_largeLotteryPacketView;
    MMFinderLiveLittleLotteryPacketView *_littleLotteryPacketView;
    MMLiveLotteryDetailCardView *_lotteryDetailCardView;
    MMFinderLiveLotteryPacketDisplayLogic *_lotteryPacketDisplayLogic;
    MMFinderLiveLotteryDisplayLogic *_lotteryDisplayLogic;
    MMFinderLiveRedPacketView *_redPacketView;
    MMFinderLiveRedPacketViewModel *_redPacketViewModel;
    MMLiveOperationPanel *_redPacketPanel;
    MMLiveOperationPanelCell *_lotteryPanelCell;
    MMLiveOperationPanelCell *_redPacketPanelCell;
    WCLiveBottomTextButton *_musicSettingButton;
    WCLiveBottomTextButton *_cameraOperationButton;
    WCLiveBottomTextButton *_anchorLikeButton;
    MMLiveLikeButton *_anchorClipButton;
    WCLiveBottomTextButton *_liveShoppingButton;
    MMLiveLikeButton *_likeButton;
    WCLiveBottomTextButton *_liveLotteryButton;
    WCLiveBottomTextButton *_liveRedPacketButton;
    WCLiveBottomTextButton *_liveScreenSharingButton;
    MMWebImageView *_buttonImageView;
    NSMutableArray *_bottomBtnList;
    double _rightWidgetsLeft;
    MMFinderLiveCommentInputEmoticonView *_inputEmoticonView;
    WCLiveBlurButton *_selectGiftButton;
    MMLiveRewardGiftSelectionView *_giftSelectionView;
    MMLiveRewardGiftRecievingAnimationView *_giftRecievingAnimationView;
    MMLiveRewardGiftSendingMoreBubbleView *_sendingMoreBubbleView;
    MMFinderLiveRewardSendingLogic *_rewardSendingLogic;
    MMFinderLiveRewardRecievingLogic *_rewardRecievingLogic;
    MMLiveRewardGainRecordsView *_recordsView;
    MMLiveRewardRecipientSelectionView *_rewardRecipientSelectionView;
    MMFinderLiveFansGroupJoinPanel *_joinFansGroupPanel;
    MMFinderLiveFansGroupPayPanel *_payFansGroupPanel;
    MMFinderLiveFansGroupDetailPanel *_fansGroupDetailPanel;
    MMFinderLiveFansGroupMemberListPanel *_memberListPanel;
    MMLiveLikeAnimationUtil *_audienceSelflikeAnimationUtil;
    MMLiveLikeAnimationUtil *_audienceOtherLikeAnimationUtil;
    MMLiveLikeAnimationUtil *_anchorlikeAnimationUtil;
    MMLiveLikePlayUtil *_anchorLikePlayUtil;
    MMAudienceLiveLikePlayUtil *_audienceLikePlayUtil;
    MMLiveLikeClapVoicePlayQueue *_likeClapVoicePlayQueue;
    unsigned long long _maxLikeCountOnce;
    UIView *_likeAnimationWrapper;
    MMNormalTipsView *_likeTipsView;
    long long _likeMode;
    MMLiveBeautyOperationContainerView *_beautyContainerView;
    MMLiveCameraOperationPanel *_cameraOperationPanel;
    MMLiveFilterOperationPanel *_filterOperationPanel;
    MMNormalTipsView *_gameTipsView;
    MMPageSheetBaseView *_gameJoinTeamView;
    MMLiveGameJoinTeamSettingView *_gameJoinTeamSettingView;
    MMRectTriangleArrowView *_gameInfoTipsView;
    CDUnknownBlockType _gameInfoTipsViewLayoutAction;
    MMFinderLiveMusicSettingOperationPanel *_musicSettingOprationPanel;
    MMFinderLiveMusicSettingInteractiveView *_musicSettingInteractiveView;
    NSString *_muteAudioTip;
    UIView *_muteAudioTipView;
    UIImageView *_muteAudioIcon;
    UILabel *_muteAudioTipLabel;
    UIView *_pureAudioModeTipView;
    UILabel *_pureAudioModeTipLabel;
    PAGView *_pureAudioModeVolumeAnimationView;
    MMLiveMuteMicAnimatedButton *_muteMicButton;
    double _pureAudioModeTipViewAlphaForAudience;
    MMLiveFollowConfirmView *_followConfirmView;
    MMFinderLiveBannerView *_bannerView;
    NSArray *_gameFrameSetConfigs;
    MMFinderLiveDropGiftView *_dropGiftView;
    MMFinderLiveDetailCardBaseView *_dropGiftDetailCardView;
    MMFinderLiveDropGiftViewModel *_dropGiftViewModel;
    NSString *_currPackageId;
    PAGView *_dropGiftPagView;
    long long _bCanShowDropGiftPagViewFlag;
}

- (void).cxx_destruct;
@property(nonatomic) long long bCanShowDropGiftPagViewFlag; // @synthesize bCanShowDropGiftPagViewFlag=_bCanShowDropGiftPagViewFlag;
@property(retain, nonatomic) PAGView *dropGiftPagView; // @synthesize dropGiftPagView=_dropGiftPagView;
@property(retain, nonatomic) NSString *currPackageId; // @synthesize currPackageId=_currPackageId;
@property(retain, nonatomic) MMFinderLiveDropGiftViewModel *dropGiftViewModel; // @synthesize dropGiftViewModel=_dropGiftViewModel;
@property(retain, nonatomic) MMFinderLiveDetailCardBaseView *dropGiftDetailCardView; // @synthesize dropGiftDetailCardView=_dropGiftDetailCardView;
@property(retain, nonatomic) MMFinderLiveDropGiftView *dropGiftView; // @synthesize dropGiftView=_dropGiftView;
@property(retain, nonatomic) NSArray *gameFrameSetConfigs; // @synthesize gameFrameSetConfigs=_gameFrameSetConfigs;
@property(nonatomic) _Bool isEditTopic; // @synthesize isEditTopic=_isEditTopic;
@property(retain, nonatomic) MMFinderLiveBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(nonatomic) _Bool hasCloseBannerView; // @synthesize hasCloseBannerView=_hasCloseBannerView;
@property(retain, nonatomic) MMLiveFollowConfirmView *followConfirmView; // @synthesize followConfirmView=_followConfirmView;
@property(nonatomic) double pureAudioModeTipViewAlphaForAudience; // @synthesize pureAudioModeTipViewAlphaForAudience=_pureAudioModeTipViewAlphaForAudience;
@property(retain, nonatomic) MMLiveMuteMicAnimatedButton *muteMicButton; // @synthesize muteMicButton=_muteMicButton;
@property(retain, nonatomic) PAGView *pureAudioModeVolumeAnimationView; // @synthesize pureAudioModeVolumeAnimationView=_pureAudioModeVolumeAnimationView;
@property(retain, nonatomic) UILabel *pureAudioModeTipLabel; // @synthesize pureAudioModeTipLabel=_pureAudioModeTipLabel;
@property(retain, nonatomic) UIView *pureAudioModeTipView; // @synthesize pureAudioModeTipView=_pureAudioModeTipView;
@property(retain, nonatomic) UILabel *muteAudioTipLabel; // @synthesize muteAudioTipLabel=_muteAudioTipLabel;
@property(retain, nonatomic) UIImageView *muteAudioIcon; // @synthesize muteAudioIcon=_muteAudioIcon;
@property(retain, nonatomic) UIView *muteAudioTipView; // @synthesize muteAudioTipView=_muteAudioTipView;
@property(copy, nonatomic) NSString *muteAudioTip; // @synthesize muteAudioTip=_muteAudioTip;
@property(retain, nonatomic) MMFinderLiveMusicSettingInteractiveView *musicSettingInteractiveView; // @synthesize musicSettingInteractiveView=_musicSettingInteractiveView;
@property(retain, nonatomic) MMFinderLiveMusicSettingOperationPanel *musicSettingOprationPanel; // @synthesize musicSettingOprationPanel=_musicSettingOprationPanel;
@property(copy, nonatomic) CDUnknownBlockType gameInfoTipsViewLayoutAction; // @synthesize gameInfoTipsViewLayoutAction=_gameInfoTipsViewLayoutAction;
@property(retain, nonatomic) MMRectTriangleArrowView *gameInfoTipsView; // @synthesize gameInfoTipsView=_gameInfoTipsView;
@property(nonatomic) __weak MMLiveGameJoinTeamSettingView *gameJoinTeamSettingView; // @synthesize gameJoinTeamSettingView=_gameJoinTeamSettingView;
@property(nonatomic) __weak MMPageSheetBaseView *gameJoinTeamView; // @synthesize gameJoinTeamView=_gameJoinTeamView;
@property(retain, nonatomic) MMNormalTipsView *gameTipsView; // @synthesize gameTipsView=_gameTipsView;
@property(retain, nonatomic) MMLiveFilterOperationPanel *filterOperationPanel; // @synthesize filterOperationPanel=_filterOperationPanel;
@property(retain, nonatomic) MMLiveCameraOperationPanel *cameraOperationPanel; // @synthesize cameraOperationPanel=_cameraOperationPanel;
@property(retain, nonatomic) MMLiveBeautyOperationContainerView *beautyContainerView; // @synthesize beautyContainerView=_beautyContainerView;
@property(nonatomic) long long likeMode; // @synthesize likeMode=_likeMode;
@property(retain, nonatomic) MMNormalTipsView *likeTipsView; // @synthesize likeTipsView=_likeTipsView;
@property(retain, nonatomic) UIView *likeAnimationWrapper; // @synthesize likeAnimationWrapper=_likeAnimationWrapper;
@property(nonatomic) unsigned long long maxLikeCountOnce; // @synthesize maxLikeCountOnce=_maxLikeCountOnce;
@property(nonatomic) _Bool isShakeForLike; // @synthesize isShakeForLike=_isShakeForLike;
@property(retain, nonatomic) MMLiveLikeClapVoicePlayQueue *likeClapVoicePlayQueue; // @synthesize likeClapVoicePlayQueue=_likeClapVoicePlayQueue;
@property(retain, nonatomic) MMAudienceLiveLikePlayUtil *audienceLikePlayUtil; // @synthesize audienceLikePlayUtil=_audienceLikePlayUtil;
@property(retain, nonatomic) MMLiveLikePlayUtil *anchorLikePlayUtil; // @synthesize anchorLikePlayUtil=_anchorLikePlayUtil;
@property(retain, nonatomic) MMLiveLikeAnimationUtil *anchorlikeAnimationUtil; // @synthesize anchorlikeAnimationUtil=_anchorlikeAnimationUtil;
@property(retain, nonatomic) MMLiveLikeAnimationUtil *audienceOtherLikeAnimationUtil; // @synthesize audienceOtherLikeAnimationUtil=_audienceOtherLikeAnimationUtil;
@property(retain, nonatomic) MMLiveLikeAnimationUtil *audienceSelflikeAnimationUtil; // @synthesize audienceSelflikeAnimationUtil=_audienceSelflikeAnimationUtil;
@property(nonatomic) __weak MMFinderLiveFansGroupMemberListPanel *memberListPanel; // @synthesize memberListPanel=_memberListPanel;
@property(nonatomic) __weak MMFinderLiveFansGroupDetailPanel *fansGroupDetailPanel; // @synthesize fansGroupDetailPanel=_fansGroupDetailPanel;
@property(nonatomic) __weak MMFinderLiveFansGroupPayPanel *payFansGroupPanel; // @synthesize payFansGroupPanel=_payFansGroupPanel;
@property(nonatomic) __weak MMFinderLiveFansGroupJoinPanel *joinFansGroupPanel; // @synthesize joinFansGroupPanel=_joinFansGroupPanel;
@property(retain, nonatomic) MMLiveRewardRecipientSelectionView *rewardRecipientSelectionView; // @synthesize rewardRecipientSelectionView=_rewardRecipientSelectionView;
@property(retain, nonatomic) MMLiveRewardGainRecordsView *recordsView; // @synthesize recordsView=_recordsView;
@property(retain, nonatomic) MMFinderLiveRewardRecievingLogic *rewardRecievingLogic; // @synthesize rewardRecievingLogic=_rewardRecievingLogic;
@property(retain, nonatomic) MMFinderLiveRewardSendingLogic *rewardSendingLogic; // @synthesize rewardSendingLogic=_rewardSendingLogic;
@property(retain, nonatomic) MMLiveRewardGiftSendingMoreBubbleView *sendingMoreBubbleView; // @synthesize sendingMoreBubbleView=_sendingMoreBubbleView;
@property(retain, nonatomic) MMLiveRewardGiftRecievingAnimationView *giftRecievingAnimationView; // @synthesize giftRecievingAnimationView=_giftRecievingAnimationView;
@property(retain, nonatomic) MMLiveRewardGiftSelectionView *giftSelectionView; // @synthesize giftSelectionView=_giftSelectionView;
@property(retain, nonatomic) WCLiveBlurButton *selectGiftButton; // @synthesize selectGiftButton=_selectGiftButton;
@property(retain, nonatomic) MMFinderLiveCommentInputEmoticonView *inputEmoticonView; // @synthesize inputEmoticonView=_inputEmoticonView;
@property(nonatomic) double rightWidgetsLeft; // @synthesize rightWidgetsLeft=_rightWidgetsLeft;
@property(retain, nonatomic) NSMutableArray *bottomBtnList; // @synthesize bottomBtnList=_bottomBtnList;
@property(retain, nonatomic) MMWebImageView *buttonImageView; // @synthesize buttonImageView=_buttonImageView;
@property(retain, nonatomic) WCLiveBottomTextButton *liveScreenSharingButton; // @synthesize liveScreenSharingButton=_liveScreenSharingButton;
@property(retain, nonatomic) WCLiveBottomTextButton *liveRedPacketButton; // @synthesize liveRedPacketButton=_liveRedPacketButton;
@property(retain, nonatomic) WCLiveBottomTextButton *liveLotteryButton; // @synthesize liveLotteryButton=_liveLotteryButton;
@property(retain, nonatomic) MMLiveLikeButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) WCLiveBottomTextButton *liveShoppingButton; // @synthesize liveShoppingButton=_liveShoppingButton;
@property(retain, nonatomic) MMLiveLikeButton *anchorClipButton; // @synthesize anchorClipButton=_anchorClipButton;
@property(retain, nonatomic) WCLiveBottomTextButton *anchorLikeButton; // @synthesize anchorLikeButton=_anchorLikeButton;
@property(retain, nonatomic) WCLiveBottomTextButton *cameraOperationButton; // @synthesize cameraOperationButton=_cameraOperationButton;
@property(retain, nonatomic) WCLiveBottomTextButton *musicSettingButton; // @synthesize musicSettingButton=_musicSettingButton;
@property(retain, nonatomic) MMLiveOperationPanelCell *redPacketPanelCell; // @synthesize redPacketPanelCell=_redPacketPanelCell;
@property(retain, nonatomic) MMLiveOperationPanelCell *lotteryPanelCell; // @synthesize lotteryPanelCell=_lotteryPanelCell;
@property(retain, nonatomic) MMLiveOperationPanel *redPacketPanel; // @synthesize redPacketPanel=_redPacketPanel;
@property(nonatomic) _Bool shouldShowRedPacketPanel; // @synthesize shouldShowRedPacketPanel=_shouldShowRedPacketPanel;
@property(retain, nonatomic) MMFinderLiveRedPacketViewModel *redPacketViewModel; // @synthesize redPacketViewModel=_redPacketViewModel;
@property(retain, nonatomic) MMFinderLiveRedPacketView *redPacketView; // @synthesize redPacketView=_redPacketView;
@property(retain, nonatomic) MMFinderLiveLotteryDisplayLogic *lotteryDisplayLogic; // @synthesize lotteryDisplayLogic=_lotteryDisplayLogic;
@property(retain, nonatomic) MMFinderLiveLotteryPacketDisplayLogic *lotteryPacketDisplayLogic; // @synthesize lotteryPacketDisplayLogic=_lotteryPacketDisplayLogic;
@property(retain, nonatomic) MMLiveLotteryDetailCardView *lotteryDetailCardView; // @synthesize lotteryDetailCardView=_lotteryDetailCardView;
@property(retain, nonatomic) MMFinderLiveLittleLotteryPacketView *littleLotteryPacketView; // @synthesize littleLotteryPacketView=_littleLotteryPacketView;
@property(retain, nonatomic) LOTAnimationView *largeLotteryPacketView; // @synthesize largeLotteryPacketView=_largeLotteryPacketView;
@property(retain, nonatomic) NSTimer *syncCouponInfoTimer; // @synthesize syncCouponInfoTimer=_syncCouponInfoTimer;
@property(nonatomic) _Bool isShoppingAvailable; // @synthesize isShoppingAvailable=_isShoppingAvailable;
@property(retain, nonatomic) MMFinderLiveAdsItem *currentDisplayAdsItem; // @synthesize currentDisplayAdsItem=_currentDisplayAdsItem;
@property(retain, nonatomic) MMUIButton *goodsTipCloseBtn; // @synthesize goodsTipCloseBtn=_goodsTipCloseBtn;
@property(retain, nonatomic) GoodsPubbleTipView *goodsTipView; // @synthesize goodsTipView=_goodsTipView;
@property(retain, nonatomic) MMLiveStarterWeakNetTipView *weakNetTipView; // @synthesize weakNetTipView=_weakNetTipView;
@property(retain, nonatomic) MMLiveAchorWeakNetTipView *anchorWeakTipView; // @synthesize anchorWeakTipView=_anchorWeakTipView;
@property(retain, nonatomic) MMLiveAchorTimeLabel *anchorTimeLabel; // @synthesize anchorTimeLabel=_anchorTimeLabel;
@property(retain, nonatomic) MMFinderLiveOnlineStateBar *onlineStateBar; // @synthesize onlineStateBar=_onlineStateBar;
@property(retain, nonatomic) MMFinderLiveHeaderView *liveHeaderView; // @synthesize liveHeaderView=_liveHeaderView;
@property(retain, nonatomic) UIView *backTapView; // @synthesize backTapView=_backTapView;
@property(nonatomic) long long currentOrientation; // @synthesize currentOrientation=_currentOrientation;
@property(nonatomic) _Bool isControlButtonsShow; // @synthesize isControlButtonsShow=_isControlButtonsShow;
@property(nonatomic) _Bool isContentShow; // @synthesize isContentShow=_isContentShow;
@property(nonatomic) _Bool isAssumingAudienceCommentEnabled; // @synthesize isAssumingAudienceCommentEnabled=_isAssumingAudienceCommentEnabled;
@property(nonatomic) _Bool hideOperation; // @synthesize hideOperation=_hideOperation;
@property(nonatomic) _Bool isInLive; // @synthesize isInLive=_isInLive;
@property(nonatomic) unsigned long long heatValue; // @synthesize heatValue=_heatValue;
@property(nonatomic) unsigned long long rewardTotalAmountInHeat; // @synthesize rewardTotalAmountInHeat=_rewardTotalAmountInHeat;
@property(nonatomic) unsigned long long rewardWecoinCnt; // @synthesize rewardWecoinCnt=_rewardWecoinCnt;
@property(nonatomic) unsigned long long onlineViewCount; // @synthesize onlineViewCount=_onlineViewCount;
@property(nonatomic) unsigned long long onlineUserCount; // @synthesize onlineUserCount=_onlineUserCount;
@property(retain, nonatomic) MMLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(copy, nonatomic) CDUnknownBlockType hitTestWithEventAction; // @synthesize hitTestWithEventAction=_hitTestWithEventAction;
@property(retain, nonatomic) NSDictionary *gameFrameSetViews; // @synthesize gameFrameSetViews=_gameFrameSetViews;
@property(copy, nonatomic) NSString *gamePkgAppId; // @synthesize gamePkgAppId=_gamePkgAppId;
@property(copy, nonatomic) NSString *gameFrameSetRootId; // @synthesize gameFrameSetRootId=_gameFrameSetRootId;
@property(nonatomic) _Bool isMuteAudioForIntterupted; // @synthesize isMuteAudioForIntterupted=_isMuteAudioForIntterupted;
@property(nonatomic) _Bool isShowGoToGameAppAlert; // @synthesize isShowGoToGameAppAlert=_isShowGoToGameAppAlert;
@property(nonatomic) _Bool canShowRedPacketView; // @synthesize canShowRedPacketView=_canShowRedPacketView;
@property(retain, nonatomic) MMLiveMoreLivesIndicatorBar *moreLivesIndicatorBar; // @synthesize moreLivesIndicatorBar=_moreLivesIndicatorBar;
@property(retain, nonatomic) MMLivePauseView *pauseView; // @synthesize pauseView=_pauseView;
@property(nonatomic) _Bool isLiveGameButtonButtonHighLighted; // @synthesize isLiveGameButtonButtonHighLighted=_isLiveGameButtonButtonHighLighted;
@property(retain, nonatomic) MMFinderLiveGoodsItem *currentDisplayGoodsItem; // @synthesize currentDisplayGoodsItem=_currentDisplayGoodsItem;
@property(retain, nonatomic) FinderShopCouponInfo *currentDisplayCouponInfo; // @synthesize currentDisplayCouponInfo=_currentDisplayCouponInfo;
@property(retain, nonatomic) WCLiveBottomTextButton *liveGameButton; // @synthesize liveGameButton=_liveGameButton;
@property(retain, nonatomic) MMFinderLiveConnectMicAllUserInfoView *connectMicAllUserInfoView; // @synthesize connectMicAllUserInfoView=_connectMicAllUserInfoView;
@property(retain, nonatomic) WCLiveBottomTextButton *connectMicButton; // @synthesize connectMicButton=_connectMicButton;
@property(retain, nonatomic) MMFinderLiveConnectMicUserView *connectMicUserView; // @synthesize connectMicUserView=_connectMicUserView;
@property(retain, nonatomic) MMFinderLiveOnlineStateView *onlineStateView; // @synthesize onlineStateView;
@property(nonatomic) __weak id <MMFinderLiveOperationViewDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
- (void)onAnimationEnd:(id)arg1;
- (void)transitionEnded;
- (void)refreshWidgetsForFontSizeChange;
- (_Bool)isFollowState;
- (long long)transferClapModeLiveToClapVoiceType:(unsigned int)arg1;
- (void)onGetFinderLiveShowCheerClapModeHint:(unsigned int)arg1;
- (void)onGetFinderLiveCheerEnterClapModeWithLevel:(unsigned int)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dismissLikeTipsView:(_Bool)arg1;
- (void)_layoutLikeTipsView:(_Bool)arg1;
- (void)layoutLikeTipsView;
- (void)showLikeTipsViewIfNeed:(int)arg1;
- (void)_onAnchorClipButtonClick;
- (void)dismissCheerClapModeUI;
- (void)showCheerClapModeUI;
- (void)updateCurrentOrientation;
- (void)OnNoop;
- (id)createButtonWithDescriptionLabel:(id)arg1 buttonSize:(struct CGSize)arg2 withIconSize:(struct CGSize)arg3 atPositon:(struct CGPoint)arg4 withButtonAction:(SEL)arg5 withButtonLabel:(id)arg6 isCircle:(_Bool)arg7;
- (void)onHitDropGiftTarget:(id)arg1 needShow:(_Bool)arg2;
- (void)onSendDeliveryProcess:(id)arg1 error:(id)arg2 isLocalSuccess:(_Bool)arg3;
- (void)onSendingGiftBatchFinish:(id)arg1 rewardRecipientContact:(id)arg2 sendingComboId:(id)arg3 comboGiftCount:(unsigned long long)arg4;
- (void)onReportMusicSettingActionType:(long long)arg1 songIdList:(id)arg2;
- (long long)onMusicSettingInteractiveTap:(long long)arg1;
- (void)showMusicSettingGuideIfNeed;
- (void)onSynchronizedSEIAnchoInfo:(id)arg1;
- (void)onMMLiveGameJoinTeamSettingViewChooseJoinTeamMode:(unsigned int)arg1;
- (void)onMMLiveGameJoinTeamViewTeamUpBookButtonClicked:(id)arg1;
- (void)onMMLiveGameJoinTeamViewTeamUpStartButtonClicked:(id)arg1 joinTeamMode:(unsigned int)arg2 joinTeamCondIsOK:(_Bool)arg3;
- (void)onMMLiveFilterOperationPanelClose:(_Bool)arg1;
- (void)onMMLiveBeautyOperationContainerViewClose:(_Bool)arg1;
- (void)onMMLiveCameraOperationPanelChangeToPureAudioMode:(_Bool)arg1;
- (void)onMMLiveCameraOperationPanelCloseWithNextState:(unsigned long long)arg1;
- (void)layoutFilterOperationPanel;
- (void)layoutBeautyOperationContainerView;
- (void)layoutCameraOperationPanel;
- (void)showMusicSettingOperationPanelWithReportDelegate:(id)arg1;
- (void)resetConnectMicVideoOperationViewFrame;
- (void)checkAndShowConnectMicVideoOperationView;
- (void)layoutConnectMicVideoOperationView;
- (void)onConnectMicButtonClicked;
- (void)sendRedPacket;
- (void)onLiveRedPacketButtonClicked;
- (void)enterClapMode:(long long)arg1;
- (void)onEndIssueCouponForGoodsPubbleDisplay:(id)arg1;
- (void)onNewIssueCouponForGoodsPubbleDisplay:(id)arg1;
- (void)onEndAdPromoteForGoodsPubbleDisplay:(id)arg1;
- (void)onNewAdPromoteForGoodsPubbleDisplay:(id)arg1;
- (void)onEndProductPromoteForGoodsPubbleDisplay:(id)arg1;
- (void)onNewProductPromoteForGoodsPubbleDisplay:(id)arg1;
- (void)layoutBannerView;
- (void)dismissBannerView;
- (_Bool)isUserCloseBanner:(id)arg1;
- (void)addUserCloseBanner:(id)arg1;
- (id)filterUserClosedBanner:(id)arg1;
- (void)showBannerView:(id)arg1;
- (double)dropGiftViewAnimatedCenterY;
- (void)layoutAndPlayDropPagView;
- (void)createDropPagViewPathAnimation;
- (void)playDropGiftWithFullPageAnimation:(id)arg1;
- (void)playDropGiftWithoutFullPageAnimation:(id)arg1;
- (id)createDropGiftWithoutFullPageAnimation;
- (void)joinLiveFollowLottery;
- (void)layoutGameInfoTipsView;
- (void)dismissVideoTipsView;
- (void)showVideoTipsViewWithLayoutAction:(CDUnknownBlockType)arg1;
- (_Bool)isShowVideoTipsView;
- (void)dismissGameTipsView:(_Bool)arg1;
- (void)layoutGameTipsView;
- (void)_showGameTipsView:(_Bool)arg1;
- (void)showGameTipsView;
- (void)showGameJoinTeamGuideIfNeed;
@property(readonly, nonatomic) MMFinderLiveCommentView *finderCommentView;
@property(readonly, nonatomic) _Bool isLiveScreenSharingEnabled;
@property(readonly, nonatomic) _Bool isLiveGameButtonButtonEnable;
@property(readonly, nonatomic) _Bool isLiveRedPacketButtonEnable;
@property(readonly, nonatomic) _Bool isLiveConnectMicButtonEnable;
@property(readonly, nonatomic) _Bool isLiveShoppingButtonEnable;
@property(readonly, nonatomic) _Bool isLiveRewardButtonEnable;
- (id)onlineStateBarTitle;
- (_Bool)isShouldShowNewHeatValueStyleInOnlineStateView;
- (_Bool)isShouldShowHeatValueInOnlineStateView;
- (_Bool)isShouldShowRewardAmountInOnlineStateView;
- (_Bool)shouldShowHeatInOnlineStateBar;
- (id)defaultLiveName;
@property(readonly, retain, nonatomic) NSMutableArray *displayingWidgetViews; // @synthesize displayingWidgetViews=_displayingWidgetViews;
@property(readonly, nonatomic) MMLiveLikeDataMgr *likeMgr;
- (id)finderTaskId;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (void)onMMLiveSelectGiftButtonClicked;
- (void)onMMLiveInviteFriendsBtnClicked;
- (void)onMMLiveIntroductionBtnClicked;
- (void)onMMLiveOnlineUserSelected:(id)arg1 userInfo:(id)arg2;
- (void)onJoinFansClubWithGiftItem:(id)arg1;
- (void)onSelectRewardRecipientContact;
- (void)onSelectRewardRecipientContactFinished;
- (void)onSelectRewardRecipientContact:(id)arg1;
- (id)getLiveCommentViewCustomHitViews;
- (void)onIntroductionButtoClicked;
- (double)getLikeButtonLeft;
- (double)getCommentTableTop;
- (_Bool)getIsShoppingAvailable;
- (double)getBottomBarTop;
- (double)getCommentTableLandscapeBottom;
- (double)getBottomWidgetsBottom;
- (double)getTopWidgetsBottom;
- (void)checkAndHideAllContents;
- (void)checkAndShowAllContents;
- (void)updateOpearationViewHiddenStatus;
- (void)handleUnMuteAudioForIntterupted;
- (void)onBackViewDidTaped;
- (void)updateButtonHiddenForInputViewShowChange:(_Bool)arg1;
- (double)getVisibleHeight;
- (double)getRightWidgetsLeft;
- (void)onLikeContactListUpdate:(id)arg1;
- (void)onDisplayLikeCountUpdate:(unsigned long long)arg1 withTaskId:(id)arg2 forRole:(long long)arg3;
- (void)onExtendFromCollapseAnimationDidEndWithLiveTask:(id)arg1;
- (void)onMinimizeWindowDismissLiveView:(id)arg1;
- (void)onMinimizeWindowAttachLiveView:(id)arg1;
- (void)updateLikeCountDisplayForAudience;
- (void)setLiveLikeEnabled:(_Bool)arg1;
- (void)setLiveRewardEnabled:(_Bool)arg1;
- (void)setIsShouldShowNewHeatValueStyle:(_Bool)arg1;
- (void)setShouldShowHeatValue:(_Bool)arg1;
- (void)updateHeatValue:(unsigned long long)arg1;
- (void)updateRewardTotalAmountInHeat:(unsigned long long)arg1;
- (void)updateRewardWecoinCnt:(unsigned long long)arg1;
- (void)updateOnlineUserCnt:(unsigned long long)arg1 withOnlineViewCnt:(unsigned long long)arg2;
- (void)updateOnlineUserCnt:(unsigned long long)arg1;
- (void)innerHideAllContentsForAnchor;
- (void)hideAllContentsForAnchorAnimated;
- (void)hideAllContentsForAnchor;
- (void)innerShowAllContentsForAnchor;
- (void)showAllContentsForAnchorAnimated;
- (void)showAllContentsForAnchor;
- (void)forceLayoutForOrientationChanged;
- (void)hideControlButtonsForAudience;
- (void)showControlButtonsForAudience;
- (void)innerHideAllContentsForAudience;
- (void)hideAllContentsForAudienceAnimated;
- (void)hideAllContentsForAudience;
- (void)innerShowAllContentsForAudience;
- (void)topHideAllContentsForAnchorAnimated;
- (void)topshowAllContentsForAnchorAnimated;
- (void)showAllContentsForAudienceAnimated;
- (void)showAllContentsForAudience;
- (void)visibilityChanged:(_Bool)arg1 invokeType:(unsigned long long)arg2;
- (void)visibilityChanged:(_Bool)arg1;
- (void)onLoadImageOK:(id)arg1;
- (void)showFirstOpenDropGiftDescription;
- (void)updateLikeButtonIcon:(id)arg1;
- (void)updateSubviewHiddenStatusAfterEnterLive;
- (void)updateCommentViewHidden:(_Bool)arg1;
- (double)currentCommentContentViewTop;
- (double)bottomForBottomComponents;
- (void)closeFansGroupPanelsForOrientationChanged;
- (void)closeFansGroupPanels;
- (void)checkAndCloseHalfScreenView;
- (void)updateCommentEnableForLiveInfoUpdate;
- (void)updateLikeCountForLiveInfoUpdate;
- (void)tagLiveAgreeGuideHasShow;
- (void)openFansGroupDetailPanel;
- (void)openPayFansGroupPanel:(id)arg1 fromGiftSelection:(_Bool)arg2;
- (void)innerOpenJoinFansGroupPanel:(id)arg1 fromGiftSelection:(_Bool)arg2;
- (void)openJoinFansGroupPanel:(id)arg1 fromGiftSelection:(_Bool)arg2;
- (void)openFansGroupMemberListPanel;
- (void)openRewardGiftSelectionView;
- (void)openRewardRecipientSelectionView;
- (void)updateGameFrameSetView:(id)arg1;
- (void)updateForConnectMicStateChanged;
- (void)hideFollowingButton;
- (void)showFollowButtonWithSourceType:(unsigned long long)arg1;
- (void)_showFollowButtonAfter1Minite;
- (void)cancelShowFollowButtonTimer;
- (void)showFollowButtonAfter1MiniteIfNeed;
- (void)updateWithCheerInfo:(id)arg1;
- (void)addCheerIconsForAllRole:(id)arg1 liveCheerInfo:(id)arg2;
- (void)showRewardGiftSelectionViewWithRecipentContact:(id)arg1;
- (void)updateRotateOrientationEnable;
- (void)updatePureAudioModeViewAlphaForAudience;
- (void)updateTopLeftWidgetsPosition;
- (void)updateAnchorVolumeAnimationViewAppearance:(_Bool)arg1;
- (void)updateViewsWhenPureAudioModeChanged;
- (void)setCacheMusicItemForId:(id)arg1 item:(id)arg2;
- (void)showGameJoinTeamSettingView;
- (void)hideAllContents;
- (void)updateLiveTitle:(id)arg1;
- (void)onLiveScreenSharingButtonClicked;
- (void)onLiveGameButtonClicked;
- (void)onLiveLotteryButtonClicked;
- (void)onLiveShoppingButtonClicked;
- (void)muteMicButtonDidClick:(id)arg1;
- (void)onAnchorHeadImageClicked;
- (void)recordOnlineUserCount:(unsigned long long)arg1;
- (void)recordSelfLike;
- (void)onShareLiveClicked;
- (void)onMoreLiveButtonnClicked;
- (void)onSelectGiftButtonClicked;
- (void)onCameraOperationButtonClicked;
- (void)onMusicSettingButtonClicked;
- (void)onShareScreenButtonClicked;
- (void)onCloseGoodsPubbleButtonClicked;
- (_Bool)isLiveCommentSceneCanShowMoreLive;
- (void)extraOperationInfoUpdated;
- (void)operationPermissionChanged;
- (void)onExitLive;
- (void)onLiveUpdated;
- (void)onEnterLive;
- (void)layoutGoodsPubbleTipView;
- (void)updateCurrentDisplayingGoodsItem:(id)arg1;
- (void)updateCurrentDisplayingCouponInfo:(id)arg1;
- (void)hideGoodsPubbleTipView:(_Bool)arg1;
- (void)updateGoodsPubbleTipViewHidden;
- (void)updateLiveShoppingButtonHidden;
- (void)updateGoodsPubbleTipView:(unsigned long long)arg1 productItem:(id)arg2 adItem:(id)arg3 couponItem:(id)arg4;
- (void)showGoodsPubbleTipView:(id)arg1;
- (void)showGoodsPubbleTipViewWithCouponInfo:(id)arg1;
- (void)showGoodsPubbleTipViewWithAdItem:(id)arg1;
- (void)updateGoodsPubbleTipViewFrame:(unsigned long long)arg1;
- (double)anchorCouponPubbleTipLeft;
- (double)anchorCouponPubbleTipWidthForIphone;
- (double)anchorCouponPubbleTipWidth;
- (double)goodsPubbleTipLeft;
- (double)goodsPubbleTipWidthForIphone;
- (double)goodsPubbleTipWidth;
- (void)layoutDropPagView;
- (void)layoutDropGiftView;
- (void)layoutDisplayingWidgetViewsAnimated:(_Bool)arg1;
- (void)widgetView:(id)arg1 didChangeHidden:(_Bool)arg2;
- (void)redPacketViewDidRefreshHidden:(_Bool)arg1;
- (void)littleLotteryPacketViewDidRefreshHidden:(_Bool)arg1;
- (void)operationPanelDidTapBackground:(id)arg1;
- (void)operationPanel:(id)arg1 cellDidClick:(id)arg2;
- (void)onGetPollingFetchEventWithTaskId:(id)arg1 cmdId:(long long)arg2 respBuffer:(id)arg3;
- (void)redPacketViewModel:(id)arg1 hiddenDidChange:(_Bool)arg2;
- (void)hideRedPacketPanel;
- (void)showRedPacketPanel;
- (void)refreshRedPacketViewAlpha;
- (void)layoutRedPacketView;
- (void)createLotteryDisplayLogic;
- (void)layoutDropGiftDetailCardView;
- (void)layoutLotteryDetailCardView;
- (void)createLotteryPacketDisplayLogic;
- (void)layoutLittleLotteryPacketView;
- (void)layoutLargeLotteryPacketView;
- (void)layoutLotteryWidgets;
- (void)showGameInvitaionView:(id)arg1;
- (void)showFollowConfirmView:(CDUnknownBlockType)arg1;
- (void)layoutFollowConfirm;
- (void)pauseViewStopPauseTimer:(id)arg1;
- (void)pauseViewPushWebViewController:(id)arg1 url:(id)arg2;
- (void)pauseButtonCountdownEnded:(id)arg1;
- (void)pauseViewCountdownEnded:(id)arg1;
- (void)pauseView:(id)arg1 resumeButtonDidClick:(id)arg2;
- (void)layoutPauseViewForMiniGame;
- (void)updatePauseViewForMiniGame;
- (void)updatePauseViewWithButtonAccumulatedTime:(long long)arg1;
- (void)updatePauseViewWithAccumulatedTime:(long long)arg1;
- (void)hidePauseView;
- (void)showPauseView:(id)arg1;
- (void)layoutPauseView;
- (void)layoutLiveScreenSharingButton;
- (void)layoutLiveGameButton;
- (void)layoutLiveShoppingButton;
- (void)layoutLiveRedPacketButton;
- (void)layoutLiveLotteryButton;
- (void)layoutConnectMicButton;
- (void)layoutGiftOnlineRecordsView;
- (void)layoutOnlineStateView;
- (void)layoutSendingMoreBubbleView;
- (void)layoutGameFrameSetViews;
- (void)createGameFrameSetViewsIfNeed;
- (void)layoutBottomButtons;
- (void)showAnchorCloseFunction:(id)arg1;
- (_Bool)isLikeEnable;
- (_Bool)isCommentEnable;
- (_Bool)isCanShowAnchorCloseFunctionTipWithType:(int)arg1;
- (void)layoutRewardRecipientSelectionView;
- (void)layoutHeaderView;
- (void)layoutOnlineStateBar;
- (void)layoutMoreLivesIndicatorBar;
- (void)layoutPureAudioModeTipView;
- (void)layoutAnchorWeakTipView;
- (void)updateAnchorWeakTipView:(_Bool)arg1;
- (void)updateMuteAudioTipViewFrame;
- (void)updateMuteAudioTipContent;
- (void)layoutMuteAudioTipView;
- (void)updateAudioMutedForInterrupt:(_Bool)arg1 tipContent:(id)arg2;
- (void)layoutAnchorTimeLabel;
- (void)layoutRewardGiftRecievingAnimationView;
- (void)layoutMusicSettingInteractiveView;
- (void)layoutCommentView;
- (void)layoutInputEmoticonView;
- (void)resetConnectMicUserViewPosition;
- (void)layoutConnectMicUserView;
- (void)layoutBackTapView;
- (void)layoutUI;
- (void)dealloc;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)stopLoading;
- (void)startLoading;
- (id)initWithTaskId:(id)arg1 assumeAudienceCommentEnabled:(_Bool)arg2;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

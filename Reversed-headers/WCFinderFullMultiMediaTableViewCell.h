//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderTableViewCell.h"

#import "ILinkEventExt-Protocol.h"
#import "MonoServiceMgrExt-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCFinderBriefIntroCradViewDelegate-Protocol.h"
#import "WCFinderCommonBottomViewDelegate-Protocol.h"
#import "WCFinderContactExt-Protocol.h"
#import "WCFinderFeedContentHeaderActionDelegate-Protocol.h"
#import "WCFinderFeedContentMediaActionProtocol-Protocol.h"
#import "WCFinderFeedContentTextClickActionDelegate-Protocol.h"
#import "WCFinderFeedContentVMExt-Protocol.h"
#import "WCFinderFocusCellProtocol-Protocol.h"
#import "WCFinderFriendLikeToolbarViewDelegate-Protocol.h"
#import "WCFinderFullInteractivePanelViewDelegate-Protocol.h"
#import "WCFinderFullPlayerProgressBarDelegate-Protocol.h"
#import "WCFinderFullProgressControlPanelViewDelegate-Protocol.h"
#import "WCFinderFullToolbarViewDelegate-Protocol.h"
#import "WCFinderMelodyViewDelegate-Protocol.h"

@class CAGradientLayer, MMUIButton, NSString, UIButton, UILabel, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView, WCFinderAnimationLoadingView, WCFinderCommonBottomBannerView, WCFinderFeedContentVM, WCFinderFullDoubleLikeEduView, WCFinderFullInteractivePanelView, WCFinderFullNewMultiMediaView, WCFinderFullProgressControlPanelView, WCFinderInteractivePanelConfigParamsModel, WCFinderMentionedSettingView, WCFinderProgressControlPanelConfigParamsModel, WCFinderPushFeedViewParams, WCFinderShortTapGestureRecognizer, WCFinderTableViewParamModel, WCFinderTipBarView;
@protocol WCFinderFullMultiMediaTableViewCellDelegate;

@interface WCFinderFullMultiMediaTableViewCell : WCFinderTableViewCell <WCFinderFeedContentMediaActionProtocol, WCFinderFeedContentHeaderActionDelegate, WCFinderFeedContentVMExt, WCFinderFeedContentTextClickActionDelegate, WCFinderMelodyViewDelegate, ILinkEventExt, WCFinderFriendLikeToolbarViewDelegate, WCFinderFullToolbarViewDelegate, WCActionSheetDelegate, WCFinderFullPlayerProgressBarDelegate, WCFinderFullInteractivePanelViewDelegate, WCFinderFullProgressControlPanelViewDelegate, WCFinderContactExt, WCFinderCommonBottomViewDelegate, WCFinderBriefIntroCradViewDelegate, MonoServiceMgrExt, WCFinderFocusCellProtocol>
{
    _Bool _isForceDisableLikeAction;
    _Bool _isEnableMediaHeaderShowFollowTips;
    _Bool _isClearScreen;
    _Bool _isDisplaying;
    id <WCFinderFullMultiMediaTableViewCellDelegate> _delegate;
    long long _dataPos;
    WCFinderFeedContentVM *_contentVM;
    WCFinderCommonBottomBannerView *_commonBottomBannerView;
    WCFinderFullNewMultiMediaView *_mediaView;
    CAGradientLayer *_topGradientLayer;
    CAGradientLayer *_bottomGradientLayer;
    UITapGestureRecognizer *_tapGes;
    WCFinderShortTapGestureRecognizer *_likeGes;
    UILongPressGestureRecognizer *_longPressGes;
    double _offsetY;
    unsigned long long _scene;
    UIView *_videoGestureView;
    unsigned long long _panLockState;
    UITapGestureRecognizer *_tapGesture;
    WCFinderAnimationLoadingView *_loadingView;
    double _videoDuration;
    double _maxPlayVideoTime;
    WCFinderFullDoubleLikeEduView *_doubleLikeEduView;
    UILabel *_longVideoEntry;
    WCFinderInteractivePanelConfigParamsModel *_interactivePanelConfigModel;
    WCFinderProgressControlPanelConfigParamsModel *_progressControlConfigModel;
    WCFinderTableViewParamModel *_tableViewParamModel;
    WCFinderFullInteractivePanelView *_interactivePanelView;
    WCFinderFullProgressControlPanelView *_progressControlPanelView;
    WCFinderTipBarView *_guideFinderEntranceBarView;
    UIView *_moreRelatedTipsView;
    WCFinderMentionedSettingView *_mentionedSettingView;
    MMUIButton *_moreActionButton;
    WCFinderPushFeedViewParams *_funcParams;
    UIView *_cellBottomGradientView;
    MMUIButton *_rotateButton;
    UIButton *_minimizeButton;
    struct CGPoint _hitPoint;
}

+ (double)mediaTopWhenTransitionWith:(id)arg1;
+ (double)mediaTopWhenTransitionWithMediaSize:(double)arg1 mediaSizeHeight:(double)arg2;
+ (double)cellHeightWithIsSubScene:(_Bool)arg1;
+ (double)getInteractiveBottomLineIsSubScene:(_Bool)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *minimizeButton; // @synthesize minimizeButton=_minimizeButton;
@property(retain, nonatomic) MMUIButton *rotateButton; // @synthesize rotateButton=_rotateButton;
@property(retain, nonatomic) UIView *cellBottomGradientView; // @synthesize cellBottomGradientView=_cellBottomGradientView;
@property(nonatomic) _Bool isDisplaying; // @synthesize isDisplaying=_isDisplaying;
@property(retain, nonatomic) WCFinderPushFeedViewParams *funcParams; // @synthesize funcParams=_funcParams;
@property(nonatomic) _Bool isClearScreen; // @synthesize isClearScreen=_isClearScreen;
@property(retain, nonatomic) MMUIButton *moreActionButton; // @synthesize moreActionButton=_moreActionButton;
@property(retain, nonatomic) WCFinderMentionedSettingView *mentionedSettingView; // @synthesize mentionedSettingView=_mentionedSettingView;
@property(retain, nonatomic) UIView *moreRelatedTipsView; // @synthesize moreRelatedTipsView=_moreRelatedTipsView;
@property(retain, nonatomic) WCFinderTipBarView *guideFinderEntranceBarView; // @synthesize guideFinderEntranceBarView=_guideFinderEntranceBarView;
@property(retain, nonatomic) WCFinderFullProgressControlPanelView *progressControlPanelView; // @synthesize progressControlPanelView=_progressControlPanelView;
@property(retain, nonatomic) WCFinderFullInteractivePanelView *interactivePanelView; // @synthesize interactivePanelView=_interactivePanelView;
@property(retain, nonatomic) WCFinderTableViewParamModel *tableViewParamModel; // @synthesize tableViewParamModel=_tableViewParamModel;
@property(retain, nonatomic) WCFinderProgressControlPanelConfigParamsModel *progressControlConfigModel; // @synthesize progressControlConfigModel=_progressControlConfigModel;
@property(retain, nonatomic) WCFinderInteractivePanelConfigParamsModel *interactivePanelConfigModel; // @synthesize interactivePanelConfigModel=_interactivePanelConfigModel;
@property(retain, nonatomic) UILabel *longVideoEntry; // @synthesize longVideoEntry=_longVideoEntry;
@property(retain, nonatomic) WCFinderFullDoubleLikeEduView *doubleLikeEduView; // @synthesize doubleLikeEduView=_doubleLikeEduView;
@property(nonatomic) double maxPlayVideoTime; // @synthesize maxPlayVideoTime=_maxPlayVideoTime;
@property(nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(nonatomic) unsigned long long panLockState; // @synthesize panLockState=_panLockState;
@property(retain, nonatomic) UIView *videoGestureView; // @synthesize videoGestureView=_videoGestureView;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) double offsetY; // @synthesize offsetY=_offsetY;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGes; // @synthesize longPressGes=_longPressGes;
@property(retain, nonatomic) WCFinderShortTapGestureRecognizer *likeGes; // @synthesize likeGes=_likeGes;
@property(retain, nonatomic) UITapGestureRecognizer *tapGes; // @synthesize tapGes=_tapGes;
@property(retain, nonatomic) CAGradientLayer *bottomGradientLayer; // @synthesize bottomGradientLayer=_bottomGradientLayer;
@property(retain, nonatomic) CAGradientLayer *topGradientLayer; // @synthesize topGradientLayer=_topGradientLayer;
@property(retain, nonatomic) WCFinderFullNewMultiMediaView *mediaView; // @synthesize mediaView=_mediaView;
@property(retain, nonatomic) WCFinderCommonBottomBannerView *commonBottomBannerView; // @synthesize commonBottomBannerView=_commonBottomBannerView;
@property(nonatomic) struct CGPoint hitPoint; // @synthesize hitPoint=_hitPoint;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(nonatomic) long long dataPos; // @synthesize dataPos=_dataPos;
@property(nonatomic) __weak id <WCFinderFullMultiMediaTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isEnableMediaHeaderShowFollowTips; // @synthesize isEnableMediaHeaderShowFollowTips=_isEnableMediaHeaderShowFollowTips;
@property(nonatomic) _Bool isForceDisableLikeAction; // @synthesize isForceDisableLikeAction=_isForceDisableLikeAction;
- (_Bool)needHandleAudioMonoService:(id)arg1 inMainScene:(_Bool)arg2;
- (void)onVideoMonoServiceBussinessRemoved:(id)arg1 inMainScene:(_Bool)arg2;
- (void)onVideoMonoServiceBussinessAdded:(id)arg1 inMainScene:(_Bool)arg2;
- (void)onAudioMonoServiceBussinessRemoved:(id)arg1 inMainScene:(_Bool)arg2;
- (void)onAudioMonoServiceBussinessAdded:(id)arg1 inMainScene:(_Bool)arg2;
- (void)hiddenBottomBannerView;
- (void)hiddenDisplayMentionedSettingView;
- (void)displayAnimatedShowMentionedSettingView;
- (void)showMentionedSettingView;
- (void)updateProgressControlPanelView:(_Bool)arg1;
- (void)setAllSubviewsAlphaZero:(_Bool)arg1;
- (void)briefIntroCardViewCountdownOver:(id)arg1;
- (void)commonBottomBannerViewonCloseAction:(id)arg1;
- (void)commonBottomBannerViewonClickAction:(id)arg1;
- (CDUnknownBlockType)moveHeaderViewAndDisplayView:(id)arg1 UpwardSpacing:(double)arg2 movAnimDuration:(double)arg3;
- (void)moveHeaderAndToolbarAndPanelViewUpwardSpacing:(double)arg1 movAnimDuration:(double)arg2 showDuration:(unsigned long long)arg3;
- (void)showGuideMoreRelatedView;
- (_Bool)showBottomBannerViewWith:(id)arg1;
- (_Bool)_showBottomBannerViewWithShowDuration:(double)arg1;
- (_Bool)showGuideJumpToFinderEntryView;
- (void)hideProgressControlPanelView;
- (void)replayAndHideProgressControlPanelView;
- (void)progressControlPanelCurPlayPrecent:(double)arg1 dragState:(unsigned long long)arg2;
- (void)progressControlPanelClickBackButton:(id)arg1;
- (void)progressControlPanelClickMinimizeButton:(id)arg1;
- (void)progressControlPanelClickPlayRateButton:(id)arg1;
- (void)progressControlPanelClickProtraitButton:(id)arg1;
- (void)progressControlPanelClickPlayButton:(id)arg1;
- (id)progressControlPanelGetPrivateLikeButtonBottom;
- (id)progressControlPanelGetLongVideoEntry;
- (id)progressControlPanelGetMediaCollectionView;
- (void)progressControlPanelCountdownTimeChanged:(id)arg1;
- (void)progressControlPanelClickPrivateLikeButton:(id)arg1;
- (void)progressControlPanelClickPauseButton:(id)arg1;
- (void)interactivePanelClickWithJumpInfo:(id)arg1 entranceType:(unsigned long long)arg2;
- (void)interactivePanelLastestLiveInfoClickAction:(id)arg1;
- (void)interactivePanelClickHotWord:(id)arg1;
- (void)interactivePanelClickExtLink;
- (void)interactivePanelTextView:(id)arg1 clickReadMore:(_Bool)arg2 isTouchExpand:(_Bool)arg3;
- (void)interactivePanelTextView:(id)arg1 clickContentUserName:(id)arg2;
- (void)interactivePanelTextView:(id)arg1 clickMentionUsername:(id)arg2 nickname:(id)arg3;
- (void)interactivePanelTextView:(id)arg1 clickTopicText:(id)arg2;
- (void)interactivePanelTextView:(id)arg1 longPressedText:(id)arg2 withRect:(struct CGRect)arg3;
- (void)interactivePanelTextView:(id)arg1 clickText:(id)arg2 withRect:(struct CGRect)arg3;
- (void)interactivePanelTextView:(id)arg1 clickReadMore:(_Bool)arg2;
- (void)interactivePanelFriendLikeClickLikeAction:(id)arg1 contentVM:(id)arg2 isNormalLiked:(_Bool)arg3;
- (void)interactivePanelFriendLikeRefreshFriendUI:(id)arg1;
- (void)interactivePanelFriendLikeClickFollowLikeBtn:(id)arg1;
- (void)interactivePanelFriendLikeClickLikeList:(id)arg1;
- (void)interactivePanelToolbarClickFeedAllLikeAction:(id)arg1;
- (void)interactivePanelToolbarClickShareAction:(id)arg1 shareButton:(id)arg2;
- (void)interactivePanelToolbarClickCollectionAction:(id)arg1;
- (void)interactivePanelToolbarClickRecommendUrl:(id)arg1;
- (void)interactivePanelToolbarClickLikeAction:(id)arg1 isPrivateLike:(_Bool)arg2;
- (void)interactivePanelToolbarClickRealNameAction;
- (void)interactivePanelToolbarFavDataFinished:(id)arg1;
- (void)interactivePanelToolbarRefreshFriendLikeUI:(id)arg1;
- (void)interactivePanelToolbarRefreshToolbarUI:(id)arg1;
- (void)interactivePanelToolbarClickCancelUploading:(id)arg1;
- (void)interactivePanelToolbarClickRetryUploading:(id)arg1;
- (void)interactivePanelToolbarClickViewAllComment:(id)arg1 isActiveInput:(_Bool)arg2 isFromCommentButton:(_Bool)arg3;
- (void)interactivePanelHeaderClickFollowBtn:(id)arg1;
- (void)interactivePanelHeaderClickMoreBtn:(id)arg1;
- (void)interactivePanelHeaderShowSpamTipsWithString:(id)arg1;
- (void)interactivePanelHeaderClickLiveNowView:(id)arg1;
- (void)interactivePanelHeaderClickNickname:(id)arg1;
- (void)interactivePanelHeaderClickAvatar:(id)arg1;
- (void)interactivePanelClickMoreAction:(id)arg1;
- (void)interactivePanelClickAdGuideFollowBtn;
- (void)interactivePanelClickAdGuideMoreDetailBtn;
- (void)interactivePanelClickRedPacketLink;
- (void)interactivePanelClickPOILabel;
- (void)interactivePanelClickEventEntry;
- (void)interactivePanelVisibleHeightChanged;
- (void)onFinderContactFollowStatusUpdate:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)removeCellBottomGradientView;
- (void)showCellBottomGradientViewHeight:(double)arg1 colors:(id)arg2;
- (void)setGradientLayerHidden:(_Bool)arg1;
- (_Bool)shouldShowNoticeView;
- (_Bool)shouldShowFriendLikeToolbarView;
- (void)onLongPressMedia:(id)arg1;
- (void)onLikeFeed:(id)arg1;
- (void)reversePauseLikeProgressViewsHiddenStateWithPauseSelectState:(_Bool)arg1;
- (void)reversePauseLikeProgressViewsHiddenState;
- (void)updatePauseLikeProgressPanelHiddenStateTabDeselect;
- (void)triggerPauseVideoAction;
- (void)hiddeProgressControlPanelViewWhenIPhoneStatusBarLandscape;
- (void)onTap:(id)arg1;
- (void)resumeMediaPlay;
- (void)pauseMediaPlayShowPauseBtn:(_Bool)arg1;
- (void)goToFriendLikeListDetail;
- (void)onTextClicked:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)copyText;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (struct CGSize)cellIconSize;
- (void)clickLinkAction;
- (void)showTextMenuWithRect:(struct CGRect)arg1;
- (_Bool)canBecomeFirstResponder;
- (void)cellEndDisplayReportAction;
- (void)viewableExposeReport;
- (void)onMenuControllerWillHide:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)clickRecommentUrl:(id)arg1;
- (void)onRefreshFriendLikeUI:(id)arg1;
- (void)onRefreshToolbarUI:(id)arg1;
- (double)minPercentcellCanPlayDisplay;
- (struct CGRect)convertFocusRectToView:(id)arg1;
- (_Bool)shouldCaluculateAsFocusCell;
- (_Bool)mediaIsOnPlay;
- (void)startStarAnimationWithTouchPoint:(struct CGPoint)arg1;
- (void)startLikeAnimationWithLikeFlag:(long long)arg1 touchPoint:(struct CGPoint)arg2;
- (void)onFeedLiveStatusChanged:(id)arg1 state:(unsigned long long)arg2;
- (void)onFeedContentAdGuideItemChanged:(id)arg1;
- (void)onFeedContentJumpInfoContainerChanged:(id)arg1 adBannerChanged:(_Bool)arg2 hotSpotBannerChanged:(_Bool)arg3;
- (void)onFeedContent:(id)arg1 privateStateChange:(_Bool)arg2;
- (void)onFeedContentWarnFlagChanged:(id)arg1;
- (void)onFeedContent:(id)arg1 likedDataUpdateByUserAction:(id)arg2 likeFlag:(long long)arg3 touchPoint:(struct CGPoint)arg4;
- (void)onFeedContent:(id)arg1 favDataChanged:(id)arg2;
- (void)_updateLiveAppointmentState;
- (void)onFeedLiveAppointmentUpdate;
- (void)onFeedLiveAppointmentStatusChanged;
- (void)shouldPauseByDeviceUnavailableAction;
- (void)onVideoSeekActionWithDirection:(_Bool)arg1;
- (void)onVideoWithMediaId:(id)arg1 stopPlayTime:(unsigned long long)arg2;
- (void)onVideoWithMediaId:(id)arg1 startPlayTime:(unsigned long long)arg2;
- (void)onVideoWithMediaId:(id)arg1 preloadFinishTime:(unsigned long long)arg2;
- (void)onVideoWithMediaId:(id)arg1 preloadStartTime:(unsigned long long)arg2;
- (void)liveFeedSizeUpdate:(struct CGSize)arg1;
- (void)liveFeedDidTap:(id)arg1;
- (void)onVideoHiddenBufferingView;
- (void)onVideoShowBufferingView;
- (void)updateProgressBarAndPlayTimeLabelWithCurrentPlayDuration:(double)arg1 videoDuration:(double)arg2 forbidProgressBarMovAnim:(_Bool)arg3;
- (void)updateLongVideoEntryCountdownTimeFormat:(id)arg1 adjustLongVideoEntryLayout:(_Bool)arg2;
- (void)prefetchUniversalJumperWithJumpInfo:(id)arg1;
- (void)prefetchUniversalJumper;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)onVideoPlayWithReport:(id)arg1 mediaWrap:(id)arg2 currentIndex:(unsigned long long)arg3;
- (void)onPlayerControlViewPanEndToResumePlayVideoWithPlayPosition:(double)arg1;
- (void)onPlayerControlViewTapToResumePlayVideo;
- (void)onImageViewTapAction;
- (void)onPlayerControlViewTapPauseVideo:(_Bool)arg1;
- (id)getContentFeedUsername;
- (void)stopVideoPlayerWithReport:(id)arg1 mediaWrap:(id)arg2 currentIndex:(unsigned long long)arg3;
- (void)onVideoStopPlay;
- (void)onClickMoreAction:(id)arg1;
- (void)contentMediaDidEndPlay:(id)arg1;
- (_Bool)isEnableDoubleLikeAction;
- (void)didFeedDoubleTapAction:(struct CGPoint)arg1;
- (void)didFeedDoubleTapAction;
- (void)didSelectVideoMediaMuteChanged:(_Bool)arg1;
- (void)retryLoadingVideoResource:(_Bool)arg1;
- (void)retryLoadingCoverImg;
- (void)photoContentPageTurning:(unsigned long long)arg1 lastIndex:(unsigned long long)arg2 scrollByManual:(_Bool)arg3;
- (void)resetRotateButtonForceAddShowCount:(_Bool)arg1;
- (void)showMinimizeButton;
- (void)showRotateToFullScreenTips;
- (void)showHeaderViewFollowAuthorBtn:(_Bool)arg1;
- (void)showFriendLikeViewFollowLikeBtn:(_Bool)arg1;
- (void)browseCollectionViewLongTime;
- (void)resetInteractivePanelEduShadowBubbleView;
- (id)playerView;
- (void)setPlayRate:(double)arg1;
- (void)updateCurrentVideoThumb;
- (unsigned long long)currentPage;
- (id)getCurrentMediaThumbImage;
- (id)getCurrendThumb;
- (void)resetCurrentVideoThumb;
- (void)setProgressBarStatus:(id)arg1;
- (id)progressBarStatus;
- (double)getActualPlayingTimeInMs;
- (double)getPlayVideoTotalTime;
- (double)getCurrentPlayVideoTime;
- (void)changeVideoSilenceStatue:(_Bool)arg1;
- (void)stopVideoIfSupport;
- (void)playVideoIfSupport:(double)arg1 silencePlay:(_Bool)arg2;
- (_Bool)isSupportVideoProcess;
- (void)leaveTriggerArea;
- (void)stopPhotoFeedPlay;
- (void)startPhotoFeedPlay;
- (void)enterTriggerArea;
- (_Bool)shouldShowTextView;
- (_Bool)isVideoMedia;
- (_Bool)isVaildMediaView;
- (id)currentBindTid;
- (struct CGRect)convertPureMediaViewRectTo:(id)arg1;
- (struct CGRect)convertMediaViewRectTo:(id)arg1;
- (id)formatTitle:(id)arg1;
- (void)onEventClick;
- (void)updatePageControlLayoutWithOffsetY:(double)arg1;
- (void)layoutSubviews;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)canPlayMediaSound;
- (void)pauseMediaPlayBySwitchFeed;
- (void)_triggerAntiAddictCheckLogic;
- (void)updateVideoPlayWithPauseSoundPlay:(_Bool)arg1;
- (void)_handleBriefCardViewCountdownStateStop:(_Bool)arg1;
- (void)manualTriggerPauseVideoAction;
- (void)updateLongVideoEntryLayout;
- (void)updatePanelViewShowState:(long long)arg1;
- (void)updateLongVideoEntryLayoutWithOffsetY:(double)arg1 hadLongVideo:(_Bool)arg2;
- (void)updateMediaWith:(id)arg1 scene:(unsigned long long)arg2 createTime:(id)arg3 topic:(id)arg4 eventInfo:(id)arg5 params:(id)arg6;
- (void)_updateMediaViewAccessibilityLabel;
- (_Bool)showLiveState;
- (void)dealloc;
- (void)showLongEntryBubbleIfPossible;
- (void)onClicklongVideoEntryAction;
- (id)getHeadImageViewWithUrl:(id)arg1;
- (id)getRecommendFriendLikeAvatarContainerWithLikeInfoArray:(id)arg1;
- (id)getBottomTipBarView;
- (void)prepareForReuse;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)reportExposePauseLikeProgressWithHiddenPauseButton:(_Bool)arg1 hiddenPrivateLikeButton:(_Bool)arg2;
- (void)reportTopicInfo:(id)arg1 withReportType:(unsigned long long)arg2;
- (id)getFeedPlayInfo;
- (void)reportAdGuideWithReportType:(unsigned long long)arg1;
- (void)initFuncParamsWithAdEntryView:(id)arg1;
- (void)reportAdEntryWithReportType:(long long)arg1;
- (void)reportUniversalJumperWithJumperInfo:(id)arg1 entranceType:(unsigned long long)arg2 eventType:(unsigned long long)arg3;
- (void)cellExposeReportAction;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


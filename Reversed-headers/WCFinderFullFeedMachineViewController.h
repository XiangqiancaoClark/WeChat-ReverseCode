//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "EGORefreshTableHeaderDelegate-Protocol.h"
#import "ForwardMessageLogicDelegate-Protocol.h"
#import "MMFinderMenuActionDelegate-Protocol.h"
#import "MMLiveMorphDismissTarget-Protocol.h"
#import "MMScrollActionSheetDelegate-Protocol.h"
#import "PAGViewListener-Protocol.h"
#import "RecentForwardScrollViewDelegate-Protocol.h"
#import "RingBackInfoDisplaySheetViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCCommitViewResultDelegate-Protocol.h"
#import "WCFinderCardWebViewControllerDelegate-Protocol.h"
#import "WCFinderCommentDetailViewControllerDelegate-Protocol.h"
#import "WCFinderFeedBaseViewControllerProtocol-Protocol.h"
#import "WCFinderFeedContentVMExt-Protocol.h"
#import "WCFinderFeedDownloadExt-Protocol.h"
#import "WCFinderFeedMachineVMDelegate-Protocol.h"
#import "WCFinderFeedMachineVMExt-Protocol.h"
#import "WCFinderFullMultiMediaTableViewCellDelegate-Protocol.h"
#import "WCFinderPostingCommentExt-Protocol.h"
#import "WCFinderRedDotExt-Protocol.h"
#import "WCFinderRedDotNotifyExt-Protocol.h"
#import "WCFinderRefreshTableFooterViewDelegate-Protocol.h"
#import "WCFinderStreamProfileExt-Protocol.h"
#import "WCFinderTabViewControllerProtocol-Protocol.h"
#import "WCFinderTimelineNetworkTipProtocol-Protocol.h"
#import "WCFinderVideoPlayerExt-Protocol.h"
#import "WCGeneralListMonitorExt-Protocol.h"
#import "WCGeneralMonitorDelegate-Protocol.h"

@class MMScrollViewProxy, MMUILabel, NSIndexPath, NSMutableDictionary, NSString, PAGView, UIImageView, UILabel, UIMonitorTableView, UITapGestureRecognizer, UIView, UIViewController, WCActionSheet, WCFinderFeedMachineVM, WCFinderOpenTimelineParams, WCFinderPullDownRefreshHeaderView, WCFinderRefreshTableFooterView, WCFinderScrollActionSheet, WCStoryTouchToDismissView;
@protocol WCFinderCommentBaseViewProtocol, WCFinderFullFeedMachineViewControllerDelegate;

@interface WCFinderFullFeedMachineViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCFinderFeedMachineVMExt, WCFinderRefreshTableFooterViewDelegate, EGORefreshTableHeaderDelegate, WCCommitViewResultDelegate, WCFinderRedDotNotifyExt, WCFinderFullMultiMediaTableViewCellDelegate, WCActionSheetDelegate, MMScrollActionSheetDelegate, WCGeneralListMonitorExt, WCFinderPostingCommentExt, WCFinderCommentDetailViewControllerDelegate, WCFinderVideoPlayerExt, WCFinderRedDotExt, WCFinderFeedMachineVMDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderFeedContentVMExt, WCFinderStreamProfileExt, WCGeneralMonitorDelegate, WCFinderCardWebViewControllerDelegate, MMFinderMenuActionDelegate, RecentForwardScrollViewDelegate, WCFinderFeedDownloadExt, ForwardMessageLogicDelegate, WCFinderTimelineNetworkTipProtocol, MMLiveMorphDismissTarget, PAGViewListener, RingBackInfoDisplaySheetViewDelegate, WCFinderTabViewControllerProtocol>
{
    _Bool _hasReportCreateEvent;
    _Bool _isDisableVideoAutoPlay;
    _Bool _footerNoMoreData;
    _Bool _needsResumeTimelineVideo;
    _Bool _isEnableMarkRead;
    _Bool _isViewWillAppeaer;
    _Bool _hasFetchData;
    _Bool _needShowScrollUpTips;
    id <WCFinderFullFeedMachineViewControllerDelegate> _delegate;
    long long _lastDisappearSecond;
    unsigned long long _guideBarObjectId;
    WCFinderOpenTimelineParams *_openTimelineParams;
    UIMonitorTableView *_tableView;
    WCFinderFeedMachineVM *_feedVM;
    NSString *_latestAutoplayVideoTid;
    WCFinderRefreshTableFooterView *_footerView;
    NSIndexPath *_currentForceIndexPath;
    WCFinderPullDownRefreshHeaderView *_refreshHeaderView;
    NSMutableDictionary *_exposureDict;
    UILabel *_stateTipsLabel;
    UITapGestureRecognizer *_stateRetryGesture;
    UIImageView *_retryImageView;
    UIViewController<WCFinderCommentBaseViewProtocol> *_lastCommentVC;
    NSString *_currentVideoTid;
    NSString *_currentForceTid;
    WCActionSheet *_forwardActionSheet;
    MMScrollViewProxy *_scrollProxy;
    UIView *_maskView;
    WCStoryTouchToDismissView *_scrollUpTipsView;
    double _refreshHeaderViewLastAlpha;
    unsigned long long _enterTime;
    WCFinderScrollActionSheet *_currentActionSheet;
    UIView *_scrollUpGuideAnimationMaskView;
    PAGView *_scrollUpGuideAnimationView;
    MMUILabel *_scrollUpGuideLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *scrollUpGuideLabel; // @synthesize scrollUpGuideLabel=_scrollUpGuideLabel;
@property(retain, nonatomic) PAGView *scrollUpGuideAnimationView; // @synthesize scrollUpGuideAnimationView=_scrollUpGuideAnimationView;
@property(retain, nonatomic) UIView *scrollUpGuideAnimationMaskView; // @synthesize scrollUpGuideAnimationMaskView=_scrollUpGuideAnimationMaskView;
@property(retain, nonatomic) WCFinderScrollActionSheet *currentActionSheet; // @synthesize currentActionSheet=_currentActionSheet;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(nonatomic) double refreshHeaderViewLastAlpha; // @synthesize refreshHeaderViewLastAlpha=_refreshHeaderViewLastAlpha;
@property(retain, nonatomic) WCStoryTouchToDismissView *scrollUpTipsView; // @synthesize scrollUpTipsView=_scrollUpTipsView;
@property(nonatomic) _Bool needShowScrollUpTips; // @synthesize needShowScrollUpTips=_needShowScrollUpTips;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) MMScrollViewProxy *scrollProxy; // @synthesize scrollProxy=_scrollProxy;
@property(retain, nonatomic) WCActionSheet *forwardActionSheet; // @synthesize forwardActionSheet=_forwardActionSheet;
@property(nonatomic) _Bool hasFetchData; // @synthesize hasFetchData=_hasFetchData;
@property(copy, nonatomic) NSString *currentForceTid; // @synthesize currentForceTid=_currentForceTid;
@property(nonatomic) _Bool isViewWillAppeaer; // @synthesize isViewWillAppeaer=_isViewWillAppeaer;
@property(nonatomic) _Bool isEnableMarkRead; // @synthesize isEnableMarkRead=_isEnableMarkRead;
@property(copy, nonatomic) NSString *currentVideoTid; // @synthesize currentVideoTid=_currentVideoTid;
@property(nonatomic) _Bool needsResumeTimelineVideo; // @synthesize needsResumeTimelineVideo=_needsResumeTimelineVideo;
@property(retain, nonatomic) UIViewController<WCFinderCommentBaseViewProtocol> *lastCommentVC; // @synthesize lastCommentVC=_lastCommentVC;
@property(nonatomic) _Bool footerNoMoreData; // @synthesize footerNoMoreData=_footerNoMoreData;
@property(retain, nonatomic) UIImageView *retryImageView; // @synthesize retryImageView=_retryImageView;
@property(retain, nonatomic) UITapGestureRecognizer *stateRetryGesture; // @synthesize stateRetryGesture=_stateRetryGesture;
@property(retain, nonatomic) UILabel *stateTipsLabel; // @synthesize stateTipsLabel=_stateTipsLabel;
@property(retain, nonatomic) NSMutableDictionary *exposureDict; // @synthesize exposureDict=_exposureDict;
@property(nonatomic) _Bool isDisableVideoAutoPlay; // @synthesize isDisableVideoAutoPlay=_isDisableVideoAutoPlay;
@property(retain, nonatomic) WCFinderPullDownRefreshHeaderView *refreshHeaderView; // @synthesize refreshHeaderView=_refreshHeaderView;
@property(retain, nonatomic) NSIndexPath *currentForceIndexPath; // @synthesize currentForceIndexPath=_currentForceIndexPath;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) NSString *latestAutoplayVideoTid; // @synthesize latestAutoplayVideoTid=_latestAutoplayVideoTid;
@property(retain, nonatomic) WCFinderFeedMachineVM *feedVM; // @synthesize feedVM=_feedVM;
@property(retain, nonatomic) UIMonitorTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool hasReportCreateEvent; // @synthesize hasReportCreateEvent=_hasReportCreateEvent;
@property(retain, nonatomic) WCFinderOpenTimelineParams *openTimelineParams; // @synthesize openTimelineParams=_openTimelineParams;
@property(nonatomic) unsigned long long guideBarObjectId; // @synthesize guideBarObjectId=_guideBarObjectId;
@property(nonatomic) long long lastDisappearSecond; // @synthesize lastDisappearSecond=_lastDisappearSecond;
@property(nonatomic) __weak id <WCFinderFullFeedMachineViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onAnimationTimeout:(id)arg1;
- (void)onAnimationCancel:(id)arg1;
- (void)onAnimationEnd:(id)arg1;
- (struct CGRect)morphDismissTargetFrameOnScreenForLiveId:(id)arg1 videoSize:(struct CGSize)arg2;
- (_Bool)shouldUseMorphDismissForLiveId:(id)arg1;
- (void)onRingToneSheetDisappear;
- (id)timelineTabViewController;
- (void)adjustNetworkTipView;
- (void)networkTipDidDisappear;
- (void)networkTipDidAppear;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)clickRFItemCallBack:(id)arg1;
- (void)reportItemsExposed:(id)arg1 withIndex:(unsigned long long)arg2;
- (id)getCurMaskView;
- (id)getCurrentDataItemWithSessionBuffer;
- (id)getCurViewModelLastBuff;
- (void)currentForceIndexPathWillChanged;
- (unsigned long long)tabViewControllerGetCurTableViewVisibleTopIndex;
- (void)tabViewControllerAutoRefreshTrigerByRedDot;
- (_Bool)tabViewControllerGetSelectState;
- (void)refreshHeadOnScrolltoTop;
- (void)tabViewControllerDidChangeOrientation:(_Bool)arg1;
- (void)tabViewControllerStopCurrentPlayVideo;
- (void)handleDataReportLogicViewHidden;
- (void)updateCurVideoCellPausePanel;
- (void)triggerDeselectLogic;
- (void)triggerSelectLogic;
- (void)tabViewControllerSelectionDidChange:(_Bool)arg1;
- (unsigned long long)feedViewerScene;
- (unsigned long long)feedViewControllerScene;
- (_Bool)WCFinderFeedMachineVMIsSelected;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (void)onDoneForwardForForwardViewWithContentVM:(id)arg1;
- (void)onDoneForwardMessageWithContentVM:(id)arg1 andUserArray:(id)arg2;
- (void)onChangeFollowStatusWithTid:(id)arg1 nonceID:(id)arg2;
- (void)markNeedReloadWhenAppear;
- (_Bool)triggerRefreshLogic:(unsigned int)arg1 toTab:(unsigned int)arg2;
- (void)handleDataReportLogicViewShow;
- (void)updateExposureStatusOfContentVM:(id)arg1;
- (void)pourStateIntoPool:(id)arg1;
- (void)exposeMarkRead:(id)arg1;
- (void)handleMoreFeedCellResetLogic;
- (void)handleFeedExposeLogic;
- (void)clickRecommentUrl:(id)arg1;
- (void)updateCommentDetailVCPushState:(id)arg1;
- (void)clickCommentNickname:(id)arg1 username:(id)arg2 contact:(id)arg3 isWeChatFriend:(_Bool)arg4 dataItem:(id)arg5;
- (void)onFinderVideoPlayerStartPlay;
- (void)onFinderDataItemPostingCommentFailBySpecialError:(id)arg1 errorCode:(int)arg2 errorMsg:(id)arg3;
- (void)inPicture;
- (void)showPlayRate;
- (void)deleteFeedWithContentVM:(id)arg1;
- (void)didClickToolbarDeleteAction:(id)arg1;
- (void)reportForwordWith:(id)arg1;
- (void)scrollActionSheetDidTapTransparent:(id)arg1;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onRefreshMediaUI:(id)arg1 needAnimation:(_Bool)arg2;
- (void)onClickContentMentionAction:(id)arg1 nickname:(id)arg2 dataItem:(id)arg3 commentVC:(id)arg4;
- (void)onClickContentMentionAction:(id)arg1 nickname:(id)arg2 dataItem:(id)arg3;
- (void)_pushContentMentionAction:(id)arg1 nickname:(id)arg2 dataItem:(id)arg3 fromVC:(id)arg4;
- (void)onClickContentTopicAction:(id)arg1 dataItem:(id)arg2 commentVC:(id)arg3;
- (void)onClickContentTopicAction:(id)arg1 dataItem:(id)arg2;
- (void)_pushContentTopicVCWith:(id)arg1 dataItem:(id)arg2 fromVC:(id)arg3;
- (void)onClickContentExtReadingAction:(id)arg1 commentVC:(id)arg2;
- (void)onClickContentExtReadingAction:(id)arg1;
- (void)_pushContentExtReadingWithUrl:(id)arg1 fromVC:(id)arg2;
- (void)onRefreshContentCellUI:(id)arg1;
- (void)onFinderCardWebViewControllerWillBeClosed;
- (void)onFinderCardWebViewControllerWillResume;
- (void)onFinderCardWebViewControllerJumpToOthers;
- (void)onFeedClickAdBannerWithJumpInfo:(id)arg1;
- (void)onMultiMediaCell:(id)arg1 lastestLiveInfoClickAction:(id)arg2;
- (void)onFeedCellClickHotWord:(id)arg1;
- (void)onClickEventEntry:(id)arg1;
- (void)onClickEventEntry:(id)arg1 commentVC:(id)arg2;
- (void)_pushEventEntry:(id)arg1 fromVC:(id)arg2;
- (void)onClickContentUsernameAction:(id)arg1;
- (void)onClickContentUsernameAction:(id)arg1 commentVC:(id)arg2;
- (void)_pushContentUsernameVCAction:(id)arg1 fromVC:(id)arg2;
- (void)clickContentPOIAction:(id)arg1;
- (void)clickContentPOIAction:(id)arg1 commentVC:(id)arg2;
- (void)_pushContentPOIVCAction:(id)arg1 fromVC:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onClickToolbarShareAction:(id)arg1 shareButton:(id)arg2;
- (void)onClickToolbarCollectionAction:(id)arg1;
- (void)onClickToolbarCancelUploading:(id)arg1;
- (void)onClickToolbarRetryUploading:(id)arg1;
- (void)showCommentListWithContentVM:(id)arg1 shouldEnterKeyBoard:(_Bool)arg2 refCommentID:(unsigned long long)arg3 commentAction:(unsigned long long)arg4;
- (void)onClickViewAllCommentAction:(id)arg1 isActiveInput:(_Bool)arg2 isFromCommentButton:(_Bool)arg3;
- (void)onCellTriggerAntiAddictCheckLogic;
- (void)onClickToolbarLikeAction:(id)arg1 isPrivateLike:(_Bool)arg2;
- (void)multiMediaCellShowPlayRate:(id)arg1;
- (void)multiMediaCellForceToProtrait:(id)arg1;
- (void)multiMediaCellInPicture:(id)arg1;
- (void)onVideoWithMediaId:(id)arg1 startPlayTime:(unsigned long long)arg2;
- (void)onVideoWithMediaId:(id)arg1 preloadFinishTime:(unsigned long long)arg2;
- (void)onVideoWithMediaId:(id)arg1 preloadStartTime:(unsigned long long)arg2;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)onVideoPlayWithReport:(id)arg1 mediaWrap:(id)arg2 currentIndex:(unsigned long long)arg3 forContentVM:(id)arg4;
- (_Bool)onMultiMediaCellIsInHotSpots:(id)arg1;
- (_Bool)finderMulitMediaTableViewCellCanProgressGestureWithTid:(id)arg1;
- (void)onHeaderFollowBtnClickAction:(id)arg1 followButton:(id)arg2;
- (void)onHeaderMoreClickAction:(id)arg1 shareButton:(id)arg2;
- (void)onLongPressMediaInCell:(id)arg1;
- (id)createActionSheetWithContentVM:(id)arg1;
- (void)onFeedVideoStopPlay:(id)arg1 tid:(id)arg2;
- (void)contentMediaDidEndPlay:(unsigned long long)arg1 contentVM:(id)arg2 finderPlayerReport:(id)arg3;
- (void)retryLoadingVideoResource:(_Bool)arg1;
- (void)photoContentPageTurning:(id)arg1 currentPage:(unsigned long long)arg2 lastPage:(unsigned long long)arg3;
- (void)showSpamTipsWithString:(id)arg1;
- (void)updateMetaModelWhenPositiveLogicBeTriggered:(id)arg1;
- (void)showRelatedList:(id)arg1;
- (void)likeFeedContentVMAction:(id)arg1 isPrivateLike:(_Bool)arg2 touchPoint:(struct CGPoint)arg3;
- (void)didFeedDoubleLikeAction:(id)arg1 touchPoint:(struct CGPoint)arg2;
- (void)onFeedCellDidClickLiveNowView:(id)arg1 contentVM:(id)arg2;
- (void)onFeedCellDidClickHeaderView:(id)arg1 contentVM:(id)arg2;
- (void)onClickFollowLikeBtnWithContentVM:(id)arg1;
- (void)onLiveFeedDidTap:(id)arg1;
- (void)finderFriendLikeTableViewCellClickLikeAction:(id)arg1 contentVM:(id)arg2 isNormalLiked:(_Bool)arg3;
- (void)refreshWithLastBuffer:(id)arg1 reportStatItems:(id)arg2;
- (void)scrollByContentArray:(id)arg1 targetContent:(id)arg2;
- (void)clickRecommendUrl:(id)arg1;
- (void)onRefreshFriendUI:(id)arg1;
- (void)onClickFriendGroupListDetail:(id)arg1;
- (void)onClickFriendLikeListDetail:(id)arg1;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (void)showScrollUpTipsViewWithBottomHeight:(double)arg1;
- (void)disMissScrollUpTips;
- (void)showScrollUpTips;
- (void)reportFinderGlobalPushScrollUpGuideAnimationView:(long long)arg1;
- (void)showScrollUpGuideAnimationViewDidEndPlay:(_Bool)arg1 currentPlayPosition:(double)arg2 videoDuration:(double)arg3;
- (void)showScrollUpGuideAnimationView;
- (void)showScrollUpGuideAnimationViewWhenMediaNotVideo;
- (_Bool)canShowScrollUpGuideAnimationView;
- (struct CGPoint)nearestTargetOffsetForOffset:(struct CGPoint)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)exposureTime:(id)arg1 index:(long long)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)reloadDataWrap;
- (id)getListView;
- (id)specialParamsForFeedId:(id)arg1;
- (id)feedIdByIndex:(id)arg1;
- (_Bool)isInSubScene;
- (id)feedCellViewParamModelWithContentVM:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (_Bool)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)stopRefreshHeaderLoadingCompletion:(CDUnknownBlockType)arg1 delay:(double)arg2 refreshState:(unsigned long long)arg3;
- (void)triggerActiveRefreshAction;
- (void)triggerAutoRefreshActionByClickStatusBar:(_Bool)arg1;
- (void)FeedMachineRefresh:(unsigned long long)arg1;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (void)onFeedVMInsertContentVM:(id)arg1 section:(long long)arg2;
- (void)onFeedAllDataItemsNeedClean;
- (void)processLastVideoHunger;
- (void)resetFooterViewNormal;
- (void)onDataEmptyState:(_Bool)arg1;
- (void)showMoreContentView;
- (void)onRefreshTableViewResetContentInset;
- (void)onFeedVMCommentFailNeedReload;
- (void)onFeedVMDataItemMediaResourceIsDeleted;
- (void)onFeedLastestVideoMuteNeedChange;
- (void)onFeedVMDataWillRemoved:(id)arg1;
- (void)onFeedVMDataChangedAtIndexPath:(id)arg1 contentVM:(id)arg2 animated:(_Bool)arg3;
- (void)onFeedVMDataChangedAtIndexPath:(id)arg1 contentVM:(id)arg2;
- (void)onFeedVMDataFootRefreshError;
- (void)onFeedVMDataFootRefreshNoMore;
- (void)onFeedVMDataPullRefreshError:(unsigned long long)arg1;
- (void)onFeedVMDataPullRefreshNoMore;
- (void)onFeedServerFetchHistorySuccess:(_Bool)arg1;
- (void)onFeedServerFetchSuccess;
- (void)onFeedVMDataFetchSuccess;
- (void)replaceEnhanceList:(id)arg1 location:(unsigned long long)arg2 maxUnreadCount:(unsigned long long)arg3 targetTid:(id)arg4;
- (void)appendAndDeleteSections:(id)arg1 location:(unsigned long long)arg2 maxUnreadCount:(unsigned long long)arg3 targetTid:(id)arg4;
- (void)onFeedVMDataAppendRelatedList:(id)arg1 maxUnreadCount:(unsigned long long)arg2 targetTid:(id)arg3;
- (void)updateWatchListDebugViewWith:(id)arg1;
- (void)updatePartialExposeSection;
- (void)insertAndDeleteSections:(id)arg1 location:(unsigned long long)arg2 maxUnreadCount:(unsigned long long)arg3 targetTid:(id)arg4;
- (void)onFeedVMDataInsertRelatedList:(id)arg1 maxUnreadCount:(unsigned long long)arg2 targetTid:(id)arg3;
- (void)onFeedVMDataReplaceEnhanceList:(id)arg1 maxUnreadCount:(unsigned long long)arg2 targetTid:(id)arg3;
- (void)onFeedVMDataAppend:(id)arg1;
- (void)scrollToNextVisibleCellAfterLoading:(struct CGRect)arg1;
- (void)onFeedRevertPlayerState;
- (void)onFeedVMDataChangedWithDeletedIndexSet:(id)arg1;
- (void)onFeedVMDataChanged;
- (void)onFeedVMWillChangeOriginDataIndex:(_Bool)arg1;
- (void)onFeedVMDataLocalEmpty;
- (_Bool)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)fetchNextPage;
- (void)preloadVideoItemsWithCurrentFeedNextIndex:(unsigned long long)arg1;
- (void)reportFullStatsExceptTidImmediately:(id)arg1;
- (void)reportFullStatsImmediately;
- (void)checkCurrentForceIndexPathWithTableViewTargetOffset:(struct CGPoint)arg1;
- (void)autoplayVideoProcessWithTableViewTargetOffset:(struct CGPoint)arg1;
- (id)getVisibleVideoIndexPathArray:(id)arg1;
- (void)scrollEndProcessWithTableViewTargetOffset:(struct CGPoint)arg1;
- (void)throttleScrollProcess;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)onTimelineViewEnterBackground:(id)arg1;
- (void)onTimelineViewEnterForeground:(id)arg1;
- (void)removeObserverForForegroundNotification;
- (void)addObserverForForegroundNotification;
- (void)reloadRowAtIndexPath:(id)arg1 contentVM:(id)arg2 animation:(long long)arg3;
- (void)scrollTimelineToTopWithAnimation:(_Bool)arg1;
- (void)scrollTimelineToTop;
- (void)updateCurrentVideoThumb;
- (void)resetCurrentVideoThumb;
- (void)needsUpdateCurrentVideo:(_Bool)arg1;
- (void)stopPreloadVisibleVideo;
- (void)stopVisibleVideo;
- (void)stopCurrentMedia;
- (void)addOrUpdateUsedTaskData;
- (void)setUsedTaskData:(id)arg1;
- (void)resumeCurrentMedia;
- (void)pauseCurrentMediaWithShowPauseBtn:(_Bool)arg1;
- (void)resetRetryState;
- (void)stateRetryGestureAction:(id)arg1;
- (void)dealloc;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (void)onFinderTabDisappear:(unsigned int)arg1;
- (void)onFinderTabAppear:(unsigned int)arg1;
- (void)willDisappear;
- (struct CGRect)getCurSearchBarFrame;
- (void)exposeCurrentDisplayFeed;
- (void)setUpScrollUpGuideAnimationView;
- (void)setUpFooterView;
- (void)setUpRefreshHeaderView;
- (void)setUpTableView;
- (_Bool)shouldInteractivePop;
- (_Bool)useTransparentNavibar;
- (void)viewWillLayoutSubviews;
- (void)initSubview;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


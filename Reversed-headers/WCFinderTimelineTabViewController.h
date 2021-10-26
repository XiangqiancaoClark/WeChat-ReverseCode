//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "CAAnimationDelegate-Protocol.h"
#import "CNetworkStatusExt-Protocol.h"
#import "MMLimitedModeEntryViewControllerExt-Protocol.h"
#import "MMScrollActionSheetDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCCommitViewResultDelegate-Protocol.h"
#import "WCDataSearchDelegate-Protocol.h"
#import "WCFinderAppPushExt-Protocol.h"
#import "WCFinderContactExt-Protocol.h"
#import "WCFinderFeedBaseViewControllerProtocol-Protocol.h"
#import "WCFinderFullFeedFollowViewControllerDelegate-Protocol.h"
#import "WCFinderFullFeedMachineViewControllerDelegate-Protocol.h"
#import "WCFinderFullFeedRecommendViewControllerDelegate-Protocol.h"
#import "WCFinderMentionExt-Protocol.h"
#import "WCFinderNearbyViewControllerDelegate-Protocol.h"
#import "WCFinderPostDataItemExt-Protocol.h"
#import "WCFinderPostViewControllerDelegate-Protocol.h"
#import "WCFinderPostingCommentExt-Protocol.h"
#import "WCFinderRecommendTabsViewDelegate-Protocol.h"
#import "WCFinderRedDotExt-Protocol.h"
#import "WCFinderRedDotNotifyExt-Protocol.h"
#import "WCFinderTipsViewControllerDelegate-Protocol.h"
#import "WCFinderUserPrepareCgiDelegate-Protocol.h"
#import "WCFinderVideoPlayerExt-Protocol.h"
#import "WCGeneralListMonitorExt-Protocol.h"
#import "WCSearchDelegate-Protocol.h"

@class FinderUserPrepareResponse, MMBarButton, MMScrollView, NSString, UIImageView, UILabel, UIView, WCFinderAppendTabDatasModel, WCFinderCreateCoordinator, WCFinderOpenTimelineParams, WCFinderPostActionSheetConfigArray, WCFinderRecommendTabsView, WCFinderRedDotCtrlInfo;
@protocol WCFinderTimelineTabViewControllerDelegate;

@interface WCFinderTimelineTabViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCFinderContactExt, WCFinderMentionExt, WCSearchDelegate, WCDataSearchDelegate, WCCommitViewResultDelegate, WCFinderRedDotNotifyExt, MMScrollActionSheetDelegate, UISearchBarDelegate, WCGeneralListMonitorExt, WCFinderPostingCommentExt, WCFinderPostViewControllerDelegate, WCFinderVideoPlayerExt, WCFinderRedDotExt, WCFinderTipsViewControllerDelegate, WCFinderUserPrepareCgiDelegate, WCFinderRecommendTabsViewDelegate, WCFinderNearbyViewControllerDelegate, CAAnimationDelegate, WCFinderFullFeedMachineViewControllerDelegate, WCFinderFullFeedFollowViewControllerDelegate, WCFinderPostDataItemExt, WCFinderFullFeedRecommendViewControllerDelegate, WCFinderAppPushExt, MMLimitedModeEntryViewControllerExt, CNetworkStatusExt, WCFinderFeedBaseViewControllerProtocol>
{
    _Bool _isNeedCheckFastLeave;
    _Bool _hasReportCreateEvent;
    _Bool _useNearbyLive;
    _Bool _isLimitedModeOn;
    _Bool _cameraLongPressRightButton;
    _Bool _isViewWillAppeaer;
    _Bool _timelineNoMoreCanShowHotSwitch;
    _Bool _isLandScape;
    _Bool _timelineScrollPageFeature;
    unsigned int _lastTabType;
    id <WCFinderTimelineTabViewControllerDelegate> _m_delegate;
    unsigned long long _guideBarObjectId;
    WCFinderOpenTimelineParams *_openTimelineParams;
    WCFinderAppendTabDatasModel *_appendTabDatasModel;
    UIView *_midView;
    WCFinderRecommendTabsView *_tabContainer;
    MMBarButton *_rightBarButton;
    UIView *_notifyRedPoint;
    UIView *_postCameraRedPoint;
    WCFinderCreateCoordinator *_createCoordinator;
    MMScrollView *_timelineScrollView;
    UIImageView *_collectThumbImageView;
    FinderUserPrepareResponse *_prepareResponse;
    WCFinderPostActionSheetConfigArray *_postSheetConfigArray;
    UIView *_shadeView;
    UILabel *_networkTipLabel;
}

+ (unsigned int)getTabTypeWithRedDotCtrlInfoType:(unsigned long long)arg1;
+ (unsigned int)getLastTabType;
+ (_Bool)isInitNeedRedDotSwitchTabWithCtrlType:(unsigned long long)arg1;
+ (unsigned int)getTargtTabTypeWith:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *networkTipLabel; // @synthesize networkTipLabel=_networkTipLabel;
@property(nonatomic) _Bool timelineScrollPageFeature; // @synthesize timelineScrollPageFeature=_timelineScrollPageFeature;
@property(retain, nonatomic) UIView *shadeView; // @synthesize shadeView=_shadeView;
@property(nonatomic) _Bool isLandScape; // @synthesize isLandScape=_isLandScape;
@property(retain, nonatomic) WCFinderPostActionSheetConfigArray *postSheetConfigArray; // @synthesize postSheetConfigArray=_postSheetConfigArray;
@property(retain, nonatomic) FinderUserPrepareResponse *prepareResponse; // @synthesize prepareResponse=_prepareResponse;
@property(retain, nonatomic) UIImageView *collectThumbImageView; // @synthesize collectThumbImageView=_collectThumbImageView;
@property(nonatomic) _Bool timelineNoMoreCanShowHotSwitch; // @synthesize timelineNoMoreCanShowHotSwitch=_timelineNoMoreCanShowHotSwitch;
@property(retain, nonatomic) MMScrollView *timelineScrollView; // @synthesize timelineScrollView=_timelineScrollView;
@property(nonatomic) _Bool isViewWillAppeaer; // @synthesize isViewWillAppeaer=_isViewWillAppeaer;
@property(retain, nonatomic) WCFinderCreateCoordinator *createCoordinator; // @synthesize createCoordinator=_createCoordinator;
@property(nonatomic) _Bool cameraLongPressRightButton; // @synthesize cameraLongPressRightButton=_cameraLongPressRightButton;
@property(nonatomic) __weak UIView *postCameraRedPoint; // @synthesize postCameraRedPoint=_postCameraRedPoint;
@property(nonatomic) __weak UIView *notifyRedPoint; // @synthesize notifyRedPoint=_notifyRedPoint;
@property(nonatomic) __weak MMBarButton *rightBarButton; // @synthesize rightBarButton=_rightBarButton;
@property(retain, nonatomic) WCFinderRecommendTabsView *tabContainer; // @synthesize tabContainer=_tabContainer;
@property(retain, nonatomic) UIView *midView; // @synthesize midView=_midView;
@property(retain, nonatomic) WCFinderAppendTabDatasModel *appendTabDatasModel; // @synthesize appendTabDatasModel=_appendTabDatasModel;
@property(retain, nonatomic) WCFinderOpenTimelineParams *openTimelineParams; // @synthesize openTimelineParams=_openTimelineParams;
@property(nonatomic) _Bool isLimitedModeOn; // @synthesize isLimitedModeOn=_isLimitedModeOn;
@property(nonatomic) unsigned long long guideBarObjectId; // @synthesize guideBarObjectId=_guideBarObjectId;
@property(nonatomic) _Bool useNearbyLive; // @synthesize useNearbyLive=_useNearbyLive;
@property(nonatomic) __weak id <WCFinderTimelineTabViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) unsigned int lastTabType; // @synthesize lastTabType=_lastTabType;
@property(nonatomic) _Bool hasReportCreateEvent; // @synthesize hasReportCreateEvent=_hasReportCreateEvent;
@property(nonatomic) _Bool isNeedCheckFastLeave; // @synthesize isNeedCheckFastLeave=_isNeedCheckFastLeave;
- (void)limitedModeEntryViewControllerViewDidBePoped:(id)arg1;
- (void)ReachabilityChange:(unsigned int)arg1;
- (double)networkTipViewBottom;
- (_Bool)showingNetworkTipView;
- (void)hideNetworkTipAfterDelay:(unsigned long long)arg1;
- (void)showNetworkTip;
- (void)showNetworkTipIfNeeded;
- (void)onSwitchScene:(id)arg1;
- (void)onFinderAPNsPushBeClicked;
- (void)preFetchEnterDataWithRedDotPath:(id)arg1 tabType:(long long)arg2 timelineTabType:(unsigned int)arg3;
- (void)_preFetchOtherTabData;
- (void)setDirectlyOpenWebOrMiniApp:(_Bool)arg1;
- (_Bool)directlyOpenWebOrMiniApp;
@property(retain, nonatomic) WCFinderRedDotCtrlInfo *finderEntryRedDotCtrlInfo;
- (void)checkAbnormalLiveIfNeeded;
- (_Bool)onFollowGetHotTabNeedTopRefresh;
- (id)onFollowGetHotTabLastBuff;
- (unsigned long long)feedViewerScene;
- (unsigned long long)feedViewControllerScene;
- (id)getTimelineTabPrefetchLastBuff:(unsigned int)arg1;
- (void)onNearByViewBePushed;
- (void)onStreamNearbyDisappear;
- (void)reportNearByAndChangeTabContextID;
- (void)onCategoryNearbyBePushed;
- (void)updateFollowRefreshLogic:(_Bool)arg1;
- (_Bool)isPatPostFromTimeline;
- (void)onFinderDataItemStartUpLoad:(id)arg1;
- (void)onMachineFeedVMDataPullRefreshError:(int)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)onMachineUpdateTabSesstionID;
- (void)onMachineTopRefreshFinished:(_Bool)arg1 byTopRefresh:(_Bool)arg2;
- (id)onMachineGetAppendTabDatasModel;
- (id)getTabViewControllerWithType:(unsigned int)arg1;
- (_Bool)onFollowTimelineNoMoreCanShowHotSwitch;
- (void)onFollowTopRefreshFinished:(_Bool)arg1 byTopRefresh:(_Bool)arg2;
- (void)onFeedFollowClickMoreHotContent;
- (id)onFollowGetAppendTabDatasModel;
- (void)onFeedRecommendClickJumpView;
- (void)onFeedRecommendShowJumpViewWithContentArray:(id)arg1;
- (void)onFeedRecommendClickHotCardItemWithContentArray:(id)arg1 scrollToContentVM:(id)arg2;
- (_Bool)onRecommendTimelineNoMoreCanShowHotSwitch;
- (void)onSelectedHotTabWithoutAnimationWithlastBuffer:(id)arg1 readDataItems:(id)arg2;
- (void)onFeedRecommendClickHotCardWithBuffer:(id)arg1 reportStatItems:(id)arg2;
- (void)onRecommendTopRefreshFinished:(_Bool)arg1 byTopRefresh:(_Bool)arg2;
- (void)onFeedRecommendClickHotCardBlank;
- (void)onFeedRecommendClickDivHotButton;
- (_Bool)getHotTabNeedTopRefresh;
- (_Bool)onFeedRecommendGetHotTabNeedTopRefresh;
- (id)onRecommendGetHotTabLastBuff;
- (id)onRecommendGetAppendTabDatasModel;
- (id)getAppendTabDatasModelWithTab:(unsigned int)arg1;
- (void)stopUnSelectTabVideoPlay:(unsigned int)arg1;
- (void)deselectAllChildViewControllers;
- (void)updateTabSelectState:(unsigned int)arg1 toTab:(unsigned int)arg2 manualyTappedType:(unsigned long long)arg3;
- (void)delayPostWithPostStateModel:(id)arg1;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldInteractivePop;
- (_Bool)shouldAutorotate;
- (_Bool)shouldShowRedDotForTab:(unsigned int)arg1;
- (void)setViewController:(id)arg1;
- (void)initSubViewControllers;
- (void)selectedTabWillChanged:(unsigned int)arg1 toTab:(unsigned int)arg2 manualyTappedType:(unsigned long long)arg3;
- (_Bool)needAnimationSwitchTab:(unsigned long long)arg1;
- (void)handleTabSelected:(long long)arg1 tabConfig:(id)arg2 manualyTappedType:(unsigned long long)arg3 doubleClicked:(_Bool)arg4;
- (void)syncPostActionSheetConfigToLocalWith:(id)arg1;
- (void)userPrepareCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)reportTimelineTabRedDot:(unsigned int)arg1 actionType:(unsigned long long)arg2 isTriggerByUser:(_Bool)arg3;
- (void)reportTimelineTabRedDot:(unsigned int)arg1 actionType:(unsigned long long)arg2;
- (void)finderRedDotDataRevokedWithPathKey:(id)arg1;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (void)postViewControllerPostSucWithModel:(id)arg1;
- (void)onFinderDataItemPostingCommentFailBySpecialError:(id)arg1 errorCode:(int)arg2 errorMsg:(id)arg3;
- (void)onFinderNotifyTimelineShouldShowRedDot;
- (void)onFinderNotifyUnreadMentionCountNeedReload;
- (void)openPersonalCenterWithPostAction:(_Bool)arg1 fromScene:(unsigned long long)arg2;
- (void)onPersonalCenterButtonClicked;
- (_Bool)enableTimelineScrollPageFeature;
- (void)updateTimelineScrollViewPageEnabledState;
- (void)viewDidTransitionToNewSize;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)enterTimelineVCDataReportWithRedDotId:(id)arg1;
- (void)scrollViewDidEndScroll;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)updateShadeViewWithScrollPrecent:(double)arg1 fromTabType:(unsigned int)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateLastTabTypeWithAnimTabType:(unsigned int)arg1;
- (_Bool)useTransparentNavibar;
- (void)dealloc;
- (void)willDisappear;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)reportCurSearchExposeState;
- (void)_openWebOrMiniAppWithCtrlInfo:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)reportRightBarItemRedDot;
- (void)onSearchClicked;
- (void)onBackButtonClicked:(id)arg1;
- (id)getRedPointView;
- (id)getDigitalBtnWithCount:(long long)arg1;
- (void)_updateRightNotifyRedPointIgnoreAppearState:(_Bool)arg1;
- (void)updateRightBarButtonItemIgnoreAppearState:(_Bool)arg1;
- (void)updateRightBarButtonItem;
- (void)setUpNavTitleView;
- (double)_getTabContainerWid;
- (void)initScrollView;
- (void)fetchUserPrepareForUpdateContact;
- (id)getViewControllerBy:(unsigned int)arg1;
- (id)getCurrentSelectedVC;
- (void)updateCurLayoutAccordingToLastTabTypeState;
- (void)viewDidLoad;
- (void)updateTimelineScrollViewContentSize;
- (void)viewWillLayoutSubviews;
- (void)reportFluencyInfo;
- (id)initWithTargetTabType:(unsigned int)arg1;
- (id)initWithRedDotCtrlType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

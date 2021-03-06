//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTabBarBaseViewController.h"

#import "FriendAsistSessionExt-Protocol.h"
#import "GameLifeDataServiceExt-Protocol.h"
#import "IExptServiceExt-Protocol.h"
#import "IGameCenterExt-Protocol.h"
#import "IGameCenterMsgNotifyExt-Protocol.h"
#import "IMMFontMgrExt-Protocol.h"
#import "IOnlineClientMgrExt-Protocol.h"
#import "ISearchConfigDataExt-Protocol.h"
#import "ISettingExtChange-Protocol.h"
#import "IUpdateProfileMgrExt-Protocol.h"
#import "IWCJdBussinessMgrExt-Protocol.h"
#import "IWCLabsMgrExt-Protocol.h"
#import "IWCNearbyMgrExt-Protocol.h"
#import "IWSSearchUtilExtension-Protocol.h"
#import "IWebSearchRedPointMgrExt-Protocol.h"
#import "MMCleanCacheMgrExt-Protocol.h"
#import "MMConfigMgrExt-Protocol.h"
#import "MMLimitedModeExt-Protocol.h"
#import "MMNewTipsMgrExt-Protocol.h"
#import "MMWebImageViewDelegate-Protocol.h"
#import "MMWebViewDelegate-Protocol.h"
#import "MainTableDelegate-Protocol.h"
#import "SettingDiscoverEntranceBroadCast-Protocol.h"
#import "ShakeMgrExt-Protocol.h"
#import "ShakeViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCBeaconGuideModeExt-Protocol.h"
#import "WCFacadeExt-Protocol.h"
#import "WCFinderDebugExt-Protocol.h"
#import "WCFinderFeedBaseViewControllerProtocol-Protocol.h"
#import "WCFinderRedDotExt-Protocol.h"
#import "WCFinderRedDotNotifyExt-Protocol.h"
#import "WCFinderRictTextTipsViewControllerDelegate-Protocol.h"
#import "WCFinderSwitchExt-Protocol.h"
#import "WCFinderTimelineTabViewControllerDelegate-Protocol.h"
#import "WCTimeLineViewControllerDelegate-Protocol.h"
#import "WCWebSearchViewControllerDelegate-Protocol.h"
#import "WSLocalWebViewControllerDelegate-Protocol.h"

@class GameIndexSettingControl, MMHeadImageView, MMMainTableView, MMTimer, NSIndexPath, NSMutableSet, NSString, UIImageView, UIView, WCDataItem, WCFinderLiveDiscoveryCacheModel, WCFinderNearbyTabPageCacheModel, WCFinderTimelineTabViewController, WCTimeLineViewController, WCWebSearchViewControllerNewH5;

@interface FindFriendEntryViewController : MMTabBarBaseViewController <MMCleanCacheMgrExt, MainTableDelegate, IWebSearchRedPointMgrExt, WSLocalWebViewControllerDelegate, WCWebSearchViewControllerDelegate, SettingDiscoverEntranceBroadCast, IUpdateProfileMgrExt, MMWebViewDelegate, IWSSearchUtilExtension, IWCNearbyMgrExt, MMNewTipsMgrExt, WCFinderRedDotNotifyExt, WCFinderRedDotExt, WCFinderDebugExt, WCFinderTimelineTabViewControllerDelegate, GameLifeDataServiceExt, MMLimitedModeExt, WCFinderSwitchExt, WCFinderRictTextTipsViewControllerDelegate, IExptServiceExt, ShakeViewDelegate, UITableViewDataSource, UITableViewDelegate, WCFacadeExt, WCTimeLineViewControllerDelegate, FriendAsistSessionExt, ISettingExtChange, ShakeMgrExt, MMConfigMgrExt, IOnlineClientMgrExt, WCActionSheetDelegate, IMMFontMgrExt, IWCJdBussinessMgrExt, IGameCenterExt, IGameCenterMsgNotifyExt, MMWebImageViewDelegate, WCBeaconGuideModeExt, ISearchConfigDataExt, IWCLabsMgrExt, WCFinderFeedBaseViewControllerProtocol>
{
    _Bool m_bNeedToDestroySelf;
    _Bool m_bBeingAppear;
    _Bool m_findTabHasShow;
    _Bool m_isOnAppearState;
    NSString *m_gameCenterNoticeID;
    NSString *m_gameCenterAppIDForStat;
    unsigned int _startTime;
    GameIndexSettingControl *m_gameEntrySetting;
    NSString *m_ffBrowseReddotMsgIdDuringSelect;
    WCWebSearchViewControllerNewH5 *m_FFWebSearchViewController;
    MMTimer *m_FFWebSearchViewCacheTimer;
    long long finderPrefetchTimingSeconds;
    NSString *m_hadRptRedSnsId;
    _Bool m_reportJdExposeAtAppear;
    _Bool m_hasGameLifeReddot;
    _Bool m_hasInitData;
    MMMainTableView *m_tableView;
    struct stEntryRow *m_aryEntryRow;
    struct map<unsigned long, unsigned int, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>> m_mapSectionType;
    struct map<unsigned long, unsigned int, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>> m_mapRowToRowTypeAlbum;
    struct map<unsigned long, unsigned int, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>> m_mapRowToRowTypeSocial;
    struct map<unsigned long, unsigned int, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>> m_mapRowToRowTypeMotion;
    struct map<unsigned long, unsigned int, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>> m_mapRowToRowTypeSearch;
    struct map<unsigned long, unsigned int, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>> m_mapRowToRowTypeOpen;
    struct map<unsigned long, unsigned int, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>> m_mapRowToRowTypeWCO;
    struct map<unsigned long, unsigned int, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>> m_mapRowToRowTypeAppBrand;
    struct map<unsigned long, unsigned int, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>> m_mapRowToRowTypeFinder;
    NSIndexPath *m_WCTimeLineIndexPath;
    WCDataItem *m_latestSeenDataItem;
    WCDataItem *m_latesetDataItem;
    NSIndexPath *m_lbsIndexPath;
    NSIndexPath *m_shakeIndexPath;
    NSIndexPath *m_gameIndexPath;
    _Bool m_needDoGameSync;
    NSIndexPath *m_WCFinderIndexPath;
    WCTimeLineViewController *m_timelineViewController;
    MMTimer *m_timelineCacheTimer;
    MMHeadImageView *m_timelineHeadView;
    UIImageView *m_timelineRedDotView;
    _Bool m_inTimeline;
    long long m_gameNotifyType;
    _Bool _hasFinderEntranceRedDotBefore;
    _Bool _lastLiveEntranceSwitch;
    WCFinderTimelineTabViewController *_finderTimelineTabVC;
    UIView *_allEntriesClosedHintView;
    WCFinderNearbyTabPageCacheModel *_nearbyCacheModel;
    NSMutableSet *_nearbyLiveDataItemPrefetchSet;
    NSMutableSet *_discoveryLiveDataItemPrefetchSet;
    WCFinderLiveDiscoveryCacheModel *_liveCacheModel;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool lastLiveEntranceSwitch; // @synthesize lastLiveEntranceSwitch=_lastLiveEntranceSwitch;
@property(retain, nonatomic) WCFinderLiveDiscoveryCacheModel *liveCacheModel; // @synthesize liveCacheModel=_liveCacheModel;
@property(retain, nonatomic) NSMutableSet *discoveryLiveDataItemPrefetchSet; // @synthesize discoveryLiveDataItemPrefetchSet=_discoveryLiveDataItemPrefetchSet;
@property(retain, nonatomic) NSMutableSet *nearbyLiveDataItemPrefetchSet; // @synthesize nearbyLiveDataItemPrefetchSet=_nearbyLiveDataItemPrefetchSet;
@property(retain, nonatomic) WCFinderNearbyTabPageCacheModel *nearbyCacheModel; // @synthesize nearbyCacheModel=_nearbyCacheModel;
@property(nonatomic) _Bool hasFinderEntranceRedDotBefore; // @synthesize hasFinderEntranceRedDotBefore=_hasFinderEntranceRedDotBefore;
@property(retain, nonatomic) UIView *allEntriesClosedHintView; // @synthesize allEntriesClosedHintView=_allEntriesClosedHintView;
@property(retain, nonatomic) WCFinderTimelineTabViewController *finderTimelineTabVC; // @synthesize finderTimelineTabVC=_finderTimelineTabVC;
@property(retain, nonatomic) NSIndexPath *m_lbsIndexPath; // @synthesize m_lbsIndexPath;
@property(retain, nonatomic) NSIndexPath *m_gameIndexPath; // @synthesize m_gameIndexPath;
@property(retain, nonatomic) NSIndexPath *m_shakeIndexPath; // @synthesize m_shakeIndexPath;
- (void)preloadFinderResource;
- (void)onExptItemListChange;
- (unsigned long long)feedViewerScene;
- (unsigned long long)feedViewControllerScene;
- (void)tipsVCClickConfirmButton:(id)arg1;
- (void)noteEntryRedDot:(long long)arg1 andHadRedDot:(_Bool)arg2;
- (void)finderNearbyLiveSwitchChange;
- (void)liveLimitModeChanged;
- (void)nearbyLimitModeChanged;
- (void)finderLimitModeChanged;
- (void)onLimitedModeBizLevelChange:(long long)arg1 bizType:(long long)arg2;
- (void)onLimitedModeChanged;
- (void)onFinderTimeLineTabViewReturn;
- (void)reinitFeedTimeline;
- (void)onFinderNotifyFinderRedDotStatusChange;
- (void)finderRedDotDataReceiveWithPathKey:(id)arg1 isAlreadExistRedDot:(_Bool)arg2;
- (void)_handleFinderBusinessRedDotLogic:(id)arg1;
- (void)_handleFinderDiscoveryRedDotLogic:(id)arg1;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (void)onTipsShowInfoChangeWithPathKey:(id)arg1;
- (void)onNearbyMgrExtRedNewStateChange:(_Bool)arg1;
- (void)onNearbyMgrExtRedDotStateChange:(_Bool)arg1;
- (void)rptEnterTimeLine:(id)arg1;
- (void)rptSnsRedDotDisplay:(id)arg1;
- (_Bool)tryPreloadWebRecommendPage;
- (id)getSharedWebRecommendViewController;
- (void)onCloseSearchPreloadWebview;
- (id)onWebViewPassParams:(id)arg1 Webview:(id)arg2;
- (void)onProfileChange;
- (void)onDiscoverPageReddotSettingChangedForEntranceType:(unsigned long long)arg1 isShow:(_Bool)arg2;
- (void)clearNearbyPeopleRedDotIfNeed;
- (void)onDiscoverEntranceSettingChanged;
- (void)onEnterSettingView;
- (void)checkAndShowAllEntriesClosedHintView;
- (void)setupAllEntriesClosedHintView;
- (void)closeWCWebSearchViewWithNeedPreload:(_Bool)arg1;
- (void)onCloseWCWebSearchViewTimeOut;
- (void)onForbidCacheWCWebSearchView;
- (void)onWCWebSearchViewReturn:(id)arg1;
- (void)onRemoveRecommendReddot;
- (void)onRemoveRecommendNumberReddot:(id)arg1;
- (void)onWebRecommendTabDataChange:(_Bool)arg1;
- (void)onForbidCacheWSLocalWebView;
- (void)onWebSearchRedPointChange:(id)arg1;
- (void)onLabAppSwitchChanged:(id)arg1;
- (void)onSearchConfigDataUpdated;
- (void)onSearchConfigDataFailToUpdate;
- (void)updateSearchInfo;
- (void)initSearchInfo;
- (id)getGameCenterHomeViewController:(unsigned int)arg1 EntranceRedDot:(id)arg2;
- (void)openGameCenter:(unsigned int)arg1;
- (void)openGameCenter;
- (void)preloadGameCenterWebViewControllerIfNeed;
- (void)onLoadImageOK:(id)arg1;
- (void)onGameCenterUpdateGameLifeFindDot;
- (void)onGameCenterDeleteOneMsg:(unsigned int)arg1;
- (void)onGameCenterDeleteAllMsg;
- (void)onGameCenterEntryIconStatusChanged;
- (void)onGameCenterClearAllRedDot;
- (void)onGameCenterMessageReceived;
- (void)onConversationUpdated;
- (void)onCacheMgrCleanCacheWarning;
- (void)initDeepLinkConfig;
- (id)webViewWithURL:(id)arg1;
- (id)getVCWithDeepLinkName:(id)arg1;
- (void)onDidFetchedNoContentWithError:(unsigned long long)arg1;
- (void)onFontSizeChange;
- (void)onMarkTimelineListReadWithTid:(id)arg1 andCreateTime:(unsigned long long)arg2;
- (void)onMMDynamicConfigUpdated;
- (void)onJdBussinessRecvBewXml;
- (void)onJdBussinessReloadTip;
- (void)onJdBussinessEntranceChanged;
- (void)onNewGameAdChanged;
- (void)onGameNewAppCountChanged;
- (void)onGameGiftInfoChanged;
- (void)onGameMessageUnReadCountChanged;
- (void)onGameEntryChanged;
- (void)onShakeMsgUnreadCountChanged;
- (void)onShakeStatusChanged;
- (void)onSettingExtChanged:(long long)arg1;
- (void)onFriendAssistUnreadCountChanged;
- (void)onTimeLineViewReturn;
- (void)onMarkWCObjectAsRead:(id)arg1;
- (void)onMessageUnReadCountChanged;
- (void)onReveiceWCMessage:(id)arg1;
- (void)onHomepageUpdate:(long long)arg1 withAdded:(id)arg2 andChanged:(id)arg3 andDeleted:(id)arg4 andTip:(id)arg5;
- (void)onLatestWCObjectChanged:(id)arg1;
- (_Bool)validateMomentsCreateTimeForDataItem:(id)arg1;
- (id)descriptionForMomentsDataItem:(id)arg1;
- (void)updateFinderCellLineViewHeadImage:(id)arg1 rowType:(unsigned long long)arg2 redDotPath:(id)arg3;
- (void)resetFinderCellLineViewHeadImage:(id)arg1 rowType:(unsigned long long)arg2;
- (void)updateWCTimeLineView:(id)arg1;
- (_Bool)tryCleanLiveEntranceCache;
- (void)updateLiveEntranceAndCheckCleanCache;
- (_Bool)shouldShowFinderLiveEntry;
- (_Bool)shouldShowShakeEntry;
- (_Bool)shouldShowNearbyEntry;
- (_Bool)shouldShowWCOEntry;
- (_Bool)shouldShowAppBrandEntry;
- (_Bool)shouldShowGameEntry;
- (_Bool)shouldShowJDStoreEntry;
- (_Bool)shouldShowScanQRCodeEntry;
- (_Bool)shouldShowSearchEntry;
- (_Bool)shouldShowBrowseEntry;
- (id)preOpenWSLocalWebView;
- (int)getReportKeyWhenEnterWithVCType:(unsigned long long)arg1;
- (int)getHitTypeWhenEnterWithVCType:(unsigned long long)arg1;
- (void)openBrowseEntry;
- (id)preOpenWebSearchView;
- (void)openNearbyEntry;
- (void)openSearchEntry;
- (void)openWeAppDestopWithAnimate:(_Bool)arg1;
- (void)openWeAppDestopForScene:(unsigned long long)arg1;
- (void)openCameraScan:(int)arg1;
- (void)openLBS;
- (void)reportFinderLiveRedDotClick;
- (void)reportNearbyLiveRedDotFailIfNeed:(unsigned long long)arg1;
- (void)reportNearbyRedDotClick;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)reportFFSearchEntranceExpose;
- (void)viewDidAppear:(_Bool)arg1;
- (void)tryPreloadFFSearchWebview;
- (void)tryPreloadFFBrowseWebview;
- (void)viewWillAppear:(_Bool)arg1;
- (void)checkIfAnimationFail;
- (void)statViewOrClickJDCell:(unsigned int)arg1 reportType:(unsigned int)arg2;
- (void)viewDidLoad;
- (void)initView;
- (void)initTitle;
- (void)initTableView;
- (void)updateViewWhenSelectTab:(_Bool)arg1;
- (void)willAppear;
- (_Bool)badgeAtTopStoriesCell;
- (_Bool)badgeAtMomentCell;
- (_Bool)badgeAtTab;
- (void)updateTabBarBadge;
- (_Bool)shouldShowTabBarBadgeForWCUploadFail;
- (long long)numberOfUnreadAtTopStoriesCell;
- (long long)numberOfUnreadAtMomentCell;
- (long long)numberOfUnreadAtTab;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)handleAppBrandEntry;
- (void)handleWCOEntry;
- (void)handleJDStoreCell:(id)arg1;
- (void)handleSelectedEntryCell:(unsigned long long)arg1;
- (void)reloadGameRow;
- (void)resetReddot:(struct stEntryRow *)arg1;
- (void)configNewTipsReddot:(struct stEntryRow *)arg1;
- (void)configIconReddot:(struct stEntryRow *)arg1 Title:(id)arg2 IconUrl:(id)arg3;
- (void)configTitleReddot:(struct stEntryRow *)arg1 Title:(id)arg2;
- (void)configBadgeReddot:(struct stEntryRow *)arg1 Badge:(id)arg2;
- (id)getRightImageViewWithUrl:(id)arg1;
- (_Bool)disposeNewTipsWithPathKey:(id)arg1;
- (void)makeFinderRedDotCell:(struct stEntryRow *)arg1 path:(id)arg2;
- (void)makeFinderLiveCell:(struct stEntryRow *)arg1 cell:(id)arg2;
- (_Bool)checkCanNearbyShowRedDot;
- (void)makeFinderNearbyCell:(struct stEntryRow *)arg1 cell:(id)arg2;
- (void)_updateFinderCellAccessibilityLabel:(id)arg1;
- (void)makeFinderCell:(struct stEntryRow *)arg1 cell:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)_updateFinderRowRedDotTitleLabelWith:(id)arg1 entryCell:(id)arg2 reddotTextLabelX:(double)arg3 rightMargin:(double)arg4 reddotTextLabelMinX:(double)arg5;
- (void)makeEntryCell:(id)arg1 rowType:(unsigned long long)arg2;
- (void)getSearchBadgeViewWithRedPointInfo:(id)arg1 numRedPointInfo:(id)arg2 entryRow:(struct stEntryRow *)arg3;
- (id)updateGameCenterEntry:(id)arg1;
- (void)updateGameCenterEntrance;
- (void)updateJDStoreEntry;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)doSelectCell:(long long)arg1;
- (void)onCloseAlbumTimeOut;
- (void)closeAlbum;
- (void)openAlbumAndPublishText;
- (void)openAlbumAndPublish;
- (void)openAlbum;
- (void)openAlbumAnimated:(_Bool)arg1;
- (void)pushFinderTimelineFromOtherSceneWithPrams:(id)arg1;
- (void)onWCTimeLineViewControllerLeaveForFinderPersonalCenter;
- (void)onWCTimeLineViewControllerLeaveForFinderEntranceWithPostStateModel:(id)arg1;
- (id)preOpenAlbumView;
- (void)openNormalShake;
- (void)OnShakeVCDealloc;
- (void)openShakeWithAnimate:(_Bool)arg1;
- (void)openShakeFromInnerWithAnimate:(_Bool)arg1;
- (void)goToShakeWithAnimate:(_Bool)arg1;
- (void)_openWebOrMiniApp:(_Bool)arg1 ctrlInfo:(id)arg2;
- (void)_updateFinderAppendDatasWith:(id)arg1;
- (void)_openFinderTimelineWithParams:(id)arg1;
- (unsigned long long)_getOpenFinderTimelineForceJumpTabTypeWith:(unsigned long long)arg1 redDotExtInfo:(id)arg2;
- (id)_enterFinderEntryWithParams:(id)arg1;
- (void)onClickFindPageFinderCell;
- (void)showFinderEnterTips;
- (void)openFinderLiveEntry;
- (void)openFinderIfNeeded;
- (void)reportFinderDiscoveryRedDotAction:(long long)arg1;
- (long long)getFinderEntryTargetTabType;
- (void)prefetchFinderDataIfNeedWithType:(unsigned long long)arg1;
- (void)prefetchFinderDataByRedDotIfNeeded;
- (void)prefetchDiscoveryLiveDataIfNeedWithType:(unsigned long long)arg1;
- (void)prefetchNearbyLiveDataIfNeedWithType:(unsigned long long)arg1;
- (unsigned long long)getNearbySelectedType;
- (unsigned long long)getNearbyLiveCommentScene:(unsigned long long)arg1;
- (void)updateNearbyContextIdWithSelectType:(unsigned long long)arg1;
- (void)openNearByLiveVC;
- (void)backToSplitViewEmptyViewController:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)triggerFinderPrefetchDataNeedConfCheck:(_Bool)arg1 needSecondsCheck:(_Bool)arg2 needRedDotCheck:(_Bool)arg3 ignoreIntevalConfCheck:(_Bool)arg4;
- (_Bool)enableTriggerFinderPrefetchLogicAfterRedDotCheck;
- (void)tryInit;
- (_Bool)isSameFlatArray:(id)arg1 withOtherArray:(id)arg2;
- (id)flatAllRowData;
- (_Bool)checkAndReloadData;
- (void)reloadData;
- (void)pluginsChanged:(id)arg1;
- (void)resetSectionType;
- (void)resetRowType;
- (void)initRow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


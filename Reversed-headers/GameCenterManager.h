//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "GameLibrarayLogicControllerDelegate-Protocol.h"
#import "GameSearchManagerDelegate-Protocol.h"
#import "GameSettingLogicControllerDelegate-Protocol.h"
#import "IAPExt-Protocol.h"
#import "IAppDataExt-Protocol.h"
#import "IMMLanguageMgrExt-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "MMWebViewDelegate-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class EntranceRedDot, GameCenterDetailLogicController, GameLibrarayLogicController, GameSearchManager, GameSearchRecommendList, GameSettingLogicController, GetGameCenterGlobalSettingResponse, GetGameIndex4Response, GetGameIndex4TabNavResponse, GetGameIndexForeignResponse, MMWebViewController, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, WAAppIdToUsernameTransfer;

@interface GameCenterManager : MMUserService <MMWebViewDelegate, MMServiceProtocol, MMKernelExt, IAppDataExt, PBMessageObserverDelegate, GameLibrarayLogicControllerDelegate, GameSearchManagerDelegate, IAPExt, GameSettingLogicControllerDelegate, IMMLanguageMgrExt>
{
    NSMutableArray *_gameIntroList;
    NSMutableDictionary *_gameDetailDict;
    NSMutableDictionary *_subscribeInfoDict;
    _Bool _gameIntroLoaded;
    NSMutableArray *_allGameList;
    NSMutableArray *_allMiniGameList;
    NSMutableDictionary *_appid2UrlInGlobalSearch;
    unsigned int _lastFetchCountryTime;
    NSString *_appStoreCountryCode;
    GameSearchRecommendList *_searchRecommendList;
    GetGameCenterGlobalSettingResponse *_gameGlobalSetting;
    NSMutableDictionary *_h5GameAppid2Menu;
    unsigned int _lastFetchGlobalSettingTime;
    GetGameIndexForeignResponse *_foreignHomeDataV4;
    GetGameIndex4TabNavResponse *_tabNavDataV5;
    GetGameIndex4Response *_homeDataV5;
    GameCenterDetailLogicController *_detailLogicController;
    GameLibrarayLogicController *_librarayLogicController;
    GameSettingLogicController *_settingLogicController;
    GameSearchManager *_searchMgr;
    NSString *_iapProductID;
    MMWebViewController *_floatLayerWebViewController;
    EntranceRedDot *_entranceRedDot;
    NSMutableDictionary *_productId2AppStoreViewController;
    WAAppIdToUsernameTransfer *_weAppIDTransfer;
    NSMutableDictionary *_webVCKey2PrloadUrl;
    NSMutableDictionary *_url2PreloadWebVC;
    NSMutableSet *_preloadingWebVCSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *preloadingWebVCSet; // @synthesize preloadingWebVCSet=_preloadingWebVCSet;
@property(retain) NSMutableDictionary *url2PreloadWebVC; // @synthesize url2PreloadWebVC=_url2PreloadWebVC;
@property(retain, nonatomic) NSMutableDictionary *webVCKey2PrloadUrl; // @synthesize webVCKey2PrloadUrl=_webVCKey2PrloadUrl;
@property(retain, nonatomic) WAAppIdToUsernameTransfer *weAppIDTransfer; // @synthesize weAppIDTransfer=_weAppIDTransfer;
@property(retain, nonatomic) NSMutableDictionary *productId2AppStoreViewController; // @synthesize productId2AppStoreViewController=_productId2AppStoreViewController;
@property(retain, nonatomic) EntranceRedDot *entranceRedDot; // @synthesize entranceRedDot=_entranceRedDot;
@property(nonatomic) __weak MMWebViewController *floatLayerWebViewController; // @synthesize floatLayerWebViewController=_floatLayerWebViewController;
@property(retain, nonatomic) NSString *iapProductID; // @synthesize iapProductID=_iapProductID;
- (id)getGameGlobalSetting;
- (_Bool)wePkgGlobalConfigDisabled;
- (id)getAlbumPublishUrl;
- (id)getGameAlbumInfoList;
- (id)getPreInjectDataFromFindEnteryResource;
- (id)getGameMsgSubScribeManagerUrl;
- (_Bool)isEnabledGameEntry;
- (id)setAppStoreCountryCodeForTest:(id)arg1;
- (void)setGameDetailTypeViaSearch:(id)arg1;
- (void)closeH5FloatLayer:(id)arg1;
- (void)closeH5FloatLayerForJsApi:(id)arg1;
- (void)gameButtonActionWithSubscribe:(id)arg1 Controller:(id)arg2 GameStatObject:(id)arg3;
- (void)handlePullGameTabNav:(id)arg1 Event:(unsigned int)arg2;
- (void)handlePullH5GameMenu:(id)arg1 Event:(unsigned int)arg2;
- (void)handleWepkgUpdateForExistList:(id)arg1 forceList:(id)arg2;
- (void)handlePullGameGlobalSetting:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)pullGameGlobalSetting:(unsigned int)arg1;
- (void)handlePullFeedsListResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)handlePullNewHomeDataResponseV5:(id)arg1 Event:(unsigned int)arg2;
- (void)handlePullForeignHomeDataResponseV4:(id)arg1 Event:(unsigned int)arg2;
- (void)pullNewHomeDataFromServerV5:(_Bool)arg1;
- (void)pullForeignHomeDataFromServerV4:(_Bool)arg1;
- (id)transformStandardWebViewMenuList:(id)arg1;
- (id)getH5GameCustomMenuList:(id)arg1 IsShowOnSessionTop:(_Bool)arg2;
- (void)fetchH5GameCustomMenu:(id)arg1;
- (void)fetchGameGlobalSettingInstantly:(id)arg1;
- (void)fetchGameGlobalSettingWithin:(unsigned int)arg1;
- (void)markNeedFetchGlobalSettingForeground;
- (_Bool)fetchGameGlobalSettingIfNeeded;
- (_Bool)fetchHomeTabNavV5;
- (_Bool)fetchNextPageFeedsList:(id)arg1;
- (_Bool)fetchHomeDataV5WithoutFeedsList:(_Bool)arg1;
- (_Bool)fetchForeignHomeDataV4:(_Bool)arg1;
- (void)sendGetSearchGameListReq:(unsigned int)arg1;
- (void)getAllGameList:(_Bool)arg1;
- (void)sendGetSearchMiniGameListReq:(unsigned int)arg1;
- (id)mergeLocalMiniGameAndSearchGameList;
- (void)getAllMiniGameList:(_Bool)arg1;
- (void)gameSearchManager:(id)arg1 didFinishSearchWithResultGroups:(id)arg2 searchWithText:(id)arg3 error:(long long)arg4;
- (void)onGetMoreGameList:(id)arg1 classifyID:(id)arg2 errCode:(int)arg3;
- (void)onGetLibGameList:(id)arg1 errCode:(int)arg2;
- (void)getMoreGameListGameType:(unsigned int)arg1 ClassifyID:(id)arg2 startOffset:(unsigned int)arg3 limit:(int)arg4;
- (void)getLibGameListSortType:(unsigned int)arg1 startOffset:(unsigned int)arg2 limit:(int)arg3 isFirstTime:(_Bool)arg4;
- (void)onGetUpList:(id)arg1 appID:(id)arg2 errCode:(int)arg3;
- (void)onUpFriend:(id)arg1 appID:(id)arg2 errCode:(int)arg3;
- (void)onGetGameDetailInfo:(id)arg1 errCode:(int)arg2;
- (void)getUpListWithAppID:(id)arg1;
- (void)upFriend:(id)arg1 appID:(id)arg2;
- (void)getNewGameDetailInfo:(id)arg1;
- (void)onActionJumpReport:(int)arg1 DataItem:(id)arg2 DefinitelyOptype:(int)arg3 StatAction:(long long)arg4 NeverNoticeAgain:(_Bool)arg5;
- (void)onGameActionJump:(int)arg1 DataItem:(id)arg2 NavigationController:(id)arg3 QuitFullScreenBlock:(CDUnknownBlockType)arg4;
- (_Bool)jumpToCanvasView:(id)arg1 NavigationController:(id)arg2;
- (id)getGameTailButton:(id)arg1;
- (void)onGetProduct:(id)arg1 invalidProductID:(id)arg2;
- (void)fetchAppStoreRegion;
- (void)saveCountryInfoToFile;
- (void)loadCountryInfoFromFile;
- (id)getAppStoreCountryCode;
- (void)addTransparentH5FloatLayer:(id)arg1 HomeViewController:(id)arg2;
- (void)pushFullScreenH5FloatLayer:(id)arg1 HomeViewController:(id)arg2;
- (id)getGameCenterEntryInfo;
- (unsigned int)a8KeyCookieExpireTime;
- (id)getA8KeyCookieKeyPairs;
- (id)topBackgroundColorDynamic;
- (void)setDisableCommonLibPreload:(_Bool)arg1;
- (void)setDisableWepkgRetryDownload:(_Bool)arg1;
- (_Bool)isDisableCommonLibPreload;
- (_Bool)isDisableWepkgRetryDownload;
- (_Bool)isDarkMode;
- (id)topBackgroundColor;
- (id)globalStatusBarStyle;
- (_Bool)useTopWhiteStyle;
- (id)getDetailUrlGlobalSearch:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onGameSetBlockState:(_Bool)arg1 appID:(id)arg2 error:(long long)arg3;
- (void)onGameGetBlockState:(_Bool)arg1 appID:(id)arg2 error:(long long)arg3;
- (void)setGameBlockState:(id)arg1 onOrOff:(_Bool)arg2;
- (_Bool)getGameBlockState:(id)arg1;
- (_Bool)isGameSubscribedWithAppID:(id)arg1;
- (id)getGameSearchRecommendList;
- (void)saveGameSearchRecommendList:(id)arg1;
- (void)handleGameReportResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGameSearchSmartBoxResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetAllGameListResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetAllMiniGameListResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)handleSubscribeNewGameResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)subscribeNewGameWithAppID:(id)arg1 hasEnableChatRoom:(_Bool)arg2 noticeID:(id)arg3;
- (void)loadSubscribeDataFromFile;
- (void)saveSubscribeDataToFile;
- (id)recentGameInfoArrayToLogString:(id)arg1;
- (id)gameBriefInfoArrayToLogString:(id)arg1;
- (id)appInfoArrayToLogString:(id)arg1;
- (void)forceUpdateNewGameAppInfo;
- (id)getLocalHomeTabNavV5;
- (id)getLocalHomeDataV5;
- (id)getLocalForeighHomeDataV4;
- (void)loadCachedHomeDataV5;
- (void)loadCachedTabNavData;
- (void)loadCachedForeignHomeDataV4;
- (void)loadGameGlobalSettingDataFromFile;
- (void)saveGlobalSettingFetchInfoToFile;
- (void)loadGameGlobalSettingFetchInfoFromeFile;
- (_Bool)loadDataFromFile:(id)arg1 ToClass:(Class)arg2 ToData:(id *)arg3;
- (void)clearGameGlobalSettingFile;
- (void)saveGameGlobalSettingToFile;
- (void)saveHomeDataToFileV5;
- (void)saveForeignHomeDataToFileV4;
- (_Bool)saveDataToCacheFile:(id)arg1 Path:(id)arg2;
- (void)onLanguageChange;
- (void)onAuthOKWithVersionChangeFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)onMainControllStart;
- (void)onManulLoginOK;
- (void)sendGameSearchSmartBoxRequest:(id)arg1;
- (_Bool)requestGameSearch:(id)arg1;
- (void)setLocalGameDetailInfo:(id)arg1;
- (id)getLocalGameDetailInfoWithAppID:(id)arg1;
- (void)loadGlobalSearchGameList;
- (void)saveGlobalSearchMiniGameList;
- (void)loadGlobalSearchMiniGameList;
- (void)showSimpleAlert:(id)arg1;
- (void)registerClearGameConfigNotification;
- (void)registerUpdateGameConfigNotification;
- (void)onServiceEnterForeground;
- (void)onServiceMemoryWarning;
- (void)loadJsCommonLib;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;
- (void)attachPageCacheCleaner:(id)arg1;
- (int)getPageCacheEnabledValue;
- (id)getPageCacheMarks;
- (_Bool)removePageCacheMark:(id)arg1;
- (void)setPageCacheMark:(id)arg1;
- (void)markHasPageCache:(id)arg1;
- (_Bool)jumpToAppstoreWithUrl:(id)arg1;
- (long long)jumpAppStore:(id)arg1 DowLoadUrl:(id)arg2;
- (void)launchWeApp:(id)arg1 pagePath:(id)arg2 referrerAppID:(id)arg3 debugModeType:(unsigned long long)arg4 NavigationController:(id)arg5 CompleteBlock:(CDUnknownBlockType)arg6;
- (_Bool)launchWeAppWithAppId:(id)arg1 pagePath:(id)arg2 referrerAppID:(id)arg3 debugModeType:(unsigned long long)arg4 NavigationController:(id)arg5 CompleteBlock:(CDUnknownBlockType)arg6;
- (_Bool)launchWeAppWithAppId:(id)arg1 pagePath:(id)arg2 referrerAppID:(id)arg3 NavigationController:(id)arg4 CompleteBlock:(CDUnknownBlockType)arg5;
- (_Bool)tryJumpWeapp:(id)arg1 NavigationController:(id)arg2;
- (long long)tryJumpWeAppOrH5:(id)arg1 Url:(id)arg2 H5EntryScene:(id)arg3;
- (_Bool)tryLaunchGameOrJumpDetail:(id)arg1 GameInfo:(id)arg2 AppMessage:(id)arg3 SourceScene:(unsigned int)arg4 NeedUpdateLocalDetailInfo:(_Bool)arg5 LaunchGameResultBlock:(CDUnknownBlockType)arg6;
- (_Bool)tryLaunchGameOrJumpAppStore:(id)arg1 AppId:(id)arg2 MessageExt:(id)arg3 DowLoadUrl:(id)arg4 LaunchGameResultBlock:(CDUnknownBlockType)arg5;
- (_Bool)tryLaunchGameOrJumpAppStore:(id)arg1 AppId:(id)arg2 AppMessage:(id)arg3 DowLoadUrl:(id)arg4 LaunchGameResultBlock:(CDUnknownBlockType)arg5;
- (_Bool)tryLaunchGameOrJumpAppStoreInGameHome:(id)arg1 GameInfo:(id)arg2 ShouldJumpH5Game:(_Bool)arg3 MessageExt:(id)arg4 LaunchGameResultBlock:(CDUnknownBlockType)arg5;
- (_Bool)tryLaunchGameOrJumpUrl:(id)arg1 AppID:(id)arg2 MessageExt:(id)arg3 UrlString:(id)arg4 ExtraInfo:(id)arg5 LaunchGameResultBlock:(CDUnknownBlockType)arg6;
- (_Bool)launchGameWithFailProcess:(id)arg1 AppStoreUrl:(id)arg2 LauchGameResultBlock:(CDUnknownBlockType)arg3;
- (int)reportLaunchGameSuccess:(id)arg1;
- (_Bool)launchGameWithFailProcess:(id)arg1 Message:(id)arg2 AppStoreUrl:(id)arg3 LauchGameResultBlock:(CDUnknownBlockType)arg4;
- (id)jumpToWebView:(id)arg1 JumpUrl:(id)arg2 Title:(id)arg3;
- (int)getGameDetailJumpTypeAndUrl:(id)arg1 DetailUrl:(id *)arg2;
- (_Bool)isfromChatOfType:(int)arg1;
- (id)getGameCenterDetailViewController:(id)arg1 sourceScene:(int)arg2 chatType:(int)arg3;
- (id)getGameCenterDetailViewController:(id)arg1 sourceScene:(int)arg2;
- (id)getGameCenterDetailViewController:(id)arg1 chatType:(int)arg2;
- (id)getGameNativeMsgCenterViewController:(unsigned int)arg1 msgId:(id)arg2 msgTabType:(unsigned int)arg3;
- (_Bool)splitInteractNoticeViewController;
- (id)getGameCenterLibraryViewController:(unsigned int)arg1;
- (id)urlAppending:(id)arg1 AppendingStr:(id)arg2;
- (id)buildHomePageURLWithOriginUrl:(id)arg1 SourceScene:(unsigned int)arg2 HasFloatLayer:(_Bool)arg3;
- (id)getGameCenterHomeWebViewController:(id)arg1 SourceScene:(unsigned int)arg2 HasFloatLayer:(_Bool)arg3;
- (void)setRedDotBeforeHomeCgi:(id)arg1;
- (id)getGameCenterNativeHomeViewControllerV5:(unsigned int)arg1 EntranceRedDot:(id)arg2;
- (id)createHomeViewControllerLab:(unsigned int)arg1 EntranceRedDot:(id)arg2;
- (id)createHomeViewControllerIngoreGlobalSetting:(unsigned int)arg1 EntranceRedDot:(id)arg2;
- (id)getGameCenterHomeViewController:(unsigned int)arg1 EntranceRedDot:(id)arg2;
- (void)trackEventForOpenFloatLayerWithNotify:(id)arg1 SourceScene:(unsigned int)arg2;
- (void)trackEventForEnterGameHomeWithNotify:(id)arg1 gameCenterVC:(id)arg2;
- (id)entranceRedDotFromEntryNotify:(id)arg1 andFloatNotify:(id)arg2;
- (void)downloadAuxiliaryWepkgForFloatLayer:(id)arg1 andBanner:(id)arg2;
- (void)reportGameEntrnace:(_Bool)arg1 sourceScene:(unsigned int)arg2 gameCenterVC:(id)arg3;
- (void)openHomeWithNavigationViewController:(id)arg1 SourceScene:(unsigned int)arg2 Extra:(id)arg3;
- (void)handleGameLifeInfoChatRoom:(id)arg1;
- (id)createHomeViewController:(unsigned int)arg1 EntranceRedDot:(id)arg2 Extra:(id)arg3;
- (id)popHomeViewController:(unsigned int)arg1 EntranceRedDot:(id)arg2 Extra:(id)arg3;
- (id)getFindFrindRedDotMsg;
- (_Bool)checkPreloadHomeCondition;
- (void)releasePreloadHomeWebVcIfNeed;
- (void)preloadHomeWebViewControllerIfNeed;
- (id)preloadHomeWebVc;
- (void)setPreloadHomeWebVc:(id)arg1;
- (long long)openGameDetailViewWithGameInfo:(id)arg1 navigationController:(id)arg2 NeedUpdateLocalDetailInfo:(_Bool)arg3 sourceScene:(unsigned int)arg4;
- (void)openGameCenterDetailView:(id)arg1 appId:(id)arg2 sourceScene:(unsigned int)arg3 webviewInfo:(id)arg4;
- (id)getExpArgFromAbtestForLayerId:(id)arg1 andKey:(id)arg2;
- (id)urlForGameMessageCenter;
- (id)urlForGameLibraryView;
- (id)urlForGameDetailView;
- (id)urlForGameHomepageViewFromLab:(_Bool *)arg1;
- (int)viewTypeForMessageCenter;
- (int)viewTypeForLibrary;
- (int)viewTypeForDetailView;
- (id)abtestItemForHomePageWriteJumpType:(long long *)arg1 andUrl:(id *)arg2;
- (void)reportGameHomeABTestForSourceScene:(unsigned int)arg1;
- (void)report16171WithOpt:(unsigned int)arg1 key:(id)arg2 value:(id)arg3;
- (int)viewTypeForHomepageFromLab;
- (void)attachToDataCleaner:(id)arg1;
- (id)_getValidPreloadWebViewController:(id)arg1;
- (id)getPreloadWebViewControllerWithOnlyPrefix:(id)arg1;
- (id)getPreloadWebViewControllerWithFullUrl:(id)arg1;
- (id)checkIfUrlHasPreloadWebVC:(id)arg1;
- (id)getWebViewControllerWithPreload:(id)arg1 Url:(id)arg2;
- (void)tryDeleteIfExceedPreloadMaxCount;
- (id)webViewFailToLoad:(id)arg1 Error:(id)arg2;
- (void)onWebViewDidReceiveResponse:(id)arg1 Response:(id)arg2;
- (void)onWebViewDidFinishLoad:(id)arg1;
- (_Bool)_preloadlGameUrl:(id)arg1 EntryScene:(id)arg2 FromJspi:(_Bool)arg3 ExtraInfo:(id)arg4;
- (_Bool)preloadDetailUrlFromGameEntry;
- (id)getUniqueKeyForWebViewController:(id)arg1;
- (_Bool)preloadUrl:(id)arg1 ForWebVC:(id)arg2;
- (id)getProductIdFrom:(id)arg1;
- (void)refreshAppStoreViewControllerWhenDismiss:(id)arg1 AppStoreViewController:(id)arg2;
- (void)preloadOneAppStoreViewController:(id)arg1 AppStoreUrl:(id)arg2;
- (id)getPreloadAppStoreViewController:(id)arg1;
- (_Bool)preloadAppStoreViewController;
- (void)clearAllPreloadWebView;
- (id)popWebViewControllerWithUrl:(id)arg1 entryScene:(id)arg2;
- (void)preloadUrl:(id)arg1 entryScene:(id)arg2 UIView:(id)arg3;
- (_Bool)shouldShowEmotionBoard;
- (id)getGameLifeSettingControl;
- (id)getGameLifeAppPanelControl;
- (id)getGameLifeGiftEntranceControl;
- (void)updateLastMsgUpdateTime;
- (void)getEntranceInfo:(CDUnknownBlockType)arg1;
- (void)setBlackList:(id)arg1 switchB:(_Bool)arg2 associateWxGameAccount:(_Bool)arg3;
- (void)getBlackList:(id)arg1;
- (void)setChatSessionData:(id)arg1 sessionFlagMask:(unsigned long long)arg2 switchB:(_Bool)arg3;
- (void)getChatSessionData:(id)arg1;
- (void)startChatWithSessionId:(id)arg1 fromNav:(id)arg2;
- (void)startChatWithSelfUsername:(id)arg1 talker:(id)arg2 scene:(unsigned int)arg3 extInfo:(id)arg4 fromNav:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (_Bool)disAbleJsApi;
- (void)deleteGameLifeHistroyMsg;
- (id)getHistroyMsgJumpUrl;
- (_Bool)shouldShowGameLifeHistroyItem;
- (id)getProfileUrl;
- (id)getTabSettingControl;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


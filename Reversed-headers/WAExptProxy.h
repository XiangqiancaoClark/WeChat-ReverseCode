//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IWAExptService-Protocol.h"

@class NSString;

@interface WAExptProxy : NSObject <IWAExptService>
{
}

+ (id)exptValueForExperimentId:(id)arg1;
+ (_Bool)isOpenPluginPermissionBytes;
+ (_Bool)isOpenBatchGetDownloadUrlFallback;
+ (_Bool)isOpenTemplatePgkReuse;
+ (_Bool)isOpenUsrSpaceTrace;
+ (_Bool)shouldAllowHandoff:(_Bool)arg1 withGameCheck:(_Bool)arg2 withDeviceType:(unsigned int)arg3 withClientVersion:(unsigned int)arg4;
+ (id)weappQRCodePrefix;
+ (_Bool)isOpenWalletPrefetch;
+ (_Bool)isCloseSilentOpen;
+ (_Bool)isOpenShoppingCartEntry;
+ (double)splashADNoPreloadTimeInterval;
+ (double)splashADTimeInterval:(_Bool)arg1;
+ (_Bool)isOpenLocalVersionFallback;
+ (id)splashADEnterSceneArray;
+ (_Bool)isOpenMiniTask;
+ (_Bool)shouldShowWxaOfficialTag;
+ (_Bool)isOpenPerformanceIndexReport;
+ (_Bool)isOpenCameraScanWxCodePreload;
+ (_Bool)isOpenCdnPreConnect;
+ (_Bool)isOpenMPShortLinkGlobalHighLight;
+ (_Bool)isOpenMPShortLinkMenuEntry;
+ (_Bool)isColdLaunchUseWeakLoading;
+ (_Bool)canAddWeAppPageToWCFavorite;
+ (long long)weAppPublicResCacheNum;
+ (long long)weAppPublicResCleanPeriod;
+ (_Bool)shouldEnableScrollViewEnhancement;
+ (_Bool)canShowShareTimelineItem:(_Bool)arg1;
+ (id)checkVideoContentTypeArr;
+ (id)checkVideoContentTypeTimeOut;
+ (id)checkVideoContentTypeSwitch;
+ (_Bool)isOpenLaunchTimeAxisKV;
+ (_Bool)isWeAppShouldShowLiveAppMenu;
+ (_Bool)isWeAppUsePkgEncrypt:(_Bool)arg1;
+ (_Bool)isOpenWeGameGfxRenderMode;
+ (_Bool)isWeAppUseSkiaCanvas;
+ (_Bool)isOpenLaunchDownloadInPrecheckerThread;
+ (_Bool)shouldOpenMiniProgramABTestCheck;
+ (_Bool)shouldOpenIsolatePluginCheck;
+ (_Bool)shouldCloseWeGameMultiSplitPlugin;
+ (_Bool)shouldAllowMultiSplitPluginCode;
+ (_Bool)isOpenWeAppJSMemoryStat;
+ (_Bool)shouldAllowWeAppSplitPlugin;
+ (_Bool)shouldAllowWeGameSplitPlugin;
+ (_Bool)shouldAllowWeGamePreloadTask;
+ (unsigned int)getWeAppPreloadTaskDegradeType;
+ (_Bool)shouldUseSetCustomAgent;
+ (_Bool)shouldSystemInfoRemoveBlue;
+ (_Bool)shouldUseNewAdapter;
+ (double)splashADTimeThreshold;
+ (_Bool)isSplashADAllowNoPreload;
+ (_Bool)isSplashADUseWorker;
+ (_Bool)shouldShowSplashAD;
+ (_Bool)shouldShowCommentEntryInMenu;
+ (_Bool)shouldInsertToWebLayer:(long long)arg1;
+ (_Bool)shouldClosePubLibDelayUnpack;
+ (_Bool)shouldCloseSearchEntryInMainList;
+ (double)videlPlayBufferTime;
+ (_Bool)shouldAllowBatchAttrSyncInMainFrameTaskBar;
+ (_Bool)shouldShowMainFrameTaskBar;
+ (_Bool)shouldShowGameEntryInFTSSearch;
+ (_Bool)shouldShowGameEntryInMainList;
+ (_Bool)shouldReportCommandBufferPerformanceInWeGame;
+ (_Bool)shouldUseCommandBufferInWeGame;
+ (_Bool)shouldReportWebglCmd;
+ (_Bool)shouldCloseAdDeviceInfoReport;
+ (_Bool)shouldOpenWeGameSplashScreen;
+ (_Bool)shouldOpenWeGamePredownload;
+ (_Bool)shouldOpenImageSearchEntry;
+ (long long)weakNetNotifyInterval;
+ (_Bool)shouldUseWegameHttpDns;
+ (_Bool)shouldUseWegameWxAudio;
+ (_Bool)shouldUseWegameCronetDownload;
+ (_Bool)shouldUseWegameCronetRequest;
+ (_Bool)shouldUseSkiaCanvas;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

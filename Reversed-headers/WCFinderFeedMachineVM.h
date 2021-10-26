//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCFinderContactCommonExt-Protocol.h"
#import "WCFinderDataItemExt-Protocol.h"
#import "WCFinderPostingCommentExt-Protocol.h"
#import "WCFinderRedDotNotifyExt-Protocol.h"
#import "WCFinderStreamPreFetchExt-Protocol.h"
#import "WCFinderStreamPreFetchProxyExtension-Protocol.h"

@class FinderCommByPass, NSArray, NSData, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, WCFinderAbstractTask, WCFinderOpenTimelineParams;
@protocol WCFinderFeedMachineVMDelegate;

@interface WCFinderFeedMachineVM : NSObject <WCFinderDataItemExt, WCFinderPostingCommentExt, WCFinderRedDotNotifyExt, WCFinderStreamPreFetchExt, WCFinderContactCommonExt, WCFinderStreamPreFetchProxyExtension>
{
    _Bool _stopFetchNextPage;
    _Bool _hasFetchEnterData;
    _Bool _showPrivateMSGTips;
    _Bool _hotTLShouldShowCategoryCell;
    _Bool _shouldFetchHistory;
    _Bool _pullEnterIsEmpty;
    _Bool _needCleanData;
    _Bool _hasAddHistoryTips;
    _Bool _shouldSpecialFetch;
    id <WCFinderFeedMachineVMDelegate> _delegate;
    NSArray *_commentFailTidArray;
    unsigned long long _preFetchNextPageIndex;
    NSString *_enterDataReportID;
    unsigned long long _refreshTime;
    long long _partialExposeSection;
    NSData *_lastBuff;
    unsigned long long _guideBarObjectId;
    WCFinderOpenTimelineParams *_openTimelineParams;
    NSMutableArray *_topObjects;
    FinderCommByPass *_commByPass;
    NSMutableArray *_allDataItems;
    unsigned long long _maxTid;
    NSMutableSet *_tidContainSet;
    unsigned long long _commentFailTidCount;
    unsigned long long _unReadMSGCount;
    NSMutableArray *_serverFetchTasks;
    WCFinderAbstractTask *_currentServerFetchTask;
    NSData *_streamLastBuffer;
    NSString *_historyLabelText;
    NSArray *_streamDataArray;
    unsigned long long _historyType;
    NSMutableSet *_hasPreLoadRelatedSet;
    NSMutableSet *_hotAreaTidSet;
    NSMutableDictionary *_loadingReportDict;
    NSMutableArray *_preloadArray;
    NSData *_cardBuffer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *cardBuffer; // @synthesize cardBuffer=_cardBuffer;
@property(retain, nonatomic) NSMutableArray *preloadArray; // @synthesize preloadArray=_preloadArray;
@property(retain, nonatomic) NSMutableDictionary *loadingReportDict; // @synthesize loadingReportDict=_loadingReportDict;
@property(nonatomic) _Bool shouldSpecialFetch; // @synthesize shouldSpecialFetch=_shouldSpecialFetch;
@property(retain, nonatomic) NSMutableSet *hotAreaTidSet; // @synthesize hotAreaTidSet=_hotAreaTidSet;
@property(retain, nonatomic) NSMutableSet *hasPreLoadRelatedSet; // @synthesize hasPreLoadRelatedSet=_hasPreLoadRelatedSet;
@property(nonatomic) unsigned long long historyType; // @synthesize historyType=_historyType;
@property(nonatomic) _Bool hasAddHistoryTips; // @synthesize hasAddHistoryTips=_hasAddHistoryTips;
@property(nonatomic) _Bool needCleanData; // @synthesize needCleanData=_needCleanData;
@property(copy, nonatomic) NSArray *streamDataArray; // @synthesize streamDataArray=_streamDataArray;
@property(nonatomic) _Bool pullEnterIsEmpty; // @synthesize pullEnterIsEmpty=_pullEnterIsEmpty;
@property(copy, nonatomic) NSString *historyLabelText; // @synthesize historyLabelText=_historyLabelText;
@property(nonatomic) _Bool shouldFetchHistory; // @synthesize shouldFetchHistory=_shouldFetchHistory;
@property(retain, nonatomic) NSData *streamLastBuffer; // @synthesize streamLastBuffer=_streamLastBuffer;
@property(retain, nonatomic) WCFinderAbstractTask *currentServerFetchTask; // @synthesize currentServerFetchTask=_currentServerFetchTask;
@property(retain, nonatomic) NSMutableArray *serverFetchTasks; // @synthesize serverFetchTasks=_serverFetchTasks;
@property(nonatomic) unsigned long long unReadMSGCount; // @synthesize unReadMSGCount=_unReadMSGCount;
@property(nonatomic) unsigned long long commentFailTidCount; // @synthesize commentFailTidCount=_commentFailTidCount;
@property(retain, nonatomic) NSMutableSet *tidContainSet; // @synthesize tidContainSet=_tidContainSet;
@property(nonatomic) unsigned long long maxTid; // @synthesize maxTid=_maxTid;
@property(retain, nonatomic) NSMutableArray *allDataItems; // @synthesize allDataItems=_allDataItems;
@property(retain, nonatomic) FinderCommByPass *commByPass; // @synthesize commByPass=_commByPass;
@property(retain, nonatomic) NSMutableArray *topObjects; // @synthesize topObjects=_topObjects;
@property(retain, nonatomic) WCFinderOpenTimelineParams *openTimelineParams; // @synthesize openTimelineParams=_openTimelineParams;
@property(nonatomic) unsigned long long guideBarObjectId; // @synthesize guideBarObjectId=_guideBarObjectId;
@property(nonatomic) _Bool hotTLShouldShowCategoryCell; // @synthesize hotTLShouldShowCategoryCell=_hotTLShouldShowCategoryCell;
@property(nonatomic) _Bool showPrivateMSGTips; // @synthesize showPrivateMSGTips=_showPrivateMSGTips;
@property(retain, nonatomic) NSData *lastBuff; // @synthesize lastBuff=_lastBuff;
@property(nonatomic) long long partialExposeSection; // @synthesize partialExposeSection=_partialExposeSection;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(retain, nonatomic) NSString *enterDataReportID; // @synthesize enterDataReportID=_enterDataReportID;
@property(nonatomic) unsigned long long preFetchNextPageIndex; // @synthesize preFetchNextPageIndex=_preFetchNextPageIndex;
@property(nonatomic) _Bool hasFetchEnterData; // @synthesize hasFetchEnterData=_hasFetchEnterData;
@property(nonatomic) _Bool stopFetchNextPage; // @synthesize stopFetchNextPage=_stopFetchNextPage;
@property(retain, nonatomic) NSArray *commentFailTidArray; // @synthesize commentFailTidArray=_commentFailTidArray;
@property(nonatomic) __weak id <WCFinderFeedMachineVMDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFinderContactShieldFeedChanged:(id)arg1;
- (unsigned long long)feedViewControllerScene;
- (void)onFinderDataItemPostingCommentCountUpdate;
- (void)onFinderNotifyPrivateMsgTipsChange;
- (void)onFinderNotifyWechatUnreadMentionCountNeedReload;
- (void)removeFeedWith:(id)arg1;
- (void)deleteContentVM:(id)arg1;
- (void)onFinderDataCacheHasBeCleaned;
- (void)onFinderDataItemCleanBySecurityUpgrade;
- (void)onFinderDataItemDeleteByUserPageMergeWithTidList:(id)arg1;
- (void)onFinderDataItemDeleteBySpamList:(id)arg1;
- (void)onFinderDataItemDelete:(id)arg1;
- (void)finishFetchDataSuccessful:(_Bool)arg1;
@property(readonly, nonatomic) NSString *partialExposedObjectId;
- (void)reloadErrorPageWithPullType:(unsigned long long)arg1;
- (void)reloadNoMoreDataWithPullType:(unsigned long long)arg1;
- (void)resetLastBuffer:(id)arg1;
- (void)cleanPreLoadCache;
- (id)streamLoadingInfoByExitVC;
- (void)replaceFeedContentArray:(id)arg1;
- (void)finderStreamPrefetchFinishedWithTabType:(long long)arg1;
- (void)updateExposureStatusOfContentVM:(id)arg1;
- (void)showRelatedListWithAppendContentVM:(id)arg1 dataItem:(id)arg2 contentVM:(id)arg3;
- (void)showRelatedListImmediatelyWithContentVM:(id)arg1;
- (void)preLoadRelatedListWithContentVM:(id)arg1 successful:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)realRemoveContentVMFromDataSource:(id)arg1;
- (void)stopAllPreloadVideoItems;
- (void)stopPreloadVideoItem:(id)arg1;
- (void)preloadVideoItems:(id)arg1;
- (void)contentUnlikeFeedback:(id)arg1 subType:(long long)arg2;
- (void)processFinderItem:(id)arg1;
- (id)transformHistoryFinderItemToContentVM:(id)arg1;
- (id)transformFinderItemToContentVM:(id)arg1;
- (void)insertContentVM:(id)arg1 toIndex:(long long)arg2;
- (void)deleteAllUnExposedContentVM;
- (void)collectUnExposedContentVM:(id)arg1 location:(unsigned long long)arg2 targetTid:(id)arg3;
- (void)insertFinderContentVM:(id)arg1 location:(unsigned long long)arg2 targetTid:(id)arg3;
- (unsigned long long)getLastExposedRelatedItemsIndex;
- (unsigned long long)getLastUnExposedRelatedItemsIndex;
- (unsigned long long)getLastExposedItemsIndex;
- (unsigned long long)deleteUnExposedRelatedItemsWithContentVM:(id)arg1;
- (id)getUnreadDataItems;
- (void)collectUnreadDataItems:(id)arg1;
- (unsigned long long)deleteUnExposedItemsWithMaxUnreadCount:(unsigned long long)arg1 targetTid:(id)arg2;
- (void)appendFinderContentVM:(id)arg1;
- (void)appendEnterContentVM:(id)arg1 cardBuffer:(id)arg2;
- (unsigned long long)sectionOfTid:(id)arg1;
- (id)contentMediaIndexPathWithTid:(id)arg1;
- (void)changeFirstItemToMuteBeforeRefresh;
- (id)contentVMWithTid:(id)arg1;
- (void)clearAllContentVMLayoutCache;
- (id)contentVMAtSection:(unsigned long long)arg1;
- (id)contentVMAtIndexPath:(id)arg1;
- (id)vaildTopIndexPath;
- (unsigned long long)rowNumsWithSection:(unsigned long long)arg1;
- (unsigned long long)getAllDataItemsCount;
- (long long)firstFeedNum;
- (unsigned long long)sectionNums;
- (unsigned long long)dataItemStartSection;
- (_Bool)isValiadServerDataItem:(id)arg1;
- (void)fetchFirstPageData;
- (void)refreshLatestDataWithReportStats:(id)arg1;
- (void)refreshLatestData;
- (void)fetchHistoryWithPullType:(unsigned long long)arg1;
- (void)_fetchHistoryWithPullType:(unsigned long long)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
- (void)checkServerFetchTasks;
- (void)preformNextServerFetchTasks;
- (void)resetFirstItemSilentToNo:(unsigned long long)arg1;
- (void)pullToRefreshWithPullType:(unsigned long long)arg1 reportReadStatsFeeds:(id)arg2;
- (void)pullToRefreshWithPullType:(unsigned long long)arg1;
- (void)loadingNextSreamFeedPage;
- (void)loadingNextPagePageData;
- (void)loadingFirstPageData;
- (void)loadingLocalData;
- (id)getLocalCacheDataItemArray;
- (void)addHotAreaFeedWithTid:(id)arg1;
- (void)clearDataByServerRequest;
- (id)processServerData:(id)arg1;
- (void)updateFailPostComment;
- (_Bool)isDataSection:(unsigned long long)arg1;
- (_Bool)isDataIndexPath:(id)arg1;
- (_Bool)isDataEmpty;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UITableView, UIWindow, WCGeneralListSessionStatItem;
@protocol OS_dispatch_queue;

@interface WCGeneralListMonitorMgr : NSObject
{
    UITableView *m_tableView;
    WCGeneralListSessionStatItem *sessionStatItem;
    unsigned int pId;
    NSString *pName;
    unsigned int seq;
    NSObject<OS_dispatch_queue> *queue;
    double screenHeight;
    struct CGRect statusRect;
    UIWindow *uiWindow;
    double statusNavHeight;
    double realScreenHeight;
    unsigned long long lastEnterBackgroundTime;
    _Bool isNowInListPage;
    NSString *listSessionKey;
    _Bool isIndependentItem;
    unsigned int kvReportId;
}

- (void).cxx_destruct;
- (id)getNowViewController;
- (id)tsGetListView:(id)arg1;
- (id)tsTableView:(id)arg1 feedIdByIndex:(id)arg2;
- (id)tsTableView:(id)arg1 specialParamsForFeedId:(id)arg2;
- (long long)tsTableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tsTableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)calcFeedExposureSizeAndTime:(id)arg1 withTime:(unsigned long long)arg2;
- (void)calcFeedExposureSizeAndTime:(id)arg1 withEntered:(_Bool)arg2 withTime:(unsigned long long)arg3;
- (void)calcFeedExposureSizeAndTime:(id)arg1 withStayed:(_Bool)arg2 withTime:(unsigned long long)arg3;
- (id)getListExposureFeedId:(id)arg1;
- (id)getListSessionStatItem;
- (id)getTableView;
- (void)initTableViewAndHeight:(id)arg1;
- (void)onScrollViewDidScroll:(id)arg1;
- (void)onScrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)onScrollViewDidEndDecelerating:(id)arg1;
- (id)getFeedExposureDataAttr:(id)arg1;
- (id)getListSessionStatItemAttr:(id)arg1 withDataArrays:(id)arg2 withSubSeq:(unsigned long long)arg3 withSubSeqSum:(unsigned long long)arg4;
- (id)getListSessionStatItemAttrStr:(id)arg1;
- (id)formatJsonStr:(id)arg1;
- (void)reportSessionStatItem:(unsigned long long)arg1;
- (void)reconstructSessionStatItem:(unsigned long long)arg1;
- (void)exitListPage;
- (void)enterListPage;
- (void)onViewDidDisappear:(_Bool)arg1;
- (void)onViewDidAppear:(_Bool)arg1 withVC:(id)arg2;
- (void)onReloadDataWrap;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (void)onSessionEnd;
- (void)onSessionStart;
- (void)onViewWillBePushed:(_Bool)arg1;
- (void)onViewWillBePoped:(_Bool)arg1;
- (void)dealloc;
- (id)initWithSessionKey:(id)arg1 withIndependentItem:(_Bool)arg2 withReportId:(unsigned int)arg3;

@end


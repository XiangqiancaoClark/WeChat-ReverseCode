//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCFinderDataItemExt-Protocol.h"

@class FinderStreamPrefechTimeIntervalConf, NSMutableDictionary, NSString;

@interface WCFinderStreamPreFetchProxy : NSObject <WCFinderDataItemExt>
{
    NSMutableDictionary *_cacheDict;
    NSMutableDictionary *_cacheCGI;
    FinderStreamPrefechTimeIntervalConf *_intervalConf;
    NSMutableDictionary *_redDotPreFetchRequestTimestampDict;
    NSMutableDictionary *_preFetchRequestTimestampDict;
    unsigned long long _clientModelPrefetchTimestamp;
    unsigned long long _clientModelRedDotPrefetchTimestamp;
    unsigned long long _clientFinderTimelineOtherTab;
    NSMutableDictionary *_prefetchFinishBlockDict;
    NSMutableDictionary *_loadingStartTimestampDict;
    NSMutableDictionary *_reportFlagDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *reportFlagDict; // @synthesize reportFlagDict=_reportFlagDict;
@property(retain, nonatomic) NSMutableDictionary *loadingStartTimestampDict; // @synthesize loadingStartTimestampDict=_loadingStartTimestampDict;
@property(retain, nonatomic) NSMutableDictionary *prefetchFinishBlockDict; // @synthesize prefetchFinishBlockDict=_prefetchFinishBlockDict;
@property(nonatomic) unsigned long long clientFinderTimelineOtherTab; // @synthesize clientFinderTimelineOtherTab=_clientFinderTimelineOtherTab;
@property(nonatomic) unsigned long long clientModelRedDotPrefetchTimestamp; // @synthesize clientModelRedDotPrefetchTimestamp=_clientModelRedDotPrefetchTimestamp;
@property(nonatomic) unsigned long long clientModelPrefetchTimestamp; // @synthesize clientModelPrefetchTimestamp=_clientModelPrefetchTimestamp;
@property(retain, nonatomic) NSMutableDictionary *preFetchRequestTimestampDict; // @synthesize preFetchRequestTimestampDict=_preFetchRequestTimestampDict;
@property(retain, nonatomic) NSMutableDictionary *redDotPreFetchRequestTimestampDict; // @synthesize redDotPreFetchRequestTimestampDict=_redDotPreFetchRequestTimestampDict;
@property(retain, nonatomic) FinderStreamPrefechTimeIntervalConf *intervalConf; // @synthesize intervalConf=_intervalConf;
@property(retain, nonatomic) NSMutableDictionary *cacheCGI; // @synthesize cacheCGI=_cacheCGI;
@property(retain, nonatomic) NSMutableDictionary *cacheDict; // @synthesize cacheDict=_cacheDict;
- (unsigned long long)getCommentSceneWithTabType:(long long)arg1;
- (unsigned long long)getLastPreFetchTimestampWithTabType:(long long)arg1;
- (void)revokePreFetchWithTabType:(long long)arg1;
- (void)onFinderDataItemDeleteBySpamList:(id)arg1;
- (unsigned long long)prefetchValidTimeWithTabType:(long long)arg1;
- (unsigned long long)prefetchIntervalWithPullType:(unsigned long long)arg1 TabType:(long long)arg2 byRedDot:(_Bool)arg3;
- (_Bool)canPreFetchWithTabType:(long long)arg1 byRedDot:(_Bool)arg2 pullType:(long long)arg3;
- (void)updateTimelineOtherTabPrefetchRequestTimestamp;
- (void)updateClientModelRedDotPrefetchRequestTimestamp;
- (void)updateClientModelPrefetchRequestTimestamp;
- (void)updateRequestTimestampWithTabType:(long long)arg1 byRedDot:(_Bool)arg2;
- (void)updateIntervalConf:(id)arg1;
- (double)userWaitingTime:(long long)arg1;
- (_Bool)hasReportConsumeWithTabType:(long long)arg1;
- (void)setReportFlagWithTabType:(long long)arg1;
- (void)setFinishBlock:(CDUnknownBlockType)arg1 withTabType:(long long)arg2;
- (_Bool)isPrefetchingWithTabType:(long long)arg1;
- (void)finishRequestCGIWithTabType:(long long)arg1;
- (void)cancelRequestCGIWithTabType:(long long)arg1 dataArray:(id)arg2;
- (id)getCachedRequestCGIWithTabType:(long long)arg1;
- (void)cacheRequestCGI:(id)arg1 tabType:(long long)arg2;
- (id)getLastPreFetchLastBufferWithTabType:(long long)arg1;
- (void)updatePreFetchCacheWithTabType:(long long)arg1 fetchCache:(id)arg2;
- (void)cleanPreFetchCacheWithTabType:(long long)arg1;
- (id)getPreFetchCacheWithTabType:(long long)arg1 exposeFeedTidArray:(id)arg2;
- (id)getPreFetchCacheWithTabType:(long long)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, WAPackageDownloadPreConnectLogic;

@interface WAPackageDownloadUrlFetcher : MMUserService <MMServiceProtocol>
{
    NSMutableArray *_arrFetching;
    NSMutableArray *_arrWaiting;
    NSMutableArray *_arrSeprateCGIInfoData;
    WAPackageDownloadPreConnectLogic *_preConnectLogic;
    NSMutableSet *_setPreFetching;
    NSMutableDictionary *_dicPreFetchResult;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicPreFetchResult; // @synthesize dicPreFetchResult=_dicPreFetchResult;
@property(retain, nonatomic) NSMutableSet *setPreFetching; // @synthesize setPreFetching=_setPreFetching;
@property(retain, nonatomic) WAPackageDownloadPreConnectLogic *preConnectLogic; // @synthesize preConnectLogic=_preConnectLogic;
- (id)getPrefetchCDNPkgDownloadInfoIfHaveForInfoData:(id)arg1;
- (void)handlePrefetchCDNPkgDownloadUrl:(id)arg1;
- (_Bool)checkIfHaveValidPrefetchCDNPkgDownloadUrlForUsername:(id)arg1 appid:(id)arg2 version:(unsigned int)arg3;
- (void)triggerPrefetchCDNPkgDownloadUrlForUsername:(id)arg1 path:(id)arg2 scene:(unsigned int)arg3;
- (_Bool)isUsernameInPreFetchingWithUsername:(id)arg1;
- (id)getPrefetchResultForUsername:(id)arg1;
- (void)removePrefetchInfoForUsername:(id)arg1;
- (void)savePrefetchResult:(id)arg1 forUsername:(id)arg2;
- (void)unmarkPreFetchingForUsername:(id)arg1;
- (void)markPreFetchingForUsername:(id)arg1;
- (id)genPreFetchTokenForUsername:(id)arg1;
- (void)sendDownloadUrlFetcherFail:(id)arg1;
- (void)handleGetPkgDownloadUrl:(id)arg1;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)triggerPkgDownloadWithAppInfoDataList:(id)arg1;
- (void)checkWaitingQueue;
- (void)removeInfoDataTask:(id)arg1;
- (_Bool)checkIsInQueue:(id)arg1 withInfoData:(id)arg2;
- (_Bool)checkIsInWaitingQueue:(id)arg1;
- (_Bool)checkIsInFetchQueue:(id)arg1;
- (void)mainThread_getRemoteCDNPkgDownloadUrlWithAppInfoData:(id)arg1;
- (void)getRemoteCDNPkgDownloadUrlWithAppInfoDataUseSeprateCGI:(id)arg1;
- (void)getRemoteCDNPkgDownloadUrlWithAppInfoData:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


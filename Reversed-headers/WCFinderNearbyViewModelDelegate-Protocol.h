//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol WCFinderNearbyViewModelDelegate <NSObject>

@optional
- (void)nearByDataPullLoadingFinish:(unsigned long long)arg1;
- (void)nearByLocationServiceAuthorizationChanged:(_Bool)arg1;
- (void)nearByNextPageAppendData:(NSArray *)arg1;
- (void)nearByDataSourceChanged;
- (void)nearByLocalDataFetchScuccess;
- (void)nearBySourceNoMoreData:(unsigned long long)arg1;
- (void)nearByDataSourceFetchError:(unsigned long long)arg1;
- (void)nearByDataSourceLocalEmpty;
- (void)nearByLiveDataRefreshData;
- (void)nearByLiveDataChanged;
- (void)nearByLiveDataFetchFinish:(_Bool)arg1;
- (void)nearByLiveDataNoMore;
@end


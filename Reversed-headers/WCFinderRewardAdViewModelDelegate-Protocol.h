//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, WCFinderFeedContentVM;

@protocol WCFinderRewardAdViewModelDelegate <NSObject>

@optional
- (void)finderShareListStopCurrentFeedPlay;
- (void)finderShareListFetchFirstRelatedPageCgiSuc;
- (void)finderShareListShouldReloadMediaWithTid:(NSString *)arg1;
- (void)finderShareListOnStateOfNotExist:(NSString *)arg1;
- (void)finderShareListDeleteDataItemVM:(WCFinderFeedContentVM *)arg1;
- (void)finderShareListFetchFailWithErrorCode:(int)arg1;
- (void)finderShareListNoMoreData;
- (void)finderShareListLoadMoreFinished:(NSArray *)arg1 continueFlag:(_Bool)arg2;
- (void)finderShareListReplaceFirstItemFinished:(_Bool)arg1;
- (void)finderShareListFetchDataSuc:(_Bool)arg1;
@end


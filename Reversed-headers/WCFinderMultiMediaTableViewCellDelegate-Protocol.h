//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIButton, WCFinderFeedContentVM, WCFinderFeedMediaWrap, WCFinderMultiMediaTableViewCell, WCFinderPlayerReport;

@protocol WCFinderMultiMediaTableViewCellDelegate <NSObject>

@optional
- (void)onVideoWithMediaId:(NSString *)arg1 startPlayTime:(unsigned long long)arg2;
- (void)onVideoWithMediaId:(NSString *)arg1 preloadFinishTime:(unsigned long long)arg2;
- (void)onVideoWithMediaId:(NSString *)arg1 preloadStartTime:(unsigned long long)arg2;
- (void)onShowGuideToFinderMoreRelatedView:(WCFinderFeedContentVM *)arg1;
- (void)onShowLongVideoBubble:(WCFinderFeedContentVM *)arg1;
- (void)onFeedContentWarnFlagChanged:(WCFinderFeedContentVM *)arg1;
- (_Bool)onMultiMediaCellIsInHotSpots:(WCFinderFeedContentVM *)arg1;
- (void)onLiveFeedDidTap:(WCFinderFeedContentVM *)arg1;
- (void)onVideoPlayWithReport:(WCFinderPlayerReport *)arg1 mediaWrap:(WCFinderFeedMediaWrap *)arg2 currentIndex:(unsigned long long)arg3 forContentVM:(WCFinderFeedContentVM *)arg4;
- (_Bool)finderMulitMediaTableViewCellCanProgressGestureWithTid:(NSString *)arg1;
- (void)onHeaderMoreClickAction:(WCFinderFeedContentVM *)arg1 shareButton:(UIButton *)arg2;
- (void)onFeedVideoStopPlay:(WCFinderMultiMediaTableViewCell *)arg1 tid:(NSString *)arg2;
- (void)showSpamTipsWithString:(NSString *)arg1;
- (void)onRefreshMediaUI:(NSString *)arg1 needAnimation:(_Bool)arg2;
- (void)onFeedCellDidClickLiveNowView:(NSString *)arg1 contentVM:(WCFinderFeedContentVM *)arg2;
- (void)onFeedCellDidClickHeaderView:(NSString *)arg1 contentVM:(WCFinderFeedContentVM *)arg2;
- (void)didFeedDoubleLikeAction:(WCFinderFeedContentVM *)arg1;
- (void)didSelectVideoMediaMuteChanged:(_Bool)arg1;
- (void)contentMediaDidEndPlay:(unsigned long long)arg1 contentVM:(WCFinderFeedContentVM *)arg2 finderPlayerReport:(WCFinderPlayerReport *)arg3;
- (void)photoContentPageTurning:(WCFinderFeedContentVM *)arg1 currentPage:(unsigned long long)arg2 lastPage:(unsigned long long)arg3;
- (void)retryLoadingVideoResource:(_Bool)arg1;
@end


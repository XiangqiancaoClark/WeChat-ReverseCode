//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMFinderLiveGoodsItem, MMFinderLiveLotteryCreateInfo, MMFinderLiveShopContext, MMLiveTask, NSString, WCFinderContact;

@protocol IWCFinderLiveAnchorReporterCallback <NSObject>
- (void)onAnchorLiveDropGiftAction:(unsigned long long)arg1;
- (void)onAnchorLiveClipTopicAction:(unsigned long long)arg1 topic:(NSString *)arg2;
- (void)onAnchorLiveClipModeAction:(unsigned long long)arg1;
- (void)onAnchorLiveWeakNetWithContent:(long long)arg1;
- (void)onAnchorBannerAction:(unsigned long long)arg1 bannerId:(NSString *)arg2;
- (void)onAnchorCommentAction:(unsigned long long)arg1;
- (void)onHandoffAction:(unsigned long long)arg1;
- (void)onScreenSharingAction:(long long)arg1 fileType:(NSString *)arg2 duration:(double)arg3;
- (void)onClapAction;
- (void)onRedPacketAction:(unsigned long long)arg1;
- (void)onAnchorRandomMicAction:(unsigned long long)arg1 withSessionId:(NSString *)arg2;
- (void)onAnchorMicPkAtion:(unsigned long long)arg1 withBattleSessionID:(NSString *)arg2 active:(_Bool)arg3;
- (void)onEnterMicProfile:(NSString *)arg1;
- (void)onAnchorMicClose:(NSString *)arg1;
- (void)onAnchorMicAtion:(unsigned long long)arg1 withUsername:(NSString *)arg2 withMictype:(unsigned long long)arg3 withInvitetype:(unsigned long long)arg4;
- (void)onMicSwitchAtion:(unsigned long long)arg1;
- (void)onMicAtion:(unsigned long long)arg1;
- (void)onOpenEncashPage;
- (void)onGiftRankAction:(unsigned long long)arg1;
- (void)onBeautyResult:(MMLiveTask *)arg1;
- (void)onFilterResult:(MMLiveTask *)arg1;
- (void)onClickOperationView:(unsigned long long)arg1;
- (void)onLotteryAction:(unsigned long long)arg1;
- (void)onLotteryCreate:(MMFinderLiveLotteryCreateInfo *)arg1;
- (void)onOperationLiveShoppingButtonClicked:(MMFinderLiveGoodsItem *)arg1;
- (void)onGoodsItemSelected:(MMFinderLiveGoodsItem *)arg1 sceneNote:(NSString *)arg2 shopContext:(MMFinderLiveShopContext *)arg3;
- (void)onOperateCoupon:(_Bool)arg1;
- (void)onGoodsOrderButtonClicked:(MMFinderLiveShopContext *)arg1;
- (void)onAddGoodsButtonClicked:(MMFinderLiveShopContext *)arg1 withSceneNote:(NSString *)arg2;
- (void)onPromoteStatusChanged:(MMFinderLiveGoodsItem *)arg1 promoteStatus:(_Bool)arg2;
- (void)onCommentTop:(MMLiveTask *)arg1 withContent:(NSString *)arg2;
- (void)onJoinLiveAfterAbnormal:(MMLiveTask *)arg1;
- (void)onProfileViewShow:(unsigned long long)arg1 andContact:(WCFinderContact *)arg2;
@end


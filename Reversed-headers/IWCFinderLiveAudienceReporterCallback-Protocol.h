//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FinderLiveShopWindowAdItem, MMFinderLiveAdsItem, MMFinderLiveLotteryInfo, MMFinderLiveTask, NSMutableDictionary, NSString;

@protocol IWCFinderLiveAudienceReporterCallback <NSObject>
- (void)onOpenFansGroupMemberListPanel;
- (void)onOpenFansGroupDetailPanel;
- (void)onOpenFansGroupDetailPage;
- (void)onJoinGroupPayButtonClick:(_Bool)arg1;
- (void)onJoinGroupPayPanelExpose:(_Bool)arg1;
- (void)onJoinFansGroupButtonClick:(_Bool)arg1 fromGiftSelection:(_Bool)arg2;
- (void)onJoinFansGroupPanelExpose:(_Bool)arg1 fromGiftSelection:(_Bool)arg2;
- (void)onFollowAndJoinFansGroupButtonClick:(_Bool)arg1;
- (void)onFollowAndJoinFansGroupPanelExpose:(_Bool)arg1;
- (void)onOpenJoinFansGroupPanelButtonClick;
- (void)onOpenJoinFansGroupPanelButtonExpose;
- (void)onAudienceDropGiftAction:(unsigned long long)arg1 giftId:(NSString *)arg2;
- (void)onAudienceBannerAction:(unsigned long long)arg1 bannerId:(NSString *)arg2;
- (void)onAudienceCommentAction:(unsigned long long)arg1;
- (void)onJumpGameAction:(NSString *)arg1;
- (void)onHandoffAction:(unsigned long long)arg1;
- (void)onLiveForwardActionClick:(NSString *)arg1 shareType:(unsigned long long)arg2 position:(unsigned long long)arg3;
- (void)onLiveForwardActionClick:(NSString *)arg1 shareType:(unsigned long long)arg2;
- (void)onLiveForwardActionClick:(NSString *)arg1;
- (void)onLiveForwardActionExpose:(NSString *)arg1;
- (void)onLiveActionSheetExpose;
- (void)onFollowConfirmAction:(NSString *)arg1 source:(unsigned long long)arg2 sessionId:(NSString *)arg3;
- (void)onFollowConfirmAction:(NSString *)arg1;
- (void)onFollowButtonShow:(unsigned long long)arg1 sessionId:(NSString *)arg2;
- (void)onFollowConfirmShowFollowGuideLeaveFollow;
- (void)onFollowConfirmShowFolloGuideLeaveIcon;
- (void)onFollowConfirmShow;
- (void)onBrandAction:(unsigned long long)arg1 bizUserName:(NSString *)arg2;
- (void)onJoinTeamAction:(unsigned long long)arg1;
- (void)onJoinTeamAction:(unsigned long long)arg1 extData:(NSMutableDictionary *)arg2;
- (void)onAirPlayAction:(unsigned long long)arg1;
- (void)onEnterMicProfile:(NSString *)arg1;
- (void)onRedPacketAction:(unsigned long long)arg1 withSenderMicId:(NSString *)arg2;
- (void)onLiveTopicAction:(unsigned long long)arg1 topic:(NSString *)arg2;
- (void)onFollowAction:(unsigned long long)arg1 isBizLive:(_Bool)arg2;
- (void)onMoreLiveClick:(unsigned int)arg1;
- (void)onMoreLiveExpose:(unsigned int)arg1;
- (void)onMicAction:(unsigned long long)arg1;
- (void)onGiftAction:(unsigned long long)arg1 withGiftId:(NSString *)arg2 withGiftCount:(unsigned int)arg3;
- (void)onLotteryAction:(unsigned long long)arg1 withResult:(NSString *)arg2 withLotteryInfo:(MMFinderLiveLotteryInfo *)arg3;
- (void)onSwitchLandscape:(long long)arg1;
- (void)onClickLandscape;
- (void)onExposeLandscape;
- (void)switchClarityWithLevel:(long long)arg1 newLevel:(long long)arg2;
- (void)onQuitRoom:(unsigned long long)arg1;
- (void)onHideOpearation:(long long)arg1;
- (void)onCommerceAction:(unsigned long long)arg1 withSessionID:(NSString *)arg2 withProductID:(unsigned long long)arg3 withAdItem:(MMFinderLiveAdsItem *)arg4 withPbAdItem:(FinderLiveShopWindowAdItem *)arg5 withCouponID:(NSString *)arg6;
- (void)onCommerceAction:(unsigned long long)arg1 withSessionID:(NSString *)arg2 withProductID:(unsigned long long)arg3 withAdItem:(MMFinderLiveAdsItem *)arg4 withPbAdItem:(FinderLiveShopWindowAdItem *)arg5;
- (void)onCommentDisable;
- (void)onShoppingButtonShow;
- (void)onSlideRoom:(MMFinderLiveTask *)arg1;
- (void)onClickLike:(unsigned long long)arg1 isClipMode:(_Bool)arg2;
- (void)onReplyMessage:(NSString *)arg1;
- (void)onSendMessage:(NSString *)arg1;
@end

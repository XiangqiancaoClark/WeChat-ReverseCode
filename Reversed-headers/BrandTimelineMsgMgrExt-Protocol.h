//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CContact, CMessageWrap, NSArray, NSString;

@protocol BrandTimelineMsgMgrExt

@optional
- (void)onUpdateOftenReadContactByOpenLive:(CContact *)arg1;
- (void)onUpdateOftenReadContactLiveStatusChange:(CContact *)arg1;
- (void)onUpdateOftenReadContactByEnterSession:(CContact *)arg1;
- (void)onUpateOftenReadBiz:(NSArray *)arg1;
- (void)onChangeBizTimelineDisplayMode;
- (void)onSetNotificationDelFlag:(CMessageWrap *)arg1;
- (void)onDelNotification:(CMessageWrap *)arg1;
- (void)onAddNotification:(CMessageWrap *)arg1;
- (void)onStarBrandUnreadCountChange;
- (void)onTimelineUnreadCountChange;
- (void)onNotificationUnreadCountChange;
- (void)onClearAllTimelineMsgUnreadStatus;
- (void)onDelBrandTimelineMsg:(NSString *)arg1 msgWrap:(CMessageWrap *)arg2;
- (void)onDelBrandTimelineMsgBySession:(NSString *)arg1;
- (void)onModBrandCanvasAdMsg:(CMessageWrap *)arg1;
- (void)onModBrandTimelineMsgArr:(NSArray *)arg1;
- (void)onModBrandTimelineMsg:(CMessageWrap *)arg1;
- (void)onAddBrandTimelineMsg:(CMessageWrap *)arg1;
- (void)onResortSuccess;
- (void)onMigrateBrandMsgFinish:(unsigned long long)arg1;
- (void)onTimelineAbtestChange:(_Bool)arg1;
@end


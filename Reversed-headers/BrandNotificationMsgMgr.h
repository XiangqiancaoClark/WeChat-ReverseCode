//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"

@class BrandNotificationPriorityItem, MemoryMappedKV, NSString;

@interface BrandNotificationMsgMgr : MMUserService <MMServiceProtocol>
{
    MemoryMappedKV *_notificationDigestMMKV;
    BrandNotificationPriorityItem *_priorityItem;
}

+ (id)genAttributedContentWithReaderWrapNotifyMsg:(id)arg1;
+ (id)genAttributedContentWithReaderWrapNotifyMsgDigestItem:(id)arg1;
+ (_Bool)isBrandNotificationIsFromBrandTemplateMsgHolder:(id)arg1;
+ (_Bool)canNotAddDB:(id)arg1;
+ (_Bool)canGetNotifyMsgNodeFromMsgSource:(id)arg1;
+ (_Bool)canHandleBrandAttributedNotifyMsg:(id)arg1;
+ (_Bool)isBrandAttributedNotifyMsgOpen;
- (void).cxx_destruct;
@property(retain, nonatomic) BrandNotificationPriorityItem *priorityItem; // @synthesize priorityItem=_priorityItem;
@property(retain, nonatomic) MemoryMappedKV *notificationDigestMMKV; // @synthesize notificationDigestMMKV=_notificationDigestMMKV;
- (_Bool)internalUpdateNotificationMsgWrap:(id)arg1 shouldShowPriorityNotification:(_Bool)arg2 withDB:(id)arg3;
- (unsigned int)getClicfgValue:(id)arg1 withDef:(unsigned int)arg2;
- (_Bool)updateNotificationMsgWrap:(id)arg1 isClickPriorityNotificationInTL:(_Bool)arg2 withDB:(id)arg3;
- (id)getPriorityNotificationMsgWithCurMainSessionMessageWrap:(id)arg1 withLatestMsgWrap:(id)arg2 withUnreadCount:(unsigned int)arg3 withDB:(id)arg4 shouldUpdateShouldShowPriorityNotificationFlag:(_Bool *)arg5;
- (_Bool)checkIfNeedUpdateNotificationWithCurMainSessionMessageWrap:(id)arg1 withLatestMsgWrap:(id)arg2 shouldShowPriorityNotificationWithDB:(id)arg3;
- (_Bool)updateNotificationMsgWrapExposeTime:(id)arg1 withStartTime:(unsigned long long)arg2 withDB:(id)arg3;
- (_Bool)shouldShowPriorityNotificationMsgSwitch;
- (_Bool)isLatestNotificationBoxDigestBold;
- (void)setLatestNotificationBoxDigestBold:(_Bool)arg1;
- (id)genBrandAttributedNotifyMsgBoxDigest:(id)arg1;
- (void)clearAllData;
- (void)initData;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


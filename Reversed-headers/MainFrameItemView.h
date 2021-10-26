//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MMGroupLiveMgrExt-Protocol.h"
#import "WCTextStateDBExt-Protocol.h"

@class MMBadgeView, MMCPLabel, MMGroupView, MMHeadImageView, MainFrameCellData, NSString, TextStateItemView, UIImageView, UILabel;

@interface MainFrameItemView : UIView <MMGroupLiveMgrExt, WCTextStateDBExt>
{
    MainFrameCellData *m_cellData;
    MMHeadImageView *m_frameHeadView;
    MMBadgeView *m_unreadCountView;
    MMCPLabel *m_nameLabel;
    MMCPLabel *m_descPostfix;
    UIImageView *m_namePostIconView;
    TextStateItemView *m_textStateView;
    UILabel *m_timeLabel;
    UILabel *m_greenLabel;
    UIImageView *m_statusView;
    MMCPLabel *m_messageLabel;
    UIImageView *m_chatNotPushView;
    UIImageView *m_trackRoomTipsView;
    UIImageView *m_multiTalkIconView;
    UIImageView *m_multiTalkingView;
    UIImageView *m_starView;
    UIImageView *m_strongNotifactionIconView;
    UIImageView *m_groupLiveIconView;
    MMGroupView *m_groupView;
    UIImageView *_m_liveStatusView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *m_liveStatusView; // @synthesize m_liveStatusView=_m_liveStatusView;
@property(retain, nonatomic) UIImageView *m_statusView; // @synthesize m_statusView;
@property(retain, nonatomic) MainFrameCellData *m_cellData; // @synthesize m_cellData;
@property(retain, nonatomic) MMCPLabel *m_messageLabel; // @synthesize m_messageLabel;
@property(retain, nonatomic) UILabel *m_timeLabel; // @synthesize m_timeLabel;
@property(retain, nonatomic) UILabel *m_greenLabel; // @synthesize m_greenLabel;
@property(retain, nonatomic) MMCPLabel *m_nameLabel; // @synthesize m_nameLabel;
@property(retain, nonatomic) MMHeadImageView *m_frameHeadView; // @synthesize m_frameHeadView;
- (void)onTextStateRead:(id)arg1;
- (void)onLiveCountChanged:(id)arg1;
- (void)setLabelHighlighted:(_Bool)arg1;
- (void)updateWithCellData:(id)arg1;
- (void)updateBackgroundColor;
- (void)updateStatusView;
- (_Bool)isShowPluginStatus;
- (void)updateUnreadCountView;
- (void)updateHeadView;
- (void)quoteMessageLable:(id)arg1 prefixText:(id)arg2 hasStar:(_Bool)arg3 hasLiveStatus:(_Bool)arg4;
- (void)updateTextStateView;
- (void)updateLiveStatusView;
- (void)updateStarView;
- (void)updateMessageForBrandHolder;
- (id)highlightPatDigestForSessionInfo:(id)arg1;
- (id)attrDigestForSessionInfo:(id)arg1;
- (void)updateMessageForSingle;
- (void)updateMessageForChatRoom;
- (void)updateMessageLabel;
- (void)updateNoneVoiceGreenLabelAndMsgLabel;
- (void)removeQuoteMessageLabel;
- (void)quoteMessageLable:(id)arg1 prefixText:(id)arg2;
- (_Bool)shouldHideGroupLiveIcon:(_Bool)arg1;
- (void)updateGroupView:(_Bool)arg1;
- (void)updateNameLabel;
- (id)getLabelNameColor;
- (void)updateTimeLabel;
- (void)updateTimeForTimer;
- (void)layoutSubviews;
- (void)initSubview;
- (void)initTextStateView;
- (void)initGroupView;
- (void)initNamePostIconView;
- (void)initDescLabel;
- (void)initNameLabel;
- (void)dealloc;
- (id)initWithCellData:(id)arg1 frame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

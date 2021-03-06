//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMAcceptAgreementBaseViewController.h"

#import "ILinkEventExt-Protocol.h"

@class MMUILabel, NSString, RichTextView, UIButton;

@interface ChatRoomBaseUpgradeOpenIMViewController : MMAcceptAgreementBaseViewController <ILinkEventExt>
{
    MMUILabel *m_topTitleLabel;
    RichTextView *m_titleTextView;
    MMUILabel *m_contentTextLabel;
    UIButton *m_iAcceptBtn;
    NSString *_m_titleText;
    NSString *_m_contentText;
    NSString *_m_topTitleText;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_topTitleText; // @synthesize m_topTitleText=_m_topTitleText;
@property(retain, nonatomic) NSString *m_contentText; // @synthesize m_contentText=_m_contentText;
@property(retain, nonatomic) NSString *m_titleText; // @synthesize m_titleText=_m_titleText;
@property(retain, nonatomic) UIButton *m_iAcceptBtn; // @synthesize m_iAcceptBtn;
@property(retain, nonatomic) MMUILabel *m_contentTextLabel; // @synthesize m_contentTextLabel;
@property(retain, nonatomic) RichTextView *m_titleTextView; // @synthesize m_titleTextView;
@property(retain, nonatomic) MMUILabel *m_topTitleLabel; // @synthesize m_topTitleLabel;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onCancel;
- (void)doIAccept;
- (void)layoutIAcceptBtn;
- (void)layoutContentTextLabel;
- (void)layoutTitleTextView;
- (void)layoutTopTitleLable;
- (void)setUpNavigation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCAccountBaseViewController.h"

#import "MFMessageComposeViewControllerDelegate-Protocol.h"

@class MMUILabel, NSDictionary, NSString, UIButton, WCRedesignInfoItem;
@protocol WCAccountPhoneVerifyUpViewControllerDelegate;

@interface WCAccountPhoneVerifyUpViewController : WCAccountBaseViewController <MFMessageComposeViewControllerDelegate>
{
    id <WCAccountPhoneVerifyUpViewControllerDelegate> m_delegate;
    MMUILabel *_titleLabel;
    MMUILabel *_subtitleLabel;
    WCRedesignInfoItem *_editSmsInfoItem;
    WCRedesignInfoItem *_sendToInfoItem;
    UIButton *_sendSmsButton;
    UIButton *_sentAndNextButton;
    NSDictionary *_storedTitleTextAttributes;
    long long _storedBarStyle;
}

- (void).cxx_destruct;
@property(nonatomic) long long storedBarStyle; // @synthesize storedBarStyle=_storedBarStyle;
@property(retain, nonatomic) NSDictionary *storedTitleTextAttributes; // @synthesize storedTitleTextAttributes=_storedTitleTextAttributes;
@property(retain, nonatomic) UIButton *sentAndNextButton; // @synthesize sentAndNextButton=_sentAndNextButton;
@property(retain, nonatomic) UIButton *sendSmsButton; // @synthesize sendSmsButton=_sendSmsButton;
@property(retain, nonatomic) WCRedesignInfoItem *sendToInfoItem; // @synthesize sendToInfoItem=_sendToInfoItem;
@property(retain, nonatomic) WCRedesignInfoItem *editSmsInfoItem; // @synthesize editSmsInfoItem=_editSmsInfoItem;
@property(retain, nonatomic) MMUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)setDelegate:(id)arg1;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)onSend;
- (void)recoverNavigationSetting;
- (void)saveNavigationSetting;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)initNavigationBar;
- (_Bool)useRedesignStyle;
- (_Bool)useSheetView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "ILinkEventExt-Protocol.h"
#import "WCPayDecimalKeyboardViewDelegate-Protocol.h"

@class NSString, RichTextView, UIButton, UITextField, UIView, WCPayDecimalKeyboardView, WCUIAlertView;
@protocol WCPayFacingReceiveFixedAmountViewControllerDelegate;

@interface WCPayFacingReceiveFixedAmountViewController : WCPayBaseViewController <WCPayDecimalKeyboardViewDelegate, ILinkEventExt>
{
    id <WCPayFacingReceiveFixedAmountViewControllerDelegate> m_delegate;
    NSString *_remark;
    NSString *_moneyString;
    UITextField *_feeTextField;
    RichTextView *_commentTextView;
    UIButton *_footerBtn;
    WCUIAlertView *_alertView;
    WCPayDecimalKeyboardView *_keyboardView;
    UIView *_headerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) WCPayDecimalKeyboardView *keyboardView; // @synthesize keyboardView=_keyboardView;
@property(retain, nonatomic) WCUIAlertView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) UIButton *footerBtn; // @synthesize footerBtn=_footerBtn;
@property(retain, nonatomic) RichTextView *commentTextView; // @synthesize commentTextView=_commentTextView;
@property(retain, nonatomic) UITextField *feeTextField; // @synthesize feeTextField=_feeTextField;
@property(retain, nonatomic) NSString *moneyString; // @synthesize moneyString=_moneyString;
@property(retain, nonatomic) NSString *remark; // @synthesize remark=_remark;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)keyboardViewConfirmBtnClick:(id)arg1;
- (id)keyboardHostViewController;
- (void)remarkCancel;
- (void)remarkConfirm;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)textFieldDidChange;
- (void)onNext;
- (void)FillSaveMoneyCancel;
- (void)initHeaderView;
- (double)currencyTextFieldFontSize:(id)arg1;
- (double)uintLabelFontSize:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)reloadTableView;
- (id)navigationBarBackgroundColor;
- (void)initNavigationBar;
- (void)viewDidLoad;
- (void)setDelegate:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


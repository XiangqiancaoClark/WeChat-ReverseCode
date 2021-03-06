//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "WCBaseInfoItemDelegate-Protocol.h"

@class NSString, UIButton, WCPayCardBinInfo, WCPayCardTypeItem;
@protocol WCPayECardSelectCardTypeViewControllerDelegate;

@interface WCPayECardSelectCardTypeViewController : WCPayBaseViewController <WCBaseInfoItemDelegate>
{
    id <WCPayECardSelectCardTypeViewControllerDelegate> _delegate;
    WCPayCardTypeItem *_cardTypeItem;
    UIButton *_footerButton;
    WCPayCardBinInfo *_selectedCardType;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayCardBinInfo *selectedCardType; // @synthesize selectedCardType=_selectedCardType;
@property(retain, nonatomic) UIButton *footerButton; // @synthesize footerButton=_footerButton;
@property(retain, nonatomic) WCPayCardTypeItem *cardTypeItem; // @synthesize cardTypeItem=_cardTypeItem;
@property(nonatomic) __weak id <WCPayECardSelectCardTypeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)onNext;
- (void)clickInfoCell:(id)arg1;
- (id)tableFooterView;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (id)makeCellTitleLabel;
- (void)reloadTableView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


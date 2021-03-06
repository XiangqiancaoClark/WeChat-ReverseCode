//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "WCPayLQTPickerPanelViewDelegate-Protocol.h"

@class NSString, WCPayLQTPickerPanelView;
@protocol WCPayLQTAutoChargeSetttingViewControllerDelegate;

@interface WCPayLQTAutoChargeSetttingViewController : WCPayBaseViewController <WCPayLQTPickerPanelViewDelegate>
{
    id <WCPayLQTAutoChargeSetttingViewControllerDelegate> _delegate;
    WCPayLQTPickerPanelView *_pickerPanelView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayLQTPickerPanelView *pickerPanelView; // @synthesize pickerPanelView=_pickerPanelView;
@property(nonatomic) __weak id <WCPayLQTAutoChargeSetttingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)timeStringFromTimeSpan:(unsigned int)arg1;
- (void)onPickerPanelViewConfirmWithTimeSpan:(id)arg1;
- (void)onPickerPanelViewDismiss;
- (void)chargeTimeCellClick;
- (void)confirmClose;
- (void)cancelClose;
- (void)onSwitchChange:(id)arg1;
- (void)makeChargeTimeCell:(id)arg1;
- (void)makeSwicthCell:(id)arg1;
- (id)setupHeaderView;
- (void)reloadTableView;
- (void)showOpenSuccToastIfNeed;
- (void)setupContentView;
- (void)leftBtnClick;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)refreshViewWithData:(id)arg1;
- (id)navigationBarBackgroundColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


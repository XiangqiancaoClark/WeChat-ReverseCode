//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMPageSheetAdapterDelegate-Protocol.h"
#import "MMPageSheetBottomViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCPayFavorSelectCellDelegate-Protocol.h"

@class MMPageSheetAdapter, MMTableView, NSMutableArray, NSString, WCPayBizF2FTransferMoneyFaovrPageSheetConfig;
@protocol WCPayBizF2FTransferMoneyFaovrPageSheetDelegate;

@interface WCPayBizF2FTransferMoneyFaovrPageSheet : NSObject <MMPageSheetBottomViewDelegate, MMPageSheetAdapterDelegate, UITableViewDataSource, UITableViewDelegate, WCPayFavorSelectCellDelegate>
{
    _Bool _bIsShowing;
    int _tableViewHeight;
    int _pageSheetMarginTop;
    id <WCPayBizF2FTransferMoneyFaovrPageSheetDelegate> _delegate;
    WCPayBizF2FTransferMoneyFaovrPageSheetConfig *_config;
    MMPageSheetAdapter *_pageAdapter;
    MMTableView *_m_tableView;
    NSMutableArray *_m_selectedArray;
}

- (void).cxx_destruct;
@property(nonatomic) int pageSheetMarginTop; // @synthesize pageSheetMarginTop=_pageSheetMarginTop;
@property(nonatomic) int tableViewHeight; // @synthesize tableViewHeight=_tableViewHeight;
@property(retain, nonatomic) NSMutableArray *m_selectedArray; // @synthesize m_selectedArray=_m_selectedArray;
@property(retain, nonatomic) MMTableView *m_tableView; // @synthesize m_tableView=_m_tableView;
@property(retain, nonatomic) MMPageSheetAdapter *pageAdapter; // @synthesize pageAdapter=_pageAdapter;
@property(nonatomic) _Bool bIsShowing; // @synthesize bIsShowing=_bIsShowing;
@property(retain, nonatomic) WCPayBizF2FTransferMoneyFaovrPageSheetConfig *config; // @synthesize config=_config;
@property(nonatomic) __weak id <WCPayBizF2FTransferMoneyFaovrPageSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void)pageSheetDidClose:(id)arg1;
- (void)pageSheetWillClose:(id)arg1;
- (void)pageSheetDidDisappear:(id)arg1;
- (void)pageSheetWillDisappear:(id)arg1;
- (void)pageSheetDidAppear:(id)arg1;
- (void)pageSheetWillAppear:(id)arg1;
- (_Bool)isPageSheetShowing;
- (void)dismissPage;
- (void)dismissPageSheet;
- (void)reportWithScene:(unsigned long long)arg1;
- (void)onWCPayFavorSelectCellSelectIndex:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)getTableViewHeight;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)updateTableView;
- (double)bottomViewBottomMargin;
- (void)onClickPageSheetConfirmButton;
- (double)bottomViewTopMargin;
- (void)showPageSheet;
- (void)initPageSheet;
- (void)updateConfig:(id)arg1;
- (void)setupDetailView;
- (id)initWithConfig:(id)arg1 delegate:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCMktCardBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCMktMemberCardHistoryLogicControllerDelegate-Protocol.h"

@class MMTableView, NSString, UIView, WCMktMemberCardHistoryLogicController;

@interface WCMktMemberCardHistoryViewController : WCMktCardBaseViewController <UITableViewDelegate, UITableViewDataSource, WCMktMemberCardHistoryLogicControllerDelegate, WCActionSheetDelegate>
{
    WCMktMemberCardHistoryLogicController *_logicController;
    MMTableView *_tableView;
    UIView *_emptyView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) WCMktMemberCardHistoryLogicController *logicController; // @synthesize logicController=_logicController;
- (void)onDeleteMemberCardHistoryListElemDataSuccWithIndexPath:(id)arg1;
- (void)onTableviewGetMemberCardHistoryHomepageFail;
- (void)onTableviewNeedReloadWhenGetResp;
- (void)onTableviewNeedReloadWhenLoadCache;
- (void)vcStopLoading;
- (void)vcStartLoading;
- (id)getViewController;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)genTableFooterView;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)rightBarButtonClick;
- (void)updateNavigationBar;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)updateFooterView;
- (void)handleHeaderRefresh;
- (void)setupEmptyView;
- (void)setupTableView;
- (void)setupView;
- (void)setupData;
- (id)navigationBarBackgroundColor;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

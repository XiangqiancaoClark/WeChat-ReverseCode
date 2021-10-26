//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MMAcceptAgreementCommonHeadView, MMTableView, NSMutableArray, NSMutableDictionary, NSString, UIButton, UIImage;

@interface ChatRoomBatchUpgradeOpenIMResultViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate>
{
    MMTableView *m_tableView;
    NSMutableArray *m_upgradeOpenIMChatRoomAr;
    MMAcceptAgreementCommonHeadView *m_commonHeadView;
    UIImage *m_logoSVGImage;
    UIButton *m_iAcceptBtn;
    NSMutableDictionary *_dicBatchUpgradeOpenIMResult;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicBatchUpgradeOpenIMResult; // @synthesize dicBatchUpgradeOpenIMResult=_dicBatchUpgradeOpenIMResult;
- (id)navigationBarBackgroundColor;
- (void)doIAccept;
- (void)makeCell:(id)arg1 ForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)genFooterView;
- (void)reloadTableData;
- (id)genHeaderView;
- (void)initTableView;
- (void)reloadData;
- (void)layoutIAcceptBtn;
- (void)layoutCommonHeadView;
- (void)layoutView;
- (void)initData;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

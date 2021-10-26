//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "BrandSessionMgrExt-Protocol.h"
#import "TemplateMsgSearchHelperDelegate-Protocol.h"
#import "TemplateSessionMgrExt-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CBaseContact, MMTableView, NSString, TemplateMsgSearchHelper;

@interface TemplateSessionViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, TemplateSessionMgrExt, TemplateMsgSearchHelperDelegate, BrandSessionMgrExt>
{
    MMTableView *m_tableView;
    CBaseContact *_templateContact;
    TemplateMsgSearchHelper *_searchHelper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TemplateMsgSearchHelper *searchHelper; // @synthesize searchHelper=_searchHelper;
@property(retain, nonatomic) CBaseContact *templateContact; // @synthesize templateContact=_templateContact;
- (void)didSelectSearchResultForMessageWrap:(id)arg1 indexPath:(id)arg2 arrKeyword:(id)arg3;
- (void)didSelectSearchResultForMessageWrap:(id)arg1;
- (id)getChatContact;
- (void)msgSearchBarDoSearch;
- (void)msgSearchDidDismiss;
- (void)msgSearchBarCancel;
- (void)msgSearchBarActive;
- (void)onTemplateSessionUpdate;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)viewWillPop:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)initMsgSearchHelper;
- (void)initTableView;
- (void)onSettingButton:(id)arg1;
- (_Bool)shouldInteractivePop;
- (void)onNavBackBarButtonClicked;
- (void)initNavigationBar;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

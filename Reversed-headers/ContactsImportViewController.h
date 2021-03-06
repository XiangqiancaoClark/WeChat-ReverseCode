//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ContactInfoViewControllerDelegate-Protocol.h"
#import "ContactsImportLogicDelegate-Protocol.h"
#import "ContactsImportTableViewCellDelegate-Protocol.h"
#import "SendVerifyMsgViewControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "contactVerifyLogicDelegate-Protocol.h"

@class CContact, CContactVerifyLogic, ContactsImportLogic, MMTableView, NSIndexPath, NSMutableArray, NSMutableDictionary, NSString, OldAccountContact, SendVerifyMsgLogicController;

@interface ContactsImportViewController : MMUIViewController <SendVerifyMsgViewControllerDelegate, contactVerifyLogicDelegate, ContactsImportLogicDelegate, ContactInfoViewControllerDelegate, ContactsImportTableViewCellDelegate, UITableViewDelegate, UITableViewDataSource>
{
    MMUIViewController *_guideViewController;
    ContactsImportLogic *_contactsImportLogic;
    NSMutableArray *_pinyinKeys;
    NSMutableDictionary *_pinyinToContactsMap;
    CContactVerifyLogic *_contactVerifyLogic;
    SendVerifyMsgLogicController *_sendVerifyMessageLogicController;
    OldAccountContact *_operatingOldAccountContact;
    NSIndexPath *_operatingIndexPath;
    CContact *_operatingContact;
    MMTableView *_tableView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) CContact *operatingContact; // @synthesize operatingContact=_operatingContact;
@property(retain, nonatomic) NSIndexPath *operatingIndexPath; // @synthesize operatingIndexPath=_operatingIndexPath;
@property(retain, nonatomic) OldAccountContact *operatingOldAccountContact; // @synthesize operatingOldAccountContact=_operatingOldAccountContact;
@property(retain, nonatomic) SendVerifyMsgLogicController *sendVerifyMessageLogicController; // @synthesize sendVerifyMessageLogicController=_sendVerifyMessageLogicController;
@property(retain, nonatomic) CContactVerifyLogic *contactVerifyLogic; // @synthesize contactVerifyLogic=_contactVerifyLogic;
@property(retain, nonatomic) NSMutableDictionary *pinyinToContactsMap; // @synthesize pinyinToContactsMap=_pinyinToContactsMap;
@property(retain, nonatomic) NSMutableArray *pinyinKeys; // @synthesize pinyinKeys=_pinyinKeys;
@property(retain, nonatomic) ContactsImportLogic *contactsImportLogic; // @synthesize contactsImportLogic=_contactsImportLogic;
@property(nonatomic) __weak MMUIViewController *guideViewController; // @synthesize guideViewController=_guideViewController;
- (void)contactSendRequestOk:(id)arg1;
- (void)contactAddContactOk:(id)arg1;
- (void)onRemoveContact;
- (void)onSendVerifyMessage:(id)arg1;
- (void)onFetchContactListFailed:(id)arg1;
- (void)onFetchContactListSucceeded:(id)arg1 appendContactList:(id)arg2 isFinished:(_Bool)arg3;
- (void)onContactVerifyFillVerifyMsg:(id)arg1;
- (void)onTapAddButton:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateOperaingOldAccountContactStatus:(unsigned int)arg1 verifyMessage:(id)arg2;
- (id)getContactFromOldAccountContact:(id)arg1;
- (void)appendContactList:(id)arg1;
- (void)onTapCancelBarButtonItem;
- (void)stopLoading;
- (void)startLoading;
- (void)initData;
- (void)initTableView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithContactsImportLogic:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


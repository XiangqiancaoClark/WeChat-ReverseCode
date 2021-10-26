//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayContactSelectListBaseViewController.h"

#import "WCPayContactSelectListBaseViewControllerDelegate-Protocol.h"

@class NSString;
@protocol WCPaySelectChatroomMemberViewControllerDelegate;

@interface WCPaySelectChatroomMemberViewController : WCPayContactSelectListBaseViewController <WCPayContactSelectListBaseViewControllerDelegate>
{
    id <WCPaySelectChatroomMemberViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPaySelectChatroomMemberViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)realCallbackSelectContact:(id)arg1;
- (void)onSelectedOrCancelContact:(id)arg1 isSelected:(_Bool)arg2;
- (id)getChatroomContact;
- (id)getReloadContactDataList;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)leftBarbuttonClick;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

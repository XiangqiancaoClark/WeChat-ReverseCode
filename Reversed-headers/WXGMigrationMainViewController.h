//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "CNetworkStatusExt-Protocol.h"
#import "ILinkEventExt-Protocol.h"
#import "WXGChatLogSessionViewControllerDelegate-Protocol.h"

@class CTRichTextView, NSString, UIButton, UIImageView, UILabel;

@interface WXGMigrationMainViewController : MMUIViewController <ILinkEventExt, CNetworkStatusExt, WXGChatLogSessionViewControllerDelegate>
{
    UIImageView *m_iconView;
    UILabel *m_tipsLabel;
    UILabel *m_statusLabel;
    UIButton *m_migrationAllActionButton;
    UIButton *m_actionButton;
    CTRichTextView *m_backupButton;
    UIButton *m_backupButtonTmp;
    _Bool m_bEnable;
    _Bool m_bPressAllActionBtn;
}

- (void).cxx_destruct;
- (_Bool)checkBatteryEnough;
- (void)pushMigrationServerVC:(id)arg1;
- (void)doMigrationAll;
- (void)onSelectSession:(id)arg1 selectAllTime:(_Bool)arg2 selectTextOnly:(_Bool)arg3 selectStartTime:(id)arg4 selectEndTime:(id)arg5;
- (void)onCancelSelectSession;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onShowBackupWebView;
- (void)onShowSelectSessionView;
- (void)onMigrationPortionButtonPress;
- (void)onMigrationAllButtonPress;
- (void)onActionButtonPress;
- (void)onBack;
- (void)makeMainView;
- (void)p_makeActionButton;
- (void)p_makeMigrationAllActionButton;
- (void)p_makeStatusTipLabel;
- (void)p_makeTipsLabel;
- (void)p_makeIconView;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


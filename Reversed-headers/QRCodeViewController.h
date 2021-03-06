//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "FoldableTipViewDelegate-Protocol.h"
#import "IMMQRCodeExt-Protocol.h"
#import "QRCodeCardViewExt-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class CContact, FoldableTipView, NSString, QRCodeCardView;

@interface QRCodeViewController : MMUIViewController <FoldableTipViewDelegate, QRCodeCardViewExt, IMMQRCodeExt, WCActionSheetDelegate>
{
    CContact *m_contact;
    QRCodeCardView *m_qrcodeCard;
    _Bool m_bIsNotAllowAddMeByQRCode;
    _Bool _isOpenedByScanQR;
    FoldableTipView *m_abandonTipView;
}

- (void).cxx_destruct;
- (void)onQRCodeCardAccessibilityPerformMagicTap;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)preViewControllerIsKindOf:(Class)arg1;
- (void)Operate:(id)arg1;
- (void)scanQRCode;
- (void)onFoldableTipViewClickConfirm:(id)arg1;
- (void)onFoldableTipViewClickCancel:(id)arg1;
- (void)sendToFriend;
- (void)onRevokeQRCode;
- (void)revokeQRCode;
- (void)saveToAlbum;
- (void)onDownloadQRCodeFinish:(id)arg1 FooterWording:(id)arg2;
- (void)onShowAbandonTip:(id)arg1 TipID:(id)arg2 Wording:(id)arg3;
- (void)setHasShowTip:(id)arg1;
- (void)getNextQRCode;
- (void)willAppear;
- (void)adjustSubviewRects;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (_Bool)canShowFacebookShareEntrance;
- (void)userDidTakeScreenshot:(id)arg1;
- (id)initWithContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


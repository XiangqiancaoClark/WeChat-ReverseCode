//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "ICdnComMgrExt-Protocol.h"
#import "WCPayQRCodeRewardGenCodeCgiDelegate-Protocol.h"
#import "WCPayQRCodeRewardGetCodeCgiDelegate-Protocol.h"
#import "WCPayQRCodeRewardReceiverDetailViewControllerDelegate-Protocol.h"
#import "WCPayQRCodeRewardSetPhotoOrWordCgiDelegate-Protocol.h"
#import "WCPayQRCodeRewardSetupViewControllerDelegate-Protocol.h"

@class MMWebViewController, NSString, WCPayQRCodeRewardGenCodeCgi, WCPayQRCodeRewardGetCodeCgi, WCPayQRCodeRewardReceiverDetailViewController, WCPayQRCodeRewardSetPhotoOrWordCgi;

@interface WCPayQRCodeRewardLaunchControlLogic : WCPayControlLogic <WCPayQRCodeRewardSetupViewControllerDelegate, WCPayQRCodeRewardGenCodeCgiDelegate, WCPayQRCodeRewardReceiverDetailViewControllerDelegate, WCPayQRCodeRewardGetCodeCgiDelegate, WCPayQRCodeRewardSetPhotoOrWordCgiDelegate, ICdnComMgrExt>
{
    WCPayQRCodeRewardGetCodeCgi *_getRewardCodeCgi;
    WCPayQRCodeRewardGenCodeCgi *_genRewardCodeCgi;
    WCPayQRCodeRewardSetPhotoOrWordCgi *_setPhotoOrWordCgi;
    WCPayQRCodeRewardReceiverDetailViewController *_detailViewController;
    NSString *_currentSettingWord;
    NSString *_currentCdnClientID;
    long long _downloadCodeImgScene;
    MMWebViewController *_uploadIdWebView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMWebViewController *uploadIdWebView; // @synthesize uploadIdWebView=_uploadIdWebView;
@property(nonatomic) long long downloadCodeImgScene; // @synthesize downloadCodeImgScene=_downloadCodeImgScene;
@property(retain, nonatomic) NSString *currentCdnClientID; // @synthesize currentCdnClientID=_currentCdnClientID;
@property(copy, nonatomic) NSString *currentSettingWord; // @synthesize currentSettingWord=_currentSettingWord;
@property(retain, nonatomic) WCPayQRCodeRewardReceiverDetailViewController *detailViewController; // @synthesize detailViewController=_detailViewController;
@property(retain, nonatomic) WCPayQRCodeRewardSetPhotoOrWordCgi *setPhotoOrWordCgi; // @synthesize setPhotoOrWordCgi=_setPhotoOrWordCgi;
@property(retain, nonatomic) WCPayQRCodeRewardGenCodeCgi *genRewardCodeCgi; // @synthesize genRewardCodeCgi=_genRewardCodeCgi;
@property(retain, nonatomic) WCPayQRCodeRewardGetCodeCgi *getRewardCodeCgi; // @synthesize getRewardCodeCgi=_getRewardCodeCgi;
- (void)handleEventAfterDownloadCodeImage;
- (void)OnCdnDownload:(id)arg1;
- (void)downloadCodeImageView;
- (id)getCodeViewCdnDownloadClientId;
- (_Bool)hasLocalCodeImageCache;
- (void)saveGetQRCodeRewardCacheToFile;
- (void)onGetQRCodeRewardSetPhotoOrWordCgiResp:(id)arg1;
- (void)onGetQRCodeRewardSetCodeResp:(id)arg1;
- (void)onGetQRCodeRewardGetCodeResp:(id)arg1;
- (void)webViewReturn:(id)arg1;
- (void)sendGetCodeCgi;
- (void)onReceiverDetailViewControllerUserRemovePhotoWording;
- (void)onReceiverDetailViewControllerUserSetPhotoWording:(id)arg1;
- (void)onReceiverDetailViewControllerClickRewardSettingBtn;
- (void)onRecevierDetailViewControllerClickSetupBtn;
- (void)onReceiverDetailViewControllerBack;
- (void)onSetupViewControllerConfirmGenCodeWithAmountList:(id)arg1 rewardDesc:(id)arg2 hasChangeDefaultAmount:(_Bool)arg3;
- (void)onSetupViewControllerBack;
- (void)startLogic;
- (void)stopLogic;
- (id)initWithData:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseScanLogicController.h"

#import "CameraScanCodesContentViewDelegate-Protocol.h"
#import "CameraScannerStatusExt-Protocol.h"
#import "GetA8KeyLogicDelegate-Protocol.h"
#import "NewQRCodeScannerDelegate-Protocol.h"
#import "ScanBarcodeExt-Protocol.h"
#import "ScanQRCodeUrlPrefixHandlerDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class BizScanTabBarInfo, CameraScanCodesContentView, GetA8KeyLogic, MMUIViewController, NSArray, NSDictionary, NSMutableArray, NSObject, NSOperationQueue, NSString, NewQRCodeScanner, ScanQRCodeLogicParams, ScanQRCodeResultInfo, ScanQRCodeUrlPrefixRule, ScanWXCodeUrlPrefixRule;
@protocol OS_dispatch_semaphore;

@interface ScanQRCodeLogicController : BaseScanLogicController <ScanQRCodeUrlPrefixHandlerDelegate, CameraScannerStatusExt, CameraScanCodesContentViewDelegate, NewQRCodeScannerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, GetA8KeyLogicDelegate, ScanBarcodeExt>
{
    _Bool _hasCamera;
    GetA8KeyLogic *_logic;
    NSString *_desc;
    _Bool _hasFoundCode;
    NSString *_loadingText;
    NSString *_alertText;
    _Bool _showingMyQRCode;
    _Bool _scanOnePictureMode;
    _Bool _bIsScanFromAlbumImage;
    _Bool _hasReported;
    float _maxZoomFactor;
    _Bool _bNeedCameraScan;
    _Bool _hasPresentToOtherVC;
    _Bool _bShowMyQRCode;
    _Bool _isPreScanImageFinish;
    _Bool _isUseSmallCropArea;
    _Bool _isSupportMultiCodes;
    _Bool _isScanCodesDirectOpenWhitelistLandingPage;
    _Bool _hasEnterTabOnce;
    unsigned int _fromScene;
    unsigned int _m_sourceType;
    float _currZoomFactor;
    unsigned int _zoomCount;
    unsigned int _multiCodesScanBarcodeEventID;
    unsigned int _preScanTaskSequence;
    NSMutableArray *_markDotInfoListInScanFullImage;
    NSMutableArray *_markDotInfoListAfterFilter;
    NSString *_picUrl4Stat;
    NSString *_picEncKey4Stat;
    NSDictionary *_tryScanExtraInfo;
    NSString *_sourceWeAppAppid;
    BizScanTabBarInfo *_tabBarInfo;
    ScanQRCodeLogicParams *_logicParams;
    unsigned long long _expoFrom;
    NSString *_m_sourceInfo;
    NSString *_m_weappSourceInfo;
    ScanQRCodeUrlPrefixRule *_m_urlPrefixRule;
    MMUIViewController *_m_viewController;
    ScanWXCodeUrlPrefixRule *_m_wxCodeUrlPrefixRule;
    ScanQRCodeResultInfo *_offlineScanResult;
    unsigned long long _longPressScanScene;
    NSArray *_markDotInfoList;
    unsigned long long _startDetectTimestamp;
    unsigned long long _stopDetectTimestamp;
    unsigned long long _zoomLastTimestamp;
    unsigned long long _multiCodesSendCGIReq;
    NewQRCodeScanner *_scanner;
    NSOperationQueue *_scanPicOperationQueue;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

+ (id)tryCompressReportingImage:(id)arg1 withMaxLength:(unsigned long long)arg2;
+ (id)getDataUsedInExtInfoWithScanImageSize:(struct CGSize)arg1 AndWithLongPressPoint:(struct CGPoint)arg2 AndWithImageViewSize:(struct CGSize)arg3 AndWithContentOffset:(struct CGPoint)arg4 AndWithImageViewRect:(struct CGRect)arg5;
+ (id)shareScanOnePicSerialQueue;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(retain, nonatomic) NSOperationQueue *scanPicOperationQueue; // @synthesize scanPicOperationQueue=_scanPicOperationQueue;
@property(retain, nonatomic) NewQRCodeScanner *scanner; // @synthesize scanner=_scanner;
@property(nonatomic) unsigned int preScanTaskSequence; // @synthesize preScanTaskSequence=_preScanTaskSequence;
@property(nonatomic) unsigned int multiCodesScanBarcodeEventID; // @synthesize multiCodesScanBarcodeEventID=_multiCodesScanBarcodeEventID;
@property(nonatomic) unsigned long long multiCodesSendCGIReq; // @synthesize multiCodesSendCGIReq=_multiCodesSendCGIReq;
@property(nonatomic) unsigned long long zoomLastTimestamp; // @synthesize zoomLastTimestamp=_zoomLastTimestamp;
@property(nonatomic) unsigned int zoomCount; // @synthesize zoomCount=_zoomCount;
@property(nonatomic) float currZoomFactor; // @synthesize currZoomFactor=_currZoomFactor;
@property(nonatomic) unsigned long long stopDetectTimestamp; // @synthesize stopDetectTimestamp=_stopDetectTimestamp;
@property(nonatomic) unsigned long long startDetectTimestamp; // @synthesize startDetectTimestamp=_startDetectTimestamp;
@property(readonly, nonatomic) NSArray *markDotInfoList; // @synthesize markDotInfoList=_markDotInfoList;
@property(nonatomic) unsigned long long longPressScanScene; // @synthesize longPressScanScene=_longPressScanScene;
@property(nonatomic) _Bool hasEnterTabOnce; // @synthesize hasEnterTabOnce=_hasEnterTabOnce;
@property(nonatomic) _Bool isScanCodesDirectOpenWhitelistLandingPage; // @synthesize isScanCodesDirectOpenWhitelistLandingPage=_isScanCodesDirectOpenWhitelistLandingPage;
@property(nonatomic) _Bool isSupportMultiCodes; // @synthesize isSupportMultiCodes=_isSupportMultiCodes;
@property(nonatomic) _Bool isUseSmallCropArea; // @synthesize isUseSmallCropArea=_isUseSmallCropArea;
@property(retain, nonatomic) ScanQRCodeResultInfo *offlineScanResult; // @synthesize offlineScanResult=_offlineScanResult;
@property(retain, nonatomic) ScanWXCodeUrlPrefixRule *m_wxCodeUrlPrefixRule; // @synthesize m_wxCodeUrlPrefixRule=_m_wxCodeUrlPrefixRule;
@property(nonatomic) __weak MMUIViewController *m_viewController; // @synthesize m_viewController=_m_viewController;
@property(retain, nonatomic) ScanQRCodeUrlPrefixRule *m_urlPrefixRule; // @synthesize m_urlPrefixRule=_m_urlPrefixRule;
@property(readonly, nonatomic) _Bool isPreScanImageFinish; // @synthesize isPreScanImageFinish=_isPreScanImageFinish;
@property(retain, nonatomic) NSString *m_weappSourceInfo; // @synthesize m_weappSourceInfo=_m_weappSourceInfo;
@property(retain, nonatomic) NSString *m_sourceInfo; // @synthesize m_sourceInfo=_m_sourceInfo;
@property(nonatomic) unsigned int m_sourceType; // @synthesize m_sourceType=_m_sourceType;
@property(nonatomic) unsigned long long expoFrom; // @synthesize expoFrom=_expoFrom;
@property(retain, nonatomic) ScanQRCodeLogicParams *logicParams; // @synthesize logicParams=_logicParams;
@property(retain, nonatomic) BizScanTabBarInfo *tabBarInfo; // @synthesize tabBarInfo=_tabBarInfo;
@property(retain, nonatomic) NSString *sourceWeAppAppid; // @synthesize sourceWeAppAppid=_sourceWeAppAppid;
@property(readonly, nonatomic) NSDictionary *tryScanExtraInfo; // @synthesize tryScanExtraInfo=_tryScanExtraInfo;
@property(retain, nonatomic) NSString *picEncKey4Stat; // @synthesize picEncKey4Stat=_picEncKey4Stat;
@property(retain, nonatomic) NSString *picUrl4Stat; // @synthesize picUrl4Stat=_picUrl4Stat;
@property(retain, nonatomic) NSMutableArray *markDotInfoListAfterFilter; // @synthesize markDotInfoListAfterFilter=_markDotInfoListAfterFilter;
@property(retain, nonatomic) NSMutableArray *markDotInfoListInScanFullImage; // @synthesize markDotInfoListInScanFullImage=_markDotInfoListInScanFullImage;
@property(nonatomic) unsigned int fromScene; // @synthesize fromScene=_fromScene;
@property(nonatomic) _Bool hasFoundCode; // @synthesize hasFoundCode=_hasFoundCode;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
- (_Bool)isCameraScanMarkDotInfoWeAppCode:(id)arg1;
- (void)reportTransferScanResult:(id)arg1 image:(id)arg2;
- (_Bool)checkScanResultXAgreementFuncAuthority:(unsigned int)arg1;
- (void)resetPreScanImageStatus;
@property(readonly, nonatomic) _Bool isPreScanImageRatioChanged;
- (void)reportScanCodeResultShowButton:(unsigned int)arg1;
- (void)resetContentViewAndStartScan;
- (void)cancelMultiCodesSendCGIReq;
- (void)onTipsIKnowButtonClicked:(id)arg1;
- (void)snapshotImageShowOnSecondThenHidden;
- (void)onTryScanGoodsButtonClicked:(id)arg1;
- (void)onSelectMarkDotInfo:(id)arg1;
- (void)onMyQRButtonClicked:(id)arg1;
- (void)restartScanCode;
- (void)onCancelButtonClicked:(id)arg1;
- (void)resetContentViewWhenStartScan;
- (void)contentViewNetDisconnect;
- (void)contentViewNetConnect;
- (void)contentViewStopScanAnimation;
- (void)contentViewStartScanAnimation;
- (void)contentViewAppearFromSwitchTab:(_Bool)arg1;
- (void)setCloseButtonBottom:(double)arg1 infoLableTop:(double)arg2;
- (_Bool)isPointInContentButtonView:(struct CGPoint)arg1;
- (void)setupTabSwitchingView:(struct CGRect)arg1;
- (void)setupContentView:(struct CGRect)arg1;
- (void)imagePickerCancel;
- (void)imagePickerOpen;
- (void)scannerStopCapture;
- (void)scannerStartCapture;
- (void)onEnterTab;
- (void)tryFetchLastAssetAndDisplay;
- (void)doScanRecentAlbumImage:(id)arg1;
- (void)p_appendResultInfoWithCurrentNetworkScene:(int)arg1 ShouldSendNotification:(_Bool)arg2;
- (void)p_appendResultInfoWithCurrentNetworkScene:(int)arg1;
- (id)getScanQRCodeSourceWebViewControllerUrl;
- (void)onScanQRCodeUrlPrefixHandlerScanFinish;
- (void)reportPrefixHandlerFailedCount;
- (void)onClickErrorAlertConfirm;
- (void)onScanQRCodeUrlPrefixHandlerWithErrorMsg:(id)arg1;
- (void)onScanQRCodeUrlPrefixHandlerEnd;
- (void)onScanQRCodeUrlPrefixHandlerStart;
- (id)onScanQRCodeUrlPrefixHandlerRequestViewController;
- (unsigned long long)getSourceType;
- (void)onPresentToOtherVC;
- (void)onNeedStartScan;
- (void)onGetWeWorkKFInfo:(id)arg1;
- (void)onGetProductInfoHandleEnd;
- (void)onGetProductInfoEnd;
- (void)onGetProductInfoStart;
- (void)onSearchContactGetResult;
- (void)onSearchContactFail;
- (void)onSearchContactHandleEnd;
- (void)onSearchContactEnd;
- (void)onSearchContactStart;
- (void)onGetA8KeyFail;
- (void)onGetA8KeyEnd;
- (void)onGetA8KeyResultType:(unsigned int)arg1;
- (void)onGetA8KeyStart;
- (id)guideInfoForWordingItemList:(id)arg1;
- (void)OnSendBarcode:(id)arg1 wordingItemList:(id)arg2 Err:(int)arg3;
- (void)onDetectQRCode:(_Bool)arg1 zoomFactor:(float)arg2;
- (unsigned int)convertEnterScene2ScanBarcodeScene;
- (unsigned int)convertMode2ScanBarcodeMode;
- (void)openBarCodeLandingPage:(id)arg1 isShowMultiCodes:(_Bool)arg2;
- (void)stopCGIHandleAnimation;
- (void)startCGIHandleAnimation:(id)arg1 ShouldShowSubtitle:(_Bool)arg2;
- (void)startCGIHandleAnimation:(id)arg1;
- (void)cancelPerformStartCGIHandleAnimation;
- (void)delayPerformStartCGIHandleAnimation;
- (void)doDetectSuccessSoundEffect;
- (_Bool)isPaymentCodeWitResultString:(id)arg1 andCodeType:(id)arg2;
- (void)openQRCodeOrWXCodeLandingPage:(id)arg1 isShowMultiCodes:(_Bool)arg2;
- (void)openLandingPageWithMarkDotInfo:(id)arg1 isShowMultiCodes:(_Bool)arg2;
- (void)calcuateYunyingType:(id)arg1 retWhitelistCount:(unsigned long long *)arg2 retBlacklistCount:(unsigned long long *)arg3 retNormalCount:(unsigned long long *)arg4;
- (_Bool)isOneWhitelistAndOtherBlacklist:(id)arg1;
- (_Bool)isOneWhitelistAndOtherNormal:(id)arg1;
- (struct CGSize)getContentViewSize;
- (void)onDetectCodesWithMarkDotInfoList:(id)arg1 isCameraScan:(_Bool)arg2;
- (_Bool)isInScanSceneAndUseCameraScan;
- (_Bool)shouldSendOfflineScanResultMessage;
- (_Bool)isSameQRCodeTypeInMult;
- (_Bool)isHasBarCode;
- (_Bool)isHasWXCode;
- (_Bool)isHasQRCode;
- (_Bool)isSameQRCodeInMult;
@property(readonly, nonatomic) _Bool isShowScanGoodsGuide;
@property(readonly, nonatomic) _Bool isHandlingMultiCodes;
@property(readonly, nonatomic) _Bool isShowErrorView;
- (void)tryScanHistoryResult:(id)arg1 type:(id)arg2 version:(unsigned int)arg3;
- (void)idKeyReportMultiCodesSelctCancelInfo;
- (void)idKeyReportMultiCodesSelectDotViewInfo:(_Bool)arg1;
- (void)idKeyReportDetectSuccessInfo:(_Bool)arg1;
- (void)reportEngineStatWithScene:(unsigned int)arg1 scanType:(long long)arg2;
- (void)reportAfterCameraViewControlelrBePoped;
- (void)reportAfterCameraViewControlelrExit:(long long)arg1;
- (_Bool)isFoundMultiQRCode;
- (_Bool)isFoundBarCode;
- (id)fileScanDebugInfoString;
- (_Bool)isPrefixMatch:(id)arg1;
- (_Bool)isMatchWXCodePrefix:(id)arg1;
- (_Bool)isMatchQRCodePrefix:(id)arg1;
- (_Bool)isFoundCodeAllowedToScanInWAHTMLWebview;
- (_Bool)isFoundRewardWXCode;
- (_Bool)isFoundFinderQRCode;
- (_Bool)isFoundPaymentQRCode;
- (_Bool)isFoundWeChatWorkQRCode;
- (_Bool)isFoundPersonalQRCode;
- (_Bool)isFoundWeWorkGroupInternalQRCode;
- (_Bool)isFoundWeChatWorkGroupQRCode;
- (_Bool)isFoundGroupChatQRCode;
- (_Bool)isFoundBrandQRCode;
- (_Bool)isFoundWeAppQRCode;
- (_Bool)isFoundWeAppCode;
- (_Bool)isFoundWeAppWXCode;
- (id)getResultType;
- (id)getResultData;
- (void)doLongPressScanReportIfNeed;
- (void)showScanResultWithMarkDotInfo:(id)arg1;
- (void)showScanResult;
- (void)reportScanMultiCodesWithOpType:(int)arg1;
- (void)filterDotViewInfoInScreenWithRect:(struct CGRect)arg1 imageSize:(struct CGSize)arg2 contentOffset:(struct CGPoint)arg3;
- (_Bool)getScanResult:(double)arg1;
- (void)doScanQRCode:(id)arg1;
- (void)getScanPicOperationQueueReady;
- (void)tryScanOnePicture:(id)arg1 imgData:(id)arg2 extraInfo:(id)arg3;
- (void)tryScanOnePicture:(id)arg1 extraInfo:(id)arg2;
- (void)tryScanOnePicture:(id)arg1;
- (void)onRotate;
- (_Bool)shouldPopFromStack;
- (_Bool)shouldShowInfoLabel;
- (_Bool)shouldDoAnimationWhenDismiss;
- (void)scanOnePicture:(id)arg1;
- (void)startLoadingCheck;
- (void)startLoadingSearch;
- (void)onMyQRCodeButtonClicked;
- (float)getPreviewScale;
- (id)getAlertText;
- (id)getLoadingText;
- (float)getModifiedInfoLabelBottomPadding;
- (_Bool)isCollisionWithAnyMarkDotView;
- (id)getInfoText;
- (struct CGRect)getNewDrawCropRect;
- (struct CGRect)getDrawCropRect;
- (double)getDeviceScreenRatio;
- (void)setCropRect;
- (_Bool)shouldPopSelfAtPresented;
- (void)stopScan;
- (void)startScan;
- (void)releaseSemaphore;
@property(readonly, nonatomic) int scanCodeType;
- (void)dealloc;
- (void)setIsFromAlbum:(_Bool)arg1;
- (void)setViewController:(id)arg1;
- (void)onCameraScannerViewDidInit;
- (id)initWithViewController:(id)arg1 logicParams:(id)arg2;
- (unsigned long long)getCurrentReportCodeType;
- (id)getReportStr:(_Bool)arg1 isFromNative:(_Bool)arg2 isClick:(_Bool)arg3;
- (void)reportAppBrandScanCodeClickIfNeedWithFromNative:(_Bool)arg1;
- (void)reportAppBrandScanCodeShow:(_Bool)arg1 isFromNative:(_Bool)arg2;
- (_Bool)isAllowCodeWithExptKey:(id)arg1 isMpScene:(_Bool)arg2 defaultValue:(long long)arg3;
- (_Bool)isCodeEnbaledInAppBrandWithFromMP:(_Bool)arg1;

// Remaining properties
@property(retain, nonatomic) CameraScanCodesContentView *contentView; // @dynamic contentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


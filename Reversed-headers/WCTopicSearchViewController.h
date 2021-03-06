//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ForwardMessageLogicDelegate-Protocol.h"
#import "MMWebSearchViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "WSWebViewPluginableProtocol-Protocol.h"

@class ForwardMessageLogicController, GetSearchShareResponse_SearchShareContext, MMPageSheetAdapter, MMTagTextField, MMWebSearchController, NSString, UIImageView, UIView, WCTopicSearchActionLogic, WCTopicSearchContext, WSWebViewPluginScheduler;
@protocol WCTopicSearchViewControllerDelegate, YYWebViewInterface;

@interface WCTopicSearchViewController : MMUIViewController <MMWebSearchViewDelegate, UITextFieldDelegate, ForwardMessageLogicDelegate, WSWebViewPluginableProtocol>
{
    _Bool _hasFirstWebviewJsbridgeReady;
    _Bool _hasViewAppear;
    _Bool _bSearchBarHidden;
    _Bool _hasEndTranscationInVC;
    MMPageSheetAdapter *_adapter;
    id <WCTopicSearchViewControllerDelegate> _delegate;
    WCTopicSearchContext *_context;
    WSWebViewPluginScheduler *_pluginScheduler;
    ForwardMessageLogicController *_forwardMessageLogicController;
    WCTopicSearchActionLogic *_shareActionLogic;
    NSString *_nsLastFormatQueryFromMultiStageForFixingWKSearchBug;
    GetSearchShareResponse_SearchShareContext *_shareContext;
    MMWebSearchController *_webSearchController;
    UIView<YYWebViewInterface> *_firstWebPageView;
    UIView *_searchHeaderBgView;
    UIView *_headerSearchTextFieldBgView;
    UIImageView *_headerSearchLeftIconView;
    MMTagTextField *_headerSearchTextField;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTagTextField *headerSearchTextField; // @synthesize headerSearchTextField=_headerSearchTextField;
@property(retain, nonatomic) UIImageView *headerSearchLeftIconView; // @synthesize headerSearchLeftIconView=_headerSearchLeftIconView;
@property(retain, nonatomic) UIView *headerSearchTextFieldBgView; // @synthesize headerSearchTextFieldBgView=_headerSearchTextFieldBgView;
@property(retain, nonatomic) UIView *searchHeaderBgView; // @synthesize searchHeaderBgView=_searchHeaderBgView;
@property(nonatomic) __weak UIView<YYWebViewInterface> *firstWebPageView; // @synthesize firstWebPageView=_firstWebPageView;
@property(retain, nonatomic) MMWebSearchController *webSearchController; // @synthesize webSearchController=_webSearchController;
@property(nonatomic) _Bool hasEndTranscationInVC; // @synthesize hasEndTranscationInVC=_hasEndTranscationInVC;
@property(retain, nonatomic) GetSearchShareResponse_SearchShareContext *shareContext; // @synthesize shareContext=_shareContext;
@property(nonatomic) _Bool bSearchBarHidden; // @synthesize bSearchBarHidden=_bSearchBarHidden;
@property(copy, nonatomic) NSString *nsLastFormatQueryFromMultiStageForFixingWKSearchBug; // @synthesize nsLastFormatQueryFromMultiStageForFixingWKSearchBug=_nsLastFormatQueryFromMultiStageForFixingWKSearchBug;
@property(nonatomic) _Bool hasViewAppear; // @synthesize hasViewAppear=_hasViewAppear;
@property(nonatomic) _Bool hasFirstWebviewJsbridgeReady; // @synthesize hasFirstWebviewJsbridgeReady=_hasFirstWebviewJsbridgeReady;
@property(retain, nonatomic) WCTopicSearchActionLogic *shareActionLogic; // @synthesize shareActionLogic=_shareActionLogic;
@property(retain, nonatomic) ForwardMessageLogicController *forwardMessageLogicController; // @synthesize forwardMessageLogicController=_forwardMessageLogicController;
@property(retain, nonatomic) WSWebViewPluginScheduler *pluginScheduler; // @synthesize pluginScheduler=_pluginScheduler;
@property(retain, nonatomic) WCTopicSearchContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <WCTopicSearchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak MMPageSheetAdapter *adapter; // @synthesize adapter=_adapter;
- (void)reportShareMsgAction:(long long)arg1;
- (void)reportAppendInputQueryActionWithSessionId:(id)arg1 requestId:(id)arg2 searchId:(id)arg3;
- (void)reportSearchVCCompleteAction;
- (void)reportSearchVCCanceledAction;
- (void)reportSearchVCAppearAction;
- (unsigned long long)localJSBizType;
- (id)getCurViewController;
- (id)getLocalJSLogic;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)onTextFieldChanged:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)doForwardMessageSended;
- (id)getCurrentViewController;
- (void)onSetSearchTagResult:(id)arg1;
- (void)onAppendSearchTagQuery:(id)arg1;
- (void)onSearchBackToPreviousView;
- (void)onConfigNavBarWithParams:(id)arg1;
- (void)onSearchInputSetText:(id)arg1 tagInfo:(id)arg2;
- (void)onJsbridgeReady:(id)arg1;
- (id)getNativeHeight;
- (id)getInputHeight;
- (id)getInputMarginLeftRight;
- (id)getInputMarginTop;
- (double)webSearchViewPosY;
- (id)leftIconButtonWithButtonType:(unsigned long long)arg1;
- (void)updateUIStatus;
- (void)makeTextFieldAutoBecomFirstResponder;
- (void)onClickClose:(id)arg1;
- (id)getSearchSessionId;
- (void)doClose;
- (struct CGSize)closeButtonSize;
- (void)viewDidTransitionToNewSize;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (_Bool)useCustomNavibar;
- (id)dragToCloseInstallScrollView;
- (void)initWebSearchViewController;
- (void)initSearchTextField;
- (id)navCloseButton;
- (void)initSearchHeaderBgView;
- (void)initSubviews;
- (void)initPlugins:(id)arg1;
- (id)initWithDelegate:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


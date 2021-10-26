//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "ForwardMessageLogicDelegate-Protocol.h"
#import "MsgImgFullScreenViewControllerDelegate-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCCommitViewResultDelegate-Protocol.h"

@class ForwardMessageLogicController, JSAPIHandleMPPageActionFavContext, JSAPIHandleMPPageActionShareFriendContext, JSAPIHandleMPPageActionShareTimelineContext, JSAPIHandleMPPageActionShowActionSheetContext, NSMutableDictionary, NSString;

@interface WebviewJSEventHandler_handleMPPageAction : WebviewJSEventHandlerBase <MsgImgFullScreenViewControllerDelegate, ForwardMessageLogicDelegate, WCActionSheetDelegate, WCCommitViewResultDelegate, PBMessageObserverDelegate>
{
    ForwardMessageLogicController *m_forwardLogicController;
    JSAPIHandleMPPageActionShareFriendContext *m_shareFriendContext;
    JSAPIHandleMPPageActionShareTimelineContext *m_shareTimelineContext;
    JSAPIHandleMPPageActionShowActionSheetContext *m_actionsheetContext;
    JSAPIHandleMPPageActionFavContext *m_favContext;
    NSMutableDictionary *m_brandMpVideoReporterDict;
    NSMutableDictionary *m_brandLandingPageReportLogicDict;
}

- (void).cxx_destruct;
- (void)handleActionSheetLongPressScene:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (id)getCurrentViewController;
- (void)OnForwardMessageException:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (void)onMsgImgWindowWillHideToMsg:(id)arg1 extraInfo:(id)arg2;
- (id)getMpLandingPageReportLogicByMsg:(id)arg1;
- (id)getBrandMpVideoReporterByVid:(id)arg1;
- (void)onShareEmbedMpVideoEventStr:(id)arg1 videoVid:(id)arg2;
- (_Bool)doShareTimeline;
- (_Bool)doShareFriend;
- (_Bool)doFavorite;
- (void)openEmbedMpVideo:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)showShareActionSheet:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3 scene:(unsigned int)arg4;
- (void)longPressEmbedMpVideo:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)directlyShareFriend:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)shareEmbedMpVideo:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)onGetFuncFlag:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)onShare:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)getLocalData:(id)arg1 MPActionEvent:(id)arg2;
- (void)setLocalData:(id)arg1 MPActionEvent:(id)arg2;
- (void)onGetIAPProductInfo:(id)arg1 MPActionEvent:(id)arg2;
- (void)onPaySuccess:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)onWriteComment:(id)arg1 MPActionEvent:(id)arg2 isSubReply:(_Bool)arg3 errMsg:(id *)arg4;
- (void)syncReadState:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)onShowToast:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)setClipboardData:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)doFavoritePage:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)hideNavShadowView;
- (void)showNavShadowView:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)pullActionSheet:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)showMenu:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (id)getEnterTime:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)reportByLeaveForMPGateway:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)opInputAccessoryView:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)wxConfig:(id)arg1 MPActionEvent:(id)arg2 errMsg:(id *)arg3;
- (void)nonchildMode_doAction:(id)arg1 paramterDic:(id)arg2 event:(id)arg3;
- (void)childMode_doAction:(id)arg1 paramters:(id)arg2 event:(id)arg3;
- (_Bool)isNonChildModeSupportAction:(id)arg1;
- (_Bool)isChildModeSupportAction:(id)arg1;
- (void)commonMode_doAction:(id)arg1 paramterDic:(id)arg2 event:(id)arg3;
- (_Bool)isCommonAction:(id)arg1;
- (void)syncHandle_callbackFailEvent:(id)arg1 withDescription:(id)arg2;
- (void)syncHandle_callbackEvent:(id)arg1 WithResult:(id)arg2;
- (void)asyncHandle_callbackFailEvent:(id)arg1 andDescription:(id)arg2;
- (void)asyncHandle_callbackEvent:(id)arg1 result:(id)arg2;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

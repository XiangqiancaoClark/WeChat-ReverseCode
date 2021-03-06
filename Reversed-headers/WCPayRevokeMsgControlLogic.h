//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "MMWebViewDelegate-Protocol.h"
#import "WCPayRecallTransferCgiDelegate-Protocol.h"

@class CMessageWrap, MMWebViewController, NSString, WCPayRecallTransferCgi;
@protocol WCPayRevokeMsgControlLogicDelegate;

@interface WCPayRevokeMsgControlLogic : WCPayControlLogic <WCPayRecallTransferCgiDelegate, MMWebViewDelegate>
{
    id <WCPayRevokeMsgControlLogicDelegate> _logicDelegate;
    CMessageWrap *_msgWrap;
    WCPayRecallTransferCgi *_recallTransferCgi;
    MMWebViewController *_webViewController;
}

+ (id)processWCPayMsgRevokeRespIfNecessary:(id)arg1 revokeTicket:(id)arg2 msgWrap:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) MMWebViewController *webViewController; // @synthesize webViewController=_webViewController;
@property(retain, nonatomic) WCPayRecallTransferCgi *recallTransferCgi; // @synthesize recallTransferCgi=_recallTransferCgi;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
@property(nonatomic) __weak id <WCPayRevokeMsgControlLogicDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
- (void)revokeCurrentMsgLocally;
- (void)webViewDidReturn:(id)arg1;
- (void)handleOpenH5WithUrl:(id)arg1;
- (void)onGetRecallTransferCgiResp:(id)arg1;
- (void)requestTransferRecall;
- (void)startLogic;
- (id)initWithDelegate:(id)arg1 msgWrap:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "WCPayMallRequestPaymentControlLogicDelegate-Protocol.h"

@class NSString, WCPayMallRequestPaymentControlLogic;

@interface WAJSEventHandler_requestMallPayment : WAJSEventHandler_BaseEvent <WCPayMallRequestPaymentControlLogicDelegate>
{
    WCPayMallRequestPaymentControlLogic *_mallRequestPaymentControlLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayMallRequestPaymentControlLogic *mallRequestPaymentControlLogic; // @synthesize mallRequestPaymentControlLogic=_mallRequestPaymentControlLogic;
- (void)mallPaymentLogicDidFailWithResult:(id)arg1;
- (void)mallPaymentLogicDidPaySucc;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


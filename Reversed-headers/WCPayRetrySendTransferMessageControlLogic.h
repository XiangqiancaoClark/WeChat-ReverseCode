//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayControlLogic.h"

@protocol WCPayRetrySendTransferMessageLogicDelegate;

@interface WCPayRetrySendTransferMessageControlLogic : WCPayControlLogic
{
    id <WCPayRetrySendTransferMessageLogicDelegate> _logicDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayRetrySendTransferMessageLogicDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
- (void)delayStopLogic;
- (void)OnRetrySendTransferMessage:(id)arg1 Error:(id)arg2;
- (void)ToRetrySendMsg;
- (void)startLogic;

@end


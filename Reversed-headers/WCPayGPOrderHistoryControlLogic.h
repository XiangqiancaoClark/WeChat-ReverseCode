//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "PBMessageObserverDelegate-Protocol.h"
#import "WCPayGPOrderHistoryControllerDelegate-Protocol.h"
#import "WCPayGPOrderStatusControlLogicDelegate-Protocol.h"

@class AAQueryListRes, NSString;

@interface WCPayGPOrderHistoryControlLogic : WCPayControlLogic <PBMessageObserverDelegate, WCPayGPOrderHistoryControllerDelegate, WCPayGPOrderStatusControlLogicDelegate>
{
    _Bool _bIsFromTop;
    unsigned long long _curHistoryScene;
    unsigned long long _reqestingHistoryScene;
    AAQueryListRes *_lastQueryListResp;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AAQueryListRes *lastQueryListResp; // @synthesize lastQueryListResp=_lastQueryListResp;
@property(nonatomic) unsigned long long reqestingHistoryScene; // @synthesize reqestingHistoryScene=_reqestingHistoryScene;
@property(nonatomic) unsigned long long curHistoryScene; // @synthesize curHistoryScene=_curHistoryScene;
@property(nonatomic) _Bool bIsFromTop; // @synthesize bIsFromTop=_bIsFromTop;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onGetGroupPayOrderHistoryError;
- (void)onGetGroupPayOrderHistoryRespBack;
- (void)onGetGroupPayOrderHistory:(id)arg1;
- (void)queryLaunchOrderHistoryWithOffset:(unsigned int)arg1;
- (void)orderStatusLogicDidStop:(_Bool)arg1;
- (void)orderHasBeenClose:(id)arg1;
- (void)onOrderHistoryViewControllerChangeScene:(unsigned long long)arg1;
- (void)onOrderHistoryViewControllerUserSelectRecord:(id)arg1;
- (void)loadMoreOrderHistoryWithOffset:(unsigned int)arg1;
- (void)onOrderHistoryViewControllerCancel;
- (void)stopLogic;
- (void)startLogic;
- (id)initWithData:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


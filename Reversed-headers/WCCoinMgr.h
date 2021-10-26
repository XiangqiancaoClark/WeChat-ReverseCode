//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"

@class NSMutableArray, NSString;

@interface WCCoinMgr : MMUserService <MMServiceProtocol>
{
    NSMutableArray *_logics;
    NSMutableArray *_products;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *products; // @synthesize products=_products;
@property(retain, nonatomic) NSMutableArray *logics; // @synthesize logics=_logics;
- (void)removeLogic:(id)arg1;
- (void)reprovide:(id)arg1;
- (void)addProductInfo:(id)arg1;
- (id)getProductInfo:(id)arg1;
- (void)preFetchProducts;
- (void)preload;
- (void)startEncashLogic:(id)arg1 parameter:(id)arg2;
- (void)getWecoinBalance:(CDUnknownBlockType)arg1;
- (void)startConsumeLogic:(id)arg1 parameter:(id)arg2;
- (void)startBuyCoinLogic:(id)arg1 parameter:(id)arg2;
- (_Bool)openWCCoinEntrance;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

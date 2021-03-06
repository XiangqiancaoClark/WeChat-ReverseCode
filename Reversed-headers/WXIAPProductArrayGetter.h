//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "SKProductsRequestDelegate-Protocol.h"

@class NSArray, NSString, SKProductsRequest;

@interface WXIAPProductArrayGetter : MMObject <SKProductsRequestDelegate>
{
    NSArray *_productIds;
    unsigned long long _scene;
    unsigned long long _startTime;
    CDUnknownBlockType _completion;
    WXIAPProductArrayGetter *_selfRetain;
    SKProductsRequest *_productsRequest;
}

+ (id)errorWithCode:(long long)arg1 message:(id)arg2;
+ (void)fetchProductWithProductIds:(id)arg1 scene:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) SKProductsRequest *productsRequest; // @synthesize productsRequest=_productsRequest;
@property(retain, nonatomic) WXIAPProductArrayGetter *selfRetain; // @synthesize selfRetain=_selfRetain;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSArray *productIds; // @synthesize productIds=_productIds;
- (void)reportGetProductKVWithResult:(_Bool)arg1 productInfo:(id)arg2 costTime:(unsigned long long)arg3 error:(id)arg4;
- (void)reportGetProductIDKey:(unsigned int)arg1;
- (void)reportFailDetailErrorWithError:(id)arg1;
- (void)reportCallBackResult:(_Bool)arg1 productInfos:(id)arg2 costTime:(unsigned long long)arg3 error:(id)arg4;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)asyncReleaseSelf;
- (void)callbackComplete:(_Bool)arg1 productInfos:(id)arg2 costTime:(unsigned long long)arg3 error:(id)arg4;
- (void)callbackCompleteFailWithError:(id)arg1 costTime:(unsigned long long)arg2;
- (void)start;
- (id)initWithProductIds:(id)arg1 scene:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


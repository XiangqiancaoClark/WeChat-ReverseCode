//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WSWebViewPluginBase.h"

@interface WSWebViewPlugin_JSBridge : WSWebViewPluginBase
{
    _Bool _bFirstWebviewJsbridgeReady;
    _Bool _bNeedRetryFetchRecmdDataToH5;
}

@property(nonatomic) _Bool bNeedRetryFetchRecmdDataToH5; // @synthesize bNeedRetryFetchRecmdDataToH5=_bNeedRetryFetchRecmdDataToH5;
@property(nonatomic) _Bool bFirstWebviewJsbridgeReady; // @synthesize bFirstWebviewJsbridgeReady=_bFirstWebviewJsbridgeReady;
- (void)tryFetchRecmdDataToH5;
- (void)sendVertSearchEntriesDataEvent;
- (void)handleEvent:(id)arg1 userInfo:(id)arg2;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JSEventHandler-Protocol.h"
#import "WebviewJSEventHandlerBaseDelegate-Protocol.h"

@class GameCenterJsApiFacade, NSMutableSet, NSString;
@protocol GameCenterJSEventLogicHandlerDelegate;

@interface GameCenterJSEventLogicHandler : NSObject <JSEventHandler, WebviewJSEventHandlerBaseDelegate>
{
    GameCenterJsApiFacade *_jsapiFacade;
    id <GameCenterJSEventLogicHandlerDelegate> _callDelegate;
    NSMutableSet *_jsEventSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *jsEventSet; // @synthesize jsEventSet=_jsEventSet;
@property(nonatomic) __weak id <GameCenterJSEventLogicHandlerDelegate> callDelegate; // @synthesize callDelegate=_callDelegate;
- (id)webviewController;
- (id)GetCurrentWebviewViewController;
- (void)onEndEvent:(id)arg1 withResult:(id)arg2;
- (id)jsEventWithFunction:(id)arg1 params:(id)arg2 callBackID:(id)arg3 eventInvokeContext:(id)arg4;
- (void)jsapiCallFromJSService:(id)arg1 params:(id)arg2 callbackId:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


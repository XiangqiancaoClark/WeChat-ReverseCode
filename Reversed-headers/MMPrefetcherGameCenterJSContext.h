//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "GameCenterJSEventLogicHandlerDelegate-Protocol.h"
#import "WCMainWindowExt-Protocol.h"

@class GameCenterJSEventLogicHandler, JSContext, JSVirtualMachine, NSMutableDictionary, NSString, NSThread;

@interface MMPrefetcherGameCenterJSContext : MMObject <GameCenterJSEventLogicHandlerDelegate, WCMainWindowExt>
{
    JSContext *_jsContext;
    JSVirtualMachine *_jsVirtualMachine;
    NSMutableDictionary *_timerObjs;
    NSThread *_thread;
    GameCenterJSEventLogicHandler *_jsEventHandler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GameCenterJSEventLogicHandler *jsEventHandler; // @synthesize jsEventHandler=_jsEventHandler;
@property(retain) NSThread *thread; // @synthesize thread=_thread;
@property(retain) NSMutableDictionary *timerObjs; // @synthesize timerObjs=_timerObjs;
@property(retain, nonatomic) JSVirtualMachine *jsVirtualMachine; // @synthesize jsVirtualMachine=_jsVirtualMachine;
@property(retain, nonatomic) JSContext *jsContext; // @synthesize jsContext=_jsContext;
- (void)mm_traitCollectionDidChange:(id)arg1;
- (void)processCallbackFromNative:(id)arg1 callbackId:(id)arg2;
- (void)dealloc;
- (void)releaseJsContext;
- (void)stopThread;
- (void)destroy;
- (id)getNetType;
- (void)changeState:(id)arg1;
- (void)evaluate:(id)arg1;
- (void)evaluateScript:(id)arg1;
- (void)injectPublicLib;
- (void)injectJsbridge;
- (void)injectSystemInfo;
- (void)onTimer:(id)arg1;
- (unsigned int)addTimer:(unsigned int)arg1 withTime:(float)arg2 isRepeat:(_Bool)arg3;
- (void)setupTimerHandler:(id)arg1;
- (void)setupJsApiInvoke:(id)arg1;
- (void)attachNativeMethod;
- (void)initJsApi;
- (void)setupJSErrorHandler;
- (void)runThread:(id)arg1;
- (void)startServerThread;
- (id)initWithJSVM:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

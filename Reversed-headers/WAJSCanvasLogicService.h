//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSCanvasBaseService.h"

@class JSVirtualMachine, MMWebJSContext, MMWebJsBasePkgInfo, NSMutableDictionary, NSString, NSThread;
@protocol WAJSCanvasLogicServiceDelegate;

@interface WAJSCanvasLogicService : WAJSCanvasBaseService
{
    _Bool _isjsVMReady;
    unsigned int _subContextId;
    NSString *_sessionId;
    MMWebJsBasePkgInfo *_basePkg;
    JSVirtualMachine *_jsVM;
    MMWebJSContext *_mainJSContext;
    NSMutableDictionary *_subJSContexts;
    NSThread *_thread;
}

- (void).cxx_destruct;
@property _Bool isjsVMReady; // @synthesize isjsVMReady=_isjsVMReady;
@property(retain) NSThread *thread; // @synthesize thread=_thread;
@property(retain) NSMutableDictionary *subJSContexts; // @synthesize subJSContexts=_subJSContexts;
@property unsigned int subContextId; // @synthesize subContextId=_subContextId;
@property(retain) MMWebJSContext *mainJSContext; // @synthesize mainJSContext=_mainJSContext;
@property(retain) JSVirtualMachine *jsVM; // @synthesize jsVM=_jsVM;
@property(retain) MMWebJsBasePkgInfo *basePkg; // @synthesize basePkg=_basePkg;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void)setupWeixinWorker;
- (id)subThread_getAppPkgFromDelegate:(id)arg1;
- (void)setupSubContext;
- (void)setupVMGlobal:(id)arg1;
- (void)weAppJsApiCallbackWithScript:(id)arg1;
- (void)__handleRenderServicePostMsg:(id)arg1;
- (void)handleRenderServicePostMsg:(id)arg1;
- (void)__evaluateJavascript:(id)arg1;
- (void)subThread_evaluateJavascript:(id)arg1;
- (unsigned int)genSubContextId;
- (void)initJSVM;
- (void)releaseJSVM;
- (void)subThread_StopService;
- (void)stopService;
- (void)runThread:(id)arg1;
- (void)startServerThread;
- (id)initWithBasePkg:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <WAJSCanvasLogicServiceDelegate> delegate;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MBJITLoadDelegate-Protocol.h"
#import "MBJITRuntimeDelegate-Protocol.h"
#import "MBRuntimeDelegate-Protocol.h"

@class MBJITRuntimeView, NSMutableDictionary, NSString;
@protocol MagicBrushDelegate;

@interface MBJITHandler : NSObject <MBJITLoadDelegate, MBJITRuntimeDelegate, MBRuntimeDelegate>
{
    struct MBNativeBuffer _nativeBuffer;
    id <MagicBrushDelegate> _delegate;
    MBJITRuntimeView *_jitRuntime;
    NSString *_baseURL;
    NSMutableDictionary *_onEventCallbacksDict;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *onEventCallbacksDict; // @synthesize onEventCallbacksDict=_onEventCallbacksDict;
@property(retain, nonatomic) NSString *baseURL; // @synthesize baseURL=_baseURL;
@property(retain, nonatomic) MBJITRuntimeView *jitRuntime; // @synthesize jitRuntime=_jitRuntime;
@property(nonatomic) __weak id <MagicBrushDelegate> delegate; // @synthesize delegate=_delegate;
- (id)createJSObject:(id)arg1;
- (void)onEventFinish:(id)arg1 param:(id)arg2;
- (void)endWithHandler:(id)arg1 result:(id)arg2 callback:(id)arg3;
- (void)onTerminate;
- (void)onLoad:(id)arg1;
- (void)_finishRequest:(id)arg1 Data:(id)arg2 FileName:(id)arg3 Mime:(id)arg4;
- (id)getBrotiData:(id)arg1;
- (id)packBase64:(id)arg1;
- (id)pack:(id)arg1;
- (void)onRequest:(id)arg1 data:(id)arg2;
- (id)invokeHandler:(id)arg1 eventId:(int)arg2 param:(id)arg3;
- (void)processInvokeHandler:(const char **)arg1;
- (unsigned int)processArrayBuffer:(id)arg1;
- (void)createNativeBuffer:(const char **)arg1;
- (void)processEventHandler:(const char *)arg1;
- (id)onBatchInvokeMessage:(id)arg1;
- (id)onMessage:(id)arg1 message:(id)arg2;
- (void)_evaluateScript:(id)arg1;
- (void)evaluateScript:(id)arg1;
- (id)createRuntimeView:(struct CGRect)arg1 config:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAWebViewPlugin_embedView.h"

#import "NativeRenderDelegate-Protocol.h"
#import "WAEJCanvasViewDelegate-Protocol.h"
#import "WAOpenGLViewDelegate-Protocol.h"

@class NSMutableDictionary, NSNumber, NSString, WAJSContextPlugin_NativeRender, WAJSCoreService;

@interface WAWebViewPlugin_WebGLCanvas : WAWebViewPlugin_embedView <WAOpenGLViewDelegate, NativeRenderDelegate, WAEJCanvasViewDelegate>
{
    WAJSContextPlugin_NativeRender *_nativeRender;
    NSNumber *_oldScrollEnabled;
    NSMutableDictionary *_mapCanvasViews;
    WAJSCoreService *_service;
}

+ (id)getBundle;
- (void).cxx_destruct;
@property(nonatomic) __weak WAJSCoreService *service; // @synthesize service=_service;
@property(retain, nonatomic) NSMutableDictionary *mapCanvasViews; // @synthesize mapCanvasViews=_mapCanvasViews;
- (void)onLongPress:(id)arg1;
- (void)onTouchCancel:(id)arg1;
- (void)onTouchEnd:(id)arg1;
- (void)onTouchDown:(id)arg1;
- (void)render;
- (id)getCommandBufferScript;
- (id)createImageWithSvgData:(id)arg1 resize:(struct CGSize)arg2 scale:(double)arg3;
- (id)getFileData:(id)arg1;
- (_Bool)isFileExist:(id)arg1;
- (void)setCaptureDelegate:(unsigned int)arg1 offScreenCanvasId:(unsigned int)arg2 mark:(unsigned int)arg3 options:(id)arg4 delegate:(id)arg5;
- (void)removeCanvas:(unsigned int)arg1;
- (void)insertCanvas:(struct CGRect)arg1 canvasId:(unsigned int)arg2 parentId:(unsigned int)arg3 ZIndex:(long long)arg4 block:(CDUnknownBlockType)arg5;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


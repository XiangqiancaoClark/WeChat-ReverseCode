//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol WXFileLoaderDelegate;

@interface WasmAdaptor : NSObject
{
    struct OpaqueJSContext *_jscontext;
    struct WasmScriptState *_wasmScriptState;
    id <WXFileLoaderDelegate> _fileDelegate;
}

+ (id)getBrotiData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WXFileLoaderDelegate> fileDelegate; // @synthesize fileDelegate=_fileDelegate;
- (void)dealloc;
- (void)releaseContext;
- (id)getFileData:(id)arg1;
- (void)setWebGLWasmAdaptor:(struct IWasmAdaptor *)arg1;
- (void)setLogDelegate:(id)arg1;
- (id)initWASMWithJSContext:(struct OpaqueJSContext *)arg1 parent:(struct OpaqueJSValue *)arg2;

@end


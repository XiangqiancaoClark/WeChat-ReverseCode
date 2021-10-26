//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WALiteRuntime.h"

#import "MagicBrushDelegate-Protocol.h"

@class MBRuntime, NSString, WALitePackage, WKWebView;
@protocol WALiteBackOffDelegate;

@interface WALiteJITRuntime : WALiteRuntime <MagicBrushDelegate>
{
    struct CGRect frame;
    WALitePackage *walPkgImpl;
    MBRuntime *_mbRuntime;
    WKWebView *_runtimeView;
    id <WALiteBackOffDelegate> _backupDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WALiteBackOffDelegate> backupDelegate; // @synthesize backupDelegate=_backupDelegate;
@property(retain, nonatomic) WKWebView *runtimeView; // @synthesize runtimeView=_runtimeView;
@property(retain, nonatomic) MBRuntime *mbRuntime; // @synthesize mbRuntime=_mbRuntime;
- (void)logToConsole:(id)arg1;
- (void)onTerminated:(id)arg1;
- (id)getFileData:(id)arg1;
- (void)onError:(id)arg1;
- (void)clearDelegate;
- (void)setupDebugWALitePackageByAppId:(id)arg1 andDevUiv:(unsigned int)arg2;
- (void)setupReleaseWALitePackageByAppId:(id)arg1 andVersion:(unsigned int)arg2;
- (void)setupHardcodeWALitePackageByAppId:(id)arg1 hardcodeVersion:(unsigned int)arg2;
- (id)setupJITRuntime;
- (void)loadGame;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 isDebug:(_Bool)arg2 backupDelegate:(id)arg3;
- (id)getScreenView;
- (void)dispatchJSBridgeEvent:(id)arg1 eventDict:(id)arg2;
- (void)evaluate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

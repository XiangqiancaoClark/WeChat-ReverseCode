//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMEasterEggBaseActivityInfo.h"

#import "MMUIViewControllerExt-Protocol.h"
#import "MMWebViewDelegate-Protocol.h"

@class MMWebViewController, NSString;
@protocol MMEasterEggActivity;

@interface MMEasterEggGameActivityInfo : MMEasterEggBaseActivityInfo <MMWebViewDelegate, MMUIViewControllerExt>
{
    _Bool _needPreload;
    _Bool _isWebviewCached;
    NSString *_URLString;
    MMWebViewController *_webviewController;
    id <MMEasterEggActivity> _curActivity;
    double _delaySeconds;
}

+ (id)activityNodeName;
- (void).cxx_destruct;
@property(nonatomic) _Bool isWebviewCached; // @synthesize isWebviewCached=_isWebviewCached;
@property(nonatomic) double delaySeconds; // @synthesize delaySeconds=_delaySeconds;
@property(retain, nonatomic) id <MMEasterEggActivity> curActivity; // @synthesize curActivity=_curActivity;
@property(retain, nonatomic) MMWebViewController *webviewController; // @synthesize webviewController=_webviewController;
@property(nonatomic) _Bool needPreload; // @synthesize needPreload=_needPreload;
@property(retain, nonatomic) NSString *URLString; // @synthesize URLString=_URLString;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)afterDelay;
- (void)onEasterEggEnd;
- (void)releaseWebView;
- (void)webViewDidReturn:(id)arg1;
- (void)evaluateJavaScriptFromString:(id)arg1;
- (void)showWebControllerOnViewController:(id)arg1 activity:(id)arg2;
- (void)initializeWebView:(id)arg1 preload:(_Bool)arg2;
- (void)MMUIViewControllerDidBeRemoved:(id)arg1;
- (void)easterEggDidStart:(id)arg1;
- (_Bool)isValid;
- (void)tryParseURLStringFromActivityNode:(struct XmlReaderNode_t *)arg1;
- (id)initWithActivityNode:(struct XmlReaderNode_t *)arg1 directoryPath:(id)arg2 clientEggVersion:(unsigned long long)arg3;
- (id)accessibilityLabel;
- (Class)activityClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


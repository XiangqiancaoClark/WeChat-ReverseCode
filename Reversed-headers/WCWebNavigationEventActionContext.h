//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class MMWebViewController, NSDictionary, WCWebNavigationEventsStore, WebViewJSLogicImpl;

@interface WCWebNavigationEventActionContext : MMObject
{
    WebViewJSLogicImpl *_webJsImpl;
    WCWebNavigationEventsStore *_webEventsStore;
    MMWebViewController *_webViewController;
    NSDictionary *_jsInitInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *jsInitInfo; // @synthesize jsInitInfo=_jsInitInfo;
@property(nonatomic) __weak MMWebViewController *webViewController; // @synthesize webViewController=_webViewController;
@property(nonatomic) __weak WCWebNavigationEventsStore *webEventsStore; // @synthesize webEventsStore=_webEventsStore;
@property(nonatomic) __weak WebViewJSLogicImpl *webJsImpl; // @synthesize webJsImpl=_webJsImpl;

@end


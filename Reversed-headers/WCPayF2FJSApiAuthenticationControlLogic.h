//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "WCPayF2FJSAPIAuthCgiDelegate-Protocol.h"

@class JSEvent, NSString, WCPayF2FJSAPIAuthenCgi;

@interface WCPayF2FJSApiAuthenticationControlLogic : WCPayControlLogic <WCPayF2FJSAPIAuthCgiDelegate>
{
    JSEvent *_jsEvent;
    WCPayF2FJSAPIAuthenCgi *_jsapiAuthenCgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayF2FJSAPIAuthenCgi *jsapiAuthenCgi; // @synthesize jsapiAuthenCgi=_jsapiAuthenCgi;
@property(retain, nonatomic) JSEvent *jsEvent; // @synthesize jsEvent=_jsEvent;
- (void)onGetWCPayF2FJSAPIAuthenCgiResp:(id)arg1;
- (void)startLogic;
- (id)initWithJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


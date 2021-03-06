//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "SessionSelectControllerDelegate-Protocol.h"

@class JSEvent, NSString;

@interface WCPaySendC2CMessageJSApiLogicControl : WCPayControlLogic <SessionSelectControllerDelegate>
{
    JSEvent *m_jsEvent;
    NSString *m_setInUrl;
    NSString *m_toUser;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_toUser; // @synthesize m_toUser;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSendC2CSecureMessageResponseStatus:(id)arg1 Error:(id)arg2;
- (void)OnCheckWCPayJsApiRequest:(id)arg1 Error:(id)arg2;
- (_Bool)DoSendC2CSecureMessageTo:(id)arg1;
- (_Bool)PickUserToSendSecureMessage;
- (_Bool)OnDoSendC2CSecureMessage;
- (_Bool)OnDoCheckWCPayJsApi;
- (void)stopLogic;
- (void)startLogic;
- (id)initWithJSEvent:(id)arg1 SetInUrl:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


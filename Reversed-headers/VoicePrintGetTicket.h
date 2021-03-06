//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "IRsaCertMgrExt-Protocol.h"

@class NSString;
@protocol VoicePrintGetTicketDelegate;

@interface VoicePrintGetTicket : MMObject <IRsaCertMgrExt>
{
    unsigned int idcRedirectCount;
    NSString *username;
    id <VoicePrintGetTicketDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <VoicePrintGetTicketDelegate> m_delegate; // @synthesize m_delegate;
- (void)OnGetVoicePrintLoginTicketAgain:(id)arg1;
- (void)RSAProtobufMessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)getVoicePrintTicketRsa:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


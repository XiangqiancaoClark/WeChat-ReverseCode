//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "IRsaCertMgrExt-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSString;
@protocol VoicePrintGetResourceDelegate;

@interface VPGetResourceCgi : MMObject <PBMessageObserverDelegate, IRsaCertMgrExt>
{
    unsigned int _curScene;
    id <VoicePrintGetResourceDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <VoicePrintGetResourceDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)RSAProtobufMessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnResult:(id)arg1 withScene:(unsigned int)arg2;
- (void)OnError:(int)arg1;
- (void)getResourceRsaWithTicket:(id)arg1;
- (void)getResourceWithScence:(unsigned int)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


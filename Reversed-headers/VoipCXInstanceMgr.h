//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMRootService.h"

#import "MMServiceProtocol-Protocol.h"

@class CXCallController, CXProvider, NSString;

@interface VoipCXInstanceMgr : MMRootService <MMServiceProtocol>
{
    CXCallController *_cxController;
    CXProvider *_provider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CXProvider *provider; // @synthesize provider=_provider;
@property(readonly, nonatomic) CXCallController *cxController; // @synthesize cxController=_cxController;
- (void)renewRingToneSoundForCaller:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableDictionary;

@interface WCMusicSearchWorker : NSObject <PBMessageObserverDelegate>
{
    NSMutableDictionary *_completionDictionary;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *completionDictionary; // @synthesize completionDictionary=_completionDictionary;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)checkCGIBaseRespSuccess:(id)arg1 error:(id *)arg2;
- (void)handleCgiReturn:(id)arg1 eventId:(unsigned int)arg2 error:(id)arg3;
- (unsigned int)sendCgiEvent:(unsigned int)arg1 pbReq:(id)arg2 bLongPolling:(_Bool)arg3 userData:(id)arg4;
- (unsigned int)sendCgiEvent:(unsigned int)arg1 pbReq:(id)arg2 completion:(id)arg3;
- (void)cancelRequestWithEventId:(unsigned int)arg1;
- (unsigned int)sendCgiWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)generateRequestWithContext:(id)arg1;
- (unsigned int)searchWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMLiveLikeDataMgr.h"

#import "MMGroupLiveMgrExt-Protocol.h"

@class NSString;

@interface MMGroupLiveLikeDataMgr : MMLiveLikeDataMgr <MMGroupLiveMgrExt>
{
}

- (void)onLiveLikeResult:(id)arg1 liveId:(unsigned long long)arg2 andRoomId:(id)arg3;
- (void)updateLikeMessage:(id)arg1 likeCount:(unsigned long long)arg2 liveId:(unsigned long long)arg3 andRoomId:(id)arg4;
- (_Bool)applyLikeWithPostTask:(id)arg1;
- (void)unRegisterExtension;
- (void)registerExtension;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


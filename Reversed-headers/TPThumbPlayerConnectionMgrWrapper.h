//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TPThumbPlayerConnectionMgrWrapper : NSObject
{
    struct ITPPlayerConnectionMgr *_connectionMgr;
}

@property(nonatomic) struct ITPPlayerConnectionMgr *connectionMgr; // @synthesize connectionMgr=_connectionMgr;
- (void)deactiveAllConnections;
- (void)deactiveConnection:(int)arg1;
- (int)activeAllConnections;
- (int)activeConnection:(int)arg1;
- (void)removeConnection:(int)arg1;
- (int)addConnectionWithPlayerAddr1:(long long)arg1 actions1:(struct TPPlayerConnectionNode)arg2 playerAddr2:(long long)arg3 actions2:(struct TPPlayerConnectionNode)arg4;
- (int)addConnectionWithPlayer1:(id)arg1 actions1:(struct TPPlayerConnectionNode)arg2 player2:(id)arg3 actions2:(struct TPPlayerConnectionNode)arg4;
- (void)dealloc;
- (id)init;

@end


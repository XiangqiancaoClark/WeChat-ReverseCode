//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class GameLiveJumpInfo_FinderLiveFineGameInfo, GameLiveJumpInfo_FinderLiveWxaGameInfo, NSString;

@interface GameLiveJumpInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) GameLiveJumpInfo_FinderLiveFineGameInfo *fineGameInfo; // @dynamic fineGameInfo;
@property(retain, nonatomic) NSString *gameName; // @dynamic gameName;
@property(nonatomic) unsigned int gameType; // @dynamic gameType;
@property(nonatomic) _Bool isShowEntrance; // @dynamic isShowEntrance;
@property(retain, nonatomic) NSString *reportInfo; // @dynamic reportInfo;
@property(nonatomic) unsigned int timestamp; // @dynamic timestamp;
@property(retain, nonatomic) GameLiveJumpInfo_FinderLiveWxaGameInfo *wxaGameInfo; // @dynamic wxaGameInfo;

@end


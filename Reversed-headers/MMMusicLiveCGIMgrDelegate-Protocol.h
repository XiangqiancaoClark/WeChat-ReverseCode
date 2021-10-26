//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMMusicLiveBaseMsg, MMMusicMVModel, NSArray, NSString;

@protocol MMMusicLiveCGIMgrDelegate <NSObject>

@optional
- (void)onMusicLiveMVLikeWithMVModel:(MMMusicMVModel *)arg1 isSuccess:(_Bool)arg2;
- (void)onMusicLiveGetMVRecommentList:(NSArray *)arg1 continueFlag:(_Bool)arg2 requestId:(NSString *)arg3;
- (void)onMusicLiveGetSongOnlineWording:(NSString *)arg1 songId:(NSString *)arg2;
- (void)onMusicLiveHeartBeatRespWithOnlineCount:(unsigned int)arg1 songId:(NSString *)arg2 bSuccess:(_Bool)arg3;
- (void)onMusicLiveJoinWithSongId:(NSString *)arg1 isSuccess:(_Bool)arg2;
- (void)onMusicLivePostMsgIsSuccess:(_Bool)arg1 newMsg:(MMMusicLiveBaseMsg *)arg2 songId:(NSString *)arg3 errMsg:(NSString *)arg4;
- (void)onMusicLiveGetHotMsgList:(NSArray *)arg1 songId:(NSString *)arg2;
@end

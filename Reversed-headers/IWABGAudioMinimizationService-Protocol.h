//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WABGAudioMinimizationItemInfo;

@protocol IWABGAudioMinimizationService <NSObject>
+ (_Bool)hasVoipBGAudio;
+ (void)stopBGAudio;
+ (_Bool)dismiss:(NSString *)arg1;
+ (_Bool)show:(NSString *)arg1;
+ (_Bool)updateState:(long long)arg1 forHost:(NSString *)arg2;
+ (void)clearBGAudioInfoForHost:(NSString *)arg1;
+ (WABGAudioMinimizationItemInfo *)bgAudioInfo:(NSString *)arg1;
+ (void)updateBGAudioInfo:(WABGAudioMinimizationItemInfo *)arg1 forHost:(NSString *)arg2;
+ (_Bool)isBGAudioEnabled;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseAudioPlayer.h"

@interface SilkAudioPlayer : BaseAudioPlayer
{
    _Bool m_isNeedRestartMusic;
    _Bool m_isNeedRestartAudioTalk;
    double m_smapleRate;
    _Bool _isNeedUnmuteLivePlay;
    _Bool _isNeedUnmuteLongVideoPlay;
    unsigned long long _launchTime;
    unsigned long long _launchCost;
    unsigned long long _receiveHandleOutputCost;
}

@property(nonatomic) unsigned long long receiveHandleOutputCost; // @synthesize receiveHandleOutputCost=_receiveHandleOutputCost;
@property(nonatomic) unsigned long long launchCost; // @synthesize launchCost=_launchCost;
@property(nonatomic) unsigned long long launchTime; // @synthesize launchTime=_launchTime;
@property(nonatomic) _Bool isNeedUnmuteLongVideoPlay; // @synthesize isNeedUnmuteLongVideoPlay=_isNeedUnmuteLongVideoPlay;
@property(nonatomic) _Bool isNeedUnmuteLivePlay; // @synthesize isNeedUnmuteLivePlay=_isNeedUnmuteLivePlay;
@property(nonatomic) _Bool m_isNeedRestartMusic; // @synthesize m_isNeedRestartMusic;
@property(nonatomic) _Bool m_isNeedRestartAudioTalk; // @synthesize m_isNeedRestartAudioTalk;
- (_Bool)ifSilkAudioPlayerAgcOn;
- (void)prepareBuffers;
- (void)setSmapleRate:(double)arg1;
- (void)setDataFormat;
- (void)openSilkFile:(id)arg1;
- (void)onReceiveHandleOutput;
- (void)autostop;
- (void)stop;
- (int)getCurrentTimeMs;
- (void)replay;
- (void)setProgress:(unsigned int)arg1;
- (void)playFromOffsetms:(unsigned int)arg1;
- (void)play;
- (_Bool)preparePlayWithSilkFile:(id)arg1;
- (_Bool)preparePlayNotNotify;
- (void)setDelegate:(id)arg1;
- (id)init;

@end


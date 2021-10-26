//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ITPAVPlayer-Protocol.h"
#import "TPAVPlayerDelegate-Protocol.h"
#import "TPPlayerVideoPrivateDelegate-Protocol.h"
#import "TPSlicePlayerCacheDelegate-Protocol.h"

@class NSError, NSString, NSTimer, TPPlayerLayerViewContainer, TPPlayerVideo, TPSlicePlayer;

@interface TPClipPlayer : NSObject <TPAVPlayerDelegate, TPSlicePlayerCacheDelegate, TPPlayerVideoPrivateDelegate, ITPAVPlayer>
{
    _Bool isCaching;
    _Bool enableAccurateStartPos;
    _Bool enableVideoFrameOutput;
    _Bool enableLoopback;
    _Bool enableSnapshot;
    _Bool enableResourceLoader;
    _Bool _allowsExternalPlayback;
    _Bool _usesExternalPlaybackWhileExternalScreenIsActive;
    _Bool _isResuming;
    _Bool _shouldNotifyClipStartWhenPlaying;
    float _volume;
    float _rate;
    int playerID;
    TPPlayerVideo *_currentVideo;
    TPPlayerLayerViewContainer *_view;
    id _delegate;
    long long duration;
    long long currentTime;
    double currentTimeBase;
    long long bufferedDuration;
    long long playbackState;
    NSError *error;
    long long loopbackStartPos;
    long long loopbackSkipEndPos;
    NSString *_videoGravity;
    NSString *_externalPlaybackVideoGravity;
    long long _currentClipIndex;
    long long _preferredForwardBufferDurationMs;
    TPSlicePlayer *_player;
    TPPlayerVideo *_video;
    NSTimer *_playerSwitchTimer;
    long long _seekSource;
    long long _seekingTime;
    CDUnknownBlockType _playerTimeObserverBlock;
    struct CGSize _presentationSize;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldNotifyClipStartWhenPlaying; // @synthesize shouldNotifyClipStartWhenPlaying=_shouldNotifyClipStartWhenPlaying;
@property(nonatomic) _Bool isResuming; // @synthesize isResuming=_isResuming;
@property(copy, nonatomic) CDUnknownBlockType playerTimeObserverBlock; // @synthesize playerTimeObserverBlock=_playerTimeObserverBlock;
@property(nonatomic) struct CGSize presentationSize; // @synthesize presentationSize=_presentationSize;
@property(nonatomic) long long seekingTime; // @synthesize seekingTime=_seekingTime;
@property(nonatomic) long long seekSource; // @synthesize seekSource=_seekSource;
@property(retain, nonatomic) NSTimer *playerSwitchTimer; // @synthesize playerSwitchTimer=_playerSwitchTimer;
@property(retain, nonatomic) TPPlayerVideo *video; // @synthesize video=_video;
@property(retain, nonatomic) TPSlicePlayer *player; // @synthesize player=_player;
@property(nonatomic) long long preferredForwardBufferDurationMs; // @synthesize preferredForwardBufferDurationMs=_preferredForwardBufferDurationMs;
@property(nonatomic) long long currentClipIndex; // @synthesize currentClipIndex=_currentClipIndex;
@property(nonatomic) _Bool usesExternalPlaybackWhileExternalScreenIsActive; // @synthesize usesExternalPlaybackWhileExternalScreenIsActive=_usesExternalPlaybackWhileExternalScreenIsActive;
@property(copy, nonatomic) NSString *externalPlaybackVideoGravity; // @synthesize externalPlaybackVideoGravity=_externalPlaybackVideoGravity;
@property(nonatomic) _Bool allowsExternalPlayback; // @synthesize allowsExternalPlayback=_allowsExternalPlayback;
@property(copy, nonatomic) NSString *videoGravity; // @synthesize videoGravity=_videoGravity;
@property(nonatomic) _Bool enableResourceLoader; // @synthesize enableResourceLoader;
@property(nonatomic) _Bool enableSnapshot; // @synthesize enableSnapshot;
@property(nonatomic) long long loopbackSkipEndPos; // @synthesize loopbackSkipEndPos;
@property(nonatomic) long long loopbackStartPos; // @synthesize loopbackStartPos;
@property(nonatomic) _Bool enableLoopback; // @synthesize enableLoopback;
@property(nonatomic) _Bool enableVideoFrameOutput; // @synthesize enableVideoFrameOutput;
@property(nonatomic) _Bool enableAccurateStartPos; // @synthesize enableAccurateStartPos;
@property(nonatomic) int playerID; // @synthesize playerID;
@property(copy, nonatomic) NSError *error; // @synthesize error;
@property long long playbackState; // @synthesize playbackState;
@property(nonatomic) float rate; // @synthesize rate=_rate;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) long long bufferedDuration; // @synthesize bufferedDuration;
@property(nonatomic) _Bool isCaching; // @synthesize isCaching;
@property(nonatomic) double currentTimeBase; // @synthesize currentTimeBase;
@property(nonatomic) long long currentTime; // @synthesize currentTime;
@property(nonatomic) long long duration; // @synthesize duration;
@property __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TPPlayerLayerViewContainer *view; // @synthesize view=_view;
@property(retain, nonatomic) TPPlayerVideo *currentVideo; // @synthesize currentVideo=_currentVideo;
- (void)skipEndPosDidChange:(id)arg1;
- (void)startPosDidChange:(id)arg1;
- (void)slicePlayer:(id)arg1 changedToNewPlayer:(id)arg2;
- (void)player:(id)arg1 didFailedToPlayToEndWithError:(id)arg2;
- (void)player:(id)arg1 didDeselectedTrackAtIndex:(unsigned long long)arg2 opaque:(long long)arg3;
- (void)player:(id)arg1 didSelectedTrackAtIndex:(unsigned long long)arg2 opaque:(long long)arg3;
- (void)player:(id)arg1 videoEndOfOnePlayLoop:(id)arg2;
- (void)playerFirstFrameRendered:(id)arg1;
- (id)player:(id)arg1 assembleAVAssetWithIndex:(unsigned long long)arg2;
- (void)player:(id)arg1 naturalSizeAvailableWithSize:(struct CGSize)arg2;
- (void)player:(id)arg1 onVideoFrame:(struct __CVBuffer *)arg2;
- (void)player:(id)arg1 timeBaseValueChange:(double)arg2;
- (void)player:(id)arg1 airplayDidActive:(_Bool)arg2;
- (void)player:(id)arg1 seekCompleted:(_Bool)arg2;
- (void)player:(id)arg1 didErrorOccurred:(id)arg2;
- (void)player:(id)arg1 playbackStateDidChange:(long long)arg2;
- (void)player:(id)arg1 loadStateDidChange:(long long)arg2;
- (void)notifyClipStartIfNeededWhenPlaying;
- (void)notifyClipStartIfNeededWhenAdvanceToNext;
- (void)getReadyToSwitchPlayer:(id)arg1;
- (void)checkCacheNext;
- (void)checkPlayerSwitchTimer;
- (_Bool)checkNeedSkipEnd;
- (void)onPlayerTimeObserverCalled:(CDStruct_1b6d18a9)arg1;
- (_Bool)deselectTrackInfoWithoutCallback:(long long)arg1 opaque:(long long)arg2;
- (_Bool)deselectTrackInfo:(long long)arg1 opaque:(long long)arg2;
- (_Bool)selectTrackInfo:(long long)arg1 opaque:(long long)arg2;
- (id)trackInfoArray;
- (void)changePlayerPlaybackState:(long long)arg1;
- (long long)getPreItemsTime:(long long)arg1;
- (void)setTimeObserverBlock:(CDUnknownBlockType)arg1;
- (void)resumeOutputFrame;
- (void)pauseOutputFrame;
- (void)stopOutputFrame;
- (void)startOutputFrame:(double)arg1;
- (long long)countSliceOrder:(long long)arg1;
- (id)snapshot;
- (void)seekToTime:(long long)arg1 source:(long long)arg2;
- (void)seekToTime:(long long)arg1;
- (void)stop;
- (void)pause;
- (void)play;
- (void)updateVideo:(id)arg1;
- (void)loadVideo:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

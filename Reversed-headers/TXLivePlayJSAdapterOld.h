//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TXLivePlayJSAdapterProtocol-Protocol.h"
#import "TXLivePlayListener-Protocol.h"
#import "WMPFAudioAPIProtocol-Protocol.h"
#import "WMPFLivePlayerAPIProtocol-Protocol.h"

@class NSString, TXLiveContainerView, WXLivePlayer;
@protocol TXLivePlayJSAdapterDelegate;

@interface TXLivePlayJSAdapterOld : NSObject <TXLivePlayListener, WMPFLivePlayerAPIProtocol, WMPFAudioAPIProtocol, TXLivePlayJSAdapterProtocol>
{
    _Bool _bIsMannualPause;
    _Bool _isVoip;
    _Bool _autoPauseIfNavigate;
    _Bool _autoPauseIfOpenNative;
    _Bool _userNeedPlay;
    _Bool _autoPlay;
    _Bool _autoRotate;
    _Bool _audioOnlyMode;
    _Bool _isFullScreen;
    _Bool _muteAudio;
    _Bool _muteVideo;
    _Bool _isDebug;
    _Bool _needEvent;
    _Bool _needNetStatus;
    _Bool _needVolumeNotify;
    _Bool _bIsBackgroundInterrupted;
    _Bool _underNativeLive;
    unsigned int _playerId;
    id <TXLivePlayJSAdapterDelegate> _delegate;
    long long _playStateID;
    NSString *_playUrl;
    NSString *_title;
    WXLivePlayer *_txLivePlayer;
    TXLiveContainerView *_containerView;
    NSString *_appId;
    long long _playType;
    NSString *_orientation;
    long long _direction;
    NSString *_objectFit;
    long long _mode;
    long long _soundMode;
    struct CGRect _rect;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool underNativeLive; // @synthesize underNativeLive=_underNativeLive;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(nonatomic) _Bool bIsBackgroundInterrupted; // @synthesize bIsBackgroundInterrupted=_bIsBackgroundInterrupted;
@property(nonatomic) _Bool needVolumeNotify; // @synthesize needVolumeNotify=_needVolumeNotify;
@property(nonatomic) _Bool needNetStatus; // @synthesize needNetStatus=_needNetStatus;
@property(nonatomic) _Bool needEvent; // @synthesize needEvent=_needEvent;
@property(nonatomic) _Bool isDebug; // @synthesize isDebug=_isDebug;
@property(nonatomic) _Bool muteVideo; // @synthesize muteVideo=_muteVideo;
@property(nonatomic) _Bool muteAudio; // @synthesize muteAudio=_muteAudio;
@property(nonatomic) long long soundMode; // @synthesize soundMode=_soundMode;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSString *objectFit; // @synthesize objectFit=_objectFit;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(retain, nonatomic) NSString *orientation; // @synthesize orientation=_orientation;
@property(nonatomic) long long playType; // @synthesize playType=_playType;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) _Bool isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(retain, nonatomic) TXLiveContainerView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) WXLivePlayer *txLivePlayer; // @synthesize txLivePlayer=_txLivePlayer;
@property(readonly, nonatomic) unsigned int playerId; // @synthesize playerId=_playerId;
@property(nonatomic) _Bool audioOnlyMode; // @synthesize audioOnlyMode=_audioOnlyMode;
@property(nonatomic) _Bool autoRotate; // @synthesize autoRotate=_autoRotate;
@property(nonatomic) _Bool autoPlay; // @synthesize autoPlay=_autoPlay;
@property(nonatomic) _Bool userNeedPlay; // @synthesize userNeedPlay=_userNeedPlay;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *playUrl; // @synthesize playUrl=_playUrl;
@property(nonatomic) long long playStateID; // @synthesize playStateID=_playStateID;
@property(readonly, nonatomic) _Bool autoPauseIfOpenNative; // @synthesize autoPauseIfOpenNative=_autoPauseIfOpenNative;
@property(readonly, nonatomic) _Bool autoPauseIfNavigate; // @synthesize autoPauseIfNavigate=_autoPauseIfNavigate;
@property(nonatomic) __weak id <TXLivePlayJSAdapterDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool isVoip; // @synthesize isVoip=_isVoip;
- (void)innerAppAudioInterruptionBegan;
- (void)audioSessionInterruptionBegan;
- (void)audioSessionInterruptionEnd;
- (void)innerAppAudioInterruptionEnd;
- (void)resumeLivePlay;
- (void)pauseLivePlay;
- (void)onNetStatus:(id)arg1;
- (void)onPlayEvent:(int)arg1 withParam:(id)arg2;
- (void)removeNotification;
- (void)addNotification;
- (void)onAppWillEnterForeground:(id)arg1;
- (void)onAppDidEnterBackground:(id)arg1;
@property(readonly, nonatomic) _Bool isPlaying;
- (void)activeAudioSession;
- (long long)getDirection;
- (void)notifyAudioVolumeEvaluation:(int)arg1;
- (void)snapshotVideoEnd;
- (void)snapshotVideoBegin;
- (void)enterForeground;
- (void)enterBackground;
- (void)disbaleFull;
- (void)delaySetVideoFrameInIpadWhenQuitFullScreen:(struct CGRect)arg1;
- (void)relayoutForRotationWhileFullScreen;
- (void)enableFull;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)play;
- (void)setAudioRoute;
- (void)setObjectFit;
- (void)setOrientation;
- (void)parseConfigs:(id)arg1;
- (void)snapshotLivePlayer:(_Bool)arg1 snapshotCompletionBlock:(CDUnknownBlockType)arg2;
- (void)operateLivePlayerWithType:(id)arg1 data:(id)arg2;
- (void)updateLivePlayerWithConfigs:(id)arg1;
- (void)updateContainerViewRect:(struct CGRect)arg1;
- (void)activeAutoPlayIfNeeded;
- (id)initLivePlayerWithId:(unsigned int)arg1 configs:(id)arg2 containerView:(id)arg3 appId:(id)arg4 delegate:(id)arg5;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

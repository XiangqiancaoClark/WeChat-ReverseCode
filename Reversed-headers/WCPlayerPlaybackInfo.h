//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary, NSString, WCPlayerBufferEvent, WCResourceloaderState;
@protocol WCPlayerMediaExt, WCPlayerPlaybackInfoDelegate;

@interface WCPlayerPlaybackInfo : NSObject
{
    _Bool _bReadyToPlay;
    _Bool _mute;
    _Bool _bSeeking;
    _Bool _isPlayToEnd;
    _Bool _fromQueuePreCreate;
    unsigned int _taskId;
    int _playerType;
    int _resourceType;
    unsigned int _playCount;
    unsigned int _loopCount;
    float _bufferPos;
    unsigned int _bufferredCount;
    float _playedTimeWhenBuffering;
    float _duration;
    float _bitrate;
    unsigned int _dataSwitchCount;
    unsigned int _dataSwitchSuccCount;
    float _playablePos;
    unsigned int _bufferSeq;
    id <WCPlayerPlaybackInfoDelegate> _delegate;
    NSObject<WCPlayerMediaExt> *_currentMediaWrap;
    double _totalPlaybackTime;
    double _playbackTime;
    unsigned long long _startBufferingTime;
    long long _totalBufferTime;
    unsigned long long _playerErrorType;
    long long _playerErrorCode;
    NSString *_playerErrorDesc;
    unsigned long long _initialProcess;
    unsigned long long _playerState;
    unsigned long long _processState;
    unsigned long long _recoverState;
    unsigned long long _bufferState;
    WCPlayerBufferEvent *_bufferEvent;
    NSMutableDictionary *_dicBufferEvent;
    unsigned long long _currentDataRespOffset;
    unsigned long long _length;
    long long _videoFrameRate;
    long long _videorate;
    long long _audiorate;
    unsigned long long _moovPos;
    unsigned long long _moovLen;
    NSString *_vcodec;
    NSString *_acodec;
    NSMutableDictionary *_dicNetworkInfo;
    WCResourceloaderState *_resourceloaderBugState;
    NSDate *_lastCreatedDate;
    struct CGSize _presentationSize;
    struct CGAffineTransform _preferredTransform;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int bufferSeq; // @synthesize bufferSeq=_bufferSeq;
@property(retain, nonatomic) NSDate *lastCreatedDate; // @synthesize lastCreatedDate=_lastCreatedDate;
@property(retain, nonatomic) WCResourceloaderState *resourceloaderBugState; // @synthesize resourceloaderBugState=_resourceloaderBugState;
@property(nonatomic) float playablePos; // @synthesize playablePos=_playablePos;
@property(nonatomic) unsigned int dataSwitchSuccCount; // @synthesize dataSwitchSuccCount=_dataSwitchSuccCount;
@property(nonatomic) unsigned int dataSwitchCount; // @synthesize dataSwitchCount=_dataSwitchCount;
@property(nonatomic) _Bool fromQueuePreCreate; // @synthesize fromQueuePreCreate=_fromQueuePreCreate;
@property(nonatomic) struct CGAffineTransform preferredTransform; // @synthesize preferredTransform=_preferredTransform;
@property(retain, nonatomic) NSMutableDictionary *dicNetworkInfo; // @synthesize dicNetworkInfo=_dicNetworkInfo;
@property(retain, nonatomic) NSString *acodec; // @synthesize acodec=_acodec;
@property(retain, nonatomic) NSString *vcodec; // @synthesize vcodec=_vcodec;
@property(nonatomic) unsigned long long moovLen; // @synthesize moovLen=_moovLen;
@property(nonatomic) unsigned long long moovPos; // @synthesize moovPos=_moovPos;
@property(nonatomic) long long audiorate; // @synthesize audiorate=_audiorate;
@property(nonatomic) long long videorate; // @synthesize videorate=_videorate;
@property(nonatomic) long long videoFrameRate; // @synthesize videoFrameRate=_videoFrameRate;
@property(nonatomic) float bitrate; // @synthesize bitrate=_bitrate;
@property(nonatomic) unsigned long long length; // @synthesize length=_length;
@property(nonatomic) struct CGSize presentationSize; // @synthesize presentationSize=_presentationSize;
@property(nonatomic) float duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long currentDataRespOffset; // @synthesize currentDataRespOffset=_currentDataRespOffset;
@property(retain, nonatomic) NSMutableDictionary *dicBufferEvent; // @synthesize dicBufferEvent=_dicBufferEvent;
@property(retain, nonatomic) WCPlayerBufferEvent *bufferEvent; // @synthesize bufferEvent=_bufferEvent;
@property(nonatomic) unsigned long long bufferState; // @synthesize bufferState=_bufferState;
@property(nonatomic) unsigned long long recoverState; // @synthesize recoverState=_recoverState;
@property(nonatomic) _Bool isPlayToEnd; // @synthesize isPlayToEnd=_isPlayToEnd;
@property(nonatomic) unsigned long long processState; // @synthesize processState=_processState;
@property(readonly, nonatomic) unsigned long long playerState; // @synthesize playerState=_playerState;
@property(readonly, nonatomic) unsigned long long initialProcess; // @synthesize initialProcess=_initialProcess;
@property(retain, nonatomic) NSString *playerErrorDesc; // @synthesize playerErrorDesc=_playerErrorDesc;
@property(nonatomic) long long playerErrorCode; // @synthesize playerErrorCode=_playerErrorCode;
@property(nonatomic) unsigned long long playerErrorType; // @synthesize playerErrorType=_playerErrorType;
@property(nonatomic) long long totalBufferTime; // @synthesize totalBufferTime=_totalBufferTime;
@property(nonatomic) float playedTimeWhenBuffering; // @synthesize playedTimeWhenBuffering=_playedTimeWhenBuffering;
@property(nonatomic) unsigned int bufferredCount; // @synthesize bufferredCount=_bufferredCount;
@property(nonatomic) unsigned long long startBufferingTime; // @synthesize startBufferingTime=_startBufferingTime;
@property(nonatomic) _Bool bSeeking; // @synthesize bSeeking=_bSeeking;
@property(nonatomic) float bufferPos; // @synthesize bufferPos=_bufferPos;
@property(nonatomic) double playbackTime; // @synthesize playbackTime=_playbackTime;
@property(nonatomic) _Bool mute; // @synthesize mute=_mute;
@property(nonatomic) _Bool bReadyToPlay; // @synthesize bReadyToPlay=_bReadyToPlay;
@property(nonatomic) double totalPlaybackTime; // @synthesize totalPlaybackTime=_totalPlaybackTime;
@property(nonatomic) unsigned int loopCount; // @synthesize loopCount=_loopCount;
@property(nonatomic) unsigned int playCount; // @synthesize playCount=_playCount;
@property(retain, nonatomic) NSObject<WCPlayerMediaExt> *currentMediaWrap; // @synthesize currentMediaWrap=_currentMediaWrap;
@property(nonatomic) int resourceType; // @synthesize resourceType=_resourceType;
@property(nonatomic) int playerType; // @synthesize playerType=_playerType;
@property(nonatomic) unsigned int taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <WCPlayerPlaybackInfoDelegate> delegate; // @synthesize delegate=_delegate;
- (void)resetPlaybackInfo;
- (_Bool)isRecoverStateHadResetedPlayer;
- (_Bool)setInitialProcess:(unsigned long long)arg1;
- (_Bool)setPlayerState:(unsigned long long)arg1;
- (void)onBufferingEnd:(double)arg1;
- (id)getCurArrBufferEvents;
- (id)getAllBufferEvent;
- (_Bool)isBuffering;
- (void)onStartBufferingWithType:(unsigned long long)arg1;
- (_Bool)isVideoPlayStopped;
- (id)init;

@end


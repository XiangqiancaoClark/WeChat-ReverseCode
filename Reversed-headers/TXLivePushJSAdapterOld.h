//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMImageLoaderObserver-Protocol.h"
#import "MMLiveMangerPusherDelegate-Protocol.h"
#import "TXLivePushJSAdapterProtocol-Protocol.h"
#import "TXLivePushListener-Protocol.h"
#import "WMPFAudioAPIProtocol-Protocol.h"
#import "WMPFLivePusherAPIProtocol-Protocol.h"
#import "WeEffectBaseAdapterDelegate-Protocol.h"

@class MMLiveManger, MMWeEffectManager, NSArray, NSMutableArray, NSString, NSURLSessionDownloadTask, UIView, WXLivePusher;
@protocol TXLivePushJSAdapterDelegate;

@interface TXLivePushJSAdapterOld : NSObject <TXLivePushListener, MMImageLoaderObserver, WMPFLivePusherAPIProtocol, WMPFAudioAPIProtocol, WeEffectBaseAdapterDelegate, MMLiveMangerPusherDelegate, TXLivePushJSAdapterProtocol>
{
    _Bool _previewing;
    _Bool _bIsMannualPause;
    _Bool _isVoip;
    _Bool _muted;
    unsigned char _mode;
    unsigned char _focusMode;
    unsigned char _aspect;
    _Bool _isPublishing;
    _Bool _isPreviewing;
    _Bool _enableCamera;
    _Bool _enableMic;
    _Bool _enablePreview;
    _Bool _backgroundMute;
    _Bool _isDebug;
    _Bool _needEvent;
    _Bool _needBGMEvent;
    _Bool _needNetStatus;
    _Bool _autoPush;
    _Bool _canAutoPush;
    _Bool _enableTorch;
    _Bool _needVolumeNotify;
    _Bool _enableFrontCamera;
    _Bool _enableCustomEffect;
    unsigned int _pusherId;
    unsigned int _minBitrate;
    unsigned int _maxBitrate;
    int _beautyStyle;
    int _audioReverbType;
    id <TXLivePushJSAdapterDelegate> _delegate;
    WXLivePusher *_txLivePusher;
    UIView *_previewView;
    NSString *_appId;
    NSString *_pushUrl;
    NSString *_orientation;
    NSString *_audioQuality;
    NSString *_bgImageUrl;
    NSString *_bgImageMD5;
    NSString *_filterImageUrl;
    NSString *_filterImageMD5;
    NSString *_bgmAudioPath;
    NSURLSessionDownloadTask *_bgmAudioTask;
    unsigned long long _mirrorType;
    long long _videoWidth;
    long long _videoHeight;
    MMLiveManger *_liveManagerInstance;
    MMWeEffectManager *_weeffectManager;
    NSMutableArray *_weeffectArray;
    NSArray *_weeffectClsArr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *weeffectClsArr; // @synthesize weeffectClsArr=_weeffectClsArr;
@property(retain, nonatomic) NSMutableArray *weeffectArray; // @synthesize weeffectArray=_weeffectArray;
@property(retain, nonatomic) MMWeEffectManager *weeffectManager; // @synthesize weeffectManager=_weeffectManager;
@property(retain, nonatomic) MMLiveManger *liveManagerInstance; // @synthesize liveManagerInstance=_liveManagerInstance;
@property(nonatomic) _Bool enableCustomEffect; // @synthesize enableCustomEffect=_enableCustomEffect;
@property(nonatomic) long long videoHeight; // @synthesize videoHeight=_videoHeight;
@property(nonatomic) long long videoWidth; // @synthesize videoWidth=_videoWidth;
@property(nonatomic) unsigned long long mirrorType; // @synthesize mirrorType=_mirrorType;
@property(nonatomic) _Bool enableFrontCamera; // @synthesize enableFrontCamera=_enableFrontCamera;
@property(retain, nonatomic) NSURLSessionDownloadTask *bgmAudioTask; // @synthesize bgmAudioTask=_bgmAudioTask;
@property(retain, nonatomic) NSString *bgmAudioPath; // @synthesize bgmAudioPath=_bgmAudioPath;
@property(retain, nonatomic) NSString *filterImageMD5; // @synthesize filterImageMD5=_filterImageMD5;
@property(retain, nonatomic) NSString *filterImageUrl; // @synthesize filterImageUrl=_filterImageUrl;
@property(retain, nonatomic) NSString *bgImageMD5; // @synthesize bgImageMD5=_bgImageMD5;
@property(retain, nonatomic) NSString *bgImageUrl; // @synthesize bgImageUrl=_bgImageUrl;
@property(nonatomic) _Bool needVolumeNotify; // @synthesize needVolumeNotify=_needVolumeNotify;
@property(nonatomic) int audioReverbType; // @synthesize audioReverbType=_audioReverbType;
@property(nonatomic) int beautyStyle; // @synthesize beautyStyle=_beautyStyle;
@property(nonatomic) _Bool enableTorch; // @synthesize enableTorch=_enableTorch;
@property(nonatomic) _Bool canAutoPush; // @synthesize canAutoPush=_canAutoPush;
@property(nonatomic) _Bool autoPush; // @synthesize autoPush=_autoPush;
@property(nonatomic) _Bool needNetStatus; // @synthesize needNetStatus=_needNetStatus;
@property(nonatomic) _Bool needBGMEvent; // @synthesize needBGMEvent=_needBGMEvent;
@property(nonatomic) _Bool needEvent; // @synthesize needEvent=_needEvent;
@property(nonatomic) _Bool isDebug; // @synthesize isDebug=_isDebug;
@property(nonatomic) _Bool backgroundMute; // @synthesize backgroundMute=_backgroundMute;
@property(nonatomic) _Bool enablePreview; // @synthesize enablePreview=_enablePreview;
@property(nonatomic) _Bool enableMic; // @synthesize enableMic=_enableMic;
@property(nonatomic) _Bool enableCamera; // @synthesize enableCamera=_enableCamera;
@property(nonatomic) _Bool isPreviewing; // @synthesize isPreviewing=_isPreviewing;
@property(nonatomic) _Bool isPublishing; // @synthesize isPublishing=_isPublishing;
@property(nonatomic) unsigned char aspect; // @synthesize aspect=_aspect;
@property(nonatomic) unsigned char focusMode; // @synthesize focusMode=_focusMode;
@property(nonatomic) unsigned int maxBitrate; // @synthesize maxBitrate=_maxBitrate;
@property(nonatomic) unsigned int minBitrate; // @synthesize minBitrate=_minBitrate;
@property(nonatomic) unsigned char mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSString *audioQuality; // @synthesize audioQuality=_audioQuality;
@property(retain, nonatomic) NSString *orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) NSString *pushUrl; // @synthesize pushUrl=_pushUrl;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) UIView *previewView; // @synthesize previewView=_previewView;
@property(retain, nonatomic) WXLivePusher *txLivePusher; // @synthesize txLivePusher=_txLivePusher;
@property(readonly, nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) __weak id <TXLivePushJSAdapterDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool isVoip; // @synthesize isVoip=_isVoip;
@property(readonly, nonatomic) unsigned int pusherId; // @synthesize pusherId=_pusherId;
- (void)sendVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)weeffectApplicationFinishedWithObject:(id)arg1 error:(id)arg2;
- (_Bool)updateTorchForCustomEffect;
- (void)updateMirrorTypeForCustomEffect;
- (void)snapShot:(_Bool)arg1;
- (void)audioSessionInterruptionEnd;
- (void)audioSessionInterruptionBegan;
- (void)innerAppAudioInterruptionEnd;
- (void)innerAppAudioInterruptionBegan;
- (void)resumeLivePush;
- (void)pauseLivePush;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)processImageData:(id)arg1 imageUrl:(id)arg2 imageMD5:(id)arg3 finishedBlock:(CDUnknownBlockType)arg4;
- (void)onScreenCaptureStoped:(int)arg1;
- (void)onScreenCaptureStarted;
- (void)onScreenCaptureResumed:(int)arg1;
- (void)onScreenCapturePaused:(int)arg1;
- (void)onNetStatus:(id)arg1;
- (void)onPushEvent:(int)arg1 withParam:(id)arg2;
- (void)loadImageWithURL:(id)arg1 imageMD5:(id)arg2 successed:(CDUnknownBlockType)arg3;
- (id)tryGetImageLocalData:(id)arg1;
- (void)setMuted:(_Bool)arg1;
- (void)setOrientation;
- (void)updateAudioRecord;
- (void)updatePreview;
- (void)enableCamera:(_Bool)arg1;
- (void)clearWeEffects;
- (void)parseWeEffect:(id)arg1 operationType:(id)arg2;
- (void)parseConfigs:(id)arg1;
- (void)foregroundPush;
- (void)backgroundPush:(_Bool)arg1;
- (void)stopPush;
- (void)startPush;
- (void)orientationChange;
- (void)enterForeground;
- (void)enterBackgroundThrowingEvent:(_Bool)arg1;
- (void)stopPreview;
- (void)startPreview;
- (void)enablePureAudioPush:(_Bool)arg1;
- (_Bool)operateLivePusherWithType:(id)arg1 param:(id)arg2;
- (void)stopLivePusherBgm;
- (void)loadLivePusherBgm:(id)arg1;
- (id)calcSavePathByUrl:(id)arg1;
- (id)bgmSaveDir;
- (void)playLivePusherBgm:(id)arg1;
- (void)playLivePusherBgmOnMain:(id)arg1;
- (void)onLivePusherBGMComplete:(long long)arg1;
- (void)onLivePusherBGMProgress:(long long)arg1 duration:(long long)arg2;
- (void)onLivePusherBGMStart:(long long)arg1;
- (void)updateLivePusherWithConfigs:(id)arg1;
- (id)initLivePusherWithId:(unsigned int)arg1 configs:(id)arg2 preview:(id)arg3 appId:(id)arg4 delegate:(id)arg5;
- (void)initTorchState;
- (void)onAppDidBecomeActive:(id)arg1;
- (void)onAppWillResignActive:(id)arg1;
- (void)registerNotification;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"

@class NSString;

@interface WCFinderMusicAudioMgr : MMUserService <MMServiceProtocol>
{
    _Bool _needResumeMusicPlay;
    _Bool _needResumeWXMusicPlay;
    unsigned long long _stackFrameCount;
}

@property(nonatomic) unsigned long long stackFrameCount; // @synthesize stackFrameCount=_stackFrameCount;
@property(nonatomic) _Bool needResumeWXMusicPlay; // @synthesize needResumeWXMusicPlay=_needResumeWXMusicPlay;
@property(nonatomic) _Bool needResumeMusicPlay; // @synthesize needResumeMusicPlay=_needResumeMusicPlay;
- (void)onEnterForeground:(id)arg1;
- (void)removeObserverForForegroundNotification;
- (void)addObserverForForegroundNotification;
- (void)resumeMusicPlay;
- (void)checkMusicPlayState;
- (void)popMonitorStack;
- (void)pushMonitorStack;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


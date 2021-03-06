//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSRecursiveLock;

@interface TPAudioKit : NSObject
{
    _Bool _initialized;
    NSMutableArray *_delegateArray;
    NSRecursiveLock *_lock;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) _Bool initialized; // @synthesize initialized=_initialized;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableArray *delegateArray; // @synthesize delegateArray=_delegateArray;
- (void)handleInterruptionEnded;
- (void)handleInterruptionBegan;
- (void)handleApplicationDidBecomeActive:(id)arg1;
- (void)handleTPPlayerAudioSessionInterruptionEnded:(id)arg1;
- (void)handleAVAudioSessionInterruption:(id)arg1;
- (void)removeInterruptionDelegate:(id)arg1;
- (void)addInterruptionDelegate:(id)arg1;
- (void)setActive:(_Bool)arg1;
- (void)unsetupAudioSession;
- (void)setupAudioSession;
- (id)init;

@end


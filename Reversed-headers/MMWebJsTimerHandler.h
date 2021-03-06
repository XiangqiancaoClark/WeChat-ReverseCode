//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JSContext, NSMutableDictionary, NSRecursiveLock;
@protocol OS_dispatch_queue;

@interface MMWebJsTimerHandler : NSObject
{
    JSContext *_jsContext;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableDictionary *_timerObjs;
    NSRecursiveLock *_lock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain) NSMutableDictionary *timerObjs; // @synthesize timerObjs=_timerObjs;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) __weak JSContext *jsContext; // @synthesize jsContext=_jsContext;
- (void)mainThread_clearTimer:(unsigned int)arg1;
- (void)onTimer:(id)arg1;
- (unsigned int)mainThread_addTimer:(unsigned int)arg1 withTime:(float)arg2 isRepeat:(_Bool)arg3;
- (void)addApi_clearTimerHandler:(id)arg1;
- (void)addApi_setTimerHandler:(id)arg1;
- (void)setupTimerBlock:(id)arg1;
- (void)invalidAllTimers;
- (void)dealloc;

@end


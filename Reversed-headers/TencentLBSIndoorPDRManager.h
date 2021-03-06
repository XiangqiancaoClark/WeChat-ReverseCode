//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSNumber, TencentLBSSensorManager;
@protocol OS_dispatch_source;

@interface TencentLBSIndoorPDRManager : NSObject
{
    _Bool _isBleLocationStart;
    int _startNum;
    TencentLBSSensorManager *_sensorManager;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_source> *_pdrCalbackTimer;
    double _heading;
    NSMutableArray *_pdrCallBacks;
    long long _lastPdrUpdateT;
    long long _lastPdrCallbackT;
    long long _startpdrT;
    double _bleArriveTime;
    NSNumber *_mSteps;
    NSObject *_pdrlock;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain) NSObject *pdrlock; // @synthesize pdrlock=_pdrlock;
@property(retain) NSNumber *mSteps; // @synthesize mSteps=_mSteps;
@property double bleArriveTime; // @synthesize bleArriveTime=_bleArriveTime;
@property(nonatomic) long long startpdrT; // @synthesize startpdrT=_startpdrT;
@property long long lastPdrCallbackT; // @synthesize lastPdrCallbackT=_lastPdrCallbackT;
@property long long lastPdrUpdateT; // @synthesize lastPdrUpdateT=_lastPdrUpdateT;
@property(copy, nonatomic) NSMutableArray *pdrCallBacks; // @synthesize pdrCallBacks=_pdrCallBacks;
@property _Bool isBleLocationStart; // @synthesize isBleLocationStart=_isBleLocationStart;
@property int startNum; // @synthesize startNum=_startNum;
@property double heading; // @synthesize heading=_heading;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *pdrCalbackTimer; // @synthesize pdrCalbackTimer=_pdrCalbackTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain) TencentLBSSensorManager *sensorManager; // @synthesize sensorManager=_sensorManager;
- (void)stopPdrInQueue;
- (id)obtainPdrSteps;
- (void)stopPdr;
- (id)createDispatchTimerWithQueue:(id)arg1 withInterval:(double)arg2 delayToPerform:(double)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)inPdrQueueBleLocationCreateWithlat:(double)arg1 lng:(double)arg2 accuracy:(double)arg3 building:(id)arg4 floor:(id)arg5;
- (void)onBleLocationCreateWithlat:(double)arg1 lng:(double)arg2 accuracy:(double)arg3 building:(id)arg4 floor:(id)arg5;
- (void)startPdrInPdrQueue;
- (void)setPdrCoorType:(int)arg1;
- (void)startPdr;
- (void)removePdrcallbackFromArray:(CDUnknownBlockType)arg1;
- (void)setPdrCallBackBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end


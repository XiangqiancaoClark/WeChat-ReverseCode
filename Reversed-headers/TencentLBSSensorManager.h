//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocationManager, CMMotionManager, CMPedometer, NSNumber, NSOperationQueue, NSString;

@interface TencentLBSSensorManager : NSObject <CLLocationManagerDelegate>
{
    _Bool _hasMotionData;
    _Bool _isMagUseful;
    _Bool _isStart;
    CMMotionManager *_manager;
    CLLocationManager *_locmanager;
    NSOperationQueue *_queue;
    unsigned long long _maxSize;
    double _motionTime;
    CMPedometer *_pedometer;
    NSNumber *_lastSteps;
    CDUnknownBlockType _headingBlock;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(copy) CDUnknownBlockType headingBlock; // @synthesize headingBlock=_headingBlock;
@property(retain, nonatomic) NSNumber *lastSteps; // @synthesize lastSteps=_lastSteps;
@property(retain, nonatomic) CMPedometer *pedometer; // @synthesize pedometer=_pedometer;
@property(nonatomic) double motionTime; // @synthesize motionTime=_motionTime;
@property(nonatomic) unsigned long long maxSize; // @synthesize maxSize=_maxSize;
@property(nonatomic) _Bool isStart; // @synthesize isStart=_isStart;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) CLLocationManager *locmanager; // @synthesize locmanager=_locmanager;
@property(retain, nonatomic) CMMotionManager *manager; // @synthesize manager=_manager;
@property(nonatomic) _Bool isMagUseful; // @synthesize isMagUseful=_isMagUseful;
@property(nonatomic) _Bool hasMotionData; // @synthesize hasMotionData=_hasMotionData;
- (void)stopUpdatingDeviceMotion;
- (void)stopUpdatingMagnetometer;
- (void)stopUpdatingGry;
- (void)stopUpdatingAcceleration;
- (void)stopPedometer;
- (void)stopHeadingUpdate;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)startUpdatingHeadWithBlock:(CDUnknownBlockType)arg1;
- (void)startPedometerSinceNowWithHandler:(CDUnknownBlockType)arg1;
- (void)startUpdatingDeviceMotionWithBlock:(CDUnknownBlockType)arg1;
- (void)startUpdatingMagnetometerWithBlock:(CDUnknownBlockType)arg1;
- (void)startUpdatingGryWithBlock:(CDUnknownBlockType)arg1;
- (void)startUpdatingAccelerationWithBlock:(CDUnknownBlockType)arg1;
- (void)setSensorUpdateInterval:(double)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


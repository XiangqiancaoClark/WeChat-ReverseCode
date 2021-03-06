//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMOpenGLContext, WCLoopMetricsCollector, WeVisVoipEffectMgr;

@interface MMWeEffectManager : NSObject
{
    MMOpenGLContext *_context;
    float _eyeBrightRate;
    WeVisVoipEffectMgr *_wevisEffectMgr;
    WCLoopMetricsCollector *_captureMetricsCollector;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCLoopMetricsCollector *captureMetricsCollector; // @synthesize captureMetricsCollector=_captureMetricsCollector;
@property(nonatomic) float eyeBrightRate; // @synthesize eyeBrightRate=_eyeBrightRate;
@property(retain, nonatomic) WeVisVoipEffectMgr *wevisEffectMgr; // @synthesize wevisEffectMgr=_wevisEffectMgr;
- (void)clean;
- (id)renderEffect:(id)arg1 pixelBufferFlipX:(_Bool)arg2;
- (id)renderEffect:(id)arg1;
- (id)renderEffectImp:(id)arg1 pixelBufferFlipX:(_Bool)arg2;
- (id)renderEffectImp:(id)arg1;
- (void)stopProcess;
- (void)startProcess;
- (void)clearFilters;
- (void)clearStickers;
- (void)clearMakeUp;
- (void)clearAll;
- (void)applyBlusher:(id)arg1;
- (void)applyContours:(id)arg1;
- (void)applyLipStick:(id)arg1;
- (void)applyEyeShadow:(id)arg1;
- (void)applyEyeBrow:(id)arg1;
- (void)applyFrontSticker:(id)arg1;
- (void)applyBackSticker:(id)arg1;
- (void)apply2DSticker:(id)arg1;
- (void)applyFilterWithConfig:(id)arg1 alpha:(double)arg2;
- (void)applyFilter:(id)arg1 alpha:(double)arg2;
- (void)applyEyeBiggerV2:(float)arg1;
- (void)applyMouthMorph:(float)arg1;
- (void)applyLowHighHairLine:(float)arg1;
- (void)applyShortLongChin:(float)arg1;
- (void)applyWingOfNose:(float)arg1;
- (void)applyLowerJawbone:(float)arg1;
- (void)applyCheekbone:(float)arg1;
- (void)applySmallHead:(float)arg1;
- (void)applyRemoveEyePouch:(float)arg1 smileFolds:(float)arg2;
- (void)applyTeethBright:(float)arg1;
- (void)applySharpenFilter:(float)arg1;
- (void)applyEyeBright:(float)arg1;
- (void)applyEyeBigger:(float)arg1;
- (void)applyEyeBiggerForFinderLive:(float)arg1;
- (void)applyBoyFaceThin:(float)arg1;
- (void)applyGirlFaceThin:(float)arg1;
- (void)applyFaceThin:(float)arg1;
- (void)setRosy:(float)arg1;
- (void)setLutFilter:(float)arg1;
- (void)setSkinSmooth:(float)arg1;
- (void)setSkinBright:(float)arg1;
- (void)initWeVisEffectMgr:(int)arg1;
- (void)runSyncOnWeEffectThread:(CDUnknownBlockType)arg1;
- (void)runAsyncOnWeEffectThread:(CDUnknownBlockType)arg1;
- (id)context;
- (void)dealloc;
- (id)initWithSceneType:(int)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMCircularProgressView, MMSightRecordView, MMUIView;
@protocol MMSightRecordHelperViewDelegate;

@interface MMSightRecordHelperView : UIView
{
    _Bool m_shouldRecord;
    _Bool m_needHandleTouchEnd;
    MMUIView *m_tipsView;
    id <MMSightRecordHelperViewDelegate> _delegate;
    MMSightRecordView *_recordView;
    MMCircularProgressView *_circleProgress;
    double _startRecordAnimationDuration;
    double _minRecordDuration;
    double _maxRecordDuration;
}

- (void).cxx_destruct;
@property(nonatomic) double maxRecordDuration; // @synthesize maxRecordDuration=_maxRecordDuration;
@property(nonatomic) double minRecordDuration; // @synthesize minRecordDuration=_minRecordDuration;
@property(nonatomic) double startRecordAnimationDuration; // @synthesize startRecordAnimationDuration=_startRecordAnimationDuration;
@property(nonatomic) __weak MMCircularProgressView *circleProgress; // @synthesize circleProgress=_circleProgress;
@property(nonatomic) __weak MMSightRecordView *recordView; // @synthesize recordView=_recordView;
@property(nonatomic) __weak id <MMSightRecordHelperViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onTouchFinished;
- (void)onStartRealRecord;
- (void)onLongPressed;
- (void)onTimeOut;
- (void)startCircleProgressAnimation;
- (void)hideTipsViewImmediately;
- (void)hideTipsView;
- (void)showTips:(id)arg1 color:(id)arg2 font:(id)arg3 topMargin:(double)arg4;

@end


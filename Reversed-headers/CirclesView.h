//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IMusicSearchExt-Protocol.h"

@class CircleView, NSMutableArray, NSString;

@interface CirclesView : UIView <IMusicSearchExt>
{
    NSMutableArray *m_peakPowerArray;
    _Bool _animating;
    _Bool _circleAnimating;
    CircleView *_circleView;
    CircleView *_circleView2;
    CircleView *_circleView3;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CircleView *circleView3; // @synthesize circleView3=_circleView3;
@property(retain, nonatomic) CircleView *circleView2; // @synthesize circleView2=_circleView2;
@property(retain, nonatomic) CircleView *circleView; // @synthesize circleView=_circleView;
@property(nonatomic) _Bool circleAnimating; // @synthesize circleAnimating=_circleAnimating;
@property _Bool animating; // @synthesize animating=_animating;
- (void)startPeakPowerAnimate;
- (void)OnPeakPowerChange:(float)arg1;
- (void)animateCircle3;
- (void)stopAnimate;
- (void)startAnimate;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

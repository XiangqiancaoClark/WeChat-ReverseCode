//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class MMUIButton, NSNumber, NSString, UIColor, UIPanGestureRecognizer;
@protocol WCFinderFullPlayerProgressBarDelegate;

@interface WCFinderFullPlayerProgressBar : UIView <UIGestureRecognizerDelegate>
{
    _Bool _showLargeBar;
    _Bool _showAnchorPoint;
    int _lastTime;
    id <WCFinderFullPlayerProgressBarDelegate> _delegate;
    MMUIButton *_progressIconButton;
    UIView *_leftBarView;
    UIView *_rightBarView;
    NSNumber *_valueNum;
    double _progressBarHeight;
    UIColor *_inProgressColor;
    UIColor *_dragColor;
    double _cornerRadius;
    UIPanGestureRecognizer *_panGes;
    double _lastX;
}

+ (double)progressBarVisibleHeight;
- (void).cxx_destruct;
@property(nonatomic) double lastX; // @synthesize lastX=_lastX;
@property(nonatomic) int lastTime; // @synthesize lastTime=_lastTime;
@property(retain, nonatomic) UIPanGestureRecognizer *panGes; // @synthesize panGes=_panGes;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) UIColor *dragColor; // @synthesize dragColor=_dragColor;
@property(retain, nonatomic) UIColor *inProgressColor; // @synthesize inProgressColor=_inProgressColor;
@property(nonatomic) double progressBarHeight; // @synthesize progressBarHeight=_progressBarHeight;
@property(retain, nonatomic) NSNumber *valueNum; // @synthesize valueNum=_valueNum;
@property(retain, nonatomic) UIView *rightBarView; // @synthesize rightBarView=_rightBarView;
@property(retain, nonatomic) UIView *leftBarView; // @synthesize leftBarView=_leftBarView;
@property(retain, nonatomic) MMUIButton *progressIconButton; // @synthesize progressIconButton=_progressIconButton;
@property(nonatomic) __weak id <WCFinderFullPlayerProgressBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isShowAnchorPoint) _Bool showAnchorPoint; // @synthesize showAnchorPoint=_showAnchorPoint;
@property(nonatomic, getter=isShowLargeBar) _Bool showLargeBar; // @synthesize showLargeBar=_showLargeBar;
- (void)resetLayer:(id)arg1;
- (void)resumeLayer:(id)arg1;
- (void)pauseLayer:(id)arg1;
- (void)resetAnimation;
- (void)resumeAnimation;
- (void)stopAnimation;
- (void)reset;
- (_Bool)checkProgressValueValid:(double)arg1;
- (void)removeProgressAnimation;
- (void)setValue:(double)arg1 animateWithDuration:(double)arg2 time:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setValue:(double)arg1 animateWithDuration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)shoudAnimateToProgress:(double)arg1 duration:(double)arg2 time:(double)arg3;
- (void)setValue:(double)arg1 animateWithDuration:(double)arg2 time:(double)arg3;
- (void)updateUIWithValue:(double)arg1;
- (void)setValue:(double)arg1;
- (double)value;
- (void)layoutSubviews;
- (void)onPanProgressIcon:(id)arg1;
- (void)setupBarHeight:(double)arg1 dotHeight:(double)arg2 defaultColor:(id)arg3 inProgressColor:(id)arg4 dragColor:(id)arg5 cornerRadius:(double)arg6 progressBarIconImage:(id)arg7 enablePanProgessIcon:(_Bool)arg8;
- (id)initWithFrame:(struct CGRect)arg1 barHeight:(double)arg2 dotHeight:(double)arg3 defaultColor:(id)arg4 inProgressColor:(id)arg5 dragColor:(id)arg6 cornerRadius:(double)arg7 progressBarIconImage:(id)arg8 enablePanProgessIcon:(_Bool)arg9;
- (id)initWithFrame:(struct CGRect)arg1 barHeight:(double)arg2 dotHeight:(double)arg3 defaultColor:(id)arg4 inProgressColor:(id)arg5 dragColor:(id)arg6 cornerRadius:(double)arg7;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

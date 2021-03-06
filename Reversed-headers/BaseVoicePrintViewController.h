//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "CAAnimationDelegate-Protocol.h"

@class CAShapeLayer, MMUIActivityIndicatorView, NSString, UIButton, UIImageView, UILabel, UITextView, UIView;
@protocol VoicePrintViewControllerDelegate;

@interface BaseVoicePrintViewController : MMUIViewController <CAAnimationDelegate>
{
    UILabel *_tips_label;
    UIButton *_cancle_button;
    UIButton *_talk_button;
    MMUIActivityIndicatorView *_indicator;
    UITextView *_statusTextView;
    UILabel *_guide_text_view;
    UIView *_micMeterCircleView;
    CAShapeLayer *_micMeterCircleLayer;
    UIImageView *_smallCircleView;
    UIImageView *_bigCircleView;
    UIImageView *_myLoadingView;
    UIView *_transitionView;
    unsigned long long _start_time;
    unsigned long long _end_time;
    unsigned long long _random_interval_time;
    _Bool bIsOnceStatusTextNotFade;
    _Bool m_bPresentViewController;
    _Bool _m_bInRSA;
    unsigned int animationDuration;
    id <VoicePrintViewControllerDelegate> m_delegate;
    NSString *lyricText;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_bInRSA; // @synthesize m_bInRSA=_m_bInRSA;
@property(nonatomic) _Bool m_bPresentViewController; // @synthesize m_bPresentViewController;
@property(nonatomic) unsigned int animationDuration; // @synthesize animationDuration;
@property(retain, nonatomic) NSString *lyricText; // @synthesize lyricText;
@property(nonatomic) __weak id <VoicePrintViewControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void)onTalkButtonCancel:(id)arg1;
- (void)OnTalkButtonPress:(id)arg1;
- (void)doMeterAnimationWithBezierPath:(float)arg1;
- (double)randFloatBetween:(double)arg1 And:(double)arg2;
- (_Bool)canOverAnimationInterval;
- (void)SetEndTime;
- (void)SetStartTime;
- (void)doAnimationWithSmallScaleValue:(double)arg1 AndBig:(double)arg2;
- (void)updateMeterAnimationWithValue:(float)arg1;
- (void)stopMeterAnimation;
- (void)startMeterAnimation;
- (void)ShowRecordButton;
- (void)HiddenRecordButton;
- (void)startDoGuideTextAnimation;
- (void)GetResStopLoading;
- (void)GetResStartLoading;
- (void)stopGetResource;
- (void)startGetResource;
- (void)StopLoadingAnimation;
- (void)StartLoadingAnimation;
- (void)stopMyLoadingAnimation;
- (void)beginMyLoadingAnimation;
- (void)ShouldShowGuideLabelText;
- (void)initTalkButton;
- (void)UpdateGuiText;
- (void)SetGuiTextWithFontSize:(double)arg1;
- (void)updateGuideText:(id)arg1 andDuration:(double)arg2;
- (void)updateMeterPowerValue:(float)arg1;
- (_Bool)isTalkButtonPressed;
- (void)showTipLabel;
- (void)updateStatusTextWithNoFade:(id)arg1;
- (void)updateStatusText:(id)arg1;
- (void)stopAllAnimation;
- (void)beginAllAnimation;
- (void)hideAnimation;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (id)animationAlphaTo:(float)arg1 andDuration:(float)arg2;
- (id)makeStatusTextViewTransitionAnimation;
- (void)removeStatusTextViewAnimationAndHide;
- (void)doTransitionViewAlphaAnimation:(CDUnknownBlockType)arg1;
- (void)doTransitionViewFrameAnimation:(CDUnknownBlockType)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;
- (void)unregisterExtension;
- (void)registerExtension;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


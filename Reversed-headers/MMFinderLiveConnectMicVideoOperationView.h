//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MMFinderLiveConnectMicBaseUserInfoViewDelegate-Protocol.h"
#import "WCFinderHeadImageViewDelegate-Protocol.h"

@class CAGradientLayer, MMFinderLiveConnectMicAudioUserInfoView, MMFinderLiveConnectMicUser, MMFinderLiveConnectMicVideoUserInfoView, MMFinderLiveRedPacketView, MMFinderLiveTaskId, NSString, PAGView, UILabel, WCLiveBlurButton;
@protocol MMFinderLiveConnectMicVideoOperationViewDelegate;

@interface MMFinderLiveConnectMicVideoOperationView : UIView <WCFinderHeadImageViewDelegate, MMFinderLiveConnectMicBaseUserInfoViewDelegate>
{
    _Bool _isFrontCamera;
    id <MMFinderLiveConnectMicVideoOperationViewDelegate> _actionDelegate;
    UIView *_giftNotificationContainerView;
    MMFinderLiveTaskId *_finderLiveTaskId;
    MMFinderLiveConnectMicUser *_connectMicUserInfo;
    UIView *_bottomContainerView;
    CAGradientLayer *_bottomContainerBackgroundLayer;
    WCLiveBlurButton *_hangupBlurButton;
    WCLiveBlurButton *_switchCameraButton;
    WCLiveBlurButton *_muteMicButton;
    MMFinderLiveRedPacketView *_redPacketAnimationView;
    UIView *_audioUserContainerView;
    MMFinderLiveConnectMicVideoUserInfoView *_videoUserInfoView;
    MMFinderLiveConnectMicAudioUserInfoView *_audioUserInfoView;
    UIView *_pureAudioModeTipView;
    UILabel *_pureAudioModeTipLabel;
    PAGView *_pureAudioModeVolumeAnimationView;
    double _extraTopInset;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFrontCamera; // @synthesize isFrontCamera=_isFrontCamera;
@property(nonatomic) double extraTopInset; // @synthesize extraTopInset=_extraTopInset;
@property(retain, nonatomic) PAGView *pureAudioModeVolumeAnimationView; // @synthesize pureAudioModeVolumeAnimationView=_pureAudioModeVolumeAnimationView;
@property(retain, nonatomic) UILabel *pureAudioModeTipLabel; // @synthesize pureAudioModeTipLabel=_pureAudioModeTipLabel;
@property(retain, nonatomic) UIView *pureAudioModeTipView; // @synthesize pureAudioModeTipView=_pureAudioModeTipView;
@property(retain, nonatomic) MMFinderLiveConnectMicAudioUserInfoView *audioUserInfoView; // @synthesize audioUserInfoView=_audioUserInfoView;
@property(retain, nonatomic) MMFinderLiveConnectMicVideoUserInfoView *videoUserInfoView; // @synthesize videoUserInfoView=_videoUserInfoView;
@property(retain, nonatomic) UIView *audioUserContainerView; // @synthesize audioUserContainerView=_audioUserContainerView;
@property(retain, nonatomic) MMFinderLiveRedPacketView *redPacketAnimationView; // @synthesize redPacketAnimationView=_redPacketAnimationView;
@property(retain, nonatomic) WCLiveBlurButton *muteMicButton; // @synthesize muteMicButton=_muteMicButton;
@property(retain, nonatomic) WCLiveBlurButton *switchCameraButton; // @synthesize switchCameraButton=_switchCameraButton;
@property(retain, nonatomic) WCLiveBlurButton *hangupBlurButton; // @synthesize hangupBlurButton=_hangupBlurButton;
@property(retain, nonatomic) CAGradientLayer *bottomContainerBackgroundLayer; // @synthesize bottomContainerBackgroundLayer=_bottomContainerBackgroundLayer;
@property(retain, nonatomic) UIView *bottomContainerView; // @synthesize bottomContainerView=_bottomContainerView;
@property(retain, nonatomic) MMFinderLiveConnectMicUser *connectMicUserInfo; // @synthesize connectMicUserInfo=_connectMicUserInfo;
@property(retain, nonatomic) MMFinderLiveTaskId *finderLiveTaskId; // @synthesize finderLiveTaskId=_finderLiveTaskId;
@property(retain, nonatomic) UIView *giftNotificationContainerView; // @synthesize giftNotificationContainerView=_giftNotificationContainerView;
@property(nonatomic) __weak id <MMFinderLiveConnectMicVideoOperationViewDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)onMMFinderLiveConnectMicBaseUserInfoViewTapNickNameWithUserInfo:(id)arg1;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (void)updateUI;
- (void)onTapBackground:(id)arg1;
- (void)onClickMuteMicButton;
- (void)onClickSwitchCameraButton;
- (void)onClickRedPacketButton;
- (void)onClickHangupButton;
- (void)updateUserGlobalBadgeLevel:(unsigned int)arg1;
- (void)updateExtraTopInset:(double)arg1;
- (void)updateUserTalkingState;
- (void)updateOperationViewsAlpha:(double)arg1;
- (void)clearAndHide;
- (void)showWithConnectMicUserInfo:(id)arg1;
- (void)setMuteMicButtonSelected:(_Bool)arg1;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)layoutPureAudioModeTipView;
- (void)configPureAudioModeTipView;
- (void)setupBackgroundTapGestureRecognizer;
- (void)configAudioUserInfoViewWithLooseLayout:(_Bool)arg1;
- (void)configVideoUserInfoViewWithRightAreaWidth:(double)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)subView:(id)arg1 pointInside:(struct CGPoint)arg2 withEvent:(id)arg3;
- (id)initWithTaskId:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andTaskId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


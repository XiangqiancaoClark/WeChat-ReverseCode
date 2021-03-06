//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMLiveBaseComponentView.h"

@class MMTimerLabel, UIImageView;

@interface MMLiveAchorTimeLabel : MMLiveBaseComponentView
{
    CDUnknownBlockType _onLiveQualityUpdatedBlock;
    long long _currentNetWorkState;
    UIImageView *_networkStateImageView;
    MMTimerLabel *_timerLabel;
}

+ (id)networkImageForState:(long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMTimerLabel *timerLabel; // @synthesize timerLabel=_timerLabel;
@property(retain, nonatomic) UIImageView *networkStateImageView; // @synthesize networkStateImageView=_networkStateImageView;
@property(nonatomic) long long currentNetWorkState; // @synthesize currentNetWorkState=_currentNetWorkState;
@property(copy, nonatomic) CDUnknownBlockType onLiveQualityUpdatedBlock; // @synthesize onLiveQualityUpdatedBlock=_onLiveQualityUpdatedBlock;
- (void)onLiveQualityUpdated:(id)arg1;
- (void)onLiveProgressUpdated:(unsigned int)arg1;
- (void)onLiveResumed;
- (void)onLivePaused;
- (void)onEnterLive;
- (double)iconInnerPadding;
- (void)sizeToFits;
- (void)layoutTimerLabel;
- (void)layoutNetworkStateImageView;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 andTaskId:(id)arg2 componentKey:(id)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface WCFinderPanelTapToEnterLivingView : UIView
{
    UIView *_contentView;
    UIImageView *_liveIconView;
    UILabel *_tapToEnterLabel;
    UILabel *_audienceNumLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *audienceNumLabel; // @synthesize audienceNumLabel=_audienceNumLabel;
@property(retain, nonatomic) UILabel *tapToEnterLabel; // @synthesize tapToEnterLabel=_tapToEnterLabel;
@property(retain, nonatomic) UIImageView *liveIconView; // @synthesize liveIconView=_liveIconView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)addAudienceNumLabel;
- (void)addTapToEnterLabel;
- (void)addLiveIcon;
- (void)addContentView;
- (void)addViews;
- (void)updateAudienceNum:(long long)arg1 liveMsg:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, MMWebImageView, SightIconView, UIImageView, UILabel, WCFinderAuthInfoIconView;

@interface WCFinderSharePreConfirmView : UIView
{
    MMWebImageView *_coverImageView;
    MMWebImageView *_avatarImageView;
    SightIconView *_playIconView;
    UIImageView *_iconView;
    UIView *_photoDotsView;
    UILabel *_nameLabel;
    UILabel *_descLabel;
    WCFinderAuthInfoIconView *_authIconView;
    CAGradientLayer *_gradientLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authIconView; // @synthesize authIconView=_authIconView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIView *photoDotsView; // @synthesize photoDotsView=_photoDotsView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) SightIconView *playIconView; // @synthesize playIconView=_playIconView;
@property(retain, nonatomic) MMWebImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) MMWebImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
- (void)onLoadImageOK:(id)arg1;
- (double)coverRatioWithMediaItem:(id)arg1;
- (void)layoutCardBottomViews;
- (void)renderWithFinderShareItem:(id)arg1;

@end

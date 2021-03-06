//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIButton.h"

@class MMWebImageView, UIImageView, UIView;

@interface WCWebImageSourceInfoButton : MMUIButton
{
    UIView *_roundBackView;
    UIView *_coverBackView;
    MMWebImageView *_iconImgView;
    UIImageView *_arrowImgView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowImgView; // @synthesize arrowImgView=_arrowImgView;
@property(retain, nonatomic) MMWebImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
@property(retain, nonatomic) UIView *coverBackView; // @synthesize coverBackView=_coverBackView;
@property(retain, nonatomic) UIView *roundBackView; // @synthesize roundBackView=_roundBackView;
- (void)layoutSubviews;
- (void)updateButtonContentWithImageURL:(id)arg1 title:(id)arg2 maxWidth:(double)arg3;
- (void)initArrowView;
- (void)initIconImgView;
- (id)init;

@end


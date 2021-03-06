//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class MMUILabel, MMWebImageView, UIButton, UIImageView, UILabel, UIView, WCFinderHeadImageView;

@interface MMLiveFollowConfirmView : MMUIView
{
    _Bool _isPop;
    CDUnknownBlockType _block;
    UIView *_dialogView;
    UILabel *_title;
    WCFinderHeadImageView *_anchorHeadImageView;
    MMUILabel *_anchorNameLabel;
    MMWebImageView *_authIconView;
    MMUILabel *_followNumLabel;
    UIButton *_exitButton;
    UIButton *_followButton;
    MMUILabel *_isFollowed;
    UIImageView *_followedIcon;
    UIView *_vertLine;
    UIView *_horiLine;
    long long _friendFollowCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long friendFollowCount; // @synthesize friendFollowCount=_friendFollowCount;
@property(nonatomic) _Bool isPop; // @synthesize isPop=_isPop;
@property(retain, nonatomic) UIView *horiLine; // @synthesize horiLine=_horiLine;
@property(retain, nonatomic) UIView *vertLine; // @synthesize vertLine=_vertLine;
@property(retain, nonatomic) UIImageView *followedIcon; // @synthesize followedIcon=_followedIcon;
@property(retain, nonatomic) MMUILabel *isFollowed; // @synthesize isFollowed=_isFollowed;
@property(retain, nonatomic) UIButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UIButton *exitButton; // @synthesize exitButton=_exitButton;
@property(retain, nonatomic) MMUILabel *followNumLabel; // @synthesize followNumLabel=_followNumLabel;
@property(retain, nonatomic) MMWebImageView *authIconView; // @synthesize authIconView=_authIconView;
@property(retain, nonatomic) MMUILabel *anchorNameLabel; // @synthesize anchorNameLabel=_anchorNameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *anchorHeadImageView; // @synthesize anchorHeadImageView=_anchorHeadImageView;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIView *dialogView; // @synthesize dialogView=_dialogView;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void)hideView:(long long)arg1;
- (void)delayClose;
- (void)onFollowClickBtn:(id)arg1;
- (void)onExitClickBtn:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layoutFinderLiveFollowConfirm:(id)arg1 isPopup:(_Bool)arg2 isTop:(_Bool)arg3;
- (void)layoutBoundBizLiveFollowConfirm:(id)arg1 liveContext:(id)arg2 isPopup:(_Bool)arg3;
- (void)showWithContact:(id)arg1 liveContext:(id)arg2 isPopup:(_Bool)arg3 isTop:(_Bool)arg4;
- (void)showWithContact:(id)arg1 isPopup:(_Bool)arg2 isTop:(_Bool)arg3;
- (void)updateAuthInfo:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


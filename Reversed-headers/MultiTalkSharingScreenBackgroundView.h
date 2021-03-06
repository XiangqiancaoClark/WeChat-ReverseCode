//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MultiTalkHDHeadView, NSString, UIButton, UIImageView, UILabel;

@interface MultiTalkSharingScreenBackgroundView : UIView
{
    _Bool _shouldShowOperationViews;
    _Bool _canShowUserAvatarView;
    UIView *_topBar;
    UIButton *_closeButton;
    UILabel *_titleLabel;
    CDUnknownBlockType _closeCallback;
    CDUnknownBlockType _userTapToChangeOperationViewsAppearanceCallback;
    NSString *_sharingScreenUserName;
    NSString *_currentTalkingUserName;
    MultiTalkHDHeadView *_userAvatarView;
    UIImageView *_talkingIcon;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool canShowUserAvatarView; // @synthesize canShowUserAvatarView=_canShowUserAvatarView;
@property(retain, nonatomic) UIImageView *talkingIcon; // @synthesize talkingIcon=_talkingIcon;
@property(retain, nonatomic) MultiTalkHDHeadView *userAvatarView; // @synthesize userAvatarView=_userAvatarView;
@property(copy, nonatomic) NSString *currentTalkingUserName; // @synthesize currentTalkingUserName=_currentTalkingUserName;
@property(copy, nonatomic) NSString *sharingScreenUserName; // @synthesize sharingScreenUserName=_sharingScreenUserName;
@property(nonatomic) _Bool shouldShowOperationViews; // @synthesize shouldShowOperationViews=_shouldShowOperationViews;
@property(copy, nonatomic) CDUnknownBlockType userTapToChangeOperationViewsAppearanceCallback; // @synthesize userTapToChangeOperationViewsAppearanceCallback=_userTapToChangeOperationViewsAppearanceCallback;
@property(copy, nonatomic) CDUnknownBlockType closeCallback; // @synthesize closeCallback=_closeCallback;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *topBar; // @synthesize topBar=_topBar;
- (void)rotationDetectorRoationDidChange:(id)arg1;
- (void)updateTalkingMembersWithUsersName:(id)arg1;
- (void)updateSharingScreenUserName:(id)arg1;
- (void)clearData;
- (void)updateOperationViewsAppearance;
- (void)updateOperationViewsShouldShow:(_Bool)arg1;
- (void)onTapView;
- (void)onCloseButtonClick;
- (void)checkAndAnimateToHideUserAvatarView;
- (void)updateUserAvatar;
- (void)layoutUserAvatarView;
- (void)layoutTitleLabel;
- (void)layoutCloseButton;
- (void)layoutTopBar;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end


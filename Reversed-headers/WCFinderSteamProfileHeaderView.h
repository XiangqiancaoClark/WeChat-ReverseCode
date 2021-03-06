//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ILinkEventExt-Protocol.h"
#import "MMUserInterfaceStyleOverrideProtocol-Protocol.h"
#import "WCFinderFittingWithRichViewDelegate-Protocol.h"
#import "WCFinderHeadImageViewDelegate-Protocol.h"
#import "WCFinderProfileServiceViewDelegate-Protocol.h"
#import "WCFinderStreamProfileContactViewModelDelegate-Protocol.h"

@class CAGradientLayer, CALayer, MMBadgeView, MMWebImageView, NSMutableDictionary, NSString, UIButton, WCFinderHeadImageView, WCFinderLinearView, WCFinderProfileReporter, WCFinderSteamProfileHeaderTheme, WCFinderSteamProfileHeaderViewMeasure, WCFinderStreamProfileContactViewModel;
@protocol WCFinderSteamProfileHeaderViewDelegate><WCFinderSteamProfileHeaderViewSizeToFitDelegate;

@interface WCFinderSteamProfileHeaderView : UIView <WCFinderHeadImageViewDelegate, ILinkEventExt, WCFinderFittingWithRichViewDelegate, WCFinderStreamProfileContactViewModelDelegate, MMUserInterfaceStyleOverrideProtocol, WCFinderProfileServiceViewDelegate>
{
    _Bool limitOne;
    _Bool _showCornerMask;
    WCFinderProfileReporter *_reporter;
    WCFinderSteamProfileHeaderTheme *_theme;
    id <WCFinderSteamProfileHeaderViewDelegate><WCFinderSteamProfileHeaderViewSizeToFitDelegate> _delegate;
    WCFinderSteamProfileHeaderViewMeasure *_measure;
    WCFinderStreamProfileContactViewModel *_viewModel;
    UIView *_headerImageContainer;
    WCFinderHeadImageView *_headImageView;
    UIButton *_moreActionButton;
    UIButton *_followButton;
    UIButton *_messageButton;
    MMBadgeView *_actionBadgeView;
    UIView *_bgView;
    UIView *_shimView;
    CALayer *_cornerMaskLayer;
    MMWebImageView *_coverView;
    CAGradientLayer *_coverMaskLayer;
    CALayer *_coverForegroundMask;
    WCFinderLinearView *_userNameInfoContaner;
    WCFinderLinearView *_nameAreaContainer;
    WCFinderLinearView *_tagsContainer;
    UIView *_infoContainer;
    NSMutableDictionary *_infoItemInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *infoItemInsets; // @synthesize infoItemInsets=_infoItemInsets;
@property(retain, nonatomic) UIView *infoContainer; // @synthesize infoContainer=_infoContainer;
@property(retain, nonatomic) WCFinderLinearView *tagsContainer; // @synthesize tagsContainer=_tagsContainer;
@property(retain, nonatomic) WCFinderLinearView *nameAreaContainer; // @synthesize nameAreaContainer=_nameAreaContainer;
@property(retain, nonatomic) WCFinderLinearView *userNameInfoContaner; // @synthesize userNameInfoContaner=_userNameInfoContaner;
@property(retain, nonatomic) CALayer *coverForegroundMask; // @synthesize coverForegroundMask=_coverForegroundMask;
@property(retain, nonatomic) CAGradientLayer *coverMaskLayer; // @synthesize coverMaskLayer=_coverMaskLayer;
@property(retain, nonatomic) MMWebImageView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) CALayer *cornerMaskLayer; // @synthesize cornerMaskLayer=_cornerMaskLayer;
@property(retain, nonatomic) UIView *shimView; // @synthesize shimView=_shimView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) MMBadgeView *actionBadgeView; // @synthesize actionBadgeView=_actionBadgeView;
@property(retain, nonatomic) UIButton *messageButton; // @synthesize messageButton=_messageButton;
@property(retain, nonatomic) UIButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UIButton *moreActionButton; // @synthesize moreActionButton=_moreActionButton;
@property(retain, nonatomic) WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UIView *headerImageContainer; // @synthesize headerImageContainer=_headerImageContainer;
@property(retain, nonatomic) WCFinderStreamProfileContactViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) _Bool showCornerMask; // @synthesize showCornerMask=_showCornerMask;
@property(retain, nonatomic) WCFinderSteamProfileHeaderViewMeasure *measure; // @synthesize measure=_measure;
@property(nonatomic) __weak id <WCFinderSteamProfileHeaderViewDelegate><WCFinderSteamProfileHeaderViewSizeToFitDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCFinderSteamProfileHeaderTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) WCFinderProfileReporter *reporter; // @synthesize reporter=_reporter;
- (void)onRichView:(id)arg1 expandChanged:(_Bool)arg2;
- (long long)currentMMUserInterfaceStyle;
- (long long)overrideMMUserInterfaceStyle;
- (long long)overrideUserInterfaceStyle;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (void)onHeaderViewCoverChanged:(long long)arg1;
- (void)onHeaderViewModelChanged;
- (id)createBGPath:(struct CGRect)arg1 cornerRadii:(double)arg2;
- (void)setupLayer:(id)arg1 superLayer:(id)arg2 display:(_Bool)arg3;
- (void)updateCornerMaskLayer;
- (id)createBGLayerMask;
- (void)updateBGViewFrame;
- (void)sizeToFit;
- (double)layoutInfoContainer;
- (void)layoutUserNameInfoContaner:(double)arg1;
- (double)containerMaxWidth;
- (double)layoutHeaderArea;
- (double)layoutElements;
- (void)calculateSizeForInfoContaierFieldViews;
- (void)onClickServiceMenuItem:(id)arg1;
- (void)setupServiceView;
- (void)setupRedPacketEventView;
- (void)setupCards;
- (void)setupMiniApp;
- (void)setupStoreView;
- (void)setupAddFriendView;
- (_Bool)showServiceWecomKF;
- (_Bool)showWecomKF;
- (void)setupWecomKFView;
- (void)setupBrandInfoView;
- (void)setupPOIView;
- (void)setupFans;
- (void)setupShowInWXProfile;
- (void)setupFollowCount;
- (id)signatureDisplayText;
- (void)setupSignature;
- (void)setupSignatureGuide;
- (void)setupGameAchievement;
- (void)setupAuthInfoView;
- (_Bool)hiddenMessageButton;
- (void)setupMessageButton;
- (void)setupButton:(id)arg1 bgColor:(id)arg2;
- (void)setupFollowButton;
- (void)setupMoreActionBadgeView:(_Bool)arg1;
- (void)setupMoreActionButtonTheme;
- (void)setupMoreActionView;
- (void)setupTagViews;
- (void)setupHeaderView;
- (id)subElement:(unsigned long long)arg1 inContainer:(id)arg2 creator:(CDUnknownBlockType)arg3;
- (void)updateWithViewModel:(id)arg1;
- (id)cover;
- (void)parseCoverThemeColor;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setupBgColor;
- (void)setupBgCover;
- (id)createMaskButtonWithAccessibility:(id)arg1 maskColor:(id)arg2;
- (id)createMoreActionButton;
- (id)createIconArrowField:(id)arg1;
- (id)createLinkIconArrowField:(id)arg1 coveredIcon:(id)arg2;
- (id)createColorIconArrowField:(id)arg1 coveredIcon:(id)arg2;
- (id)createLabel:(id)arg1 color:(id)arg2 coveredColor:(id)arg3;
- (id)createHeadImageView;
- (id)createHeadImageViewContainer;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


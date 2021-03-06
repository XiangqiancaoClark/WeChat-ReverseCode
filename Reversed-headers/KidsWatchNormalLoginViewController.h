//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KidsWatchBaseViewController.h"

@class KidsWatchButton, KidsWatchSwitchCardView, KidsWatchTipsButton;
@protocol KidsWatchNormalLoginViewControllerDelegate;

@interface KidsWatchNormalLoginViewController : KidsWatchBaseViewController
{
    KidsWatchSwitchCardView *_switchCardView;
    KidsWatchTipsButton *_tipsButton;
    KidsWatchButton *_loginButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) KidsWatchButton *loginButton; // @synthesize loginButton=_loginButton;
@property(retain, nonatomic) KidsWatchTipsButton *tipsButton; // @synthesize tipsButton=_tipsButton;
@property(retain, nonatomic) KidsWatchSwitchCardView *switchCardView; // @synthesize switchCardView=_switchCardView;
- (void)onTapTipsButton;
- (void)onTapLoginButton;
- (void)initSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(nonatomic) __weak id <KidsWatchNormalLoginViewControllerDelegate> delegate; // @dynamic delegate;

@end


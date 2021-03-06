//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KidsWatchBaseViewController.h"

@class KidsWatchFlexibleImageView, NSArray, UIButton;
@protocol KidsWatchKidsLoginViewControllerDelegate;

@interface KidsWatchKidsLoginViewController : KidsWatchBaseViewController
{
    NSArray *_kidsAccountInfoList;
    UIButton *_switchAccountButton;
    KidsWatchFlexibleImageView *_bottomRightBackgroundView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) KidsWatchFlexibleImageView *bottomRightBackgroundView; // @synthesize bottomRightBackgroundView=_bottomRightBackgroundView;
@property(retain, nonatomic) UIButton *switchAccountButton; // @synthesize switchAccountButton=_switchAccountButton;
@property(retain, nonatomic) NSArray *kidsAccountInfoList; // @synthesize kidsAccountInfoList=_kidsAccountInfoList;
- (_Bool)shouldInteractivePop;
- (void)onTapKidsLoginCloseBarButtonItem;
- (void)onTapSwitchAccountButton;
- (void)onTapItemView:(id)arg1;
- (void)refreshView;
- (void)setupWithData:(id)arg1;
- (void)layoutSubviews;
- (void)initSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(nonatomic) __weak id <KidsWatchKidsLoginViewControllerDelegate> delegate; // @dynamic delegate;

@end


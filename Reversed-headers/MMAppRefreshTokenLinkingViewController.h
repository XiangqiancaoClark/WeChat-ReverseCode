//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

@class DotLoadingView, MMAppRefreshTokenAppInfo, MMWebImageView, UIImageView, UILabel;

@interface MMAppRefreshTokenLinkingViewController : MMUIViewController
{
    unsigned int _scene;
    UIImageView *_wxIconImageView;
    MMWebImageView *_appIconImageView;
    UILabel *_titleLabel;
    DotLoadingView *_dotLoadingView;
    MMAppRefreshTokenAppInfo *_appInfo;
    CDUnknownBlockType _dimisssHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType dimisssHandler; // @synthesize dimisssHandler=_dimisssHandler;
@property(retain, nonatomic) MMAppRefreshTokenAppInfo *appInfo; // @synthesize appInfo=_appInfo;
@property(retain, nonatomic) DotLoadingView *dotLoadingView; // @synthesize dotLoadingView=_dotLoadingView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *appIconImageView; // @synthesize appIconImageView=_appIconImageView;
@property(retain, nonatomic) UIImageView *wxIconImageView; // @synthesize wxIconImageView=_wxIconImageView;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
- (void)reportLaunchSchemeSuccess;
- (void)reportLaunchUniversalLinkFailWithToken:(id)arg1 errMsg:(id)arg2;
- (void)reportLaunch3rdWithUniversalLink:(id)arg1 token:(id)arg2 success:(_Bool)arg3;
- (void)onClose;
- (void)onLaunch3rdApp;
- (void)delayDismissMyself;
- (void)layoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)initSubviews;
- (void)initNavigationBar;
- (void)viewDidLoad;
- (id)initWithWithAppInfo:(id)arg1 dimisssHandler:(CDUnknownBlockType)arg2;

@end


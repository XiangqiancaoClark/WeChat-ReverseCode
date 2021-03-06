//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMFinderLiveConnectMicUser, WCFinderHeadImageView;

@interface MMFinderLiveCDNPlayerSingleMicUserView : UIView
{
    MMFinderLiveConnectMicUser *_userInfo;
    unsigned long long _index;
    unsigned long long _totalCount;
    WCFinderHeadImageView *_headImageView;
    WCFinderHeadImageView *_backgroundHeadImageView;
    UIView *_audioUserBlurView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *audioUserBlurView; // @synthesize audioUserBlurView=_audioUserBlurView;
@property(retain, nonatomic) WCFinderHeadImageView *backgroundHeadImageView; // @synthesize backgroundHeadImageView=_backgroundHeadImageView;
@property(retain, nonatomic) WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(nonatomic) unsigned long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(retain, nonatomic) MMFinderLiveConnectMicUser *userInfo; // @synthesize userInfo=_userInfo;
- (void)clearAndHide;
- (void)showWithConnectMicUserInfo:(id)arg1;
- (void)layoutUI;
- (void)configUI;
- (void)layoutSubviews;
- (void)updateHeadImageView;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVPlayer, AVPlayerItem, AVPlayerLayer, NSString, UIButton, UIImage, UIImageView;

@interface ShortVideoToolbarPreviewView : UIView
{
    _Bool _bOnEditting;
    _Bool _isPlaying;
    CDUnknownBlockType _didClickRetakeBlock;
    CDUnknownBlockType _didClickDoneBlock;
    CDUnknownBlockType _didClickMuteBlock;
    CDUnknownBlockType _didClickEditBlock;
    CDUnknownBlockType _didClickEditVideoBlock;
    unsigned long long _m_scene;
    UIImage *_image;
    NSString *_videoPath;
    UIView *_backgrounView;
    UIView *_previewView;
    UIImageView *_imageView;
    UIView *_playerView;
    UIView *_bottomView;
    UIButton *_retakeButton;
    UIView *_retakeBgView;
    UIButton *_confirmButton;
    UIButton *_editButton;
    UIImageView *_m_topBkgView;
    UIButton *_editVideo;
    UIView *_editBackView;
    AVPlayerItem *_playerItem;
    AVPlayer *_player;
    AVPlayerLayer *_playerLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(retain, nonatomic) UIView *editBackView; // @synthesize editBackView=_editBackView;
@property(retain, nonatomic) UIButton *editVideo; // @synthesize editVideo=_editVideo;
@property(retain, nonatomic) UIImageView *m_topBkgView; // @synthesize m_topBkgView=_m_topBkgView;
@property(retain, nonatomic) UIButton *editButton; // @synthesize editButton=_editButton;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIView *retakeBgView; // @synthesize retakeBgView=_retakeBgView;
@property(retain, nonatomic) UIButton *retakeButton; // @synthesize retakeButton=_retakeButton;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *previewView; // @synthesize previewView=_previewView;
@property(retain, nonatomic) UIView *backgrounView; // @synthesize backgrounView=_backgrounView;
@property(retain, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) _Bool bOnEditting; // @synthesize bOnEditting=_bOnEditting;
@property(nonatomic) unsigned long long m_scene; // @synthesize m_scene=_m_scene;
@property(copy, nonatomic) CDUnknownBlockType didClickEditVideoBlock; // @synthesize didClickEditVideoBlock=_didClickEditVideoBlock;
@property(copy, nonatomic) CDUnknownBlockType didClickEditBlock; // @synthesize didClickEditBlock=_didClickEditBlock;
@property(copy, nonatomic) CDUnknownBlockType didClickMuteBlock; // @synthesize didClickMuteBlock=_didClickMuteBlock;
@property(copy, nonatomic) CDUnknownBlockType didClickDoneBlock; // @synthesize didClickDoneBlock=_didClickDoneBlock;
@property(copy, nonatomic) CDUnknownBlockType didClickRetakeBlock; // @synthesize didClickRetakeBlock=_didClickRetakeBlock;
- (void)didEnterBackground;
- (void)willEnterForeground;
- (void)stopVideo;
- (void)didClickEditVideo;
- (void)didClickEdit;
- (void)didClickMute;
- (void)didClickDone;
- (void)didClickRetake;
- (void)playButtonAnimation;
- (void)setupBottomView;
- (void)setupTopView;
- (void)setupPreviewView;
- (void)playerItemDidReachEnd:(id)arg1;
- (void)continuePlayVideo;
- (void)pauseVideo;
- (id)setImage:(id)arg1 Orientation:(long long)arg2 isFrontCamera:(_Bool)arg3;
- (void)setVideoPath:(id)arg1 withOrientation:(long long)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

@class MMBubbleLayer, MMScrollView, NSMutableArray, UIView, WSVideoModel;
@protocol WSVideoFlowMoreOpDelegate;

@interface WSVideoFlowMoreOpViewController : MMUIViewController
{
    UIView *_coverView;
    MMScrollView *_contentFloatView;
    MMBubbleLayer *_contentFloatViewMask;
    NSMutableArray *_opItems;
    NSMutableArray *_opButtonViews;
    NSMutableArray *_opButtonLines;
    double _maxWidth;
    struct CGRect _refFrame;
    id <WSVideoFlowMoreOpDelegate> _delegate;
    WSVideoModel *_videoModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WSVideoModel *videoModel; // @synthesize videoModel=_videoModel;
@property(nonatomic) __weak id <WSVideoFlowMoreOpDelegate> delegate; // @synthesize delegate=_delegate;
- (void)smartSetAnchorPoint:(struct CGPoint)arg1 forView:(id)arg2;
- (void)animateHideWithCompleteBlock:(CDUnknownBlockType)arg1;
- (void)configArrowPos:(int)arg1 refFrame:(struct CGRect)arg2;
- (void)animatShowOnView:(id)arg1 refFrame:(struct CGRect)arg2 needForceAnchorPos:(_Bool)arg3 arrowDirection:(int)arg4;
- (void)animatShowOnView:(id)arg1 refFrame:(struct CGRect)arg2;
- (void)configOpItems:(id)arg1;
- (void)pop;
- (void)internalLayout;
- (void)onTapCancel:(id)arg1;
- (void)onTapOpButton:(id)arg1;
- (void)initView;
- (void)viewDidLoad;

@end


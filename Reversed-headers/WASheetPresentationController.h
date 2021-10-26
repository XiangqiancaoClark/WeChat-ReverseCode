//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPresentationController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class CAShapeLayer, NSString, UIPanGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol WASheetPresentationControllerDelegete;

@interface WASheetPresentationController : UIPresentationController <UIGestureRecognizerDelegate>
{
    _Bool _isPushOrPresenting;
    _Bool _expanded;
    _Bool _expandAnimating;
    _Bool _isDraggingDown;
    id <WASheetPresentationControllerDelegete> _sheetDelegate;
    UIView *_contentView;
    CAShapeLayer *_shapeLayer;
    UIView *_fakeStatusBarView;
    UITapGestureRecognizer *_tapBackgroundGesture;
    UITapGestureRecognizer *_tapGesture;
    UIPanGestureRecognizer *_panGesture;
    double _panBeginY;
    double _dragBeginY;
    double _currentContentY;
    double _dragContentHeight;
    double _currentWidth;
    struct CGPoint _currentContentOffset;
}

- (void).cxx_destruct;
@property(nonatomic) double currentWidth; // @synthesize currentWidth=_currentWidth;
@property(nonatomic) _Bool isDraggingDown; // @synthesize isDraggingDown=_isDraggingDown;
@property(nonatomic) _Bool expandAnimating; // @synthesize expandAnimating=_expandAnimating;
@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(nonatomic) _Bool isPushOrPresenting; // @synthesize isPushOrPresenting=_isPushOrPresenting;
@property(nonatomic) struct CGPoint currentContentOffset; // @synthesize currentContentOffset=_currentContentOffset;
@property(nonatomic) double dragContentHeight; // @synthesize dragContentHeight=_dragContentHeight;
@property(nonatomic) double currentContentY; // @synthesize currentContentY=_currentContentY;
@property(nonatomic) double dragBeginY; // @synthesize dragBeginY=_dragBeginY;
@property(nonatomic) double panBeginY; // @synthesize panBeginY=_panBeginY;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UITapGestureRecognizer *tapBackgroundGesture; // @synthesize tapBackgroundGesture=_tapBackgroundGesture;
@property(retain, nonatomic) UIView *fakeStatusBarView; // @synthesize fakeStatusBarView=_fakeStatusBarView;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <WASheetPresentationControllerDelegete> sheetDelegate; // @synthesize sheetDelegate=_sheetDelegate;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)shouldDismiss;
- (_Bool)shouldReturnToNormal;
- (_Bool)shouldExpand;
- (void)onFirstWebViewDidNavigateOut;
- (void)onFirstWebViewDidEndDragging:(id)arg1;
- (void)onFirstWebViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(struct CGPoint *)arg3;
- (void)onFirstWebViewWillBeginDragging:(id)arg1;
- (void)onFirstWebViewDidScroll:(id)arg1;
- (_Bool)shouldForbidDragUpGesture:(id)arg1;
- (_Bool)shouldDragByGesture:(id)arg1;
- (void)onDidAppear;
- (void)onDidPushViewController:(id)arg1;
- (void)onDidPresentViewController:(id)arg1;
- (void)onPan:(id)arg1;
- (double)fullScreenContentY;
- (void)onDragToExpandWithReason:(unsigned long long)arg1;
- (void)onReturnToNormal;
- (void)onDragToDismiss;
- (void)onTap:(id)arg1;
- (void)onTapBackground:(id)arg1;
- (_Bool)backgroundUserInteractionEnabled;
- (id)backgroundColor;
- (double)cornerRadius;
- (unsigned long long)rectCorner;
- (id)presentedView;
- (struct CGSize)getLandscapeSheetSize;
- (struct CGSize)getSheetSize;
- (double)getSafeBottomInset;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (void)setUpContainerView;
- (void)containerViewDidLayoutSubviews;
- (void)layoutContentView;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionWillBegin;
- (void)initShapeLayer;
- (void)initFakeStatusBarView;
- (void)initContentView;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

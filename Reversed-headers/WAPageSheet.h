//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "WAPageSheetContainerViewDelegate-Protocol.h"

@class NSString, UIView, WAPageSheetContainerView;
@protocol WAPageSheetDelegate;

@interface WAPageSheet : MMObject <WAPageSheetContainerViewDelegate>
{
    _Bool _isShown;
    _Bool _forbidTapToDismiss;
    _Bool _bSupportRotate;
    _Bool _isShowing;
    _Bool _isDismissing;
    id <WAPageSheetDelegate> _delegate;
    UIView *_parentView;
    UIView *_contentView;
    WAPageSheetContainerView *_containerView;
    UIView *_interateView;
    WAPageSheet *_retainSheet;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isDismissing; // @synthesize isDismissing=_isDismissing;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(retain, nonatomic) WAPageSheet *retainSheet; // @synthesize retainSheet=_retainSheet;
@property(retain, nonatomic) UIView *interateView; // @synthesize interateView=_interateView;
@property(retain, nonatomic) WAPageSheetContainerView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) _Bool bSupportRotate; // @synthesize bSupportRotate=_bSupportRotate;
@property(nonatomic) _Bool forbidTapToDismiss; // @synthesize forbidTapToDismiss=_forbidTapToDismiss;
@property(nonatomic) _Bool isShown; // @synthesize isShown=_isShown;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(nonatomic) __weak id <WAPageSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (double)operateButtonBottomInset;
- (void)didRotate:(id)arg1;
- (void)pageSheetContainerViewWillBeRemoved;
- (void)tapOnInterateView:(id)arg1;
- (double)contentHeight;
- (double)contentWidth;
- (void)resetContentViewCornerRadius;
- (void)relayoutSubViews;
- (void)layoutSubViews;
- (void)loadSubViews;
- (void)initContentView;
- (void)initInterateView;
- (void)initContainerView;
- (void)loadViews;
- (void)resetPosition;
- (void)dismissNoAnimation;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissWithAnimation;
- (void)resetShownPosition;
- (void)showInView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


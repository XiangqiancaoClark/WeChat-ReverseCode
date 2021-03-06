//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIHalfScreenViewController.h"

#import "MMUIHalfScreenViewControllerDelegate-Protocol.h"

@class MMUILabel, NSString, RichTextView, UIButton, UIView;

@interface WCLiveHalfScreenView : MMUIHalfScreenViewController <MMUIHalfScreenViewControllerDelegate>
{
    _Bool _hasCancelButton;
    _Bool _isShorterHalfVC;
    _Bool _isShown;
    CDUnknownBlockType _confirmCallback;
    CDUnknownBlockType _cancelCallback;
    NSString *_confirmButtonLabel;
    MMUILabel *_infoTitle;
    RichTextView *_infoDesc;
    UIButton *_confirmButton;
    UIButton *_cancelButton;
    NSString *_desc;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isShown; // @synthesize isShown=_isShown;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) RichTextView *infoDesc; // @synthesize infoDesc=_infoDesc;
@property(retain, nonatomic) MMUILabel *infoTitle; // @synthesize infoTitle=_infoTitle;
@property(nonatomic) _Bool isShorterHalfVC; // @synthesize isShorterHalfVC=_isShorterHalfVC;
@property(nonatomic) _Bool hasCancelButton; // @synthesize hasCancelButton=_hasCancelButton;
@property(retain, nonatomic) NSString *confirmButtonLabel; // @synthesize confirmButtonLabel=_confirmButtonLabel;
@property(copy, nonatomic) CDUnknownBlockType cancelCallback; // @synthesize cancelCallback=_cancelCallback;
@property(copy, nonatomic) CDUnknownBlockType confirmCallback; // @synthesize confirmCallback=_confirmCallback;
- (void)notifySelfPopedOrDismissed;
- (void)popOrDismissSelfWithCompletion:(CDUnknownBlockType)arg1;
- (void)popOrDismissSelf;
- (void)onArrowButtonClicked;
- (void)onCancelButtonClicked;
- (void)onConfirmButtonClicked;
- (void)layoutConfrimAndCancelButtons;
- (void)updateConfirmButtonLayout;
- (void)layoutLiveConfirmButton;
- (void)layoutUI;
- (void)setupUI;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithTitle:(id)arg1 andDesc:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) UIView *detailView;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *title;

@end


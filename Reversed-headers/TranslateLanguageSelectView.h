//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPageSheetBaseView.h"

#import "MMPageSheetBottomViewDelegate-Protocol.h"

@class NSString, UIView;
@protocol TranslateLanguageSelectViewDelegate;

@interface TranslateLanguageSelectView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    _Bool _bShowCloseBtn;
    id <TranslateLanguageSelectViewDelegate> _delegate;
    NSString *_selectedLanguageType;
    UIView *_selectedPanelView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bShowCloseBtn; // @synthesize bShowCloseBtn=_bShowCloseBtn;
@property(retain, nonatomic) UIView *selectedPanelView; // @synthesize selectedPanelView=_selectedPanelView;
@property(retain, nonatomic) NSString *selectedLanguageType; // @synthesize selectedLanguageType=_selectedLanguageType;
@property(nonatomic) __weak id <TranslateLanguageSelectViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)pageSheetWillClose:(_Bool)arg1;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (void)onTapSelectLanguageButton:(id)arg1;
- (void)showWithAnimated:(_Bool)arg1;
- (id)getChatName;
- (void)setChatName:(id)arg1;
- (void)configSelectedPanelView;
- (void)configPageSheet;
- (id)initWithFrame:(struct CGRect)arg1 bShowCloseBtn:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


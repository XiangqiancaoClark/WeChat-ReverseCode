//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMMGrowTextViewExt-Protocol.h"
#import "MMGrowTextViewDelegate-Protocol.h"
#import "MMPageSheetAdapterDelegate-Protocol.h"
#import "MMPageSheetBottomViewDelegate-Protocol.h"

@class MMGrowTextView, MMPageSheetAdapter, MMUILabel, NSString, UIButton, UIView, WCPayRemarkPageSheetConfig;
@protocol WCPayRemarkPageSheetDelegate;

@interface WCPayRemarkPageSheet : NSObject <MMGrowTextViewDelegate, MMPageSheetBottomViewDelegate, IMMGrowTextViewExt, MMPageSheetAdapterDelegate>
{
    _Bool _bIsShowing;
    id <WCPayRemarkPageSheetDelegate> _delegate;
    WCPayRemarkPageSheetConfig *_config;
    MMPageSheetAdapter *_pageAdapter;
    UIView *_pageSheetDetailView;
    UIView *_textbackgroundView;
    MMGrowTextView *_textView;
    MMUILabel *_inputCountLabel;
    UIButton *_rightButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) MMUILabel *inputCountLabel; // @synthesize inputCountLabel=_inputCountLabel;
@property(retain, nonatomic) MMGrowTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIView *textbackgroundView; // @synthesize textbackgroundView=_textbackgroundView;
@property(retain, nonatomic) UIView *pageSheetDetailView; // @synthesize pageSheetDetailView=_pageSheetDetailView;
@property(retain, nonatomic) MMPageSheetAdapter *pageAdapter; // @synthesize pageAdapter=_pageAdapter;
@property(nonatomic) _Bool bIsShowing; // @synthesize bIsShowing=_bIsShowing;
@property(retain, nonatomic) WCPayRemarkPageSheetConfig *config; // @synthesize config=_config;
@property(nonatomic) __weak id <WCPayRemarkPageSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void)pageSheetDidClose:(id)arg1 isManualTrigger:(_Bool)arg2;
- (void)pageSheetWillClose:(id)arg1 isManualTrigger:(_Bool)arg2;
- (void)pageSheetDidDisappear:(id)arg1;
- (void)pageSheetWillDisappear:(id)arg1;
- (void)pageSheetDidAppear:(id)arg1;
- (void)pageSheetWillAppear:(id)arg1;
- (void)onTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)TextViewHeightDidChanged:(id)arg1;
- (void)TextDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (double)bottomViewBottomMargin;
- (double)bottomViewTopMargin;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)dismissPage;
- (_Bool)isRemarkPageSheetShowing;
- (id)getCurrntContent;
- (void)rightButtonClick;
- (void)dismissPageSheet;
- (void)showPageSheet;
- (void)updateConfig:(id)arg1;
- (double)updateViewStatus;
- (void)updatetextViewHeight;
- (void)setupDetailViewContent;
- (_Bool)shouldSetupDetailViewContent;
- (id)initWithConfig:(id)arg1 delegate:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

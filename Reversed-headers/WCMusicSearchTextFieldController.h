//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UITextFieldDelegate-Protocol.h"

@class MMTagTextField, NSString, UIImageView, UIView;

@interface WCMusicSearchTextFieldController : MMUIViewController <UITextFieldDelegate>
{
    double _lazySearchTimeInterval;
    UIView *_emptyMaskView;
    MMTagTextField *_headerSearchTextField;
    UIView *_headerSearchTextFieldBgView;
    UIImageView *_headerSearchLeftIconView;
    UIView *_searchHeaderBgView;
    UIView *_contentView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *searchHeaderBgView; // @synthesize searchHeaderBgView=_searchHeaderBgView;
@property(retain, nonatomic) UIImageView *headerSearchLeftIconView; // @synthesize headerSearchLeftIconView=_headerSearchLeftIconView;
@property(retain, nonatomic) UIView *headerSearchTextFieldBgView; // @synthesize headerSearchTextFieldBgView=_headerSearchTextFieldBgView;
@property(retain, nonatomic) MMTagTextField *headerSearchTextField; // @synthesize headerSearchTextField=_headerSearchTextField;
@property(retain, nonatomic) UIView *emptyMaskView; // @synthesize emptyMaskView=_emptyMaskView;
@property(nonatomic) double lazySearchTimeInterval; // @synthesize lazySearchTimeInterval=_lazySearchTimeInterval;
- (void)setMaskViewHidden:(_Bool)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)onDoneButtonClicked;
- (void)onTextCleared;
- (void)onTextChanged:(id)arg1;
- (void)handleScrollViewWillBeginDragging:(id)arg1;
- (void)showKeyboard;
- (void)hideKeyboard;
- (void)onTextFieldChanged:(id)arg1;
- (void)updateText:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)layoutSearchHeaderView;
- (void)initSearchHeaderBgView;
- (void)initSearchTextField;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


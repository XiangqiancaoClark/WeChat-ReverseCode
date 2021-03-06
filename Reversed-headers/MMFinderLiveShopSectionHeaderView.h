//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class MMUIButton, MMUILabel, UILabel, UIView;
@protocol MMFinderLiveShopSectionHeaderViewDelegate;

@interface MMFinderLiveShopSectionHeaderView : MMUIView
{
    _Bool _isAnchor;
    id <MMFinderLiveShopSectionHeaderViewDelegate> _delegate;
    unsigned long long _style;
    MMUILabel *_titleLabel;
    MMUIButton *_moreBtn;
    UIView *_addContainer;
    MMUIButton *_addBtn;
    UILabel *_addLabel;
    UIView *_manageContainer;
    MMUIButton *_manageBtn;
    UILabel *_manageLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *manageLabel; // @synthesize manageLabel=_manageLabel;
@property(retain, nonatomic) MMUIButton *manageBtn; // @synthesize manageBtn=_manageBtn;
@property(retain, nonatomic) UIView *manageContainer; // @synthesize manageContainer=_manageContainer;
@property(retain, nonatomic) UILabel *addLabel; // @synthesize addLabel=_addLabel;
@property(retain, nonatomic) MMUIButton *addBtn; // @synthesize addBtn=_addBtn;
@property(retain, nonatomic) UIView *addContainer; // @synthesize addContainer=_addContainer;
@property(retain, nonatomic) MMUIButton *moreBtn; // @synthesize moreBtn=_moreBtn;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) _Bool isAnchor; // @synthesize isAnchor=_isAnchor;
@property(nonatomic) __weak id <MMFinderLiveShopSectionHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onHeaderClicked;
- (void)layoutUI;
- (void)setTitle:(id)arg1 style:(unsigned long long)arg2 isAnchor:(_Bool)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


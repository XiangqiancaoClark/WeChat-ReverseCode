//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "WCFinderHeadImageViewDelegate-Protocol.h"

@class MMWebImageView, NSString, RichTextView, UILabel, UIView, WCFinderAggregatedTitleView, WCFinderHeadImageView, WCFinderNotifyCenterCellViewModel;
@protocol WCFinderNotifyUnifiedCellDelegate;

@interface WCFinderNotifyUnifiedTableViewCell : UITableViewCell <WCFinderHeadImageViewDelegate>
{
    WCFinderNotifyCenterCellViewModel *_viewModel;
    id <WCFinderNotifyUnifiedCellDelegate> _delegate;
    WCFinderAggregatedTitleView *_titleView;
    UILabel *_timestampLabel;
    MMWebImageView *_thumbImageView;
    RichTextView *_pureTextView;
    UIView *_refContentView;
    RichTextView *_refContentTextView;
    WCFinderHeadImageView *_headImageView;
    UIView *_mulityHeadImageView;
    WCFinderHeadImageView *_frontHeadImageView;
    WCFinderHeadImageView *_backHeadImageView;
    UIView *_lineView;
    UIView *_pureTextBackGroundView;
    UIView *_refContentLineView;
}

+ (double)getRefContentHeightWithViewModel:(id)arg1 width:(double)arg2;
+ (double)getTextMaxWidthWithFullWidth:(double)arg1;
+ (double)getTitleWidthWithTitle:(id)arg1 suffixTitle:(id)arg2 width:(double)arg3;
+ (_Bool)shouldShowSuffixTitleWithTitle:(id)arg1 width:(double)arg2;
+ (double)getHeightWithViewModel:(id)arg1 width:(double)arg2;
+ (_Bool)shouldHideRefContentWithViewModel:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak UIView *refContentLineView; // @synthesize refContentLineView=_refContentLineView;
@property(nonatomic) __weak UIView *pureTextBackGroundView; // @synthesize pureTextBackGroundView=_pureTextBackGroundView;
@property(nonatomic) __weak UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) __weak WCFinderHeadImageView *backHeadImageView; // @synthesize backHeadImageView=_backHeadImageView;
@property(nonatomic) __weak WCFinderHeadImageView *frontHeadImageView; // @synthesize frontHeadImageView=_frontHeadImageView;
@property(nonatomic) __weak UIView *mulityHeadImageView; // @synthesize mulityHeadImageView=_mulityHeadImageView;
@property(nonatomic) __weak WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(nonatomic) __weak RichTextView *refContentTextView; // @synthesize refContentTextView=_refContentTextView;
@property(nonatomic) __weak UIView *refContentView; // @synthesize refContentView=_refContentView;
@property(nonatomic) __weak RichTextView *pureTextView; // @synthesize pureTextView=_pureTextView;
@property(nonatomic) __weak MMWebImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(nonatomic) __weak UILabel *timestampLabel; // @synthesize timestampLabel=_timestampLabel;
@property(nonatomic) __weak WCFinderAggregatedTitleView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) __weak id <WCFinderNotifyUnifiedCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCFinderNotifyCenterCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (void)prepareForReuse;
- (void)updateNofiyCenterCellWithViewModel:(id)arg1 width:(double)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setUpViewLayout;
- (void)setUpPureTextView;
- (void)setupRefContentView;
- (void)setUpMulityImageView;
- (void)setUpUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


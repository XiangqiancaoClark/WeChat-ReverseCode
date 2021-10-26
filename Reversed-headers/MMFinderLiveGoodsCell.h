//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMFinderLiveGoodsBaseCell.h"

@class CAGradientLayer, CAShapeLayer, MMFinderLiveGoodsViewModel, MMLiveRichTextLabel, MMUIButton, MMUILabel, MMWebImageView, UIImageView, UITapGestureRecognizer, UIView;
@protocol MMFinderLiveGoodsCellDelegate;

@interface MMFinderLiveGoodsCell : MMFinderLiveGoodsBaseCell
{
    _Bool _isRealFirstCell;
    id <MMFinderLiveGoodsCellDelegate> _cellDelegate;
    MMUILabel *_serialNumLabel;
    MMLiveRichTextLabel *_goodsTitleLabel;
    MMUILabel *_stockLabel;
    MMUILabel *_priceLabel;
    MMUILabel *_platformLabel;
    MMWebImageView *_goodsImageView;
    MMUIButton *_actionButton;
    CAShapeLayer *_shapeLayer;
    MMFinderLiveGoodsViewModel *_goodsViewModel;
    UIView *_gradientShawdowView;
    CAGradientLayer *_gradientShadowLayer;
    UIImageView *_promotingIconView;
    MMUILabel *_promotingLabel;
    UIView *_firstSeperatorLine;
    UITapGestureRecognizer *_gestureRecognizer;
    UIView *_discountLabelsContainerView;
}

+ (id)buildAttributedStringWithTitle:(id)arg1 platformIcon:(id)arg2;
+ (id)getPlatformIconPaddingImage;
+ (double)getCellSeperatorXOffsetInSelectMode;
+ (double)getCellSeperatorXOffset;
+ (double)getCellHeight;
+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *discountLabelsContainerView; // @synthesize discountLabelsContainerView=_discountLabelsContainerView;
@property(retain, nonatomic) UITapGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(retain, nonatomic) UIView *firstSeperatorLine; // @synthesize firstSeperatorLine=_firstSeperatorLine;
@property(nonatomic) _Bool isRealFirstCell; // @synthesize isRealFirstCell=_isRealFirstCell;
@property(retain, nonatomic) MMUILabel *promotingLabel; // @synthesize promotingLabel=_promotingLabel;
@property(retain, nonatomic) UIImageView *promotingIconView; // @synthesize promotingIconView=_promotingIconView;
@property(retain, nonatomic) CAGradientLayer *gradientShadowLayer; // @synthesize gradientShadowLayer=_gradientShadowLayer;
@property(retain, nonatomic) UIView *gradientShawdowView; // @synthesize gradientShawdowView=_gradientShawdowView;
@property(retain, nonatomic) MMFinderLiveGoodsViewModel *goodsViewModel; // @synthesize goodsViewModel=_goodsViewModel;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) MMUIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) MMWebImageView *goodsImageView; // @synthesize goodsImageView=_goodsImageView;
@property(retain, nonatomic) MMUILabel *platformLabel; // @synthesize platformLabel=_platformLabel;
@property(retain, nonatomic) MMUILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) MMUILabel *stockLabel; // @synthesize stockLabel=_stockLabel;
@property(retain, nonatomic) MMLiveRichTextLabel *goodsTitleLabel; // @synthesize goodsTitleLabel=_goodsTitleLabel;
@property(retain, nonatomic) MMUILabel *serialNumLabel; // @synthesize serialNumLabel=_serialNumLabel;
@property(nonatomic) __weak id <MMFinderLiveGoodsCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
- (id)unSelectedImageForSelectedButton;
- (id)selectedImageForSelectedButton;
- (double)adjustedLeftOffsetForEditing;
- (id)accessibilityAttributedLabel;
- (id)priceToAttributedStringForAccessibility:(id)arg1;
- (id)createVerticalSeperator:(double)arg1;
- (void)updateTopMarginForFirstCell;
- (void)updateWithGoodsViewModel:(id)arg1;
- (void)adjustActionButtonSize;
- (void)adjustGoodsImageViewSize;
- (void)layoutUI;
- (void)removeExtraSeperateLine;
- (void)layoutSubviews;
- (void)createActionButton;
- (void)initViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

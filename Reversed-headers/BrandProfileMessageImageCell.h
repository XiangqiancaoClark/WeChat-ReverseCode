//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BrandProfileMessageBaseCell.h"

@class BrandProfileMessageImageViewModel, MMUILabel, UIImageView;

@interface BrandProfileMessageImageCell : BrandProfileMessageBaseCell
{
    UIImageView *m_imageIconView;
    MMUILabel *m_imageCountLabel;
}

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)layoutSubviewsNormalItem;
- (void)layoutSubviewsTopItem;
- (void)onUpdateViewModel;
- (void)initImageCountLabel;
- (void)initImageIconView;
- (void)initNormalReaderItem;
- (void)initTopReaderItem;

// Remaining properties
@property(readonly, nonatomic) BrandProfileMessageImageViewModel *viewModel; // @dynamic viewModel;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonMessageCellView.h"

@class MMWebImageView, UILabel, WCFinderSharePOIRelatedStreamCellViewModel;

@interface WCFinderSharePOIRelatedStreamCellView : CommonMessageCellView
{
    UILabel *_titleLabel;
    UILabel *_descLabel;
    MMWebImageView *_webImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMWebImageView *webImageView; // @synthesize webImageView=_webImageView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)onTouchUpInside;
- (void)onTouchDown;
- (id)operationMenuItems;
- (void)layoutContentView;

// Remaining properties
@property(retain, nonatomic) WCFinderSharePOIRelatedStreamCellViewModel *viewModel;

@end

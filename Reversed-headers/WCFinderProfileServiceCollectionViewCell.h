//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class MMWebImageView, UILabel;

@interface WCFinderProfileServiceCollectionViewCell : UICollectionViewCell
{
    MMWebImageView *_imageView;
    UILabel *_label;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) MMWebImageView *imageView; // @synthesize imageView=_imageView;
- (void)updateMargin;
- (void)updateWithFinderJumpInfo:(id)arg1 hasCover:(_Bool)arg2;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class MMUIActivityIndicatorView, UIImageView;

@interface MMMusicPostVideoCollectionFooterCell : UICollectionReusableView
{
    MMUIActivityIndicatorView *m_loadingView;
    UIImageView *m_pageEndImageView;
}

+ (struct CGSize)getFooterViewSize:(double)arg1;
+ (id)reuseKeyStr;
- (void).cxx_destruct;
- (void)setVisible:(_Bool)arg1;
- (void)setLoadingVisible:(_Bool)arg1;
- (void)layoutSubviews;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end


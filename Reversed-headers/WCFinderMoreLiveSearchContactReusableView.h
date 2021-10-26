//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class MMUIButton, UILabel, UIView;
@protocol WCFinderMoreLiveSearchContactReusableViewDelegate;

@interface WCFinderMoreLiveSearchContactReusableView : UICollectionReusableView
{
    id <WCFinderMoreLiveSearchContactReusableViewDelegate> _delegate;
    UILabel *_titleLabel;
    MMUIButton *_moreButton;
    UIView *_blankView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *blankView; // @synthesize blankView=_blankView;
@property(retain, nonatomic) MMUIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <WCFinderMoreLiveSearchContactReusableViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateUIWith:(id)arg1 isShowMore:(_Bool)arg2;
- (void)onClickMore:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

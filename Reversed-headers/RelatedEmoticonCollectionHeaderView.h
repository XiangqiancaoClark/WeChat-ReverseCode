//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class CEmoticonWrap, MMEmoticonView, UILabel, UIView;

@interface RelatedEmoticonCollectionHeaderView : UICollectionReusableView
{
    _Bool _showBottomTextAndSeparateLine;
    CEmoticonWrap *_emoticonWrap;
    UIView *_separateLineView;
    UILabel *_bottomTextLabel;
    MMEmoticonView *_emoticonView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMEmoticonView *emoticonView; // @synthesize emoticonView=_emoticonView;
@property(retain, nonatomic) UILabel *bottomTextLabel; // @synthesize bottomTextLabel=_bottomTextLabel;
@property(retain, nonatomic) UIView *separateLineView; // @synthesize separateLineView=_separateLineView;
@property(nonatomic) _Bool showBottomTextAndSeparateLine; // @synthesize showBottomTextAndSeparateLine=_showBottomTextAndSeparateLine;
@property(retain, nonatomic) CEmoticonWrap *emoticonWrap; // @synthesize emoticonWrap=_emoticonWrap;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


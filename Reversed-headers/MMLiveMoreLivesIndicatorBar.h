//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMLiveBaseComponentView.h"

@class MMUILabel, MMWebImageView, UIImageView;

@interface MMLiveMoreLivesIndicatorBar : MMLiveBaseComponentView
{
    CDUnknownBlockType _moreLiveClickedCallBlock;
    MMUILabel *_moreLiveLabel;
    UIImageView *_arrowIconView;
    MMWebImageView *_moreLiveIconView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMWebImageView *moreLiveIconView; // @synthesize moreLiveIconView=_moreLiveIconView;
@property(retain, nonatomic) UIImageView *arrowIconView; // @synthesize arrowIconView=_arrowIconView;
@property(retain, nonatomic) MMUILabel *moreLiveLabel; // @synthesize moreLiveLabel=_moreLiveLabel;
@property(copy, nonatomic) CDUnknownBlockType moreLiveClickedCallBlock; // @synthesize moreLiveClickedCallBlock=_moreLiveClickedCallBlock;
- (void)onMoreLiveClicked:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)sizeToFits;
- (void)updateMoreLiveBarTitle:(id)arg1 iconUrl:(id)arg2;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 andTaskId:(id)arg2 componentKey:(id)arg3;

@end


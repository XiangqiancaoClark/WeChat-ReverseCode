//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface WCFinderHotWordSwtichCellView : UITableViewCell
{
    _Bool _arrowDirection;
    UIImageView *_arrowView;
    UILabel *_label;
}

+ (double)height;
- (void).cxx_destruct;
@property(nonatomic) _Bool arrowDirection; // @synthesize arrowDirection=_arrowDirection;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
- (void)updateTitle:(id)arg1;
- (void)setupTitle:(id)arg1 arrowDirection:(_Bool)arg2;
- (void)sizeToFitWidth:(double)arg1;
- (void)doLayoutSubviews;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


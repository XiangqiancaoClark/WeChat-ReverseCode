//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMBaseMultiMenuTableViewCell.h"

@class MMUILabel, NSString, UIImageView, UIView;

@interface WATextTableViewCell : MMBaseMultiMenuTableViewCell
{
    _Bool _isSelected;
    int _cellStyle;
    NSString *_titleDesc;
    MMUILabel *_titleLable;
    UIImageView *_selectedImageView;
    UIView *_bottomSeparateLine;
}

+ (double)viewHeight;
+ (double)viewHeight:(int)arg1;
- (void).cxx_destruct;
@property(nonatomic) int cellStyle; // @synthesize cellStyle=_cellStyle;
@property(retain, nonatomic) UIView *bottomSeparateLine; // @synthesize bottomSeparateLine=_bottomSeparateLine;
@property(retain, nonatomic) UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property(retain, nonatomic) MMUILabel *titleLable; // @synthesize titleLable=_titleLable;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) NSString *titleDesc; // @synthesize titleDesc=_titleDesc;
- (void)layoutSubviews;
- (void)updateViewDefault;
- (void)updateView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

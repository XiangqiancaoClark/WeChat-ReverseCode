//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMBaseMultiMenuTableViewCell.h"

@class MMUILabel, NSString, UIImageView, UIView;

@interface WAPlateTableViewCell : MMBaseMultiMenuTableViewCell
{
    _Bool _enableToggle;
    NSString *_titleDesc;
    MMUILabel *_titleLable;
    UIView *_bottomSeparateLine;
    UIImageView *_toggledImageView;
}

+ (double)viewHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *toggledImageView; // @synthesize toggledImageView=_toggledImageView;
@property(retain, nonatomic) UIView *bottomSeparateLine; // @synthesize bottomSeparateLine=_bottomSeparateLine;
@property(retain, nonatomic) MMUILabel *titleLable; // @synthesize titleLable=_titleLable;
@property(nonatomic) _Bool enableToggle; // @synthesize enableToggle=_enableToggle;
@property(retain, nonatomic) NSString *titleDesc; // @synthesize titleDesc=_titleDesc;
- (void)updateView;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CALayer, MMUILabel, UIImageView;

@interface MMAuthorizeAddAvatarTableViewCell : UITableViewCell
{
    UIImageView *_addIconView;
    MMUILabel *_titleLabel;
    UIImageView *_arrowIconView;
    CALayer *_separateLine;
}

+ (double)cellHeightForWidth:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) CALayer *separateLine; // @synthesize separateLine=_separateLine;
@property(retain, nonatomic) UIImageView *arrowIconView; // @synthesize arrowIconView=_arrowIconView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *addIconView; // @synthesize addIconView=_addIconView;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)init;

@end


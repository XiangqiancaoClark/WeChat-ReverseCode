//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton;

@interface WCFinderNearByDescriptionTableViewCell : UITableViewCell
{
    UIButton *_descriptionLabel;
}

+ (double)descriptionCellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
- (void)updateWith:(id)arg1;
- (void)prepareForReuse;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)hideDescriptionLabel:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

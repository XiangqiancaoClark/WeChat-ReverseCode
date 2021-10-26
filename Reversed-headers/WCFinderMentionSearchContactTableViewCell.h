//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class AttributeLabel, FavAttributeCPLabel, UIView, WCFinderAuthInfoIconView, WCFinderHeadImageView;

@interface WCFinderMentionSearchContactTableViewCell : UITableViewCell
{
    WCFinderHeadImageView *_avatarImageView;
    FavAttributeCPLabel *_nickNameLabel;
    WCFinderAuthInfoIconView *_authInfoIconView;
    AttributeLabel *_authInfoLabel;
    UIView *_separatorLine;
}

+ (double)cellHeightWith:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) AttributeLabel *authInfoLabel; // @synthesize authInfoLabel=_authInfoLabel;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authInfoIconView; // @synthesize authInfoIconView=_authInfoIconView;
@property(retain, nonatomic) FavAttributeCPLabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (id)getAttributeText:(id)arg1;
- (void)updateUIWith:(id)arg1 isShowSeparatorLine:(_Bool)arg2 shouldHideFollow:(_Bool)arg3;
- (void)prepareForReuse;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

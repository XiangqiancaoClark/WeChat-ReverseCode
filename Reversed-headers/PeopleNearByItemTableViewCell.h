//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class MMHeadImageView, UIImageView, UILabel, UIView;

@interface PeopleNearByItemTableViewCell : MMTableViewCell
{
    UILabel *m_nickNameLabel;
    UILabel *m_personalRemarkLabel;
    UILabel *m_remarkContainer;
    UILabel *m_distanceLabel;
    UILabel *m_addedLabel;
    UIImageView *m_genderImageView;
    UIImageView *m_remarkBKImage;
    UIView *m_headerView;
    UIImageView *m_albumFlagView;
    _Bool m_showGenderIcon;
    long long m_iAlbumFlag;
    unsigned int m_certificationFlag;
    int m_sex;
    MMHeadImageView *m_imageView;
    UIImageView *_finderFlagView;
    unsigned long long _finderFlag;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long finderFlag; // @synthesize finderFlag=_finderFlag;
@property(retain, nonatomic) UIImageView *finderFlagView; // @synthesize finderFlagView=_finderFlagView;
@property(nonatomic) _Bool showGenderIcon; // @synthesize showGenderIcon=m_showGenderIcon;
- (void)updateConstraints;
- (void)updateWithLbsContactInfo:(id)arg1 withHeaderView:(id)arg2;
- (void)initViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


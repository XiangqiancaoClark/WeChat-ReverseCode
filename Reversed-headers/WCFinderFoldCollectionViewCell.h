//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class MMUILabel, UILabel, UIView, WCFinderAuthInfoIconView, WCFinderFeedImageCDNView, WCFinderHeadImageView;

@interface WCFinderFoldCollectionViewCell : UICollectionViewCell
{
    UIView *_headBackGroundView;
    WCFinderHeadImageView *_headerView;
    WCFinderFeedImageCDNView *_coverView;
    UILabel *_nickName;
    WCFinderAuthInfoIconView *_authIconView;
    MMUILabel *_descriLabel;
}

+ (double)cellHWithShowUIDetail:(_Bool)arg1;
+ (id)cellID;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *descriLabel; // @synthesize descriLabel=_descriLabel;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authIconView; // @synthesize authIconView=_authIconView;
@property(retain, nonatomic) UILabel *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) WCFinderFeedImageCDNView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) WCFinderHeadImageView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIView *headBackGroundView; // @synthesize headBackGroundView=_headBackGroundView;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)coverImageView;
- (void)updateWithFinderDataItem:(id)arg1 showUIDetail:(_Bool)arg2;
- (void)prepareForReuse;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end


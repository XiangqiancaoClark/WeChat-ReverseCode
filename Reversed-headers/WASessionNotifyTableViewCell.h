//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class MMWebImageView, NSString, UIButton, UILabel, UIView;
@protocol WASessionNotifyTableViewCellDelegate;

@interface WASessionNotifyTableViewCell : MMTableViewCell
{
    NSString *_userName;
    NSString *_nickName;
    NSString *_headImageURL;
    MMWebImageView *_headImageView;
    UILabel *_titleLabel;
    UIButton *_openButton;
    UIView *_sepreateLine;
    id <WASessionNotifyTableViewCellDelegate> _cellViewDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WASessionNotifyTableViewCellDelegate> cellViewDelegate; // @synthesize cellViewDelegate=_cellViewDelegate;
- (void)onClickOpenButton:(id)arg1;
- (void)updateData;
- (void)layoutSubviews;
- (void)initSeperateLine;
- (void)initOpenButton;
- (void)initTitleLabel;
- (void)initHeadImgeView;
- (void)initView;
- (id)getNickName;
- (id)getUserName;
- (void)updateDataWithDelegate:(id)arg1 userName:(id)arg2 nickName:(id)arg3 headImageURL:(id)arg4 isShowSeperateLine:(_Bool)arg5;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


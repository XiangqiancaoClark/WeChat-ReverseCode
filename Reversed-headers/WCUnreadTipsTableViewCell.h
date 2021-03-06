//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class MMUIButton, NSMutableArray, UILabel, WCUnreadTipsViewModel;
@protocol WCUnreadTipsTableViewCellDelegate;

@interface WCUnreadTipsTableViewCell : MMTableViewCell
{
    id <WCUnreadTipsTableViewCellDelegate> _delegate;
    NSMutableArray *_headerViews;
    MMUIButton *_defaultButton;
    UILabel *_titleLabel;
    WCUnreadTipsViewModel *_vm;
}

+ (double)cellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) WCUnreadTipsViewModel *vm; // @synthesize vm=_vm;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *defaultButton; // @synthesize defaultButton=_defaultButton;
@property(retain, nonatomic) NSMutableArray *headerViews; // @synthesize headerViews=_headerViews;
@property(nonatomic) __weak id <WCUnreadTipsTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onJumpToUnreadItem;
- (id)genHeadImageView;
- (void)layoutSubviews;
- (void)updateViewModel:(id)arg1;

@end


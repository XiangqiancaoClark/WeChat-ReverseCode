//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel;

@interface WCPayCardNumberScanForeView : UIView
{
    UIButton *infoBtn;
    UILabel *nameLabel;
    UILabel *tipsLabel;
    NSString *_username;
    id _target;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void)adjustToNewSize;
- (void)commonInit;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 target:(id)arg2 username:(id)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

@class MMUILabel, NSString, UIImageView;

@interface WALoadErrorViewController : MMUIViewController
{
    UIImageView *_errorLogo;
    MMUILabel *_titleLabel;
    NSString *m_errStr;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *m_errStr; // @synthesize m_errStr;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithTitle:(id)arg1 errString:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMVerifyPasswordViewController.h"

@class MMUILabel;

@interface MMLimitedModeSecondVerifyViewController : MMVerifyPasswordViewController
{
    MMUILabel *m_descLabel;
    long long _scene;
}

- (void).cxx_destruct;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
- (void)onVerifyPasswordFail;
- (void)onVerifyPasswordSuccess:(id)arg1;
- (void)viewDidLoad;

@end


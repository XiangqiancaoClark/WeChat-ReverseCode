//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

@class MMTableViewInfo, NSString;

@interface NewSettingBaseViewController : MMUIViewController
{
    MMTableViewInfo *m_tableViewInfo;
    NSString *m_nsTitle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsTitle; // @synthesize m_nsTitle;
@property(readonly, nonatomic) MMTableViewInfo *tableViewInfo;
- (void)reloadTableData;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)initWithTitle:(id)arg1;
- (void)touchesCancelled_TableView:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded_TableView:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved_TableView:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan_TableView:(id)arg1 withEvent:(id)arg2;

@end

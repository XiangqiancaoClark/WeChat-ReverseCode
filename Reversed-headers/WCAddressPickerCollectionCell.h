//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UITableView, UITableViewCell;
@protocol WCAddressTableViewDelegate;

@interface WCAddressPickerCollectionCell : UICollectionViewCell <UITableViewDelegate, UITableViewDataSource>
{
    id <WCAddressTableViewDelegate> m_delegate;
    NSString *m_selectedString;
    double m_pickerGroupHeight;
    double m_topBarCellHeight;
    UITableViewCell *m_defaultTopCell;
    UITableView *_tableView;
    NSMutableArray *_stageData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *stageData; // @synthesize stageData=_stageData;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)jumpToSelectRow;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)defaultTopCell;
- (void)setTopBarHeight:(double)arg1 andBtnViewHeight:(double)arg2;
- (void)setSelectedString:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


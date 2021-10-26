//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, NSString, UITableViewCell, UIView, WCFinderFeedContentVM, WCFinderFeedListView;

@protocol WCFinderFeedListViewDataSource <NSObject>
- (long long)finderFeedListView:(WCFinderFeedListView *)arg1 sectionOfTid:(NSString *)arg2;
- (long long)numberOfContentVMsInTableView;
- (WCFinderFeedContentVM *)finderFeedListView:(WCFinderFeedListView *)arg1 contentVMOfTid:(NSString *)arg2;
- (WCFinderFeedContentVM *)finderFeedListView:(WCFinderFeedListView *)arg1 contentVMAtSection:(long long)arg2;

@optional
- (double)finderFeedListView:(WCFinderFeedListView *)arg1 heightForCustomFooterInSection:(long long)arg2;
- (double)finderFeedListView:(WCFinderFeedListView *)arg1 heightForCustomHeaderInSection:(long long)arg2;
- (UIView *)finderFeedListView:(WCFinderFeedListView *)arg1 viewForCustomFooterInSection:(long long)arg2;
- (UITableViewCell *)finderFeedListView:(WCFinderFeedListView *)arg1 customCellForRowAtIndexPath:(NSIndexPath *)arg2;
- (double)finderFeedListView:(WCFinderFeedListView *)arg1 heightForCustomRowAtIndexPath:(NSIndexPath *)arg2;
- (long long)finderFeedListView:(WCFinderFeedListView *)arg1 rowOfCustomViewAtSection:(long long)arg2;
- (_Bool)finderFeedListView:(WCFinderFeedListView *)arg1 customViewAtSection:(long long)arg2;
@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WCFinderDataItem, WCFinderFeedPickerPreviewListViewController;

@protocol WCFinderFeedPickerPreviewListViewControllerDelegate <NSObject>
- (void)finderFeedPickerPreviewViewController:(WCFinderFeedPickerPreviewListViewController *)arg1 didClickCancelWithDataItem:(WCFinderDataItem *)arg2;
- (void)finderFeedPickerPreviewListViewController:(WCFinderFeedPickerPreviewListViewController *)arg1 didSelectDataItem:(WCFinderDataItem *)arg2;
@end


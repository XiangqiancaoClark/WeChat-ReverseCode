//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, NSString, UITableViewCell;

@protocol WCContactSelectFixedSearcherDelegate <NSObject>
- (void)liveContactDidSearchViewTableSelect:(NSIndexPath *)arg1;
- (UITableViewCell *)liveContactCellForSearchViewTable:(UITableViewCell *)arg1 index:(NSIndexPath *)arg2;
- (void)liveContactCancelSearch;
- (void)liveContactDoSearch:(NSString *)arg1 Pre:(_Bool)arg2;
- (void)liveContactBeginSearch;
@end


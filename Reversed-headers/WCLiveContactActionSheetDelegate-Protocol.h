//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WCFinderContact;

@protocol WCLiveContactActionSheetDelegate <NSObject>

@optional
- (void)actionSheetWillDismiss:(long long)arg1;
- (void)onActionsheetCancelButtonClicked;
- (void)onSwitchToConnectMicAnchorLiveClicked:(WCFinderContact *)arg1;
- (void)onOpenRewardGiftViewButtonClicked:(WCFinderContact *)arg1;
- (void)onOpenStreamProfileButtonClicked:(WCFinderContact *)arg1;
@end


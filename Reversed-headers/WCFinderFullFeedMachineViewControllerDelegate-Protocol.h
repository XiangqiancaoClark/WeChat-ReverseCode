//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WCFinderAppendTabDatasModel;

@protocol WCFinderFullFeedMachineViewControllerDelegate <NSObject>

@optional
- (void)onMachineFeedVMDataPullRefreshError:(int)arg1;
- (WCFinderAppendTabDatasModel *)onMachineGetAppendTabDatasModel;
- (void)onMachineUpdateTabSesstionID;
- (void)onMachineTopRefreshFinished:(_Bool)arg1 byTopRefresh:(_Bool)arg2;
@end


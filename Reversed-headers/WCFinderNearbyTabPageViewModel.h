//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderLiveTabPageBaseViewModel.h"

@class FinderLiveLbsInfo, NSArray;
@protocol WCFinderNearbyTabPageViewModelDelegate;

@interface WCFinderNearbyTabPageViewModel : WCFinderLiveTabPageBaseViewModel
{
    FinderLiveLbsInfo *_nearbyVideoTabInfo;
    id <WCFinderNearbyTabPageViewModelDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCFinderNearbyTabPageViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FinderLiveLbsInfo *nearbyVideoTabInfo; // @synthesize nearbyVideoTabInfo=_nearbyVideoTabInfo;
- (id)queryCityTabInfoFromList;
- (void)requestLiveTabList:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) NSArray *liveTabList;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "WCFinderBrandProfileViewModelDelegate-Protocol.h"
#import "WCFinderFeedBaseViewControllerProtocol-Protocol.h"
#import "WCFinderFeedListViewDataSource-Protocol.h"
#import "WCFinderFeedListViewDelegate-Protocol.h"

@class NSString, WCFinderBrandProfileViewModel, WCFinderFeedListView;

@interface WCFinderBrandProfileViewController : MMUIViewController <WCFinderFeedListViewDataSource, WCFinderFeedListViewDelegate, WCFinderBrandProfileViewModelDelegate, WCFinderFeedBaseViewControllerProtocol>
{
    WCFinderBrandProfileViewModel *_viewModel;
    WCFinderFeedListView *_feedListView;
    unsigned long long _firstOffset;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long firstOffset; // @synthesize firstOffset=_firstOffset;
@property(retain, nonatomic) WCFinderFeedListView *feedListView; // @synthesize feedListView=_feedListView;
@property(retain, nonatomic) WCFinderBrandProfileViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (unsigned long long)feedViewerScene;
- (unsigned long long)feedViewControllerScene;
- (void)finderBrandProfileRequestFailWithErrorCode:(int)arg1;
- (void)finderBrandProfileNoMoreData;
- (void)finderBrandProfileAppendDataFrom:(long long)arg1 toIndex:(long long)arg2;
- (void)finderBrandProfileReloadAllData;
- (void)finderFeedListViewDidClickScreenRotateBtn:(id)arg1;
- (_Bool)finderFeedListViewIsNoMoreData:(id)arg1;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (_Bool)finderFeedListViewCanPreFetchData:(id)arg1;
- (void)finderFeedListViewRetryFetch:(id)arg1;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (long long)numberOfContentVMsInTableView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)useTransparentNavibar;
- (id)initWithViewModel:(id)arg1 offset:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


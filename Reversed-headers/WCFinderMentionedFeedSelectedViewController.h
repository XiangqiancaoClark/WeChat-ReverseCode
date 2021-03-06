//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "WCFinderFeedStaticCoverCollectionViewCellDelegate-Protocol.h"
#import "WCFinderMentionedSelectedViewModelDelegate-Protocol.h"
#import "WCFinderStreamFooterViewActionDelegate-Protocol.h"

@class NSString, UIBarButtonItem, UICollectionView, UILabel, WCFinderAnimationLoadingView, WCFinderMentionedSelectedViewModel, WCFinderStreamFooterView;

@interface WCFinderMentionedFeedSelectedViewController : MMUIViewController <WCFinderMentionedSelectedViewModelDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WCFinderFeedStaticCoverCollectionViewCellDelegate, WCFinderStreamFooterViewActionDelegate>
{
    UICollectionView *_collectionView;
    WCFinderMentionedSelectedViewModel *_viewModel;
    WCFinderStreamFooterView *_footerView;
    UILabel *_statusTips;
    WCFinderAnimationLoadingView *_loadingView;
    UIBarButtonItem *_backButtonItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIBarButtonItem *backButtonItem; // @synthesize backButtonItem=_backButtonItem;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UILabel *statusTips; // @synthesize statusTips=_statusTips;
@property(nonatomic) __weak WCFinderStreamFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) WCFinderMentionedSelectedViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (_Bool)isEnableStreamFooterTrigerLoading:(id)arg1;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)onViewModelDataChanged:(id)arg1;
- (void)mentionedSelectedVMStopLoading:(id)arg1;
- (void)onViewModelReqeustDataFailed:(id)arg1;
- (void)onViewModel:(id)arg1 mentionedItemUpdateAtIdxSet:(id)arg2;
- (void)onViewModel:(id)arg1 onAppendDataAtRange:(struct _NSRange)arg2;
- (void)onTagRetry;
- (double)statusViewOriginY;
- (void)addStatusTips:(_Bool)arg1;
- (void)setupLoadingDisplay:(_Bool)arg1;
- (void)updateFooterStatus:(_Bool)arg1;
- (void)onClickCancel;
- (void)onClickSaveBtn;
- (void)onClickManagerBtn;
- (void)updateRightNavBtn;
- (void)installCollectionView;
- (long long)firstScreenExpectFeedCount;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithViewMoel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


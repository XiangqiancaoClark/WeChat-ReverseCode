//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "WCFinderEmptyTipsViewDelegate-Protocol.h"
#import "WCFinderFeedFlowLiveCellDelegate-Protocol.h"
#import "WCFinderFeedStaticCoverCollectionViewCellDelegate-Protocol.h"
#import "WCFinderFlowTopTipsViewDelegate-Protocol.h"
#import "WCFinderStreamFooterViewActionDelegate-Protocol.h"
#import "WCFinderStreamLayoutDelegate-Protocol.h"
#import "WCGeneralMonitorDelegate-Protocol.h"

@class NSMutableDictionary, NSString, UIImage, UIMonitorCollectionView, WCFinderEmptyTipsView, WCFinderFlowTopTipsView, WCFinderStreamFooterView, WCFinderStreamLayout;
@protocol WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewDelegate, WCFinderFeedFlowViewLayoutDelegate, WCFinderFeedFlowViewMonitorDelegate;

@interface WCFinderFeedFlowView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, WCFinderStreamLayoutDelegate, WCFinderFeedStaticCoverCollectionViewCellDelegate, WCFinderFlowTopTipsViewDelegate, WCFinderStreamFooterViewActionDelegate, WCFinderEmptyTipsViewDelegate, WCGeneralMonitorDelegate, WCFinderFeedFlowLiveCellDelegate>
{
    _Bool _observeredByPageContainer;
    _Bool _viewCurrentAppear;
    unsigned long long flowFeedViewPreloadIndex;
    id <WCFinderFeedFlowViewDataSource> _dataSource;
    id <WCFinderFeedFlowViewDelegate> _delegate;
    id <WCFinderFeedFlowViewLayoutDelegate> _layoutDelegate;
    id <WCFinderFeedFlowViewMonitorDelegate> _monitorDelegate;
    unsigned long long _consumerType;
    UIMonitorCollectionView *_collectionView;
    WCFinderStreamLayout *_streamLayout;
    WCFinderFlowTopTipsView *_topTipsView;
    WCFinderEmptyTipsView *_emptyTipsView;
    WCFinderStreamFooterView *_footerView;
    unsigned long long _state;
    NSMutableDictionary *_exposeTimeDict;
    UIImage *_topLoadingImage;
    UIImage *_centerLoadingImage;
    unsigned long long _enterTime;
    struct CGPoint _contentOffset;
    struct CGSize _minContentSize;
    struct UIEdgeInsets _contentInset;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(nonatomic, getter=isViewCurrentAppear) _Bool viewCurrentAppear; // @synthesize viewCurrentAppear=_viewCurrentAppear;
@property(retain, nonatomic) UIImage *centerLoadingImage; // @synthesize centerLoadingImage=_centerLoadingImage;
@property(retain, nonatomic) UIImage *topLoadingImage; // @synthesize topLoadingImage=_topLoadingImage;
@property(retain, nonatomic) NSMutableDictionary *exposeTimeDict; // @synthesize exposeTimeDict=_exposeTimeDict;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) WCFinderStreamFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) WCFinderEmptyTipsView *emptyTipsView; // @synthesize emptyTipsView=_emptyTipsView;
@property(retain, nonatomic) WCFinderFlowTopTipsView *topTipsView; // @synthesize topTipsView=_topTipsView;
@property(retain, nonatomic) WCFinderStreamLayout *streamLayout; // @synthesize streamLayout=_streamLayout;
@property(retain, nonatomic) UIMonitorCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool observeredByPageContainer; // @synthesize observeredByPageContainer=_observeredByPageContainer;
@property(nonatomic) unsigned long long consumerType; // @synthesize consumerType=_consumerType;
@property(nonatomic) struct CGSize minContentSize; // @synthesize minContentSize=_minContentSize;
@property(nonatomic) struct CGPoint contentOffset; // @synthesize contentOffset=_contentOffset;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) __weak id <WCFinderFeedFlowViewMonitorDelegate> monitorDelegate; // @synthesize monitorDelegate=_monitorDelegate;
@property(nonatomic) __weak id <WCFinderFeedFlowViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
@property(nonatomic) __weak id <WCFinderFeedFlowViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <WCFinderFeedFlowViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)onClickCoverContact:(id)arg1 contentVM:(id)arg2;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (void)reportFeedStreamClickWithCollectionView:(id)arg1 selectedIndexPath:(id)arg2;
- (void)exposeItemViewAppear;
- (void)exposeItemViewDisappear;
- (void)finderEmptyTipsView:(id)arg1 didClickLink:(id)arg2;
- (void)finderEmptyTipsView:(id)arg1 didClickOnState:(unsigned long long)arg2;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (_Bool)finderFlowTopTipsViewDataSourceIsLoading:(id)arg1;
- (void)finderFlowTopTipsViewDidTriggerRefresh:(id)arg1;
- (void)onClickCoverContact:(id)arg1 dataItem:(id)arg2;
- (_Bool)isOnLoadingState;
- (double)collectionView:(id)arg1 layout:(id)arg2 footerHeightAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 headerHeightAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 cellHeightAtIndexPath:(id)arg3 withWidth:(double)arg4;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 cellEdgeInsetAtSection:(unsigned long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 cellSpaceAtSection:(unsigned long long)arg3;
- (unsigned long long)collectionView:(id)arg1 layout:(id)arg2 columnCountAtSection:(unsigned long long)arg3;
- (void)_endScrolling:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)_refreshHeadOnScrolltoTop;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)_autoPlayLiveCell;
- (_Bool)hasTopLoading;
- (struct UIEdgeInsets)collectionViewContentInsetInTopLoadingState:(_Bool)arg1;
- (void)hiddenTopTipsViewWithCompletion:(CDUnknownBlockType)arg1 animated:(_Bool)arg2 delay:(double)arg3;
- (id)tipsConfigWithType:(unsigned long long)arg1 inState:(unsigned long long)arg2;
- (id)getCustomSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (double)heightForCustomSupplementaryViewOfKind:(id)arg1 atSection:(long long)arg2;
- (_Bool)isCustomSupplementaryViewOfKind:(id)arg1 atSection:(long long)arg2;
- (id)getCustomCellAtIndexPath:(id)arg1;
- (_Bool)isCustomCellAtIndexPath:(id)arg1;
- (id)getContentVMAtIndexPath:(id)arg1;
- (long long)itemNumberAtSection:(long long)arg1;
- (_Bool)isFeedsFlowSection:(long long)arg1;
- (unsigned long long)feedFlowSection;
- (long long)sectionNumber;
- (void)onFeedFlowViewEnterBackground;
- (void)onFeedFlowViewEnterForeground;
- (void)setFooterState:(unsigned long long)arg1;
- (void)setEmptyTipsViewState:(unsigned long long)arg1;
- (void)setTopTipsViewState:(unsigned long long)arg1;
- (void)reloadData;
- (void)reset;
- (void)setFooterViewColor:(id)arg1;
- (void)setEmptyTipsViewColor:(id)arg1;
- (void)setTopTipsViewColor:(id)arg1;
- (void)appendContentVMFromSection:(unsigned long long)arg1 fromIndex:(long long)arg2 toIndex:(long long)arg3;
- (void)appendContentVMFromSectionIndex:(long long)arg1 toSectionIndex:(long long)arg2;
- (void)appendForOS12From:(long long)arg1 toIndex:(long long)arg2 feedFlowSection:(unsigned long long)arg3;
- (void)updateState;
- (void)finderFeedFlowViewDidDisappear;
- (void)finderFeedFlowViewWillDisappear;
- (void)finderFeedFlowViewDidAppear;
- (void)finderFeedFlowViewWillAppear;
- (void)setLoadingImage:(id)arg1 withTipsType:(unsigned long long)arg2;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) unsigned long long flowFeedViewPreloadIndex; // @synthesize flowFeedViewPreloadIndex;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


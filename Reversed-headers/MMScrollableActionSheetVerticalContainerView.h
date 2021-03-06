//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "MMScrollableActionSheetCustomFooterViewInterface-Protocol.h"
#import "MMScrollableActionSheetCustomHeaderViewInterface-Protocol.h"
#import "MMScrollableActionSheetVerticalRowViewDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol MMScrollableActionSheetVerticalContainerViewDelegate;

@interface MMScrollableActionSheetVerticalContainerView : MMUIView <MMScrollableActionSheetVerticalRowViewDelegate, MMScrollableActionSheetCustomHeaderViewInterface, MMScrollableActionSheetCustomFooterViewInterface>
{
    double _topPadding;
    double _bottomPadding;
    double _cachedCustomHeaderViewHeight;
    double _cachedCustomFooterViewHeight;
    id <MMScrollableActionSheetVerticalContainerViewDelegate> _delegate;
    NSMutableArray *_rowInfoList;
    NSMutableDictionary *_rowType2RowViewMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *rowType2RowViewMap; // @synthesize rowType2RowViewMap=_rowType2RowViewMap;
@property(retain, nonatomic) NSMutableArray *rowInfoList; // @synthesize rowInfoList=_rowInfoList;
@property(nonatomic) __weak id <MMScrollableActionSheetVerticalContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double cachedCustomFooterViewHeight; // @synthesize cachedCustomFooterViewHeight=_cachedCustomFooterViewHeight;
@property(nonatomic) double cachedCustomHeaderViewHeight; // @synthesize cachedCustomHeaderViewHeight=_cachedCustomHeaderViewHeight;
@property(nonatomic) double bottomPadding; // @synthesize bottomPadding=_bottomPadding;
@property(nonatomic) double topPadding; // @synthesize topPadding=_topPadding;
- (void)onTappedRowInfo:(id)arg1;
- (double)layoutVerticalRowViews;
- (void)layoutSubviews;
- (void)sortRowInfoList;
- (id)generateRowViewForRowInfo:(id)arg1;
- (long long)getRowInfoIndexWithRowType:(unsigned int)arg1;
- (double)calcuateCustomFooterViewHeight;
- (double)calcuateCustomHeaderViewHeight;
- (void)setNeedRecalcuateCustomHeaderViewHeight;
- (void)addOrUpdateVerticalRowInfo:(id)arg1;
- (void)setVerticalRowInfoList:(id)arg1;
- (void)reset;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


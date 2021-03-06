//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderStreamProfileViewPage.h"

#import "WCFinderProfileStickerTabPageModelDelegate-Protocol.h"
#import "WCFinderStreamLayoutDelegate-Protocol.h"

@class NSString, UILabel, UIView;

@interface WCFinderProfileStickerTabPage : WCFinderStreamProfileViewPage <WCFinderProfileStickerTabPageModelDelegate, WCFinderStreamLayoutDelegate>
{
    UILabel *_statusTips;
    UIView *_footerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UILabel *statusTips; // @synthesize statusTips=_statusTips;
- (void)onFetchDoneEmoticonData;
- (void)onFetchMoreEmoticonData;
- (id)getNavController;
- (void)onTagRetry;
- (void)updateStatusTips:(_Bool)arg1 tips:(id)arg2;
- (void)emotionTabPageModelFirstPageDataLoadFinish:(_Bool)arg1;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 headerEdgeInsetAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 footerHeightAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 headerHeightAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 cellHeightAtIndexPath:(id)arg3 withWidth:(double)arg4;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 cellEdgeInsetAtSection:(unsigned long long)arg3;
- (id)genFooterView;
- (void)viewDidLoad;
- (id)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


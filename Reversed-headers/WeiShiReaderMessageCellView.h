//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseMessageCellView.h"

#import "WeiShiMsgCardMenuDelegate-Protocol.h"
#import "WeiShiReaderItemViewDelegate-Protocol.h"

@class NSString, WeShiReaderItemView, WeiShiReaderMessageViewModel;

@interface WeiShiReaderMessageCellView : BaseMessageCellView <WeiShiReaderItemViewDelegate, WeiShiMsgCardMenuDelegate>
{
    WeShiReaderItemView *itemView;
}

- (void).cxx_destruct;
- (void)doWeishiRepor:(unsigned int)arg1 topNewsTitle:(id)arg2 readerWrap:(id)arg3;
- (void)onAppear;
- (void)onMoreMenu:(id)arg1;
- (void)onForwardMenu:(id)arg1;
- (void)onFavoriteMenu:(id)arg1;
- (id)getMenuItems;
- (void)onReaderItemClick:(unsigned int)arg1 itemView:(id)arg2;
- (id)getWebViewController:(id)arg1 url:(id)arg2;
- (id)webViewExtraInfoWithReaderWrap:(id)arg1 msgWrap:(id)arg2;
- (id)getCurrentViewController;
- (_Bool)canCellShowOperationMenu;
- (_Bool)canPeek;
- (id)getReadWraps;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)bShouldReportShowInfo;
- (void)layoutContentView;
- (_Bool)canBeReused;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) WeiShiReaderMessageViewModel *viewModel; // @dynamic viewModel;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WCMediaItem, WCSightFullPlayView;

@protocol WCSightFullPlayViewDelegate <NSObject>

@optional
- (void)onFullScreenItemDragEnd;
- (void)onFullScreenItemDragBegin;
- (void)onFullScreenItemDragToClose;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (NSString *)getDetailButtonTitle;
- (_Bool)shouldShowDetailButton;
- (void)onClickDetailButton;
- (void)onClickFullPlayViewForViewAttachVideo;
- (void)onFullSightDownloadFinished:(WCMediaItem *)arg1 downloadType:(long long)arg2;
- (void)onFullSightPlayEnd:(_Bool)arg1;
- (void)onLongPressedFullSightView:(WCSightFullPlayView *)arg1;
- (void)onClickFullSightView:(WCSightFullPlayView *)arg1;
@end


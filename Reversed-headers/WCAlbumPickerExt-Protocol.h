//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WCMediaItem;

@protocol WCAlbumPickerExt <NSObject>

@optional
- (void)onWCAlbumPickerControllerHighlightMedia:(NSString *)arg1;
- (void)onWCAlbumPickerControllerUpdateAllAssetViewBorderWithMedia:(WCMediaItem *)arg1;
- (void)onWCAlbumPickerControllerFinishEditMedia:(WCMediaItem *)arg1;
- (void)onWCAlbumPickerControllerChangeSelectInfosOrder;
- (void)onWCAlbumPickerControllerChangeSelectInfo:(WCMediaItem *)arg1 index:(long long)arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "WCStoryDownloadImageCdnMgrExt-Protocol.h"

@class MMUIImageView, MMUILabel, NSString, UIImage, WCStoryDataUnit, WCStoryMediaItem;

@interface WCStoryHistoryCollectionViewCell : UICollectionViewCell <WCStoryDownloadImageCdnMgrExt>
{
    WCStoryDataUnit *_dataUnit;
    UIImage *_thumbImage;
    MMUIImageView *_thumbImageView;
    WCStoryMediaItem *_mediaItem;
    MMUILabel *_countLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) WCStoryMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(retain, nonatomic) MMUIImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(retain, nonatomic) UIImage *thumbImage; // @synthesize thumbImage=_thumbImage;
@property(retain, nonatomic) WCStoryDataUnit *dataUnit; // @synthesize dataUnit=_dataUnit;
- (void)onStoryThumbDownloadFail:(id)arg1;
- (void)onStoryThumbDownloadSuccess:(id)arg1;
- (void)tryLoadThumbImage;
- (void)setupUI;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


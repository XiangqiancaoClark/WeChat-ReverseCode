//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, WCDataItem, WCMicroMerchantFeedsGroup, WCTimeLineVideoPreloadMgr;

@interface MicroMerchantTableViewModel : NSObject
{
    WCMicroMerchantFeedsGroup *_wcGroup;
    WCDataItem *_placeHolder;
    NSMutableDictionary *_preloadedImageSet;
    WCTimeLineVideoPreloadMgr *_videoPreloadMgr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTimeLineVideoPreloadMgr *videoPreloadMgr; // @synthesize videoPreloadMgr=_videoPreloadMgr;
@property(retain, nonatomic) NSMutableDictionary *preloadedImageSet; // @synthesize preloadedImageSet=_preloadedImageSet;
@property(retain, nonatomic) WCDataItem *placeHolder; // @synthesize placeHolder=_placeHolder;
@property(retain, nonatomic) WCMicroMerchantFeedsGroup *wcGroup; // @synthesize wcGroup=_wcGroup;
- (void)clearCache;
- (void)stopPreloadVideoData:(id)arg1;
- (void)preloadVideoDatas:(id)arg1 lastAutoPlayID:(id)arg2;
- (void)preloadImageDatas:(id)arg1;
- (unsigned long long)sectionIndexWithFeedID:(id)arg1;
- (id)sectionFeedModelWithFeedID:(id)arg1;
- (id)sectionFeedModel:(long long)arg1;
- (long long)numberOfSections;
- (_Bool)isLastSection:(long long)arg1;
- (id)dataItems;
- (id)getDataItemInCache:(id)arg1;
- (void)reloadDataFromServer:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)initDatas;
- (id)initWithGroupItem:(id)arg1 ofPlaceHolder:(id)arg2;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MinimizeTaskData, WABGAudioMinimizationItemInfo;

@interface WABGAudioMinimizationViewModel : NSObject
{
    _Bool _isReadyToShow;
    WABGAudioMinimizationItemInfo *_itemInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isReadyToShow; // @synthesize isReadyToShow=_isReadyToShow;
@property(readonly, nonatomic) WABGAudioMinimizationItemInfo *itemInfo; // @synthesize itemInfo=_itemInfo;
@property(readonly, nonatomic) MinimizeTaskData *taskData;
@property(readonly, nonatomic) _Bool canShow;
- (void)updateItemInfo:(id)arg1;
- (id)initWithItemInfo:(id)arg1;

@end


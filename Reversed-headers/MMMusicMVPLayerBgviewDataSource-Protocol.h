//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMMusicMVPlayerBgView, MMMusicMVTrackItem, WCFinderDataItem;

@protocol MMMusicMVPLayerBgviewDataSource <NSObject>
- (_Bool)musicMVPlayerIsGetMvInfoFinish;
- (double)musicMVPlayerTrackPlayOffsetAtIndex:(unsigned long long)arg1;
- (MMMusicMVTrackItem *)musicMVPlayerTrackItemAtIndex:(unsigned long long)arg1;
- (long long)numberOfMusicMVTracks;

@optional
- (WCFinderDataItem *)musicPlayerBgView:(MMMusicMVPlayerBgView *)arg1 finderDataItemForTrack:(MMMusicMVTrackItem *)arg2;
@end


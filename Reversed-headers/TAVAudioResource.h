//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TAVResource.h"

@class AVAsset;

@interface TAVAudioResource : TAVResource
{
    AVAsset *_emptyAsset;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AVAsset *emptyAsset; // @synthesize emptyAsset=_emptyAsset;
- (id)pcmBufferAtTimeRange:(CDStruct_e83c9415)arg1 audioFormat:(id)arg2;
- (id)tracksForType:(id)arg1;
- (id)trackInfoForType:(id)arg1 atIndex:(long long)arg2;
- (void)loadEmptyTrack;
- (id)initWithDuration:(CDStruct_1b6d18a9)arg1;

@end


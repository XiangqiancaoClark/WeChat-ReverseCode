//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, AVAudioMix, AVVideoComposition;

@interface TAVSource : NSObject
{
    AVAsset *_asset;
    AVVideoComposition *_videoComposition;
    AVAudioMix *_audioMix;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AVAudioMix *audioMix; // @synthesize audioMix=_audioMix;
@property(retain, nonatomic) AVVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
- (id)printAVVideoComposition;
- (id)printAVComposition;
- (id)convertToPlayerItem;
- (void)setupAnimationTool:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMLiveAnchorStatusItem.h"

@class FinderLiveLayerAnchorVerificationShowInfo, NSString;

@interface MMFinderLiveAnchorStatusItem : MMLiveAnchorStatusItem
{
    FinderLiveLayerAnchorVerificationShowInfo *_anchorVerificationShowInfo;
    unsigned long long _layerDisplayType;
    unsigned long long _timeMs;
    unsigned long long _pausedAccumulatedTime;
    NSString *_audiencePauseWording;
}

- (void).cxx_destruct;
@property(copy) NSString *audiencePauseWording; // @synthesize audiencePauseWording=_audiencePauseWording;
@property unsigned long long pausedAccumulatedTime; // @synthesize pausedAccumulatedTime=_pausedAccumulatedTime;
@property unsigned long long timeMs; // @synthesize timeMs=_timeMs;
@property unsigned long long layerDisplayType; // @synthesize layerDisplayType=_layerDisplayType;
@property(retain) FinderLiveLayerAnchorVerificationShowInfo *anchorVerificationShowInfo; // @synthesize anchorVerificationShowInfo=_anchorVerificationShowInfo;
- (void)updateDisplayInfoFromServer:(id)arg1;
- (_Bool)isPausedLayerDisplayed;
- (_Bool)fromLiveLayerDisplayInfo:(id)arg1;
- (_Bool)fromLiveExtInfo:(id)arg1;
- (id)getAnchorStatusBuffer;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFinderExtLiveInfo:(id)arg1 layerDisplayInfo:(id)arg2;

@end

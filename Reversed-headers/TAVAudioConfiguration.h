//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "TAVAudioProcessingNode-Protocol.h"

@class NSString, TAVSimpleVolumeProcessingNode;
@protocol TAVAudioProcessingNode;

@interface TAVAudioConfiguration : NSObject <TAVAudioProcessingNode, NSCopying>
{
    float _volume;
    id <TAVAudioProcessingNode> _effectNode;
    TAVSimpleVolumeProcessingNode *_volumeProcessingNode;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TAVSimpleVolumeProcessingNode *volumeProcessingNode; // @synthesize volumeProcessingNode=_volumeProcessingNode;
@property(retain, nonatomic) id <TAVAudioProcessingNode> effectNode; // @synthesize effectNode=_effectNode;
@property(nonatomic) float volume; // @synthesize volume=_volume;
- (void)applyEffectToBufferListInOut:(struct AudioBufferList *)arg1 renderInfo:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

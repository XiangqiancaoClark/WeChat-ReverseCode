//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class MPChannelTimelineInfo, MPChannelTopBarInfo, NSString;

@interface MPChannelEntryData : MMObject <PBCoding>
{
    unsigned long long entryOption;
    MPChannelTopBarInfo *topBarInfo;
    MPChannelTimelineInfo *timelineInfo;
}

+ (void)initialize;
+ (void)PBArrayAdd_timelineInfo;
+ (void)PBArrayAdd_topBarInfo;
+ (void)PBArrayAdd_entryOption;
- (void).cxx_destruct;
@property(retain, nonatomic) MPChannelTimelineInfo *timelineInfo; // @synthesize timelineInfo;
@property(retain, nonatomic) MPChannelTopBarInfo *topBarInfo; // @synthesize topBarInfo;
@property(nonatomic) unsigned long long entryOption; // @synthesize entryOption;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString;

@interface MPChannelStrategyInfo : MMObject <PBCoding>
{
    _Bool brandCellExposeUpdate;
    _Bool mainSessionExposeUpdate;
    _Bool enterBizSessionUpdate;
    _Bool enterVideoPageUpdate;
    _Bool autoSwitchDefaultLogo;
    unsigned int timelineInterval;
    unsigned int prefetchInterval;
}

+ (void)initialize;
+ (void)PBArrayAdd_autoSwitchDefaultLogo;
+ (void)PBArrayAdd_enterVideoPageUpdate;
+ (void)PBArrayAdd_enterBizSessionUpdate;
+ (void)PBArrayAdd_mainSessionExposeUpdate;
+ (void)PBArrayAdd_brandCellExposeUpdate;
+ (void)PBArrayAdd_prefetchInterval;
+ (void)PBArrayAdd_timelineInterval;
@property(nonatomic) _Bool autoSwitchDefaultLogo; // @synthesize autoSwitchDefaultLogo;
@property(nonatomic) _Bool enterVideoPageUpdate; // @synthesize enterVideoPageUpdate;
@property(nonatomic) _Bool enterBizSessionUpdate; // @synthesize enterBizSessionUpdate;
@property(nonatomic) _Bool mainSessionExposeUpdate; // @synthesize mainSessionExposeUpdate;
@property(nonatomic) _Bool brandCellExposeUpdate; // @synthesize brandCellExposeUpdate;
@property(nonatomic) unsigned int prefetchInterval; // @synthesize prefetchInterval;
@property(nonatomic) unsigned int timelineInterval; // @synthesize timelineInterval;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


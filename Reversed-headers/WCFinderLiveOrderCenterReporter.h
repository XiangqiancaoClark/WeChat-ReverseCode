//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMOrderCenterReporter-Protocol.h"

@class NSString, WCFinderDataItem, WCFinderLiveAudienceComodityLogReporter;

@interface WCFinderLiveOrderCenterReporter : NSObject <MMOrderCenterReporter>
{
    WCFinderDataItem *_finderDataItem;
    WCFinderLiveAudienceComodityLogReporter *_reporter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveAudienceComodityLogReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) WCFinderDataItem *finderDataItem; // @synthesize finderDataItem=_finderDataItem;
- (void)reportEvent:(id)arg1 parameters:(id)arg2;
@property(readonly, nonatomic) NSString *entrySource;
- (id)initWithFinderDataItem:(id)arg1 underlyingReporter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


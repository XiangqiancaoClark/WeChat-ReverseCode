//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableDictionary, NSString;

@interface BTMsgMgrCanvasCardExposedInfo : NSObject <PBCoding>
{
    NSMutableDictionary *dictFirstExposedCardInToday;
    unsigned long long lastFirstExposedTimeMs;
}

+ (void)initialize;
+ (void)PBArrayAdd_lastFirstExposedTimeMs;
+ (void)PBArrayAdd_dictFirstExposedCardInToday;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long lastFirstExposedTimeMs; // @synthesize lastFirstExposedTimeMs;
@property(retain, nonatomic) NSMutableDictionary *dictFirstExposedCardInToday; // @synthesize dictFirstExposedCardInToday;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

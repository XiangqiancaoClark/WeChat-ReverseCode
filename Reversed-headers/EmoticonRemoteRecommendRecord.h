//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface EmoticonRemoteRecommendRecord : NSObject <PBCoding>
{
    unsigned int lastUpdateTime;
    NSString *query;
    NSMutableArray *wrapList;
    NSString *recSessionId;
}

+ (void)initialize;
+ (void)PBArrayAdd_recSessionId;
+ (void)PBArrayAdd_lastUpdateTime;
+ (void)PBArrayAdd_wrapList;
+ (void)PBArrayAdd_query;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *recSessionId; // @synthesize recSessionId;
@property(nonatomic) unsigned int lastUpdateTime; // @synthesize lastUpdateTime;
@property(retain, nonatomic) NSMutableArray *wrapList; // @synthesize wrapList;
@property(retain, nonatomic) NSString *query; // @synthesize query;
- (_Bool)isExpired:(unsigned int)arg1;
@property(readonly, copy) NSString *debugDescription;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


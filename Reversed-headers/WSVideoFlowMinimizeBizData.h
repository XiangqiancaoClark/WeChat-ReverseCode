//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface WSVideoFlowMinimizeBizData : MMObject <PBCoding>
{
    _Bool isPullRecommendStreamEnabled;
    _Bool hasShowRecommendVideo;
    unsigned int offset;
    NSMutableArray *cacheJsonList;
    NSString *searchId;
    NSString *sessionId;
    NSMutableArray *_cacheVideoList;
}

+ (void)initialize;
+ (void)PBArrayAdd_hasShowRecommendVideo;
+ (void)PBArrayAdd_isPullRecommendStreamEnabled;
+ (void)PBArrayAdd_offset;
+ (void)PBArrayAdd_sessionId;
+ (void)PBArrayAdd_searchId;
+ (void)PBArrayAdd_cacheJsonList;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *cacheVideoList; // @synthesize cacheVideoList=_cacheVideoList;
@property(nonatomic) _Bool hasShowRecommendVideo; // @synthesize hasShowRecommendVideo;
@property(nonatomic) _Bool isPullRecommendStreamEnabled; // @synthesize isPullRecommendStreamEnabled;
@property(nonatomic) unsigned int offset; // @synthesize offset;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId;
@property(copy, nonatomic) NSString *searchId; // @synthesize searchId;
@property(retain, nonatomic) NSMutableArray *cacheJsonList; // @synthesize cacheJsonList;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

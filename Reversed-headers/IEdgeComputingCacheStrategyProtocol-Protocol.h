//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class EdgeComputingCacheDataModel, NSArray, NSString;

@protocol IEdgeComputingCacheStrategyProtocol <NSObject>
- (void)migrate;
- (unsigned long long)count;
- (NSArray *)query:(NSString *)arg1;
- (void)deleteExpire:(unsigned long long)arg1;
- (void)clear;
- (void)remove:(NSString *)arg1;
- (void)save:(EdgeComputingCacheDataModel *)arg1;
- (void)close;
- (void)reset;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableDictionary, NSString;

@interface TextStateLikeData : NSObject <PBCoding>
{
    NSMutableDictionary *likedTextStateDict;
    NSMutableDictionary *stateExpiredTimeDict;
}

+ (void)initialize;
+ (void)PBArrayAdd_stateExpiredTimeDict;
+ (void)PBArrayAdd_likedTextStateDict;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *stateExpiredTimeDict; // @synthesize stateExpiredTimeDict;
@property(retain, nonatomic) NSMutableDictionary *likedTextStateDict; // @synthesize likedTextStateDict;
- (void)removeExpiredTextState;
- (void)removeTextStateId:(id)arg1;
- (void)setLikeType:(long long)arg1 forStateId:(id)arg2 expiredTime:(unsigned int)arg3;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface MemoryStatPluginConfig : NSObject <PBCoding>
{
    _Bool memoryStatManualEnabled;
    _Bool memoryStatDisable;
    _Bool isABTestUser;
    _Bool isAlwaysUpload;
    int minGeneration;
    int skipMaxStackDepth;
    int skipMinMallocSize;
    int dumpCallStacks;
    NSString *platform;
    double disableTime;
}

+ (void)initialize;
+ (void)PBArrayAdd_dumpCallStacks;
+ (void)PBArrayAdd_isAlwaysUpload;
+ (void)PBArrayAdd_skipMinMallocSize;
+ (void)PBArrayAdd_skipMaxStackDepth;
+ (void)PBArrayAdd_isABTestUser;
+ (void)PBArrayAdd_disableTime;
+ (void)PBArrayAdd_minGeneration;
+ (void)PBArrayAdd_platform;
+ (void)PBArrayAdd_memoryStatDisable;
+ (void)PBArrayAdd_memoryStatManualEnabled;
- (void).cxx_destruct;
@property(nonatomic) int dumpCallStacks; // @synthesize dumpCallStacks;
@property(nonatomic) _Bool isAlwaysUpload; // @synthesize isAlwaysUpload;
@property(nonatomic) int skipMinMallocSize; // @synthesize skipMinMallocSize;
@property(nonatomic) int skipMaxStackDepth; // @synthesize skipMaxStackDepth;
@property(nonatomic) _Bool isABTestUser; // @synthesize isABTestUser;
@property(nonatomic) double disableTime; // @synthesize disableTime;
@property(nonatomic) int minGeneration; // @synthesize minGeneration;
@property(retain, nonatomic) NSString *platform; // @synthesize platform;
@property(nonatomic) _Bool memoryStatDisable; // @synthesize memoryStatDisable;
@property(nonatomic) _Bool memoryStatManualEnabled; // @synthesize memoryStatManualEnabled;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

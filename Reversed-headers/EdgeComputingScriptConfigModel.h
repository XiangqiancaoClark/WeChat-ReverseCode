//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCopying-Protocol.h"
#import "PBCoding-Protocol.h"

@class NSArray, NSString;

@interface EdgeComputingScriptConfigModel : MMObject <PBCoding, NSCopying>
{
    unsigned int dataSourceType;
    unsigned int dataSourceID;
    unsigned int reportID;
    unsigned int isInstantReport;
    unsigned int dbExpireTime;
    unsigned int runPeriod;
    unsigned int isRepeat;
    unsigned int reportMethod;
    NSString *configID;
    NSArray *fieldConfigModels;
    NSString *script;
    NSString *originalJson;
    NSString *scriptMD5;
    NSString *scriptURL;
}

+ (void)initialize;
+ (void)PBArrayAdd_scriptURL;
+ (void)PBArrayAdd_reportMethod;
+ (void)PBArrayAdd_scriptMD5;
+ (void)PBArrayAdd_isRepeat;
+ (void)PBArrayAdd_runPeriod;
+ (void)PBArrayAdd_originalJson;
+ (void)PBArrayAdd_script;
+ (void)PBArrayAdd_dbExpireTime;
+ (void)PBArrayAdd_isInstantReport;
+ (void)PBArrayAdd_fieldConfigModels;
+ (void)PBArrayAdd_reportID;
+ (void)PBArrayAdd_dataSourceID;
+ (void)PBArrayAdd_dataSourceType;
+ (void)PBArrayAdd_configID;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *scriptURL; // @synthesize scriptURL;
@property(nonatomic) unsigned int reportMethod; // @synthesize reportMethod;
@property(retain, nonatomic) NSString *scriptMD5; // @synthesize scriptMD5;
@property(nonatomic) unsigned int isRepeat; // @synthesize isRepeat;
@property(nonatomic) unsigned int runPeriod; // @synthesize runPeriod;
@property(retain, nonatomic) NSString *originalJson; // @synthesize originalJson;
@property(retain, nonatomic) NSString *script; // @synthesize script;
@property(nonatomic) unsigned int dbExpireTime; // @synthesize dbExpireTime;
@property(nonatomic) unsigned int isInstantReport; // @synthesize isInstantReport;
@property(retain, nonatomic) NSArray *fieldConfigModels; // @synthesize fieldConfigModels;
@property(nonatomic) unsigned int reportID; // @synthesize reportID;
@property(nonatomic) unsigned int dataSourceID; // @synthesize dataSourceID;
@property(nonatomic) unsigned int dataSourceType; // @synthesize dataSourceType;
@property(retain, nonatomic) NSString *configID; // @synthesize configID;
- (id)toString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


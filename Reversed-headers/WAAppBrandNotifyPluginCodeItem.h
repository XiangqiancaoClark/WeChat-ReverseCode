//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSArray, NSString;

@interface WAAppBrandNotifyPluginCodeItem : NSObject <PBCoding>
{
    _Bool autoUpdate;
    unsigned int version;
    unsigned int debugDevKey;
    NSString *provider;
    NSString *md5;
    NSString *prefixPath;
    NSArray *contextsList;
    NSString *versionDesc;
}

+ (void)initialize;
+ (void)PBArrayAdd_versionDesc;
+ (void)PBArrayAdd_debugDevKey;
+ (void)PBArrayAdd_autoUpdate;
+ (void)PBArrayAdd_contextsList;
+ (void)PBArrayAdd_prefixPath;
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_provider;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *versionDesc; // @synthesize versionDesc;
@property(nonatomic) unsigned int debugDevKey; // @synthesize debugDevKey;
@property(nonatomic) _Bool autoUpdate; // @synthesize autoUpdate;
@property(retain, nonatomic) NSArray *contextsList; // @synthesize contextsList;
@property(retain, nonatomic) NSString *prefixPath; // @synthesize prefixPath;
@property(retain, nonatomic) NSString *md5; // @synthesize md5;
@property(nonatomic) unsigned int version; // @synthesize version;
@property(retain, nonatomic) NSString *provider; // @synthesize provider;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface WAPublicResInfo : NSObject <PBCoding>
{
    _Bool bIsForceUpdate;
    unsigned int version;
    unsigned int updateTime;
    unsigned int updateScene;
    unsigned int updateType;
    unsigned int oldVersion;
    NSString *pkgDownloadUrl;
    NSString *checkSum;
    NSString *pkgPatchUrl;
}

+ (void)initialize;
+ (void)PBArrayAdd_oldVersion;
+ (void)PBArrayAdd_pkgPatchUrl;
+ (void)PBArrayAdd_updateType;
+ (void)PBArrayAdd_updateScene;
+ (void)PBArrayAdd_bIsForceUpdate;
+ (void)PBArrayAdd_updateTime;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_checkSum;
+ (void)PBArrayAdd_pkgDownloadUrl;
- (void).cxx_destruct;
@property(nonatomic) unsigned int oldVersion; // @synthesize oldVersion;
@property(retain, nonatomic) NSString *pkgPatchUrl; // @synthesize pkgPatchUrl;
@property(nonatomic) unsigned int updateType; // @synthesize updateType;
@property(nonatomic) unsigned int updateScene; // @synthesize updateScene;
@property(nonatomic) _Bool bIsForceUpdate; // @synthesize bIsForceUpdate;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime;
@property(nonatomic) unsigned int version; // @synthesize version;
@property(retain, nonatomic) NSString *checkSum; // @synthesize checkSum;
@property(retain, nonatomic) NSString *pkgDownloadUrl; // @synthesize pkgDownloadUrl;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


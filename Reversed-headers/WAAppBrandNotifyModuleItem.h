//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSArray, NSMutableArray, NSString;

@interface WAAppBrandNotifyModuleItem : NSObject <PBCoding>
{
    _Bool independent;
    NSString *name;
    NSString *md5;
    NSArray *aliasList;
    NSString *withoutLibMd5;
    NSMutableArray *arrPluginCodeInfo;
    NSString *debugUrl;
    NSMutableArray *arrWidgetInfo;
}

+ (void)initialize;
+ (void)PBArrayAdd_arrWidgetInfo;
+ (void)PBArrayAdd_debugUrl;
+ (void)PBArrayAdd_arrPluginCodeInfo;
+ (void)PBArrayAdd_withoutLibMd5;
+ (void)PBArrayAdd_aliasList;
+ (void)PBArrayAdd_independent;
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_name;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrWidgetInfo; // @synthesize arrWidgetInfo;
@property(retain, nonatomic) NSString *debugUrl; // @synthesize debugUrl;
@property(retain, nonatomic) NSMutableArray *arrPluginCodeInfo; // @synthesize arrPluginCodeInfo;
@property(retain, nonatomic) NSString *withoutLibMd5; // @synthesize withoutLibMd5;
@property(retain, nonatomic) NSArray *aliasList; // @synthesize aliasList;
@property(nonatomic) _Bool independent; // @synthesize independent;
@property(retain, nonatomic) NSString *md5; // @synthesize md5;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


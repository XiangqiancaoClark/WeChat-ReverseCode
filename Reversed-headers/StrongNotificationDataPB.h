//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface StrongNotificationDataPB : MMObject <PBCoding>
{
    NSMutableDictionary *configDic;
    NSMutableArray *itemAndMessageList;
}

+ (void)initialize;
+ (void)PBArrayAdd_itemAndMessageList;
+ (void)PBArrayAdd_configDic;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *itemAndMessageList; // @synthesize itemAndMessageList;
@property(retain, nonatomic) NSMutableDictionary *configDic; // @synthesize configDic;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString, UIImage;

@interface GameCenterRecentGameInfo : MMObject <PBCoding>
{
    unsigned int rankWeight;
    NSString *appID;
    NSString *name;
    NSString *iconURL;
    NSString *userRank;
    long long userTrend;
    UIImage *_defaultIcon;
}

+ (void)initialize;
+ (void)PBArrayAdd_rankWeight;
+ (void)PBArrayAdd_userTrend;
+ (void)PBArrayAdd_userRank;
+ (void)PBArrayAdd_iconURL;
+ (void)PBArrayAdd_name;
+ (void)PBArrayAdd_appID;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *defaultIcon; // @synthesize defaultIcon=_defaultIcon;
@property(nonatomic) unsigned int rankWeight; // @synthesize rankWeight;
@property(nonatomic) long long userTrend; // @synthesize userTrend;
@property(retain, nonatomic) NSString *userRank; // @synthesize userRank;
@property(retain, nonatomic) NSString *iconURL; // @synthesize iconURL;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(retain, nonatomic) NSString *appID; // @synthesize appID;
- (void)dealloc;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


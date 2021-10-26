//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString;

@interface MMLocationCacheItem : MMObject <PBCoding>
{
    _Bool isMarsLocation;
    double latitude;
    double longitude;
    double timestamp;
    NSString *_encryptLatitude;
    NSString *_encryptLongitude;
}

+ (void)initialize;
+ (void)PBArrayAdd_isMarsLocation;
+ (void)PBArrayAdd_timestamp;
+ (void)PBArrayAdd_longitude;
+ (void)PBArrayAdd_latitude;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *encryptLongitude; // @synthesize encryptLongitude=_encryptLongitude;
@property(retain, nonatomic) NSString *encryptLatitude; // @synthesize encryptLatitude=_encryptLatitude;
@property(nonatomic) _Bool isMarsLocation; // @synthesize isMarsLocation;
@property(nonatomic) double timestamp; // @synthesize timestamp;
@property(nonatomic) double longitude; // @synthesize longitude;
@property(nonatomic) double latitude; // @synthesize latitude;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

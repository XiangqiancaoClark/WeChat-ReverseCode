//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"
#import "WCTColumnCoding-Protocol.h"

@class NSString;

@interface WWKFDBContactInfo : NSObject <PBCoding, WCTColumnCoding>
{
    unsigned int lastUpdateTime;
    NSString *nickName;
    NSString *bigHeadImg;
    NSString *smallHeadImg;
    NSString *nickNamePyinit;
    NSString *nickNameQuanpin;
    NSString *ticket;
}

+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_lastUpdateTime;
+ (void)PBArrayAdd_ticket;
+ (void)PBArrayAdd_nickNameQuanpin;
+ (void)PBArrayAdd_nickNamePyinit;
+ (void)PBArrayAdd_smallHeadImg;
+ (void)PBArrayAdd_bigHeadImg;
+ (void)PBArrayAdd_nickName;
- (void).cxx_destruct;
@property(nonatomic) unsigned int lastUpdateTime; // @synthesize lastUpdateTime;
@property(retain, nonatomic) NSString *ticket; // @synthesize ticket;
@property(retain, nonatomic) NSString *nickNameQuanpin; // @synthesize nickNameQuanpin;
@property(retain, nonatomic) NSString *nickNamePyinit; // @synthesize nickNamePyinit;
@property(retain, nonatomic) NSString *smallHeadImg; // @synthesize smallHeadImg;
@property(retain, nonatomic) NSString *bigHeadImg; // @synthesize bigHeadImg;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


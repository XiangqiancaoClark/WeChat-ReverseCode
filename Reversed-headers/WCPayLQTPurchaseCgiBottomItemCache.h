//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSArray, NSString;

@interface WCPayLQTPurchaseCgiBottomItemCache : NSObject <PBCoding>
{
    _Bool autoPullUpKeyboard;
    _Bool isShowProtocol;
    _Bool isProtoclDefaultChecked;
    NSString *bottomWording;
    NSString *bottomTipsWording;
    NSArray *protocolList;
}

+ (_Bool)saveBottomItemCache:(id)arg1 withEntranceType:(unsigned int)arg2;
+ (id)getBottomItemCacheWithEntranceType:(unsigned int)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_protocolList;
+ (void)PBArrayAdd_bottomTipsWording;
+ (void)PBArrayAdd_bottomWording;
+ (void)PBArrayAdd_isProtoclDefaultChecked;
+ (void)PBArrayAdd_isShowProtocol;
+ (void)PBArrayAdd_autoPullUpKeyboard;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *protocolList; // @synthesize protocolList;
@property(retain, nonatomic) NSString *bottomTipsWording; // @synthesize bottomTipsWording;
@property(retain, nonatomic) NSString *bottomWording; // @synthesize bottomWording;
@property(nonatomic) _Bool isProtoclDefaultChecked; // @synthesize isProtoclDefaultChecked;
@property(nonatomic) _Bool isShowProtocol; // @synthesize isShowProtocol;
@property(nonatomic) _Bool autoPullUpKeyboard; // @synthesize autoPullUpKeyboard;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


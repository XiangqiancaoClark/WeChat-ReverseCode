//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"
#import "VideRingModifyExt-Protocol.h"

@class NSMutableArray, NSString, VideoRingDataBase, VideoRingNetProvider;

@interface VideoRingDataService : MMUserService <VideRingModifyExt, MMServiceProtocol>
{
    _Bool _shouldOpenRingBackSwitch;
    _Bool _needReportCallKitRing;
    _Bool _needReportVoipPushRing;
    NSMutableArray *_exclusiveRings;
    VideoRingDataBase *_db;
    NSString *_sessionID;
    VideoRingDataBase *_dataBase;
    VideoRingNetProvider *_provider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VideoRingNetProvider *provider; // @synthesize provider=_provider;
@property(retain, nonatomic) VideoRingDataBase *dataBase; // @synthesize dataBase=_dataBase;
@property(nonatomic) _Bool needReportVoipPushRing; // @synthesize needReportVoipPushRing=_needReportVoipPushRing;
@property(nonatomic) _Bool needReportCallKitRing; // @synthesize needReportCallKitRing=_needReportCallKitRing;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) _Bool shouldOpenRingBackSwitch; // @synthesize shouldOpenRingBackSwitch=_shouldOpenRingBackSwitch;
@property(retain, nonatomic) VideoRingDataBase *db; // @synthesize db=_db;
@property(retain, nonatomic) NSMutableArray *exclusiveRings; // @synthesize exclusiveRings=_exclusiveRings;
- (unsigned long long)curRoomKeyFor:(unsigned long long)arg1;
- (unsigned int)curRoomIDFor:(unsigned long long)arg1;
- (void)setExclusiveRing:(id)arg1 forUser:(id)arg2;
- (id)getExclusiveRingForUser:(id)arg1;
- (id)getGlobalRing;
- (_Bool)hasAnyExclusiveRing;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


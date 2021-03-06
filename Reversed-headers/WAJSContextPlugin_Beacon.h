//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSContextPluginBase.h"

#import "CBCentralManagerDelegate-Protocol.h"
#import "IWABeaconMgrExt-Protocol.h"

@class CBCentralManager, NSArray, NSMutableDictionary, NSString;

@interface WAJSContextPlugin_Beacon : WAJSContextPluginBase <IWABeaconMgrExt, CBCentralManagerDelegate>
{
    NSArray *m_uuids;
    unsigned long long m_locationTag;
    CBCentralManager *m_bleMgr;
    NSMutableDictionary *m_beacons;
    long long m_bleState;
    _Bool m_isInStartWorkFlow;
    _Bool m_isRanging;
}

- (void).cxx_destruct;
- (id)genBeaconKey:(id)arg1;
- (void)onDidRangeBeacons:(id)arg1 inRegion:(id)arg2 withTag:(unsigned long long)arg3;
- (void)onRangingBeaconsDidFailForRegion:(id)arg1 withError:(id)arg2 withTag:(unsigned long long)arg3;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)notifyServiceBeaconState;
- (id)getCurrentBeacons;
- (int)stopRanging;
- (void)notifyStartRangingFailed:(id)arg1;
- (void)startRanging;
- (int)starMoritoring:(id)arg1 needBLEAbilityCheck:(_Bool)arg2;
- (int)systemSupportBeacon;
- (_Bool)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


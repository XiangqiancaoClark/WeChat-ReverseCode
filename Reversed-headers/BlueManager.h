//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMRootService.h"

#import "BlueAdapterDelegate-Protocol.h"
#import "CBCentralManagerDelegate-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class BlueAdapterBase, CBCentralManager, NSObject, NSString;
@protocol BlueAdapterDelegate, OS_dispatch_queue;

@interface BlueManager : MMRootService <MMServiceProtocol, CBCentralManagerDelegate, BlueAdapterDelegate>
{
    CBCentralManager *_bleManager;
    _Bool _stateUpdateFlag;
    NSObject<OS_dispatch_queue> *m_blueQueue;
    BlueAdapterBase *adapter[2];
    NSObject<BlueAdapterDelegate> *_delegate;
}

+ (long long)getDIDbyMACString:(id)arg1 AndConnProto:(id)arg2;
- (void).cxx_destruct;
@property _Bool stateUpdateFlag; // @synthesize stateUpdateFlag=_stateUpdateFlag;
@property(retain) CBCentralManager *bleManager; // @synthesize bleManager=_bleManager;
@property __weak NSObject<BlueAdapterDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)onBlueProfilePedometerTargetWrote:(long long)arg1;
- (void)onBlueProfilePedometerTargetUpdated:(long long)arg1 Step:(int)arg2;
- (void)onBlueProfilePedometerInfoUpdated:(long long)arg1 Info:(id)arg2;
- (void)onBlueProfileConnectStateChanged:(long long)arg1 State:(int)arg2 ErrorCode:(int)arg3;
- (void)onSessionClosed:(long long)arg1;
- (void)onSessionDataAvailable:(long long)arg1;
- (void)onSessionError:(long long)arg1 errorCode:(int)arg2;
- (void)onSessionWrote:(long long)arg1;
- (void)onSessionConnectError:(long long)arg1 errorCode:(int)arg2;
- (void)onSessionConnected:(long long)arg1;
- (void)onDeviceLost:(long long)arg1;
- (void)onDeviceFound:(long long)arg1 WithExtData:(id)arg2;
- (void)onDeviceFound:(long long)arg1;
- (int)writePedometerProfileTarget:(long long)arg1 Step:(int)arg2;
- (int)readPedometerProfileTarget:(long long)arg1;
- (int)readPedometerProfileCurPedometerInfo:(long long)arg1;
- (int)getProfileConnectState:(long long)arg1;
- (int)getProfileType:(long long)arg1;
- (void)closeProfile:(long long)arg1;
- (int)connectProfile:(long long)arg1 ProfileType:(int)arg2;
- (void)writeSession:(long long)arg1:(const char *)arg2:(int)arg3;
- (int)readSession:(long long)arg1:(char *)arg2:(int)arg3;
- (void)closeSession:(long long)arg1;
- (int)connectSession:(long long)arg1;
- (long long)createSession:(long long)arg1;
- (id)getDeviceMac:(long long)arg1;
- (id)getDeviceName:(long long)arg1;
- (int)getDeviceType:(long long)arg1;
- (long long)getDIDbySessionID:(long long)arg1;
- (id)getDeviceProtocols:(long long)arg1;
- (void)stopScan;
- (_Bool)scanBle:(_Bool)arg1;
- (_Bool)scanEa;
- (_Bool)scanAll;
- (_Bool)scanForWDevice;
- (_Bool)scan;
- (_Bool)enable;
- (void)centralManagerDidUpdateState:(id)arg1;
- (int)getState;
- (void)dealloc;
- (void)onServiceInit;
- (void)cleanUpAllDevices;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


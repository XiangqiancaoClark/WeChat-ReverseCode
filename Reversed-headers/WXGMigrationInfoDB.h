//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WCTDatabase;

@interface WXGMigrationInfoDB : NSObject
{
    WCTDatabase *_infoDB;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTDatabase *infoDB; // @synthesize infoDB=_infoDB;
- (void)p_mergeTheTimeIntervalArray:(id)arg1;
- (id)p_getSessionTimeIntervalTableWithDeviceID:(id)arg1;
- (id)p_getSessionLastTimeTableWithDeviceID:(id)arg1;
- (_Bool)hasMigrationWithDeviceID:(id)arg1 withSessionName:(id)arg2;
- (_Bool)hasMigrationWithDeviceID:(id)arg1;
- (id)getSessionInfoResultResultArrayWithDataInfo:(id)arg1 withTmpLastTime:(unsigned int)arg2 withDeviceID:(id)arg3;
- (unsigned int)getSessionLastTime:(id)arg1 withDeviceID:(id)arg2;
- (void)insertSession:(id)arg1 withBeginTime:(unsigned int)arg2 withEndTime:(unsigned int)arg3 withDeviceID:(id)arg4;
- (void)insertSession:(id)arg1 withLastTime:(unsigned int)arg2 withDeviceID:(id)arg3;
- (void)createSessionLastTimeTableWithDeviceID:(id)arg1;
- (void)closeDB;
- (void)dealloc;

@end


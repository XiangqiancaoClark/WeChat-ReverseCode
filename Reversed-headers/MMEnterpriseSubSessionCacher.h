//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ISessionStorageDelegate-Protocol.h"

@class MMBaseSessionStorage, MMEnterpriseMainUsrData, NSMutableDictionary, NSString;

@interface MMEnterpriseSubSessionCacher : NSObject <ISessionStorageDelegate>
{
    MMEnterpriseMainUsrData *_mainUsrData;
    NSString *_mainUsrName;
    NSString *_sessionType;
    MMBaseSessionStorage *_sessionStorage;
    NSMutableDictionary *_dictUsrname2CellData;
    _Bool _showRedDot;
}

+ (long long)compareEnterpriseSubSession:(id)arg1 right:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *mainUsrName; // @synthesize mainUsrName=_mainUsrName;
- (void)checkSessionInfo:(id)arg1;
- (void)performCleanUpNoMsgSessions:(id)arg1;
- (id)getPathForOldSessionCache;
- (void)deleteOldVersionSessionCache;
- (long long)compareSession:(id)arg1 rightSession:(id)arg2;
- (id)importSessions;
- (void)clearSessionCache;
- (void)deleteAllSessions;
- (void)deleteSessionWithUsrName:(id)arg1;
- (void)deleteSessionAtIndex:(long long)arg1;
- (void)addOrUpdateSessionList:(id)arg1;
- (void)addOrUpdateSessionInfo:(id)arg1;
- (id)sessionInfoList;
- (id)sessionCellDataAtIndex:(long long)arg1;
- (id)sessionInfoWithUsrName:(id)arg1;
- (id)sessionInfoAtIndex:(long long)arg1;
- (unsigned int)sessionCount;
- (void)clearMainUsrRedDot;
- (_Bool)getMainUsrShowRedDot;
- (void)setMainUsrShowRedDot;
- (_Bool)hasNewArrivalCountWithSubSessionUsrName:(id)arg1;
- (void)clearNewArrivalCountWithSubSessionUsrName:(id)arg1;
- (void)deleteNewArrivalCountWithSubSessionUsrName:(id)arg1;
- (void)setNewArrivalCount:(unsigned int)arg1 withSubSessionUsrName:(id)arg2;
- (unsigned int)getNewArrivalCountWithSubSessionUsrName:(id)arg1;
- (unsigned int)getMainUsrUnreadCount;
- (void)clearMainUsrUnreadCount;
- (void)deleteMainUsrData;
- (void)saveMainUsrData;
- (void)loadMainUsrData;
- (id)getMainUsrDataPath;
- (void)dealloc;
- (id)initWithMainUsrName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


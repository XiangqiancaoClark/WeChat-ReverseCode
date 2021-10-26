//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LSMFileStorage, MMSessionSetting, NSCache, NSMutableDictionary, WCTDatabase, WCTTable;

@interface MMSessionDB : NSObject
{
    WCTDatabase *m_db;
    WCTTable *m_table;
    NSMutableDictionary *m_sessionCache;
    MMSessionSetting *m_sessionSetting;
    LSMFileStorage *m_fileStorage;
    NSCache *m_preLoadSessionCache;
    WCTTable *m_tableSessionDeleteInfo;
}

- (void).cxx_destruct;
- (void)onRenewMMDB;
- (_Bool)DeleteOutOfDateSessionDeleteInfo;
- (id)GetSessionDeleteInfo:(id)arg1;
- (_Bool)InsertOrUpdateSessionDeleteInfo:(id)arg1;
- (void)DeleteSessions:(id)arg1;
- (void)DeleteSessionByUserName:(id)arg1;
- (void)AddOrModifySessions:(id)arg1;
- (void)ModifySession:(id)arg1;
- (void)AddSession:(id)arg1;
- (void)FulFillSession:(id)arg1 checkStatus:(_Bool)arg2;
- (void)ASyncFulFillSession:(id)arg1;
- (void)CleanupPreLoadSessionCache;
- (void)SetSessionCount:(unsigned int)arg1;
- (unsigned int)GetSessionCount;
- (void)SetSessionFailCount:(unsigned int)arg1;
- (unsigned int)GetSessionFailCount;
- (void)SetSessionVersion:(unsigned int)arg1;
- (unsigned int)GetSessionVersion;
- (void)ImportSessions:(id)arg1;
- (unsigned int)GetSessionModifyTimeInSeconds:(id)arg1;
- (void)deleteSessionOfUser:(id)arg1;
- (id)loadSessionOfUser:(id)arg1;
- (void)saveSessionInfos:(id)arg1;
- (_Bool)saveSessionInfo:(id)arg1;
- (long long)GetSessionImportTime;
- (void)SetSessionImported;
- (void)saveSessionSetting;
- (void)tryLoadSessionSetting;
- (void)dbImportSessions:(id)arg1;
- (_Bool)dbDeleteSessions:(id)arg1;
- (_Bool)dbDeleteSession:(id)arg1;
- (_Bool)dbAddOrModifySessions:(id)arg1;
- (_Bool)dbAddOrModifySession:(id)arg1;
- (id)GetAllSession;
- (id)GetAllSession:(_Bool *)arg1;
- (void)dealloc;
- (void)initDB;
- (id)init;

@end

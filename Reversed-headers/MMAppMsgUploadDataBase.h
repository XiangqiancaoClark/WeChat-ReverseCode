//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class WCTDatabase, WCTTable;

@interface MMAppMsgUploadDataBase : MMObject
{
    WCTDatabase *_database;
    WCTTable *_uploadfileTable;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTTable *uploadfileTable; // @synthesize uploadfileTable=_uploadfileTable;
@property(retain, nonatomic) WCTDatabase *database; // @synthesize database=_database;
- (id)MMAppMsgUploadDBPath;
- (id)MMAppMsgUploadRootDir;
- (id)getAMUItem:(unsigned int)arg1;
- (_Bool)deleteAMUItemForMsg:(id)arg1;
- (_Bool)deleteAllItemForUser:(id)arg1;
- (_Bool)deleteAMUItemInDB:(id)arg1;
- (_Bool)updateAMUItemInDB:(id)arg1;
- (id)createTableWithName:(id)arg1 objectClass:(Class)arg2;
- (_Bool)tryCleanData;
- (void)dealloc;
- (void)createTables;
- (void)reloadDatabase;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FTSFavSearchTaskDelegate-Protocol.h"

@class FTSFavDB, FTSFavIndexMgr, NSMutableDictionary, NSString;

@interface FTSFavMgr : NSObject <FTSFavSearchTaskDelegate>
{
    NSMutableDictionary *_dicFavSearchTask;
    FTSFavDB *_ftsFavDB;
    FTSFavIndexMgr *_favIndexMgr;
}

- (void).cxx_destruct;
- (id)getFavItemLocalIdByTag:(id)arg1;
- (id)getAllFavTag;
- (_Bool)updateOldFavTag:(id)arg1 toNewFavTag:(id)arg2;
- (_Bool)hasStartMigrateToFTS5;
- (_Bool)hasFinishMigrateToFTS5;
- (_Bool)haveFTS5Index:(id)arg1;
- (_Bool)haveFTS3Index:(id)arg1;
- (unsigned int)asyncGetFTSFavDBInfoWhenComplete:(CDUnknownBlockType)arg1;
- (void)onFavSearchTaskResultChanged:(_Bool)arg1 taskObj:(id)arg2;
- (id)getAllSearchResultFor:(id)arg1 taskKey:(id)arg2;
- (unsigned int)getSearchItemTotalCountFor:(id)arg1 taskKey:(id)arg2;
- (unsigned int)getSearchItemCountFor:(id)arg1 taskKey:(id)arg2;
- (id)getSearchItemFor:(id)arg1 index:(unsigned int)arg2 taskKey:(id)arg3;
- (_Bool)hasSearchResultFor:(id)arg1 taskKey:(id)arg2;
- (_Bool)hasSearchDoneFor:(id)arg1 taskKey:(id)arg2;
- (void)cancelSearch:(id)arg1;
- (void)searchMoreForTask:(id)arg1;
- (void)syncSearch:(id)arg1 byType:(int)arg2 andTags:(id)arg3 taskKey:(id)arg4;
- (void)asyncSearch:(id)arg1 byType:(int)arg2 andTags:(id)arg3 taskKey:(id)arg4;
- (id)getLastQueryText:(id)arg1;
- (id)getArrLastQuerywords:(id)arg1;
- (id)getNewestQuery:(id)arg1;
- (void)setNewestQuery:(id)arg1 taskKey:(id)arg2;
- (id)getTaskForKey:(id)arg1 queryText:(id)arg2;
- (void)removeTaskForKey:(id)arg1;
- (void)makeTaskIfNil:(id)arg1;
- (id)getTaskForKey:(id)arg1;
- (void)initIndexMgr:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

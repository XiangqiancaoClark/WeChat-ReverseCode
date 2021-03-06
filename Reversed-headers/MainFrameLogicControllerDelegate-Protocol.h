//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMSessionInfo, NSArray, NSString;

@protocol MainFrameLogicControllerDelegate <NSObject>

@optional
- (void)clearSessionCache;
- (void)stopLoadingForSessionRebuild;
- (void)startLoadingForSessionRebuild;
- (void)stopIniting:(unsigned int)arg1;
- (void)percentIniting:(NSString *)arg1;
- (void)changeNetworkStatus:(unsigned int)arg1;
- (void)insertSessionCellAtIndexes:(NSArray *)arg1;
- (void)deleteSessionCellAtIndexes:(NSArray *)arg1;
- (void)updateUnReadCount;
- (void)deleteSessionCell:(unsigned int)arg1 atSection:(long long)arg2 withUser:(NSString *)arg3;
- (void)selectCellForName:(NSString *)arg1;
- (void)cancelSelectedCell;
- (void)updateAllItemTimeLabel;
- (void)updateSession:(MMSessionInfo *)arg1;
- (void)reloadSessions;
@end


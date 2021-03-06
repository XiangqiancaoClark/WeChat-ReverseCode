//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAStarListViewModel.h"

#import "WAMainListStarLogicDelegate-Protocol.h"

@class NSString, WAMainListStarLogic;

@interface WAMyStarListViewModel : WAStarListViewModel <WAMainListStarLogicDelegate>
{
    NSString *m_showSessionId;
    WAMainListStarLogic *_starLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAMainListStarLogic *starLogic; // @synthesize starLogic=_starLogic;
- (void)starDataDidUpdated;
- (void)appItemDidUnStaredFailedWithUnknownError:(id)arg1;
- (void)appItemDidUnStaredSuccess:(id)arg1;
- (void)appItemDidStaredSuccess:(id)arg1;
- (void)reportStarListViewShowAction;
- (void)reportDestopOpWithAppItem:(id)arg1 eventId:(unsigned long long)arg2;
- (void)reportOnViewDidAppear;
- (void)reportItemDeleted:(id)arg1 index:(long long)arg2;
- (_Bool)deleteItem:(long long)arg1;
- (void)moveItemFrom:(long long)arg1 toIndex:(long long)arg2;
- (_Bool)canMove;
- (void)refreshData;
- (id)dataForIndex:(long long)arg1;
- (long long)getStarNumberLimitation;
- (_Bool)isReachLimit;
- (_Bool)hasData;
- (long long)count;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


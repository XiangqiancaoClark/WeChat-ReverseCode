//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, WCFinderCreateCoordinator, WCFinderDataItem;
@protocol MMFinderGameLivePrepareLogicDelegate;

@interface MMFinderGameLivePrepareLogic : NSObject
{
    unsigned int _scene;
    id <MMFinderGameLivePrepareLogicDelegate> _delegate;
    NSString *_extInfoAppId;
    NSString *_appName;
    NSString *_finderUsername;
    NSString *_ticket;
    NSString *_liveObjectExportId;
    NSMutableArray *_gameUserInfoList;
    NSMutableArray *_gameSearchUserInfoList;
    WCFinderDataItem *_finderDataItem;
    WCFinderCreateCoordinator *_createCoordinator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderCreateCoordinator *createCoordinator; // @synthesize createCoordinator=_createCoordinator;
@property(retain, nonatomic) WCFinderDataItem *finderDataItem; // @synthesize finderDataItem=_finderDataItem;
@property(retain, nonatomic) NSMutableArray *gameSearchUserInfoList; // @synthesize gameSearchUserInfoList=_gameSearchUserInfoList;
@property(retain, nonatomic) NSMutableArray *gameUserInfoList; // @synthesize gameUserInfoList=_gameUserInfoList;
@property(retain, nonatomic) NSString *liveObjectExportId; // @synthesize liveObjectExportId=_liveObjectExportId;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *ticket; // @synthesize ticket=_ticket;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSString *extInfoAppId; // @synthesize extInfoAppId=_extInfoAppId;
@property(nonatomic) __weak id <MMFinderGameLivePrepareLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)haveFinderContact;
- (_Bool)isGameSearchUserInfoListContain:(id)arg1;
- (void)getStickerStatusWithAppid:(id)arg1;
- (void)getFilteredGameUserInfoWithAppId:(id)arg1;
- (void)getGameUserInfoList;
- (void)jumpToLiveShareWithExportId:(id)arg1;
- (void)jumpToLiveEnterWithExportId:(id)arg1 extParam:(id)arg2;
- (void)onJumpToGameLiveStarterPrepareWithAppId:(id)arg1 rootViewController:(id)arg2;
- (_Bool)isJumpToGameLivePreJudgeSuccess;
- (_Bool)isValidToJumpWithExtInfo:(id)arg1;
- (id)initWithAppId:(id)arg1;
- (id)init;

@end


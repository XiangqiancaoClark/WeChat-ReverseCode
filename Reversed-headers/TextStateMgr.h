//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "IContactMgrExt-Protocol.h"
#import "IExptServiceExt-Protocol.h"
#import "IMMLanguageMgrExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "IUpdateProfileMgrExt-Protocol.h"
#import "MMConfigMgrExt-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "TextStateLikeLogicDelegate-Protocol.h"
#import "TextStatePublishLogicDelegate-Protocol.h"
#import "TextStateTopicLogicDelegate-Protocol.h"

@class MMTextStateDataCachePB, NSMutableDictionary, NSString, TextStateIconDataSource, TextStateIconLogic, TextStateLikeLogic, TextStatePublishLogic, TextStateTopicLogic, UIImage;

@interface TextStateMgr : MMUserService <TextStatePublishLogicDelegate, IMsgExt, IContactMgrExt, IUpdateProfileMgrExt, TextStateTopicLogicDelegate, TextStateLikeLogicDelegate, IExptServiceExt, IMMLanguageMgrExt, MMKernelExt, MMConfigMgrExt, MMServiceProtocol>
{
    MMTextStateDataCachePB *m_textStateDataCache;
    _Bool _bShowTextState;
    _Bool _bShowTextStateIPadEntry;
    _Bool _bShowNewTips;
    _Bool _bShowTextStateIconInContactsList;
    _Bool _bShowTextStateIconInGourpChat;
    _Bool _bShowTextStateIconInTimelineFeed;
    _Bool _bShowTextStateIconInTimelineCommentsAndLike;
    _Bool _bShowTextStateIconInTimelineNotificationsList;
    _Bool _bEnableTagAtSelfState;
    _Bool _bEnableTagAtOtherState;
    _Bool _bShowFriendTopicButton;
    _Bool _bSortTopicWithFrdScore;
    TextStateIconDataSource *_iconDataSource;
    NSMutableDictionary *_m_dicTextStateSession;
    TextStatePublishLogic *_publishLogic;
    TextStateTopicLogic *_topicLogic;
    TextStateLikeLogic *_likeLogic;
    TextStateIconLogic *_iconLogic;
    unsigned long long _newestCount;
    NSMutableDictionary *_userNameToModelDict;
    unsigned long long _emoticonSwitch;
    NSString *_currentBackgroundId;
    UIImage *_defaultImage;
    unsigned long long _lastUpdateSelfInfoTime;
    unsigned long long _lastFetchWeappTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long lastFetchWeappTime; // @synthesize lastFetchWeappTime=_lastFetchWeappTime;
@property(nonatomic) unsigned long long lastUpdateSelfInfoTime; // @synthesize lastUpdateSelfInfoTime=_lastUpdateSelfInfoTime;
@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(retain, nonatomic) NSString *currentBackgroundId; // @synthesize currentBackgroundId=_currentBackgroundId;
@property(nonatomic) unsigned long long emoticonSwitch; // @synthesize emoticonSwitch=_emoticonSwitch;
@property(nonatomic) _Bool bSortTopicWithFrdScore; // @synthesize bSortTopicWithFrdScore=_bSortTopicWithFrdScore;
@property(nonatomic) _Bool bShowFriendTopicButton; // @synthesize bShowFriendTopicButton=_bShowFriendTopicButton;
@property(nonatomic) _Bool bEnableTagAtOtherState; // @synthesize bEnableTagAtOtherState=_bEnableTagAtOtherState;
@property(nonatomic) _Bool bEnableTagAtSelfState; // @synthesize bEnableTagAtSelfState=_bEnableTagAtSelfState;
@property(nonatomic) _Bool bShowTextStateIconInTimelineNotificationsList; // @synthesize bShowTextStateIconInTimelineNotificationsList=_bShowTextStateIconInTimelineNotificationsList;
@property(nonatomic) _Bool bShowTextStateIconInTimelineCommentsAndLike; // @synthesize bShowTextStateIconInTimelineCommentsAndLike=_bShowTextStateIconInTimelineCommentsAndLike;
@property(nonatomic) _Bool bShowTextStateIconInTimelineFeed; // @synthesize bShowTextStateIconInTimelineFeed=_bShowTextStateIconInTimelineFeed;
@property(nonatomic) _Bool bShowTextStateIconInGourpChat; // @synthesize bShowTextStateIconInGourpChat=_bShowTextStateIconInGourpChat;
@property(nonatomic) _Bool bShowTextStateIconInContactsList; // @synthesize bShowTextStateIconInContactsList=_bShowTextStateIconInContactsList;
@property(nonatomic) _Bool bShowNewTips; // @synthesize bShowNewTips=_bShowNewTips;
@property(nonatomic) _Bool bShowTextStateIPadEntry; // @synthesize bShowTextStateIPadEntry=_bShowTextStateIPadEntry;
@property(nonatomic) _Bool bShowTextState; // @synthesize bShowTextState=_bShowTextState;
@property(retain, nonatomic) NSMutableDictionary *userNameToModelDict; // @synthesize userNameToModelDict=_userNameToModelDict;
@property(nonatomic) unsigned long long newestCount; // @synthesize newestCount=_newestCount;
@property(retain, nonatomic) TextStateIconLogic *iconLogic; // @synthesize iconLogic=_iconLogic;
@property(retain, nonatomic) TextStateLikeLogic *likeLogic; // @synthesize likeLogic=_likeLogic;
@property(retain, nonatomic) TextStateTopicLogic *topicLogic; // @synthesize topicLogic=_topicLogic;
@property(retain, nonatomic) TextStatePublishLogic *publishLogic; // @synthesize publishLogic=_publishLogic;
@property(retain, nonatomic) NSMutableDictionary *m_dicTextStateSession; // @synthesize m_dicTextStateSession=_m_dicTextStateSession;
@property(readonly, nonatomic) TextStateIconDataSource *iconDataSource; // @synthesize iconDataSource=_iconDataSource;
- (void)p_loadTextStateInternal;
- (void)p_saveTextStateToDataFileInternal;
- (id)p_getTextStateDataFilePath;
- (void)setReadForUsername:(id)arg1;
- (_Bool)isReadForUsername:(id)arg1;
- (void)delayPublishMethods;
- (void)requestSelfInfo;
- (void)updateSelfInfo:(_Bool)arg1;
- (void)updateCurrentTextStateFromRemote;
- (void)onAuthOK;
- (void)onTextStateMediaUploadFail:(id)arg1;
- (void)onTextStateMediaUploadSuccess:(id)arg1;
- (void)onLanguageChange;
- (void)prefetchTextStateWeapp;
- (void)openTextStateSquareApp:(id)arg1 tagName:(id)arg2 fromSelf:(_Bool)arg3;
- (void)onLikeRequestFinish:(_Bool)arg1 isLike:(_Bool)arg2 username:(id)arg3;
- (void)onProfileChange;
- (void)onCombinedTopicListUpdated:(id)arg1;
- (id)friendTopicList;
- (void)checkAndUpdateTopicList;
- (id)getTopicForId:(id)arg1;
- (void)setLike:(_Bool)arg1 forUserName:(id)arg2 likeType:(long long)arg3;
- (long long)likeStateForUsername:(id)arg1;
- (double)frdScoreForUser:(id)arg1;
- (void)setUsername:(id)arg1 withFrdScore:(double)arg2;
- (void)onTextStateUpdateForUserName:(id)arg1;
- (void)handleRemoveContact:(id)arg1;
- (void)onRemoveContactFromAddressBook:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onTextStatePublishFailedWithErrorMessage:(id)arg1 tid:(id)arg2;
- (void)onTextStatePublishSucceededWithTid:(id)arg1 textStateId:(id)arg2 topicId:(id)arg3;
- (void)disposeRedPointOnMeTab;
- (unsigned int)getRedPointCount;
- (_Bool)shouldShowRedPointOnMeTab;
- (id)getLatestUnreadBaseInfo;
- (unsigned int)getTotalUnreadMessageCount;
- (void)deleteErrorPublishMethod;
- (void)retryFailPublishMethod;
- (id)getErrorPublishTextStateModel;
- (_Bool)checkHadFailCachePublishTextStateModel;
- (_Bool)checkCachePublishTextStateModelValid;
- (id)getNotPublishTextStateModel;
- (id)textStateModelForUserName:(id)arg1;
- (void)forceUpdateIcon;
- (id)publishIconList;
- (id)iconWrapForId:(id)arg1;
- (void)initIconResource;
- (id)getMaskImage;
- (void)clearBackgroundId;
- (id)createOrGetBackgroundId;
- (void)deleteCurrentTextState;
- (void)deleteLocalNotPublishText;
- (void)internalPublishTextState:(id)arg1;
- (void)publishTextState:(id)arg1;
- (void)savePublishTextState:(id)arg1;
- (void)onMMDynamicConfigUpdated;
- (void)onExptItemListChange;
- (void)checkReportTagSwitchChange;
- (_Bool)isTagAtOtherStateEnable;
- (_Bool)isTagAtSelfStateEnable;
- (void)loadOtherExptStatus;
- (void)loadMainExptStatus;
- (_Bool)shouldSortTopicWithFrdScore;
- (_Bool)shouldShowFriendTopicButton;
- (_Bool)shouldEnableTagAtOtherState;
- (_Bool)shouldEnableTagAtSelfState;
- (_Bool)shouldShowTextStateIconInTimelineNotifications;
- (_Bool)shouldShowTextStateIconInTimelineCommentsAndLike;
- (_Bool)shouldShowTextStateIconInTimelineFeed;
- (_Bool)shouldShowTextStateIconInGroupChat;
- (_Bool)shouldShowTextStateIconInContactsList;
- (_Bool)shouldShowSetStateTip;
- (void)onShowTextStatePublish;
- (_Bool)hasShownTextStatePublish;
- (_Bool)shouldShowTextStateNewTip;
- (_Bool)shouldShowTextState;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)fixConflictReportWithActionType:(unsigned int)arg1 actionResult:(id)arg2;
- (void)reportWhenClickShowMoreInteractiveMessages;
- (void)reportWhenClearInteractiveMessages;
- (void)reportWhenDeleteInteractiveMessage:(id)arg1;
- (void)reportWhenLeftSlideInteractiveMessage:(id)arg1;
- (void)reportFriendStateClickWithBtnStyle:(long long)arg1;
- (void)reportFriendStateExposeWithBtnStyle:(long long)arg1;
- (void)reportWhenShowNewTips;
- (void)reportWithActionType:(unsigned int)arg1 actionResult:(id)arg2 btnStyle:(long long)arg3 textStateId:(id)arg4;
- (void)reportWithActionType:(unsigned int)arg1 actionResult:(id)arg2 btnStyle:(long long)arg3;
- (void)reportWithActionType:(unsigned int)arg1 textStateId:(id)arg2;
- (void)reportWithActionType:(unsigned int)arg1;
- (void)reportWhenClickShowMoreNotifyMsg;
- (void)reportWhenClickMsgNotifyView;
- (void)reportWhenShowMsgNotifyView;
- (void)reportWhenSelectedMeTab;
- (void)reportWhenReceiveLikeNotify:(id)arg1;
- (void)reportTextStateOperateWithSessionID:(id)arg1 actionCode:(unsigned int)arg2 actionResult:(id)arg3;
- (id)genNewSessionIDWithTextStateID:(id)arg1 scene:(unsigned int)arg2;
- (id)getSessionIDWithTextStateID:(id)arg1 scene:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


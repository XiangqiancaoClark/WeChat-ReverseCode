//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FinderBizUserInfo, FinderLiveAbnormalClosedPageInfo, FinderLiveContact, FinderLiveErrorPage, MMFinderLiveTaskId, WCFinderGetLiveMsgCGI;

@interface MMFinderLiveContext : NSObject
{
    _Bool _showNewStyleHeatValueStyle;
    unsigned int _liveExtFlag;
    unsigned int _liveFlag;
    unsigned int _bizFriendFollowCount;
    MMFinderLiveTaskId *_taskId;
    FinderLiveContact *_selfContact;
    unsigned long long _backendAnchorStatusFlag;
    WCFinderGetLiveMsgCGI *_lastGetLiveMsgCGI;
    FinderLiveErrorPage *_liveErrorPage;
    FinderLiveAbnormalClosedPageInfo *_audienceAbnormalClosedPageInfo;
    FinderBizUserInfo *_bizUserInfo;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int bizFriendFollowCount; // @synthesize bizFriendFollowCount=_bizFriendFollowCount;
@property(retain, nonatomic) FinderBizUserInfo *bizUserInfo; // @synthesize bizUserInfo=_bizUserInfo;
@property(nonatomic) unsigned int liveFlag; // @synthesize liveFlag=_liveFlag;
@property(nonatomic) _Bool showNewStyleHeatValueStyle; // @synthesize showNewStyleHeatValueStyle=_showNewStyleHeatValueStyle;
@property(retain, nonatomic) FinderLiveAbnormalClosedPageInfo *audienceAbnormalClosedPageInfo; // @synthesize audienceAbnormalClosedPageInfo=_audienceAbnormalClosedPageInfo;
@property(retain, nonatomic) FinderLiveErrorPage *liveErrorPage; // @synthesize liveErrorPage=_liveErrorPage;
@property(retain, nonatomic) WCFinderGetLiveMsgCGI *lastGetLiveMsgCGI; // @synthesize lastGetLiveMsgCGI=_lastGetLiveMsgCGI;
@property(nonatomic) unsigned long long backendAnchorStatusFlag; // @synthesize backendAnchorStatusFlag=_backendAnchorStatusFlag;
@property(nonatomic) unsigned int liveExtFlag; // @synthesize liveExtFlag=_liveExtFlag;
@property(retain, nonatomic) FinderLiveContact *selfContact; // @synthesize selfContact=_selfContact;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (id)bizLiveUsernameWithBrandPrefix;
- (id)bizLiveUsername;
- (id)bizLiveNickname;
- (_Bool)isBizLive;
- (id)description;
- (_Bool)enableGetLiveMsgDisplayNewHeatValue;
- (_Bool)enableDisplayNewHeatValue;
- (_Bool)isRecentlyMic;
- (_Bool)enableAudienceMic;
- (_Bool)enableAudienceReward;
- (_Bool)enableLiveRoomReward;

@end

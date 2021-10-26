//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMScrollActionSheet.h"

#import "MMLiveActionSheetFlowLayoutViewDelegate-Protocol.h"

@class MMFinderLiveTaskId, MMLiveActionSheetFlowLayoutView, NSString;

@interface WCLiveScrollActionSheet : MMScrollActionSheet <MMLiveActionSheetFlowLayoutViewDelegate>
{
    _Bool _isInStopState;
    _Bool _isAudience;
    _Bool _isCommentEnable;
    MMFinderLiveTaskId *_liveTaskId;
    MMLiveActionSheetFlowLayoutView *_anchorFlowLayoutView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveActionSheetFlowLayoutView *anchorFlowLayoutView; // @synthesize anchorFlowLayoutView=_anchorFlowLayoutView;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(nonatomic) _Bool isCommentEnable; // @synthesize isCommentEnable=_isCommentEnable;
@property(nonatomic) _Bool isAudience; // @synthesize isAudience=_isAudience;
@property(nonatomic) _Bool isInStopState; // @synthesize isInStopState=_isInStopState;
- (_Bool)isFansGroupItemExpose;
- (void)reportForChangeAppSceneItemExpose;
- (void)showInView:(id)arg1 parentView:(id)arg2;
- (void)onActionSheetItemClicked:(id)arg1 senderView:(id)arg2;
- (id)liveTask;
- (id)getClarityItemSubTitle;
- (_Bool)handleConnectMic;
- (id)getRecentClarityChooseFromCache;
- (_Bool)disableScrollSheetItem:(long long)arg1;
- (id)seperatorBackgroundColor;
- (id)containerViewBlurBackgroundColor;
- (id)cancelButtonBackgroundColor;
- (id)cancelButtonTitleColor;
- (id)titleLabelColor;
- (id)bottomPadddingViewBackgroundColor;
- (id)transparentViewBackgroundColor;
- (_Bool)enableShowFansGroupEntrance;
- (_Bool)isLiveGameJoinTeamEnabled;
- (_Bool)isLiveGameTeamUpSwitchButtonEnable;
- (_Bool)isLikeAnchorEntrenceEnable;
- (_Bool)isRewardAnchorEntrenceEnable;
- (_Bool)isMicMuted;
@property(readonly, nonatomic) _Bool isCameraClosed;
- (_Bool)isLiveGiftEffectOff;
- (_Bool)isRewardEnable;
@property(readonly, nonatomic) _Bool isConnectMicEnabled;
- (_Bool)isLikeEnable;
- (_Bool)isCurrentInMainScene;
- (id)getChangeAppSceneItem;
- (id)loadItemArrayForAnchor;
- (id)loadItemArrayForAudience;
- (void)loadData;
- (id)initWithLiveTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

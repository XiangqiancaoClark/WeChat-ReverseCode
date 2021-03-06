//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class BTLNotifyBarReportItem, BTLTopBarReportItem, NSMutableArray, NSMutableDictionary, NSMutableSet;
@protocol BrandTimelineReportLogicDelegate;

@interface BrandTimelineReportLogic : MMObject <PBMessageObserverDelegate>
{
    unsigned int m_stayTimeStart;
    unsigned int m_listStayTimeStart;
    unsigned int m_listStayTime;
    NSMutableDictionary *m_dicExposeInfo;
    NSMutableDictionary *m_dicRealTimeInfo;
    unsigned int m_enterPos;
    unsigned int m_exitPos;
    unsigned long long m_source;
    NSMutableDictionary *m_dicOftenReadAndLiveBarExposeItem;
    NSMutableDictionary *m_dicOftenReadAndLiveBarClickItem;
    BTLTopBarReportItem *m_channelExposingItem;
    NSMutableArray *m_arrChannelExposedItem;
    NSMutableArray *m_arrChannelClickItem;
    BTLNotifyBarReportItem *m_notifyBarReportItem;
    _Bool _jump2OldBizList;
    id <BrandTimelineReportLogicDelegate> _delegate;
    NSMutableDictionary *_dicLiveMsgExposedItem;
    NSMutableSet *_setLiveClickMsgId;
}

+ (void)reportRecoFlowHeaderCellRefreshActionType:(unsigned int)arg1 position:(unsigned int)arg2;
+ (void)reportRecoFlowExpandMoreCellActionType:(unsigned int)arg1 position:(unsigned int)arg2;
+ (void)reportRecFlowCardOptype:(unsigned int)arg1 recoFlowSectionData:(id)arg2 cellView:(id)arg3 extInfo:(id)arg4;
+ (unsigned int)genChannelExposeSeqId;
+ (void)reportRecCardInsertActionRet:(unsigned int)arg1 recCardWrapper:(id)arg2;
+ (void)reportRecCardOptype:(unsigned int)arg1 sectionData:(id)arg2 viewModel:(id)arg3 extInfo:(id)arg4;
+ (void)reportRecCardOptype:(unsigned int)arg1 bizUsrName:(id)arg2 recId:(unsigned long long)arg3 mid:(unsigned int)arg4 idx:(unsigned int)arg5 feedBackReasonArr:(id)arg6;
+ (void)reportRecCardReceiveXMLPush:(id)arg1;
+ (void)reportRecCardIdKeyEvent:(unsigned long long)arg1;
+ (unsigned int)msgTypeForMsgWrap:(id)arg1;
+ (void)reportDeleteTooOldTLMsgIdKey;
+ (void)reportEnterTimelineTimeCostIdKey:(unsigned int)arg1;
+ (void)__setExposedSessionId:(unsigned long long)arg1;
+ (unsigned long long)exposedSessionId;
+ (void)__setEnterTimestampMs:(unsigned long long)arg1;
+ (unsigned long long)enterTimestampMs;
+ (void)__setSessionId:(unsigned int)arg1;
+ (unsigned int)sessionId;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *setLiveClickMsgId; // @synthesize setLiveClickMsgId=_setLiveClickMsgId;
@property(retain, nonatomic) NSMutableDictionary *dicLiveMsgExposedItem; // @synthesize dicLiveMsgExposedItem=_dicLiveMsgExposedItem;
@property(nonatomic) _Bool jump2OldBizList; // @synthesize jump2OldBizList=_jump2OldBizList;
@property(nonatomic) __weak id <BrandTimelineReportLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)checkCGIBaseRespSuccess:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)reportLiveMsgWhenLeave;
- (void)reportLiveMsgClicked:(id)arg1;
- (void)reportLiveMsgExposed:(id)arg1 viewModel:(id)arg2;
- (void)reportExposedLiveBarItemView:(id)arg1;
- (void)reportClickLiveBarItemView:(id)arg1;
- (void)reportClickCardTitleFinderLive:(id)arg1;
- (void)reportRecoFlowSectionData:(id)arg1 cellView:(id)arg2 optype:(unsigned int)arg3;
- (void)reportNotifyItemOnExitTimeline;
- (void)reportClickNotifyItemWithSectionData:(id)arg1;
- (void)reportExposeNotifyItemWithSectionData:(id)arg1;
- (id)getContactFromBrandBarItemView:(id)arg1;
- (void)reportClickOftenReadItemView:(id)arg1;
- (void)reportOftenReadSectionDisappear;
- (void)reportExposeOftenReadItemViewArr:(id)arg1;
- (void)reportVideoItemCellAutoPlayEnd:(id)arg1;
- (void)reportVideoItemCellAutoPlayStart:(id)arg1;
- (void)reportRecCardVideoItemCellAutoPlayEnd:(id)arg1;
- (void)reportRecCardVideoItemCellAutoPlayStart:(id)arg1;
- (void)updateExposeRecCardRecReason:(id)arg1;
- (void)reportClickRecCard:(id)arg1;
- (void)reportExposeRecCard:(id)arg1 newMsgSequenceId:(unsigned long long)arg2;
- (void)reportClickCanvasCardItem:(unsigned int)arg1;
- (void)reportExposeRecCanvasSection:(id)arg1 newMsgSequenceId:(unsigned long long)arg2;
- (void)reportExposeCanvasSection:(id)arg1 newMsgSequenceId:(unsigned long long)arg2;
- (void)reportClickItem:(id)arg1 newMsgSequenceId:(unsigned long long)arg2;
- (void)reportExposeItem:(id)arg1 newMsgSequenceId:(unsigned long long)arg2;
- (void)reportExposeItemArr:(id)arg1 newMsgSequenceId:(unsigned long long)arg2;
- (void)sendOftenReadReportReq;
- (void)recordOftenReadAndLiveBarBrandLiveExposed;
- (void)sendListExposeInfoReportReq;
- (void)sendListExposeRealTimeInfoReportReq;
- (void)sendListExposeRealTimeInfoReportReqForClick;
- (id)converInfoToReportInfo:(id)arg1;
- (void)reportExitPosWithVisibleItemVewModelArr:(id)arg1;
- (void)reportEnterPosWithVisibleItemVewModelArr:(id)arg1 newMsgSequenceId:(unsigned long long)arg2;
- (void)endRecordTimelineStayTime;
- (void)abortRecordTimelineStayTime;
- (void)resumeRecordTimelineStayTime;
- (void)pauseRecordTimelineStayTime;
- (void)startRecordTimelineStayTime;
- (void)reportOptype:(unsigned int)arg1 notifySectionData:(id)arg2 msgIdx:(unsigned int)arg3;
- (void)reportOptype:(unsigned int)arg1 readerSectionData:(id)arg2 msgIdx:(unsigned int)arg3;
- (void)reportOptype:(unsigned int)arg1 sectionData:(id)arg2 msgIdx:(unsigned int)arg3;
- (void)reportOptype:(unsigned int)arg1 sectionData:(id)arg2;
- (void)reportEnterTimelineLog11404:(unsigned int)arg1 notificationCount:(unsigned int)arg2 source:(unsigned long long)arg3 enterRowIndexInMainFrameSession:(unsigned long long)arg4 isShowRedDotInMainFrameSession:(_Bool)arg5 enterMsgInMainFrameSession:(id)arg6 oftenBrandCount:(unsigned int)arg7 oftenBrandWithGreenDotCount:(unsigned int)arg8 enterMsgNotifyType:(unsigned int)arg9;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "EmoticonButtonDescExt-Protocol.h"
#import "EmoticonCustomManageAddLogicDelegate-Protocol.h"
#import "EmoticonStoreGridViewDelegate-Protocol.h"
#import "EmotionDesignerEmojiTipsViewControllerDelegate-Protocol.h"
#import "EmotionStoreDetailRewardEntranceDelegate-Protocol.h"
#import "IEmoticonPackageStateMgrExt-Protocol.h"
#import "IStoreEmotionRewardExt-Protocol.h"
#import "MMEmoticonStoreDownloadLogicDelegate-Protocol.h"
#import "SessionSelectControllerDelegate-Protocol.h"
#import "StoreEmotionDeleteCgiDelegate-Protocol.h"

@class EmojiInfo, EmoticonCustomManageAddLogic, EmoticonStoreDetailCoverImageView, EmoticonStoreDetailRewardEntranceView, EmoticonStoreGridView, EmoticonStoreItem, EmoticonStoreReportInfo, EmotionRewardResponseInfo, EmotionStoreDetailDesignerContainerView, MMBorderView, MMEmoticonStoreDownloadLogic, MMUIScrollView, NSData, NSString, StoreEmotionDeleteCgi, StoreEmotionPageShareLogic, UIButton, UIImageView, UILabel, UIView, WCDataItem;

@interface MMStoreEmotionDetailViewController : MMUIViewController <EmoticonButtonDescExt, StoreEmotionDeleteCgiDelegate, IStoreEmotionRewardExt, EmotionStoreDetailRewardEntranceDelegate, EmoticonStoreGridViewDelegate, EmotionDesignerEmojiTipsViewControllerDelegate, EmoticonCustomManageAddLogicDelegate, MMEmoticonStoreDownloadLogicDelegate, IEmoticonPackageStateMgrExt, SessionSelectControllerDelegate>
{
    long long _type;
    long long m_downloadExtrance;
    EmojiInfo *m_currentEmoji;
    _Bool _needScrollToBottom;
    _Bool _fastManagement;
    _Bool _m_isGettingRewardInfo;
    _Bool _hasUninstallAction;
    _Bool _hasInstallAction;
    _Bool _didShowActivityDetailEntry;
    _Bool _didClickActivityDetailEntry;
    int m_scence;
    unsigned int m_clickFlag;
    EmoticonStoreItem *m_storeItem;
    MMUIScrollView *m_tableView;
    UILabel *m_priceLabel;
    EmoticonStoreDetailCoverImageView *m_coverImageView;
    UILabel *m_nameLabel;
    UILabel *m_timeLabel;
    UILabel *m_copyrightLabel;
    UIButton *m_statementButton;
    EmoticonStoreGridView *m_thumbGridView;
    UIView *m_previewTipsLabel;
    UILabel *m_descLabel;
    UIImageView *m_animationView;
    MMBorderView *m_animationBorderView;
    UIView *m_packDescContainView;
    NSString *m_clickRegionDesc;
    UILabel *m_serverDescLabel;
    UILabel *m_previewDescLabel;
    WCDataItem *_m_dataItem;
    EmoticonStoreReportInfo *_reportInfo;
    CDUnknownBlockType _finishInstallBlock;
    CDUnknownBlockType _finishUninstallBlock;
    MMEmoticonStoreDownloadLogic *_downloadLogic;
    UIButton *_m_complainButton;
    UILabel *_m_animationLabel;
    StoreEmotionDeleteCgi *_m_deleteCgi;
    EmoticonStoreDetailRewardEntranceView *_rewardView;
    EmotionRewardResponseInfo *_m_rewardInfo;
    EmotionStoreDetailDesignerContainerView *_designerContainerView;
    UIView *_statementContainerView;
    StoreEmotionPageShareLogic *_shareLogic;
    EmoticonCustomManageAddLogic *_m_emoticonAddLogic;
    UIView *_activityMark;
    UILabel *_activityNameLabel;
    UILabel *_activityDetailEntry;
    NSData *_activityToken;
}

+ (id)genProductIdFromTimelineUserData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool didClickActivityDetailEntry; // @synthesize didClickActivityDetailEntry=_didClickActivityDetailEntry;
@property(nonatomic) _Bool didShowActivityDetailEntry; // @synthesize didShowActivityDetailEntry=_didShowActivityDetailEntry;
@property(retain, nonatomic) NSData *activityToken; // @synthesize activityToken=_activityToken;
@property(retain, nonatomic) UILabel *activityDetailEntry; // @synthesize activityDetailEntry=_activityDetailEntry;
@property(retain, nonatomic) UILabel *activityNameLabel; // @synthesize activityNameLabel=_activityNameLabel;
@property(retain, nonatomic) UIView *activityMark; // @synthesize activityMark=_activityMark;
@property(nonatomic) _Bool hasInstallAction; // @synthesize hasInstallAction=_hasInstallAction;
@property(nonatomic) _Bool hasUninstallAction; // @synthesize hasUninstallAction=_hasUninstallAction;
@property(retain, nonatomic) EmoticonCustomManageAddLogic *m_emoticonAddLogic; // @synthesize m_emoticonAddLogic=_m_emoticonAddLogic;
@property(retain, nonatomic) StoreEmotionPageShareLogic *shareLogic; // @synthesize shareLogic=_shareLogic;
@property(retain, nonatomic) UIView *statementContainerView; // @synthesize statementContainerView=_statementContainerView;
@property(retain, nonatomic) EmotionStoreDetailDesignerContainerView *designerContainerView; // @synthesize designerContainerView=_designerContainerView;
@property(nonatomic) _Bool m_isGettingRewardInfo; // @synthesize m_isGettingRewardInfo=_m_isGettingRewardInfo;
@property(retain, nonatomic) EmotionRewardResponseInfo *m_rewardInfo; // @synthesize m_rewardInfo=_m_rewardInfo;
@property(retain, nonatomic) EmoticonStoreDetailRewardEntranceView *rewardView; // @synthesize rewardView=_rewardView;
@property(retain, nonatomic) StoreEmotionDeleteCgi *m_deleteCgi; // @synthesize m_deleteCgi=_m_deleteCgi;
@property(retain, nonatomic) UILabel *m_animationLabel; // @synthesize m_animationLabel=_m_animationLabel;
@property(retain, nonatomic) UIButton *m_complainButton; // @synthesize m_complainButton=_m_complainButton;
@property(retain, nonatomic) MMEmoticonStoreDownloadLogic *downloadLogic; // @synthesize downloadLogic=_downloadLogic;
@property(copy, nonatomic) CDUnknownBlockType finishUninstallBlock; // @synthesize finishUninstallBlock=_finishUninstallBlock;
@property(copy, nonatomic) CDUnknownBlockType finishInstallBlock; // @synthesize finishInstallBlock=_finishInstallBlock;
@property(nonatomic) _Bool fastManagement; // @synthesize fastManagement=_fastManagement;
@property(retain, nonatomic) EmoticonStoreReportInfo *reportInfo; // @synthesize reportInfo=_reportInfo;
@property(retain, nonatomic) WCDataItem *m_dataItem; // @synthesize m_dataItem=_m_dataItem;
@property(nonatomic) _Bool needScrollToBottom; // @synthesize needScrollToBottom=_needScrollToBottom;
@property(nonatomic) unsigned int m_clickFlag; // @synthesize m_clickFlag;
@property(nonatomic) int m_scence; // @synthesize m_scence;
@property(retain, nonatomic) UILabel *m_previewDescLabel; // @synthesize m_previewDescLabel;
@property(retain, nonatomic) UILabel *m_serverDescLabel; // @synthesize m_serverDescLabel;
@property(retain, nonatomic) NSString *m_clickRegionDesc; // @synthesize m_clickRegionDesc;
@property(retain, nonatomic) UIView *m_packDescContainView; // @synthesize m_packDescContainView;
@property(retain, nonatomic) MMBorderView *m_animationBorderView; // @synthesize m_animationBorderView;
@property(retain, nonatomic) UIImageView *m_animationView; // @synthesize m_animationView;
@property(retain, nonatomic) UILabel *m_descLabel; // @synthesize m_descLabel;
@property(retain, nonatomic) UIView *m_previewTipsLabel; // @synthesize m_previewTipsLabel;
@property(retain, nonatomic) EmoticonStoreGridView *m_thumbGridView; // @synthesize m_thumbGridView;
@property(retain, nonatomic) UIButton *m_statementButton; // @synthesize m_statementButton;
@property(retain, nonatomic) UILabel *m_copyrightLabel; // @synthesize m_copyrightLabel;
@property(retain, nonatomic) UILabel *m_timeLabel; // @synthesize m_timeLabel;
@property(retain, nonatomic) UILabel *m_nameLabel; // @synthesize m_nameLabel;
@property(retain, nonatomic) EmoticonStoreDetailCoverImageView *m_coverImageView; // @synthesize m_coverImageView;
@property(retain, nonatomic) UILabel *m_priceLabel; // @synthesize m_priceLabel;
@property(retain, nonatomic) MMUIScrollView *m_tableView; // @synthesize m_tableView;
@property(retain, nonatomic) EmoticonStoreItem *m_storeItem; // @synthesize m_storeItem;
- (void)OnEmoticonStoreItemChanged:(id)arg1;
- (void)openWeAppWithUsrName:(id)arg1 AndPath:(id)arg2;
- (void)openFinderWithUsrName:(id)arg1;
- (void)openBizWithUsrName:(id)arg1;
- (void)openH5WithURL:(id)arg1;
- (void)onTapActivityDetailEntry;
- (_Bool)isActivityEnd;
- (void)reportActivityExposeIfNeeded;
- (void)reportDesignerEmojiTipsWithEmojiInfo:(id)arg1 andAction:(unsigned long long)arg2;
- (void)reportEmoticonStoreActionIfNeeded:(unsigned long long)arg1;
- (unsigned long long)sceneForReportEmoticonStoreAction;
- (void)onExchangeEmoticonForSendingFinishedWithWrap:(id)arg1 isSuccessed:(_Bool)arg2;
- (void)onSendDesignerEmojiWithMd5:(id)arg1;
- (void)onSaveDesignerEmojiWithMd5:(id)arg1;
- (id)oWrapFromEmojiInfo:(id)arg1;
- (void)didSelectEmojiAtIndex:(long long)arg1;
- (void)onStoreEmotionRewardCompleteOkWithPid:(id)arg1 RewardInfo:(id)arg2;
- (void)onGetEmotionRewardFinishedWithPid:(id)arg1 RewardInfo:(id)arg2;
- (void)onShowAllDonorsButtonClick;
- (void)onRewardButtonClick;
- (void)onStoreEmotionDeleteCgiFailed:(id)arg1;
- (void)onStoreEmotionDeleteCgiOK:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)onGetEmoticonDownloadFlag:(unsigned int)arg1 andButtonDesc:(id)arg2;
- (_Bool)needJudgeClickFlag;
- (_Bool)showServerDescLabel;
- (void)updateSubViewsMarginWithContainViewHeight:(double)arg1;
- (void)OnUpdateEmoticonPackageState:(id)arg1 toState:(int)arg2;
- (id)downloadLogicReportInfo;
- (void)onDownloadFinished;
- (void)onTapBackBarItem;
- (void)onTapGetEmoticonBtnFor:(unsigned long long)arg1;
- (void)onUninstall;
- (void)onDownloadCancel;
- (void)handleUse;
- (void)onLawBtnClick;
- (void)reportDownload;
- (void)onClickComplainButton;
- (void)callbackOnDismiss;
- (void)OnCancelModalView:(id)arg1;
- (struct CGPoint)makeStatementCell:(id)arg1 marginPoint:(struct CGPoint)arg2;
- (struct CGPoint)makeCopyRightCell:(id)arg1 marginPoint:(struct CGPoint)arg2;
- (void)clickDesignerCell;
- (struct CGPoint)updateDesignerView:(struct CGPoint)arg1;
- (struct CGPoint)makeDesignerCell:(id)arg1 marginPoint:(struct CGPoint)arg2;
- (void)tryGetRewardInfo;
- (struct CGPoint)updateRewardViewWithMarginPoint:(struct CGPoint)arg1;
- (struct CGPoint)makeRewardCell:(id)arg1 marginPoint:(struct CGPoint)arg2;
- (struct CGPoint)makeEmoticonsCell:(id)arg1 emojiInfos:(id)arg2 marginPoint:(struct CGPoint)arg3;
- (struct CGPoint)updateGridView:(id)arg1 withEmojiInfos:(id)arg2;
- (struct CGPoint)updateStatementMarginPoint:(struct CGPoint)arg1;
- (struct CGPoint)updateCopyRight:(id)arg1 marginPoint:(struct CGPoint)arg2;
- (struct CGPoint)updatePreviewTipCell:(struct CGPoint)arg1;
- (struct CGPoint)makePreviewTipCell:(id)arg1 marginPoint:(struct CGPoint)arg2;
- (struct CGPoint)updateDescCell:(id)arg1 marginPoint:(struct CGPoint)arg2;
- (struct CGPoint)makeDescCell:(id)arg1 marginPoint:(struct CGPoint)arg2;
- (void)makeBuyButton:(id)arg1 item:(id)arg2;
- (struct CGPoint)updateCoverImageView:(struct CGPoint)arg1;
- (struct CGPoint)makeCoverImageCell:(id)arg1;
- (void)updatePackTypeView:(struct CGPoint)arg1;
- (void)makePackTypeLabel:(id)arg1 item:(id)arg2;
- (struct CGPoint)updatePackTimeLabel:(id)arg1 item:(id)arg2 marginPoint:(struct CGPoint)arg3;
- (void)makeActivityInfoView:(id)arg1 item:(id)arg2;
- (void)makeServerDescLabel:(id)arg1 item:(id)arg2;
- (void)makePackTimeLabel:(id)arg1 item:(id)arg2;
- (struct CGPoint)updatePackNameLabel:(id)arg1 item:(id)arg2 marginPoint:(struct CGPoint)arg3;
- (void)makePackNameLabel:(id)arg1 item:(id)arg2;
- (void)refreshPriceLabelString;
- (void)makePackPriceLabel:(id)arg1 item:(id)arg2;
- (struct CGPoint)makeContainerView:(id)arg1 item:(id)arg2;
- (struct CGPoint)updateActivityNameLabel:(struct CGPoint)arg1;
- (struct CGPoint)updateServerDescLabel;
- (void)updateBuyButton;
- (struct CGPoint)updateTypeLabel:(struct CGPoint)arg1;
- (struct CGPoint)updateTimeLabel:(struct CGPoint)arg1;
- (struct CGPoint)updateNameLabel:(struct CGPoint)arg1;
- (struct CGPoint)updatePriceLabel:(struct CGPoint)arg1;
- (struct CGPoint)updateContainerView:(struct CGPoint)arg1;
- (struct CGPoint)updateDescView:(struct CGPoint)arg1;
- (struct CGPoint)updatePreviewTipsView:(struct CGPoint)arg1;
- (struct CGPoint)updatePreviewGridView:(struct CGPoint)arg1;
- (struct CGPoint)makeCoverImage:(id)arg1 item:(id)arg2;
- (void)updateScrollView;
- (_Bool)recurisiveCheckMsgControllerToRootFrom:(id)arg1;
- (_Bool)checkMsgControllerFrom:(id)arg1;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (_Bool)hasNecessaryShareInfo;
- (void)onOperate:(id)arg1;
- (void)updateReportButton;
- (void)updateRightBarButton;
- (_Bool)useTransparentNavibar;
- (_Bool)useBlackStatusbar;
- (void)initScrollView;
- (void)initView;
- (void)initData;
- (void)viewDidLoad;
- (id)initWithPid:(id)arg1 Scence:(int)arg2 extrance:(long long)arg3 activityToken:(id)arg4;
- (id)initWithPid:(id)arg1 Scence:(int)arg2 extrance:(long long)arg3;
- (id)initWithStoreItem:(id)arg1 Scence:(int)arg2 extrance:(long long)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

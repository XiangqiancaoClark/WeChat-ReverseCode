//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "EmoticonBackUpMgrExt-Protocol.h"
#import "EmoticonBackupOperateMgrExt-Protocol.h"
#import "EmoticonBoardCameraEmoticonEntryViewDelegate-Protocol.h"
#import "EmoticonBoardCrossCollectionControllerDelegate-Protocol.h"
#import "EmoticonBoardDynamicTabBarDelegate-Protocol.h"
#import "EmoticonBoardRecommendViewDelegate-Protocol.h"
#import "EmoticonBoardViewFactoryHelper-Protocol.h"
#import "EmoticonCustomAddLogicControllerDelegate-Protocol.h"
#import "EmoticonPreviewWindowViewControllerDelegate-Protocol.h"
#import "EmoticonRecommendMgrExt-Protocol.h"
#import "EmoticonTabRecommendMgrExt-Protocol.h"
#import "IEmoticonMgrExt-Protocol.h"
#import "IEmoticonPackageMgrExt-Protocol.h"
#import "IMMLanguageMgrExt-Protocol.h"
#import "MMConfigMgrExt-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMLimitedModeExt-Protocol.h"
#import "MMUIViewControllerDelegate-Protocol.h"
#import "MMUserInterfaceStyleOverrideProtocol-Protocol.h"

@class CAShapeLayer, EmoticonBoardCrossCollectionController, EmoticonBoardDynamicTabBar, EmoticonBoardViewConfig, EmoticonCustomAddLogicController, EmoticonPreviewWindowViewController, NSString, QQEmojiPreview, UIView;
@protocol BaseEmoticonViewDelegate, EmoticonBoardViewDelegate;

@interface EmoticonBoardView : MMUIView <IMMLanguageMgrExt, MMKernelExt, IEmoticonPackageMgrExt, EmoticonRecommendMgrExt, IEmoticonMgrExt, EmoticonBackUpMgrExt, EmoticonBackupOperateMgrExt, EmoticonBoardDynamicTabBarDelegate, EmoticonTabRecommendMgrExt, MMUIViewControllerDelegate, EmoticonBoardRecommendViewDelegate, EmoticonBoardCameraEmoticonEntryViewDelegate, EmoticonBoardCrossCollectionControllerDelegate, EmoticonCustomAddLogicControllerDelegate, EmoticonPreviewWindowViewControllerDelegate, MMLimitedModeExt, MMConfigMgrExt, MMUserInterfaceStyleOverrideProtocol, EmoticonBoardViewFactoryHelper>
{
    id <BaseEmoticonViewDelegate> m_emoticonSendDelegate;
    UIView *m_backgroundView;
    CAShapeLayer *m_topCornerLayer;
    EmoticonBoardCrossCollectionController *m_pageCollectionController;
    EmoticonBoardDynamicTabBar *m_dynamicTabBar;
    QQEmojiPreview *m_qqEmojiPreview;
    EmoticonPreviewWindowViewController *m_emoticonPreview;
    unsigned long long _boardShowTime;
    unsigned long long _boardQQEmojiClickIndex;
    unsigned long long _boardEmoticonClickIndex;
    unsigned long long _boardTabBarClickIndex;
    EmoticonCustomAddLogicController *m_emoticonAddLogicController;
    _Bool isFirstReload;
    _Bool _dataLoaded;
    _Bool isInChat;
    _Bool _lazyReload;
    _Bool _hideRightBottomBtns;
    _Bool _needReloadBeforeReuse;
    _Bool _hasCorner;
    _Bool _hasFoldButton;
    double m_bottomInset;
    id <EmoticonBoardViewDelegate> _m_delegate;
    unsigned long long _emojiUseScene;
    unsigned long long _viewType;
    EmoticonBoardViewConfig *_viewConfig;
    NSString *_finishButtonTitle;
    unsigned long long _style;
    unsigned long long _recentPulledByCameraEmoticonLabelTime;
    NSString *_externInfo;
}

+ (void)unRegisterInstanceDelegate;
+ (void)destroyInstance;
+ (id)shareInstanceForChat;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *externInfo; // @synthesize externInfo=_externInfo;
@property(nonatomic) unsigned long long recentPulledByCameraEmoticonLabelTime; // @synthesize recentPulledByCameraEmoticonLabelTime=_recentPulledByCameraEmoticonLabelTime;
@property(nonatomic) _Bool hasFoldButton; // @synthesize hasFoldButton=_hasFoldButton;
@property(nonatomic) _Bool hasCorner; // @synthesize hasCorner=_hasCorner;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) _Bool needReloadBeforeReuse; // @synthesize needReloadBeforeReuse=_needReloadBeforeReuse;
@property(nonatomic) _Bool hideRightBottomBtns; // @synthesize hideRightBottomBtns=_hideRightBottomBtns;
@property(retain, nonatomic) NSString *finishButtonTitle; // @synthesize finishButtonTitle=_finishButtonTitle;
@property(retain, nonatomic) EmoticonBoardViewConfig *viewConfig; // @synthesize viewConfig=_viewConfig;
@property(nonatomic) unsigned long long viewType; // @synthesize viewType=_viewType;
@property(nonatomic) _Bool lazyReload; // @synthesize lazyReload=_lazyReload;
@property(nonatomic) unsigned long long emojiUseScene; // @synthesize emojiUseScene=_emojiUseScene;
@property(nonatomic) __weak id <EmoticonBoardViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) double bottomInset; // @synthesize bottomInset=m_bottomInset;
- (id)accessibilityElements;
- (long long)overrideMMUserInterfaceStyle;
- (long long)overrideUserInterfaceStyle;
- (void)updateCustomOrCameraEmoticonWithType:(unsigned int)arg1;
- (void)onEmoticonBackUpMgrRecoverNotifyProgressForType:(unsigned int)arg1;
- (void)onEmoticonBackUpMgrRecoverPartSyncFinishedForType:(unsigned int)arg1;
- (void)onLimitedModeChanged;
- (int)getDynamicSearchItemDisplayMode;
- (void)pushToDesignerProfile:(id)arg1 redotReporter:(id)arg2;
- (void)onShouldShowEmoticonDetailPage:(id)arg1;
- (void)onFinishPreviewAndChangeToPid:(id)arg1;
- (void)onTrySyncAnotherPartCustomEmoticon;
- (void)onTrySyncAnotherPartCameraEmoticon;
- (void)showEmoticonPreviewForWrap:(id)arg1 description:(id)arg2 pageWrapPid:(id)arg3 cellIndex:(unsigned long long)arg4 frame:(struct CGRect)arg5;
- (void)hideQQEmojiPreview;
- (void)showQQEmojiPreviewForKey:(id)arg1 atCenterPoint:(struct CGPoint)arg2 hideDesc:(_Bool)arg3;
- (void)onTapRecommendWithPid:(id)arg1;
- (void)onTapCameraEmoticonCreateButton;
- (void)onTapEmoticonWrap:(id)arg1 atIndex:(long long)arg2 maxCountPerLine:(unsigned long long)arg3 fromSection:(id)arg4;
- (void)onTapQQEmojiDeleteButton;
- (void)onTapQQEmojiSendButton;
- (void)onTapQQEmojiWithCode:(id)arg1 isRecentUse:(_Bool)arg2 atIndex:(long long)arg3 maxCountPerLine:(unsigned long long)arg4;
- (void)didChangeToPage:(id)arg1;
- (void)onEmoticonBoardDynamicTabBarClickFloatingFoldButton;
- (void)onEmoticonBoardDynamicTabBarClickSearchItem;
- (void)onEmoticonBoardDynamicTabBarClickSettingItem;
- (void)onEmoticonBoardDynamicTabBarClickStorePlusItem;
- (void)onEmoticonBoardDynamicTabBarTabBarClickItem:(id)arg1 atIndex:(long long)arg2;
- (id)getViewController;
- (void)onUploadEmoticonQueueChanged;
- (void)onAddBackupEmoticonOK:(id)arg1 addEmoticonWrap:(id)arg2;
- (void)onMMDynamicConfigUpdated;
- (void)OnEmoticonTabRecommendChanged;
- (void)onPreQuit;
- (void)onLanguageChange;
- (void)OnEmoticonRecommendNewStateChangedForBoardView:(_Bool)arg1;
- (void)OnUpdateEmoticonPackageListFor:(unsigned long long)arg1 WithPid:(id)arg2;
- (void)OnUpdateEmoticonListFor:(unsigned long long)arg1;
- (long long)emotionRecommandMaxCountConfig;
- (id)cameraPackageId;
- (id)customPackageId;
- (id)GetCurrentViewController;
- (void)loadAllDataAndView;
- (void)reloadUI;
- (_Bool)shouldHideTabbar;
- (void)layoutSubviews;
- (_Bool)selectTabOfPid:(id)arg1 forceFirstPage:(_Bool)arg2 animated:(_Bool)arg3;
- (void)changeTabToPid:(id)arg1;
- (void)changeToPidPosition:(id)arg1;
- (void)showAddEmoticonActionSheet;
- (void)reloadEmoticonAndEmojiData;
- (void)reloadPageControllerWithStickerPacks:(id)arg1;
- (void)reloadTabItemsWithStickerPacks:(id)arg1;
- (void)reloadEmoticonViewData;
- (void)reloadTabBarWithTabItems:(id)arg1;
- (id)getEmoticonArrayWithPackageArray:(id)arg1;
- (id)getTabItemsWithStickerPackages:(id)arg1 recommandItems:(id)arg2;
- (id)getTabRecommandItemsWithStickerPackages:(id)arg1;
- (id)getStickerPackages;
- (id)emoticonAddLogicController;
- (void)resetEmotionBoardShowTimeAndClickIndex;
- (void)SetCanSend:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isSingleTab;
@property(readonly, nonatomic) double preferHeight;
- (void)UnRegisterDelegate;
- (void)RegisterDelegate:(id)arg1;
- (void)prepareForReuseWithoutReload;
- (_Bool)checkNeedReloadForReuse;
- (_Bool)isSticker;
- (void)forceHideEmoticonPreview;
- (void)reloadEmotionBoardView;
- (void)initView;
- (void)initData;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "FavForwardLogicDelegate-Protocol.h"
#import "FavTagViewDelegate-Protocol.h"
#import "IVOIPUILogicMgrExt-Protocol.h"
#import "MMScrollActionSheetDelegate-Protocol.h"
#import "MMTipsViewControllerDelegate-Protocol.h"
#import "MinimizationTransitionControllerDelegate-Protocol.h"
#import "RTEAttachmentViewProviderDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WNAlertViewHelperDelegate-Protocol.h"
#import "WNAttachmentBaseViewDelegate-Protocol.h"
#import "WNRTEToolViewDelegate-Protocol.h"
#import "WNSelectionViewDelegate-Protocol.h"
#import "WNTextViewOperationDelegate-Protocol.h"
#import "WeNoteDataControllerDelegate-Protocol.h"

@class FavoritesItemDataField, MMScrollActionSheet, MMTimer, MiniRecTransitionController, NSString, RTEAttachmentViewProvider, UIButton, UIImage, UIView, WNRTEToolView, WNSaveImageLogic, WNSelectionView, WNTableview, WeNoteDataController;

@interface WeNoteViewController : MMUIViewController <FavForwardLogicDelegate, MMScrollActionSheetDelegate, FavTagViewDelegate, WCActionSheetDelegate, WNRTEToolViewDelegate, WNTextViewOperationDelegate, MMTipsViewControllerDelegate, IVOIPUILogicMgrExt, WNAlertViewHelperDelegate, RTEAttachmentViewProviderDelegate, WNAttachmentBaseViewDelegate, WNSelectionViewDelegate, MinimizationTransitionControllerDelegate, WeNoteDataControllerDelegate>
{
    WeNoteDataController *m_dataController;
    MMScrollActionSheet *m_scrollActionSheet;
    _Bool m_bDeletePopView;
    WNRTEToolView *m_toolView;
    WNTableview *m_tableView;
    UIView *m_headerView;
    UIView *m_footerView;
    double m_keyboardHeight;
    double m_keyboardAnimationTime;
    long long m_keyboardAnimationCurve;
    _Bool m_forbidUpdateToolView;
    _Bool m_holdOnAudio;
    _Bool m_forceLoadImage;
    unsigned int m_oriVersion;
    UIImage *m_snapshotImage;
    _Bool m_usingExternalKeyboard;
    MMTimer *m_saveTimer;
    _Bool m_forceHideTimeHeader;
    UIButton *m_exposeButton;
    RTEAttachmentViewProvider *m_attachmentViewProvider;
    RTEAttachmentViewProvider *m_attachmentViewProviderForLongImageUtilForLightMode;
    RTEAttachmentViewProvider *m_attachmentViewProviderForLongImageUtilForDarkMode;
    RTEAttachmentViewProvider *m_attachmentViewProviderForLongImageUtilForTransparentMode;
    RTEAttachmentViewProvider *m_attachmentViewProviderForSquareImageUtilForLightMode;
    RTEAttachmentViewProvider *m_attachmentViewProviderForSquareImageUtilForDarkMode;
    RTEAttachmentViewProvider *m_attachmentViewProviderForSquareImageUtilForTransparentMode;
    WNSelectionView *m_selectionView;
    MiniRecTransitionController *m_minimizationTransitionController;
    _Bool _bEditable;
    _Bool _bShowMoreMenu;
    _Bool _bPresentedByMiniTask;
    FavoritesItemDataField *_scrollToData;
    WNSaveImageLogic *_saveImageLogic;
    unsigned long long _scene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) WNSaveImageLogic *saveImageLogic; // @synthesize saveImageLogic=_saveImageLogic;
@property(retain, nonatomic) FavoritesItemDataField *scrollToData; // @synthesize scrollToData=_scrollToData;
@property(nonatomic) _Bool bPresentedByMiniTask; // @synthesize bPresentedByMiniTask=_bPresentedByMiniTask;
@property(nonatomic) _Bool bShowMoreMenu; // @synthesize bShowMoreMenu=_bShowMoreMenu;
@property(nonatomic) _Bool bEditable; // @synthesize bEditable=_bEditable;
- (id)minimizationInteractivePopGetPendingTaskContextWithGenerateType:(unsigned long long)arg1;
- (_Bool)minimizationInteractivePopGestureRecognizerShouldBegin;
- (id)minimizationTaskData;
- (void)minimizationInteractivePopToMinimizeTask:(_Bool)arg1;
- (void)minimizationInteractivePopGestureRecognizerDidBegin;
- (_Bool)checkNeedReloadData:(unsigned int)arg1;
- (void)removeTaskHistory;
- (void)addToTaskHistory;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)minimizationTransitionController;
- (void)installMinimizationTransitionController;
- (void)updateToMinimize;
- (void)addToMinimizeWithGenerateType:(unsigned long long)arg1;
- (_Bool)tryAddToMinimize:(id)arg1;
- (void)setPopGestureEnable:(_Bool)arg1;
- (_Bool)needHideKeyboardToShowAlert;
- (void)onVoipMaximized;
- (void)onVoipMinimized;
- (void)onVideoVoipViewDisappear;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)onTimeSave;
- (void)stopAutoSaveTimer;
- (void)startAutoSaveTimer;
- (void)onCreatAttachmentView:(id)arg1;
- (void)onLongPressSelectAttachmentView:(id)arg1;
- (void)onAttachmentAttributeNeedReload:(id)arg1;
- (void)onAttachmentAttributeEndEdit:(id)arg1;
- (void)onAttachmentAttributeStartEdit:(id)arg1;
- (_Bool)isForceLoadImage;
- (_Bool)canEditNote;
- (id)getAllAttachmentAttributeWithType:(unsigned long long)arg1;
- (id)messageWrap;
- (id)favItem;
- (id)getScollToData;
- (id)getCurrentViewController;
- (_Bool)isUsingExternalKeyboard;
- (void)noteScrollViewDidScroll:(id)arg1 extendHeight:(double)arg2;
- (void)checkFooterView;
- (void)onTableSectionChange:(id)arg1;
- (void)onCellHeightChange;
- (struct CGSize)getViewSize;
- (id)realGetAttachmentViewProviderWithColorType:(unsigned long long)arg1;
- (id)getAttachmentViewProviderForSquareImageUtilWithTransparentMode;
- (id)getAttachmentViewProviderForSquareImageUtilWithDarkMode;
- (id)getAttachmentViewProviderForSquareImageUtilWithLightMode;
- (id)getAttachmentViewProviderForLongImageUtilWithTransparentMode;
- (id)getAttachmentViewProviderForLongImageUtilWithDarkMode;
- (id)getAttachmentViewProviderForLongImageUtilWithLightMode;
- (id)getAttachmentViewProvider;
- (void)tryShowSelectionViewWithMenue:(_Bool)arg1;
- (_Bool)isSelectionViewShowing;
- (void)updateAllOrderedListView;
- (void)chectNeedFlashData;
- (void)realScrollSelectionToVisible;
- (void)scrollElementToVisible:(id)arg1;
- (void)scrollSelectionToVisible;
- (void)updateSelection;
- (void)reloadSectionAtIndex:(unsigned long long)arg1;
- (void)reloadAll;
- (void)showKeyboard;
- (void)stopLoading;
- (void)showLoading;
- (void)reloadRightBarBtn;
- (void)setForbidUpdateToolViewEnable:(_Bool)arg1;
- (void)setConversionOntop:(_Bool)arg1;
- (void)saveNote;
- (void)setDataEdited:(_Bool)arg1;
- (_Bool)isEmpty;
- (void)configWithDataWrap:(id)arg1;
- (void)configWithMsg:(id)arg1 andData:(id)arg2;
- (void)configWithWCDataItem:(id)arg1;
- (void)configWithFavItem:(id)arg1;
- (void)configWithMsg:(id)arg1;
- (void)setM_uiVcType:(unsigned int)arg1;
- (void)viewDidTransitionToNewSize;
- (_Bool)shouldInteractivePop;
- (_Bool)useTransparentNavibar;
- (_Bool)useBlackStatusbar;
- (void)disMissSelf;
- (void)configNavbar;
- (void)initSelectView;
- (void)initTableView;
- (void)onExpose;
- (void)initHeaderAndFooterView;
- (void)initUI;
- (void)didMoveToNewScene:(id)arg1;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)dealloc;
- (id)init;
- (void)refuseSaveNoteAsImage;
- (void)continueSaveNoteAsImage;
- (void)handleFailState;
- (void)handleSuccessState;
- (void)onNoteDownloadResourceNone;
- (void)onNoteDownloadResourceFail;
- (void)onNoteDownloadResourceSuccess;
- (void)onNoteSecurityCheckFail;
- (void)onNoteSecurityCheckOK;
- (void)onFavTagEditBegin:(int)arg1;
- (id)getFavForawrdViewController;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)getFooterViewImage;
- (void)getTableViewimage:(CDUnknownBlockType)arg1;
- (void)getNoteImage:(CDUnknownBlockType)arg1;
- (void)realSaveNoteAsImage;
- (void)saveNoteAsImage;
- (void)reportSetOnTop:(_Bool)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)onSwitchScene:(id)arg1;
- (void)onMenuAction:(id)arg1;
- (id)AddNewActionSheetCell2Array:(id)arg1 WithText:(id)arg2 WithImage:(id)arg3 WithAccessibilityLabel:(id)arg4;
- (id)AddNewActionSheetCell2Array:(id)arg1 WithText:(id)arg2 WithImage:(id)arg3;
- (void)realForwardNote2WC;
- (void)forwardNote2WC;
- (id)tryRemoveChatVoiceBeforeForward:(id)arg1;
- (void)realForwardNote;
- (void)forwardNote;
- (void)onShowFullToolView;
- (void)onShowBasicToolView;
- (void)onRedo;
- (void)onUndo;
- (_Bool)isUndoExceedMaxCount;
- (_Bool)canRedo;
- (_Bool)canUndo;
- (void)onParagraphSetUl;
- (void)onParagraphSetTodo;
- (void)onParagraphSetOl;
- (_Bool)isUlLiParagraph;
- (_Bool)isTodoParagraph;
- (_Bool)isOlLiParagraph;
- (void)insertAttributes:(id)arg1;
- (_Bool)ifNonTextParaInfoNumExceedLimit:(long long)arg1;
- (void)holdOnAudio;
- (unsigned int)objectCount;
- (void)onTapWeAppMPShortLink:(id)arg1;
- (void)hideToolView;
- (void)onResignFirstResponder:(id)arg1;
- (void)onBecomeFirstResponder:(id)arg1;
- (void)updateToolBarHeight;
- (void)onTopBarFrameChanged;
- (void)hideKeyboard;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)initToolView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


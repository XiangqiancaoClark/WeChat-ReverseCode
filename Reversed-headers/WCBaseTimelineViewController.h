//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

@class EmoticonBoardView, MMGrowTextView, MMTableView, MMUILabel, MMURLHandler, NSMutableDictionary, UIButton, UIImageView, UIView, WCDataItem, WCInputController, WCUserComment;
@protocol UIViewControllerPreviewing;

@interface WCBaseTimelineViewController : MMUIViewController
{
    unsigned int _commentWordLimit;
    MMTableView *_tableView;
    WCDataItem *_inputDataItem;
    WCUserComment *_inputRefComment;
    WCInputController *_inputController;
    UIButton *_expressionButton;
    MMUILabel *_remainWordCountLabel;
    UIView *_backgroundView;
    UIImageView *_inputToolView;
    EmoticonBoardView *_emoticonBoardView;
    UIButton *_atButton;
    MMGrowTextView *_growTextView;
    id <UIViewControllerPreviewing> _previewingContext;
    NSMutableDictionary *_cellHeightCache;
    NSMutableDictionary *_cellShowItemCache;
    NSMutableDictionary *_hasPredownload;
    MMURLHandler *_urlHandler;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int commentWordLimit; // @synthesize commentWordLimit=_commentWordLimit;
@property(retain, nonatomic) MMURLHandler *urlHandler; // @synthesize urlHandler=_urlHandler;
@property(retain, nonatomic) NSMutableDictionary *hasPredownload; // @synthesize hasPredownload=_hasPredownload;
@property(retain, nonatomic) NSMutableDictionary *cellShowItemCache; // @synthesize cellShowItemCache=_cellShowItemCache;
@property(retain, nonatomic) NSMutableDictionary *cellHeightCache; // @synthesize cellHeightCache=_cellHeightCache;
@property(retain, nonatomic) id <UIViewControllerPreviewing> previewingContext; // @synthesize previewingContext=_previewingContext;
@property(retain, nonatomic) MMGrowTextView *growTextView; // @synthesize growTextView=_growTextView;
@property(retain, nonatomic) UIButton *atButton; // @synthesize atButton=_atButton;
@property(retain, nonatomic) EmoticonBoardView *emoticonBoardView; // @synthesize emoticonBoardView=_emoticonBoardView;
@property(retain, nonatomic) UIImageView *inputToolView; // @synthesize inputToolView=_inputToolView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) MMUILabel *remainWordCountLabel; // @synthesize remainWordCountLabel=_remainWordCountLabel;
@property(retain, nonatomic) UIButton *expressionButton; // @synthesize expressionButton=_expressionButton;
@property(retain, nonatomic) WCInputController *inputController; // @synthesize inputController=_inputController;
@property(retain, nonatomic) WCUserComment *inputRefComment; // @synthesize inputRefComment=_inputRefComment;
@property(retain, nonatomic) WCDataItem *inputDataItem; // @synthesize inputDataItem=_inputDataItem;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
- (void)showDebugInfoIfNeeded:(id)arg1 title:(id)arg2 attachKey:(id)arg3;
- (void)addDebugOptionToActionSheetIfNeeded:(id)arg1;
- (void)onDidTakeScreenShot;
- (void)onApplicationDidBecomeActive;
- (void)onResignActive;
- (void)onMenuControllerWillShow:(id)arg1;
- (void)onMenuControllerWillHide:(id)arg1;
- (void)onTimelineViewEnterBackground:(id)arg1;
- (void)onTimelineViewEnterForeground:(id)arg1;
- (void)tryFixInputViewUIForIpadWhenRotate;
- (void)onTraitCollectionDidChange:(id)arg1 delegate:(id)arg2;
- (void)onPreviewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)onPreviewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2 refDataItem:(id)arg3 likeHandler:(CDUnknownBlockType)arg4 commentHandler:(CDUnknownBlockType)arg5 favHandler:(CDUnknownBlockType)arg6;
- (void)reRegisterPreviewContext:(id)arg1;
- (void)showAlertOnItemDeleteFinish:(long long)arg1;
- (id)safeProfileContactWithUserName:(id)arg1 displayname:(id)arg2;
- (void)trySetEmotionSupport:(_Bool)arg1;
- (void)resetInputControllerComponents;
- (void)reloadExpressionButtonImage:(long long)arg1;
- (void)updateWordCnt:(int)arg1;
- (void)initEmoticonView;
- (void)initBackgroundView;
- (void)initInputToolView:(SEL)arg1 expressionButtonSelector:(SEL)arg2;
- (void)ensureInitInputView:(id)arg1 atButtonSelector:(SEL)arg2 expressionButtonSelector:(SEL)arg3;
- (id)getHotEreaCellViewIn:(id)arg1 withType:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)hideAlbumListLineViewInCell:(id)arg1;
- (void)resetAlbumListLineViewsFrameInCell:(id)arg1 indexPath:(id)arg2;
- (double)getCellLineContentMarginCurOri;
- (id)tableViewWithDataProvider:(id)arg1;
- (void)adjustViewAndNavBarRect;
- (_Bool)shouldRotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)removeObserverForTakeSnapshotNotification;
- (void)addObserverForTakeSnapshotNotification;
- (void)removeObserverForActiveNotification;
- (void)addObserverForActiveNotification;
- (void)removeObserverForMenuNotification;
- (void)addObserverForMenuNotification;
- (void)removeObserverForForegroundNotification;
- (void)addObserverForForegroundNotification;
- (id)heightOfTimelineCellInCache:(id)arg1;
- (void)initCaches;
- (id)init;

@end


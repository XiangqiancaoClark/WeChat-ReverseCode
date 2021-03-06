//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMCommonActionSheetPickerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCFacadeExt-Protocol.h"
#import "WCListViewDelegate-Protocol.h"

@class CContact, MMCommonActionSheetPicker, NSArray, NSMutableArray, NSString, UIButton, WCCoverActionReporter, WCTimeLineFooterView;
@protocol WCListViewProtocol;

@interface WCListViewController : MMUIViewController <WCListViewDelegate, MMCommonActionSheetPickerDelegate, WCActionSheetDelegate, UINavigationControllerDelegate, WCFacadeExt>
{
    _Bool m_isMyWC;
    NSMutableArray *m_arrPhotoDatas;
    CContact *m_contact;
    _Bool m_isNoMoreData;
    id <WCListViewProtocol> m_view;
    unsigned int _startTime;
    _Bool _noMoreDataAtTop;
    _Bool _noMoreDataAtBottom;
    _Bool _jumpState;
    unsigned int _sourceScene;
    unsigned int _albumEntranceThumbnailCnt;
    MMCommonActionSheetPicker *_yearMonthPickerView;
    NSArray *_yearsData;
    NSArray *_monthsDatas;
    WCTimeLineFooterView *_yearMonthJumpingView;
    UIButton *_yearMonthJumpRetryView;
    unsigned long long _itemIdForYearMonthJump;
    WCCoverActionReporter *_coverActionReporter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCCoverActionReporter *coverActionReporter; // @synthesize coverActionReporter=_coverActionReporter;
@property(nonatomic) unsigned long long itemIdForYearMonthJump; // @synthesize itemIdForYearMonthJump=_itemIdForYearMonthJump;
@property(retain, nonatomic) UIButton *yearMonthJumpRetryView; // @synthesize yearMonthJumpRetryView=_yearMonthJumpRetryView;
@property(retain, nonatomic) WCTimeLineFooterView *yearMonthJumpingView; // @synthesize yearMonthJumpingView=_yearMonthJumpingView;
@property(nonatomic) _Bool jumpState; // @synthesize jumpState=_jumpState;
@property(nonatomic, getter=isNoMoreDataAtBottom) _Bool noMoreDataAtBottom; // @synthesize noMoreDataAtBottom=_noMoreDataAtBottom;
@property(nonatomic, getter=isNoMoreDataAtTop) _Bool noMoreDataAtTop; // @synthesize noMoreDataAtTop=_noMoreDataAtTop;
@property(retain, nonatomic) NSArray *monthsDatas; // @synthesize monthsDatas=_monthsDatas;
@property(retain, nonatomic) NSArray *yearsData; // @synthesize yearsData=_yearsData;
@property(retain, nonatomic) MMCommonActionSheetPicker *yearMonthPickerView; // @synthesize yearMonthPickerView=_yearMonthPickerView;
@property(nonatomic) unsigned int albumEntranceThumbnailCnt; // @synthesize albumEntranceThumbnailCnt=_albumEntranceThumbnailCnt;
@property(nonatomic) unsigned int sourceScene; // @synthesize sourceScene=_sourceScene;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
- (id)behaviourInfoSession;
- (void)reportOnViewDisappear;
- (void)reportOnViewApper;
- (void)reportOnEnd;
- (void)reportOnBeign;
- (void)calcYearMonthPickerViewData;
- (void)tryCalcYearMonthPickerViewData;
- (void)updateYearMonthPicker:(id)arg1 month:(id)arg2;
- (void)onPickerViewDidSelectRow:(long long)arg1 inComponent:(long long)arg2 PickItem:(id)arg3;
- (void)commonPickerConfirm:(id)arg1;
- (void)WCListViewDidClickYearMonthFlowLabel:(id)arg1 month:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onHomepageClearJumpState;
- (void)onHomepagePrePageUpdate;
- (void)onHomepageFetchDataBeforeJumpEnd:(id)arg1 success:(_Bool)arg2;
- (void)onHomepageUpdate:(long long)arg1 withAdded:(id)arg2 andChanged:(id)arg3 andDeleted:(id)arg4 andTip:(id)arg5;
- (void)onHomepageYearMonthDataUpdated:(id)arg1;
- (void)onNetworkActivityStatusChanged;
- (void)willDisshow;
- (void)willDisappear;
- (void)willShow;
- (void)willAppear;
- (void)hideYearMonthJumpRetryView;
- (void)onRetryJump;
- (void)showYearMonthJumpRetryView;
- (void)hideYearMonthJumpingView;
- (void)showYearMonthJumpingView;
- (void)clearJumpState;
- (_Bool)refreshPrePage;
- (void)refreshFooter;
- (void)updateJumpState;
- (void)reloadDataWithPrePageUpdate:(_Bool)arg1;
- (void)reloadData;
- (void)initData:(_Bool)arg1;
- (void)onDissmiss;
- (void)onOperate:(id)arg1;
- (void)reloadStyle;
- (void)initBarItem;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (void)setNavigationBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewDidLoad;
- (id)init;
- (void)updateNetworkStatus;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


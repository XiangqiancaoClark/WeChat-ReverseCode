//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IClearDataMgrExt-Protocol.h"
#import "ResourceBrowserFilterViewControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class MMTableView, MMUIActivityIndicatorView, NSMutableDictionary, NSString, UIButton, UILabel, UIView;

@interface ResourceBrowserViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate, IClearDataMgrExt, ResourceBrowserFilterViewControllerDelegate>
{
    MMTableView *_tableView;
    UIView *_footerView;
    UIButton *_selectAllButton;
    UIButton *_deleteButton;
    UIButton *_filterButton;
    UILabel *_sizeLabel;
    UILabel *_emptyTipLabel;
    MMUIActivityIndicatorView *_loadingIndicatorView;
    _Bool _hasLookDetailed;
    unsigned int _curMaxDataCount;
    vector_e4e608e5 _arrSelectedData;
    vector_09444f17 _arrSelectedFileData;
    vector_e4e608e5 _arrSessionTypeItem;
    vector_09444f17 _arrFileTypeItem;
    unsigned long long m_eFilterType;
    unsigned long long m_eOrderType;
    NSMutableDictionary *m_dicSectionTitle;
    struct map<NSString *, std::__1::vector<std::__1::shared_ptr<ClearSessionItem>>, std::__1::less<NSString *>, std::__1::allocator<std::__1::pair<NSString *const, std::__1::vector<std::__1::shared_ptr<ClearSessionItem>>>>> m_dicSessionByTitle;
    struct map<NSString *, std::__1::vector<std::__1::shared_ptr<ClearDataItem>>, std::__1::less<NSString *>, std::__1::allocator<std::__1::pair<NSString *const, std::__1::vector<std::__1::shared_ptr<ClearDataItem>>>>> m_dicFileByTitle;
    long long _nowTime;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)reportSessionData;
- (id)genTimeStringForSectionHeader:(unsigned int)arg1;
- (void)onSelectBrowserFilterConditionType:(unsigned long long)arg1 order:(unsigned long long)arg2;
- (void)onCleanedOver3MonthFileSize:(unsigned long long)arg1;
- (void)onReloadDataItem;
- (void)onSelectedDataChange;
- (unsigned long long)getDataItemsDataSize:(const vector_09444f17 *)arg1;
- (unsigned long long)getSessionsItemDataSize:(const vector_e4e608e5 *)arg1;
- (id)getDataItemSizeShowString:(const vector_09444f17 *)arg1;
- (id)getSessionItemSizeShowString:(const vector_e4e608e5 *)arg1;
- (id)getFooterPannelSizeShowString;
- (_Bool)isSessionDataFull;
- (id)getSelectButtonTitle;
- (void)previewAppNode:(id)arg1 msgWrap:(id)arg2 originFrame:(struct CGRect)arg3;
- (void)onPreviewFile:(id)arg1;
- (void)onLookDetail:(id)arg1;
- (void)deleteSelectedFileAndKeepMessage;
- (void)deleteSelectedSessionKeepMsg;
- (void)onDeleteSelectedData:(id)arg1;
- (void)onClickFilter;
- (void)onSelecteAll;
- (void)onShowMoreAction;
- (_Bool)shouldShowSizeLabel;
- (void)updateFooterPannelView;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onReturn;
- (void)updateFilterButtonTitleWithType;
- (void)initFooterPannelView;
- (void)updateTableFooterView;
- (void)updateTableView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)filterDataItemBy:(unsigned long long)arg1;
- (void)filterSessionItemBy:(unsigned long long)arg1;
- (void)onLoadDataFinished;
- (void)reInitData;
- (void)initData;
- (void)initView;
- (struct CGRect)getTableViewFrame;
- (void)didAppear;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (_Bool)isDataEmpty;
- (void)dealloc;
- (_Bool)isForbidPageSheet;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


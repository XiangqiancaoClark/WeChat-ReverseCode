//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSMutableSet, NSString, WCFinderBaseCgi, WCFinderDataItem, WCFinderPushFeedViewParams, WCFinderShareListReportModel;
@protocol WCFinderShareListViewModelDelegate;

@interface WCFinderShareListViewModel : NSObject
{
    _Bool _continueFlag;
    id <WCFinderShareListViewModelDelegate> _delegate;
    NSMutableArray *_dataItems;
    unsigned long long _refreshTime;
    WCFinderPushFeedViewParams *_funcParams;
    NSMutableSet *_tidContainSet;
    NSString *_encrytedObjectidTid;
    WCFinderDataItem *_sharedDataItem;
    NSData *_lastBuff;
    NSString *_lastTid;
    NSString *_lastNonceID;
    unsigned long long _commentScene;
    NSMutableSet *_showlikeInduceContentTidSet;
    unsigned long long _requestScene;
    unsigned long long _feedScreenStyle;
    WCFinderBaseCgi *_getRelatedCgi;
    WCFinderShareListReportModel *_reportModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderShareListReportModel *reportModel; // @synthesize reportModel=_reportModel;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(retain, nonatomic) WCFinderBaseCgi *getRelatedCgi; // @synthesize getRelatedCgi=_getRelatedCgi;
@property(nonatomic) unsigned long long feedScreenStyle; // @synthesize feedScreenStyle=_feedScreenStyle;
@property(nonatomic) unsigned long long requestScene; // @synthesize requestScene=_requestScene;
@property(retain, nonatomic) NSMutableSet *showlikeInduceContentTidSet; // @synthesize showlikeInduceContentTidSet=_showlikeInduceContentTidSet;
@property(nonatomic) unsigned long long commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) NSString *lastNonceID; // @synthesize lastNonceID=_lastNonceID;
@property(retain, nonatomic) NSString *lastTid; // @synthesize lastTid=_lastTid;
@property(retain, nonatomic) NSData *lastBuff; // @synthesize lastBuff=_lastBuff;
@property(retain, nonatomic) WCFinderDataItem *sharedDataItem; // @synthesize sharedDataItem=_sharedDataItem;
@property(copy, nonatomic) NSString *encrytedObjectidTid; // @synthesize encrytedObjectidTid=_encrytedObjectidTid;
@property(retain, nonatomic) NSMutableSet *tidContainSet; // @synthesize tidContainSet=_tidContainSet;
@property(retain, nonatomic) WCFinderPushFeedViewParams *funcParams; // @synthesize funcParams=_funcParams;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(retain, nonatomic) NSMutableArray *dataItems; // @synthesize dataItems=_dataItems;
@property(nonatomic) __weak id <WCFinderShareListViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)getRelatedCardGuideTabTypeWithCardTid:(id)arg1;
- (id)getRelatedCardLastBufferWithTabType:(long long)arg1;
- (id)getRelatedContentVMWithTabType:(long long)arg1;
- (unsigned long long)feedViewControllerScene;
- (void)onFinderDataItemMediaURLIsExpired:(id)arg1;
- (void)realRemoveContentVMFromDataSource:(id)arg1;
- (id)contentMediaIndexPathWithTid:(id)arg1;
- (long long)getIndexOfTid:(id)arg1;
@property(readonly, nonatomic) _Bool isSourceValid;
- (_Bool)isPreviewScene;
- (id)contentVMWithTid:(id)arg1;
- (void)stopPreloadVideoItem:(id)arg1;
- (void)preloadVideoItems:(id)arg1;
- (id)contentVMWithIndex:(unsigned long long)arg1;
- (long long)contentIndexOfTid:(id)arg1;
- (void)appendFinderContentVM:(id)arg1;
- (void)requestReleatedList;
- (_Bool)isEnableFetchNextpage;
- (void)requestData;
- (_Bool)deleteDataItemWithIndex:(unsigned long long)arg1 tid:(id)arg2;
- (id)transformDataItems:(id)arg1;
- (void)addContentVM:(id)arg1;
- (id)_initWithTid:(id)arg1 encrytedObjectidTid:(id)arg2 nonceID:(id)arg3 dataScene:(id)arg4 commentScene:(unsigned long long)arg5 requestScene:(unsigned long long)arg6 feedScreenStyle:(unsigned long long)arg7 reportModel:(id)arg8 funcParams:(id)arg9;
- (id)initWithEncrytedObjectidTid:(id)arg1 nonceID:(id)arg2 dataScene:(id)arg3 commentScene:(unsigned long long)arg4 requestScene:(unsigned long long)arg5 feedScreenStyle:(unsigned long long)arg6 reportModel:(id)arg7 funcParams:(id)arg8;
- (id)initWithTid:(id)arg1 nonceID:(id)arg2 dataScene:(id)arg3 commentScene:(unsigned long long)arg4 requestScene:(unsigned long long)arg5 feedScreenStyle:(unsigned long long)arg6 reportModel:(id)arg7 funcParams:(id)arg8;

@end


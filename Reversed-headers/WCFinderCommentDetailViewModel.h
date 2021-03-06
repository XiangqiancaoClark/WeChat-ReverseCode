//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCFinderDataItemExt-Protocol.h"
#import "WCFinderPostingCommentExt-Protocol.h"

@class NSData, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, WCFinderDataItem;
@protocol WCFinderCommentDetailViewModelDelegate;

@interface WCFinderCommentDetailViewModel : NSObject <WCFinderDataItemExt, WCFinderPostingCommentExt>
{
    _Bool _shouldShowHightlightComment;
    _Bool _hasFetchCGIData;
    _Bool _upContinue;
    _Bool _downContinue;
    _Bool _shouldShowAuthenticationTips;
    _Bool _isLoadingComment;
    _Bool _shouldHideLocalCommentList;
    _Bool _isCloseComment;
    _Bool _hasShowFriendLabel;
    _Bool _feedWasDeleted;
    _Bool _isDefaultComment;
    _Bool _hasAddFriendLabel;
    _Bool _hasAddOtherLabel;
    _Bool _autoExpandSubCommentList;
    unsigned long long _refCommentID;
    NSMutableArray *_allComments;
    WCFinderDataItem *_dataItem;
    id <WCFinderCommentDetailViewModelDelegate> _delegate;
    unsigned long long _scene;
    NSString *_lastVCName;
    unsigned long long _viewScene;
    unsigned long long _preFetchNextPageCount;
    unsigned long long _reportScene;
    unsigned long long _replyScene;
    NSString *_replyNickname;
    NSData *_lastBuffer;
    NSMutableSet *_commentIdSet;
    NSMutableDictionary *_heightDict;
    unsigned long long _commentMaxDisplayNameCount;
    NSMutableSet *_showSubCommentListIDSet;
    struct _NSRange _commentTextViewLatestSelectionRange;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool autoExpandSubCommentList; // @synthesize autoExpandSubCommentList=_autoExpandSubCommentList;
@property(nonatomic) _Bool hasAddOtherLabel; // @synthesize hasAddOtherLabel=_hasAddOtherLabel;
@property(nonatomic) _Bool hasAddFriendLabel; // @synthesize hasAddFriendLabel=_hasAddFriendLabel;
@property(retain, nonatomic) NSMutableSet *showSubCommentListIDSet; // @synthesize showSubCommentListIDSet=_showSubCommentListIDSet;
@property(nonatomic) unsigned long long commentMaxDisplayNameCount; // @synthesize commentMaxDisplayNameCount=_commentMaxDisplayNameCount;
@property(retain, nonatomic) NSMutableDictionary *heightDict; // @synthesize heightDict=_heightDict;
@property(retain, nonatomic) NSMutableSet *commentIdSet; // @synthesize commentIdSet=_commentIdSet;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) struct _NSRange commentTextViewLatestSelectionRange; // @synthesize commentTextViewLatestSelectionRange=_commentTextViewLatestSelectionRange;
@property(nonatomic) _Bool isDefaultComment; // @synthesize isDefaultComment=_isDefaultComment;
@property(copy, nonatomic) NSString *replyNickname; // @synthesize replyNickname=_replyNickname;
@property(nonatomic) unsigned long long replyScene; // @synthesize replyScene=_replyScene;
@property(nonatomic) _Bool feedWasDeleted; // @synthesize feedWasDeleted=_feedWasDeleted;
@property(nonatomic) _Bool hasShowFriendLabel; // @synthesize hasShowFriendLabel=_hasShowFriendLabel;
@property(nonatomic) _Bool isCloseComment; // @synthesize isCloseComment=_isCloseComment;
@property(nonatomic) unsigned long long reportScene; // @synthesize reportScene=_reportScene;
@property(nonatomic) _Bool shouldHideLocalCommentList; // @synthesize shouldHideLocalCommentList=_shouldHideLocalCommentList;
@property(nonatomic) unsigned long long preFetchNextPageCount; // @synthesize preFetchNextPageCount=_preFetchNextPageCount;
@property(nonatomic) _Bool isLoadingComment; // @synthesize isLoadingComment=_isLoadingComment;
@property(nonatomic) unsigned long long viewScene; // @synthesize viewScene=_viewScene;
@property(copy, nonatomic) NSString *lastVCName; // @synthesize lastVCName=_lastVCName;
@property(nonatomic) _Bool shouldShowAuthenticationTips; // @synthesize shouldShowAuthenticationTips=_shouldShowAuthenticationTips;
@property(nonatomic) _Bool downContinue; // @synthesize downContinue=_downContinue;
@property(nonatomic) _Bool upContinue; // @synthesize upContinue=_upContinue;
@property(nonatomic) _Bool hasFetchCGIData; // @synthesize hasFetchCGIData=_hasFetchCGIData;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool shouldShowHightlightComment; // @synthesize shouldShowHightlightComment=_shouldShowHightlightComment;
@property(nonatomic) __weak id <WCFinderCommentDetailViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) NSMutableArray *allComments; // @synthesize allComments=_allComments;
@property(nonatomic) unsigned long long refCommentID; // @synthesize refCommentID=_refCommentID;
- (id)commentIdentityNickname;
- (unsigned long long)getCommentIdentityType;
- (void)updateCommentIdentityType:(unsigned long long)arg1;
- (void)updateReplyScene:(unsigned long long)arg1;
- (void)onFinderDataItemPostingCommentFailBySpecialError:(id)arg1 errorCode:(int)arg2 errorMsg:(id)arg3;
- (void)onFinderDataItemBeDeletedWithTid:(id)arg1;
- (void)onFinderDataItemUpdate:(id)arg1;
- (void)onFinderDataItemCommentLikeStatusChangeWithTid:(id)arg1 commentID:(unsigned long long)arg2 rootCommentID:(unsigned long long)arg3 likeStatus:(_Bool)arg4;
- (void)onFinderDataItemPostSubCommentFail:(id)arg1 tid:(id)arg2 rootCommentID:(unsigned long long)arg3 retCode:(int)arg4;
- (void)onFinderDataItemPostSubCommentSuccessful:(id)arg1 tid:(id)arg2 rootCommentID:(unsigned long long)arg3;
- (void)onFinderDataItemPostSubComment:(id)arg1 tid:(id)arg2 rootCommentID:(unsigned long long)arg3;
- (void)onFinderDataItemPostCommentFail:(id)arg1 tid:(id)arg2;
- (void)onFinderDataItemPostCommentSuccessful:(id)arg1 tid:(id)arg2;
- (long long)getPostCommentIndexWithComment:(id)arg1;
- (void)onFinderDataItemPostComment:(id)arg1 tid:(id)arg2;
- (void)showSubCommentListWithSection:(unsigned long long)arg1;
- (id)cacheCommentWithCommentID:(unsigned long long)arg1 wrappedTextHeight:(double)arg2 fullTextHeight:(double)arg3;
- (id)heightModelWithCommentID:(unsigned long long)arg1;
- (void)clickCommentRefcontentFullTextAction:(id)arg1 commentID:(unsigned long long)arg2 isExpand:(_Bool)arg3;
- (void)clickCommentFullTextAction:(id)arg1 commentID:(unsigned long long)arg2 isExpand:(_Bool)arg3;
- (void)clickCommentLikeAction:(id)arg1;
- (void)revertBlackList:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)addToBlackList:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)changeCommentBlackListFlagComment:(id)arg1 isInBlackList:(_Bool)arg2;
- (id)calDisplayNameWithCommentDidsplayName:(id)arg1;
- (void)calCommentDisplayNameWithCommentArray:(id)arg1;
- (void)defineCommentsByFriend:(id)arg1;
- (void)retryPostCommentWithComment:(id)arg1 rootCommentID:(unsigned long long)arg2;
- (_Bool)isMentionByFeedAuthor;
- (id)createCommentWithContent:(id)arg1 mentionArray:(id)arg2;
- (void)deleteComment:(id)arg1 rootCommentID:(unsigned long long)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (_Bool)privateRootComment:(unsigned long long)arg1;
- (void)privateDeleteComment:(id)arg1;
- (unsigned long long)getIndexWithRootCommentID:(unsigned long long)arg1;
- (id)getSectionViewModelWithRootCommentID:(unsigned long long)arg1;
- (id)getCommentAtIndexPath:(id)arg1;
- (id)getCommentAtSection:(unsigned long long)arg1;
- (void)replyWithSubComment:(id)arg1;
- (void)replayComment:(id)arg1 repalyStr:(id)arg2 rootCommentID:(unsigned long long)arg3 mentionArray:(id)arg4;
- (void)postCommentWithComment:(id)arg1;
- (void)updateMentionArray:(id)arg1;
- (void)postComment:(id)arg1 mentionArray:(id)arg2;
- (void)requestSubCommentWithRootCommentID:(unsigned long long)arg1 direction:(unsigned long long)arg2;
- (void)requestNextPageCommentData;
- (void)fetchCommentPageIsFirstPage:(_Bool)arg1 direction:(unsigned long long)arg2;
- (void)clearShowHightlightComment;
- (void)refreshLatestCommentData;
- (void)requestFirstPageCommentData;
@property(readonly, nonatomic) _Bool isOnlyAuthorScene;
@property(readonly, nonatomic) _Bool isAuthorSelf;
- (id)createCommentSectionViewModelArrayWithComments:(id)arg1 isFirstPage:(_Bool)arg2;
- (void)fetchLoaclCommentData;
- (unsigned long long)totalCommentCount;
@property(readonly, nonatomic) NSString *tid;
- (void)dealloc;
- (id)initWithDataItem:(id)arg1 scene:(unsigned long long)arg2 viewScene:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


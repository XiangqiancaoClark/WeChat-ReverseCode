//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCFinderRouterHelper : NSObject
{
}

+ (void)pushToFinderStreamProfileFromSearch:(id)arg1 currentNavController:(id)arg2;
+ (void)pushToFinderTimelineFromSearch;
+ (void)openMiniAppWithGoodsProductItem:(id)arg1 widgetView:(id)arg2 sceneNote:(id)arg3 completionHandler:(id)arg4 shareHandler:(CDUnknownBlockType)arg5 currentNavController:(id)arg6;
+ (void)openMiniAppWithAppId:(id)arg1 path:(id)arg2 completionHandler:(id)arg3 currentNavController:(id)arg4;
+ (void)jumpFromVC:(id)arg1 withInfo:(id)arg2 params:(id)arg3;
+ (_Bool)_pushMultiMoreLiveWithEnterParams:(id)arg1 navVC:(id)arg2;
+ (_Bool)pushMultiMoreLiveWithFeedExportId:(id)arg1 feedNonceId:(id)arg2 title:(id)arg3 requestScene:(long long)arg4 useDarkStyle:(_Bool)arg5 selectTabId:(unsigned long long)arg6 selectSubTabId:(unsigned long long)arg7 byPassInfo:(id)arg8 entryScene:(unsigned long long)arg9 navVC:(id)arg10;
+ (void)pushHotwordsFeedFlowWithKeyword:(id)arg1 navVC:(id)arg2 streamScene:(long long)arg3;
+ (void)pushTargetVC:(id)arg1 fromVC:(id)arg2 currentNavController:(id)arg3 animated:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)_showFinderTLActionWithTimelineVC:(id)arg1 currentNavController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)_afterOpenFinderTL:(id)arg1 appendAction:(long long)arg2 currentNavController:(id)arg3 openTLParams:(id)arg4;
+ (void)openWebOrMiniAppWithCtrlInfo:(id)arg1 currentNavController:(id)arg2;
+ (void)openFinderTimelineVC:(id)arg1 findVC:(id)arg2 currentNavController:(id)arg3 openTLParams:(id)arg4;
+ (_Bool)pushToMultiMoreLiveFromJSAPIWithCurrentNavController:(id)arg1 customParam:(id)arg2;
+ (void)pushToAlbumPickerViewControllerFromVC:(id)arg1;
+ (void)presentHalfEditImageViewControllerWithAssets:(id)arg1 images:(id)arg2 fromScene:(unsigned long long)arg3 entranceScene:(int)arg4 fromVC:(id)arg5 delegate:(id)arg6;
+ (void)presentFullEditImageViewControllerWithAssets:(id)arg1 images:(id)arg2 fromScene:(unsigned long long)arg3 entranceScene:(int)arg4 fromVC:(id)arg5 delegate:(id)arg6;
+ (void)presentFullEditVideoViewControllerWithVideoPaths:(id)arg1 thumbImages:(id)arg2 entranceType:(unsigned long long)arg3 fromVC:(id)arg4 delegate:(id)arg5;
+ (void)showFinderVC:(id)arg1 inNav:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)pushToFinderPOILink:(id)arg1 poiClassifyId:(id)arg2 userName:(id)arg3 currentNavController:(id)arg4 entryScene:(unsigned long long)arg5 reportID:(id)arg6;
+ (void)jumpToPOIRelatedStreamWithDataItem:(id)arg1 currentNavController:(id)arg2 commentScene:(unsigned long long)arg3;
+ (void)jumpToMiaoJianAppWith:(id)arg1 fromType:(long long)arg2 scene:(unsigned long long)arg3 postSourceType:(unsigned long long)arg4;
+ (_Bool)getFinderPostProcess;
+ (void)presentToPostViewControllerWith:(id)arg1 draft:(id)arg2 GPSInfoArrayOfAsset:(id)arg3 fromVC:(id)arg4 finderPostDelegate:(id)arg5 presentAnimated:(_Bool)arg6;
+ (void)presentToPostViewControllerWith:(id)arg1 draft:(id)arg2 GPSInfoArrayOfAsset:(id)arg3 fromVC:(id)arg4;
+ (long long)getShowPostPageStateWithNotCheckLongVideoEncode:(_Bool)arg1;
+ (long long)getShowPostPageState;
+ (void)pushToUploadingProfileVCWithTid:(id)arg1 currentNavController:(id)arg2;
+ (void)jumpToFinderTimelineWithParams:(id)arg1;
+ (id)getTopViewController;
+ (void)backToFindMainBarPage:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
+ (_Bool)_isNavigationStackVC:(id)arg1;
+ (void)jumpToFinderTimelineByPushWithParams:(id)arg1;
+ (void)pushMentionProfileWithUsername:(id)arg1 nickname:(id)arg2 dataItem:(id)arg3 currentViewController:(id)arg4 reportScene:(unsigned long long)arg5;
+ (void)checkDataItemLiveInfo:(id)arg1 liveID:(unsigned long long)arg2;
+ (void)showLiveRoomFromVC:(id)arg1 feedID:(id)arg2 nonceID:(id)arg3 liveID:(unsigned long long)arg4 commentScene:(unsigned long long)arg5;
+ (void)showLiveRoomFromVC:(id)arg1 feedID:(id)arg2 nonceID:(id)arg3 liveID:(unsigned long long)arg4 commentScene:(unsigned long long)arg5 demotionFlag:(unsigned long long)arg6 byPush:(_Bool)arg7 commByPass:(id)arg8 failureCompletion:(CDUnknownBlockType)arg9;
+ (id)showLongVideo:(id)arg1;
+ (id)showLongVideoWithId:(id)arg1 videoNonceId:(id)arg2 encryptedVideoId:(id)arg3 viewScene:(unsigned long long)arg4 entryScene:(unsigned long long)arg5;
+ (id)showLongVideoWithId:(id)arg1 videoNonceId:(id)arg2 viewScene:(unsigned long long)arg3;
+ (id)showLongVideoWithId:(id)arg1 videoNonceId:(id)arg2 scene:(unsigned long long)arg3 viewScene:(unsigned long long)arg4;
+ (id)showLongVideoWithId:(id)arg1 videoNonceId:(id)arg2 encryptedVideoId:(id)arg3 authorName:(id)arg4 fromUserName:(id)arg5 toUserName:(id)arg6 scene:(unsigned long long)arg7 viewScene:(unsigned long long)arg8 entryScene:(unsigned long long)arg9;
+ (id)showLongVideoWithId:(id)arg1 videoNonceId:(id)arg2 authorName:(id)arg3 fromUserName:(id)arg4 toUserName:(id)arg5 scene:(unsigned long long)arg6 viewScene:(unsigned long long)arg7;
+ (id)showLongVideoWithFeeds:(id)arg1 index:(unsigned long long)arg2 viewScene:(unsigned long long)arg3;
+ (id)showLongVideoWithFeeds:(id)arg1 index:(unsigned long long)arg2 scene:(unsigned long long)arg3 viewScene:(unsigned long long)arg4;
+ (void)showLiveRoomFromVC:(id)arg1 redPacketMessage:(id)arg2;
+ (void)showLiveRoomFromVC:(id)arg1 selectIndex:(id)arg2 dataItems:(id)arg3 entrySource:(int)arg4 commentScene:(unsigned long long)arg5;
+ (void)showLiveRoomFromFinderVC:(id)arg1 selectIndex:(id)arg2 dataItems:(id)arg3 tabType:(long long)arg4;
+ (void)showEnabledScrollLiveRoomFromOthersVC:(id)arg1 dataItem:(id)arg2 commentScene:(unsigned long long)arg3;
+ (void)showEnabledScrollLiveRoomFromOthersVC:(id)arg1 dataItem:(id)arg2 exportIds:(id)arg3 commentScene:(unsigned long long)arg4;
+ (void)showLiveRoomFromVC:(id)arg1 dataItem:(id)arg2 commentScene:(unsigned long long)arg3;
+ (void)showLiveRoomFromVC:(id)arg1 dataItem:(id)arg2 commentScene:(unsigned long long)arg3 entryScene:(int)arg4;
+ (void)showLiveRoomFromVC:(id)arg1 dataItem:(id)arg2 exportIds:(id)arg3 commentScene:(unsigned long long)arg4 entryScene:(int)arg5;
+ (void)showLiveRoomFromOtherVC:(id)arg1 firstDataItem:(id)arg2 allExportIds:(id)arg3 commentScene:(unsigned long long)arg4 entryScene:(unsigned long long)arg5 entryCardType:(unsigned long long)arg6;
+ (void)showLiveRoomFromOtherVC:(id)arg1 dataItem:(id)arg2 commentScene:(unsigned long long)arg3 entryScene:(unsigned long long)arg4 entryCardType:(unsigned long long)arg5;
+ (void)showLiveRoomFromOtherVC:(id)arg1 enableScroll:(_Bool)arg2 dataItem:(id)arg3 commentScene:(unsigned long long)arg4 entryScene:(unsigned long long)arg5 entryCardType:(unsigned long long)arg6;
+ (void)showLiveRoomFromOtherVC:(id)arg1 enableScroll:(_Bool)arg2 withByPass:(_Bool)arg3 dataItem:(id)arg4 exportIds:(id)arg5 commentScene:(unsigned long long)arg6 entryScene:(unsigned long long)arg7 entryCardType:(unsigned long long)arg8;
+ (void)showLiveRoomFromFinderVC:(id)arg1 dataItem:(id)arg2;
+ (void)showLiveRoomFromFinderVC:(id)arg1 contact:(id)arg2 tabType:(int)arg3 customParams:(id)arg4;
+ (void)showLiveRoomFromFinderVC:(id)arg1 contact:(id)arg2;
+ (_Bool)pushFinderViewControllerFromJSAPIWithCurrentNavController:(id)arg1 customParam:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4;
+ (_Bool)pushFinderViewControllerFromJSAPIWithCurrentNavController:(id)arg1 customParam:(id)arg2;
+ (_Bool)pushFinderRewardedPageFromJSAPIWithCurrentNavController:(id)arg1 customParam:(id)arg2;
+ (void)showCacheCommentViewControllerFromVC:(id)arg1 cacheViewController:(id)arg2 shouldEnterKeyBoard:(_Bool)arg3;
+ (id)showCommentViewControllerFromVC:(id)arg1 contentVM:(id)arg2 commentAndLikeScene:(unsigned long long)arg3 viewScene:(unsigned long long)arg4 shouldEnterKeyBoard:(_Bool)arg5 refCommentID:(unsigned long long)arg6 shouldHideLocalCommentList:(_Bool)arg7 statusBarHidden:(_Bool)arg8 showTitle:(_Bool)arg9;
+ (id)showCommentViewControllerFromVC:(id)arg1 contentVM:(id)arg2 commentAndLikeScene:(unsigned long long)arg3 viewScene:(unsigned long long)arg4 shouldEnterKeyBoard:(_Bool)arg5 refCommentID:(unsigned long long)arg6 shouldHideLocalCommentList:(_Bool)arg7;
+ (id)showCommentViewControllerFromVC:(id)arg1 contentVM:(id)arg2 commentAndLikeScene:(unsigned long long)arg3 viewScene:(unsigned long long)arg4 shouldEnterKeyBoard:(_Bool)arg5 refCommentID:(unsigned long long)arg6 statusBarHidden:(_Bool)arg7;
+ (id)showCommentViewControllerFromVC:(id)arg1 contentVM:(id)arg2 commentAndLikeScene:(unsigned long long)arg3 viewScene:(unsigned long long)arg4 shouldEnterKeyBoard:(_Bool)arg5 refCommentID:(unsigned long long)arg6;
+ (id)showCommentViewControllerFromVC:(id)arg1 contentVM:(id)arg2 commentAndLikeScene:(unsigned long long)arg3 viewScene:(unsigned long long)arg4 shouldEnterKeyBoard:(_Bool)arg5;
+ (unsigned long long)convertShareSceneToEntryScene:(unsigned long long)arg1;
+ (void)updateContextIdFrom:(unsigned long long)arg1 to:(id)arg2 cardType:(unsigned long long)arg3;
+ (void)updateContextIdFrom:(unsigned long long)arg1 to:(id)arg2;
+ (void)pushFinderShareDetailViewControllerWithEncrytedObjectidTid:(id)arg1 nonceID:(id)arg2 currentNavController:(id)arg3 enterScene:(unsigned long long)arg4 cardType:(unsigned long long)arg5 requestScene:(unsigned long long)arg6 customParam:(id)arg7 functionalParams:(id)arg8 reportModel:(id)arg9 reportExtraInfo:(id)arg10;
+ (void)pushFinderAdPageViewControllerWithEncrytedObjectidTid:(id)arg1 nonceId:(id)arg2 currentNavController:(id)arg3 enterScene:(unsigned long long)arg4 customParam:(id)arg5 reportModel:(id)arg6 cardType:(unsigned long long)arg7 requestScene:(unsigned long long)arg8 functionalParams:(id)arg9;
+ (_Bool)pushFinderShareDetailViewControllerWithFeedID:(id)arg1 nonceID:(id)arg2 currentNavController:(id)arg3 enterScene:(unsigned long long)arg4 customParam:(id)arg5 functionalParams:(id)arg6 reportModel:(id)arg7 cardType:(unsigned long long)arg8;
+ (_Bool)pushFinderShareDetailViewControllerWithFeedID:(id)arg1 nonceID:(id)arg2 currentNavController:(id)arg3 enterScene:(unsigned long long)arg4 customParam:(id)arg5 functionalParams:(id)arg6 reportModel:(id)arg7;
+ (_Bool)pushFinderShareSnsAdDetailViewControllerWithFeedID:(id)arg1 nonceID:(id)arg2 encryptedTid:(id)arg3 userName:(id)arg4 currentNavController:(id)arg5 enterScene:(unsigned long long)arg6 customParam:(id)arg7 reportModel:(id)arg8 cardType:(unsigned long long)arg9 adParamInofStr:(id)arg10;
+ (_Bool)getFunctionSpamStatusWith:(long long)arg1;
+ (_Bool)shouldPresentCommentLiseViewController:(id)arg1 isActiveInput:(_Bool)arg2 isCheckClose:(_Bool)arg3 isCommentClose:(_Bool)arg4 commentDetailVM:(id)arg5;
+ (void)pushContactInfoAction:(id)arg1 feedID:(id)arg2 reportScene:(unsigned long long)arg3 isFromFriendLikeList:(_Bool)arg4 currentNavController:(id)arg5;
+ (void)pushContactInfoActionFromFriendLikeList:(id)arg1 feedID:(id)arg2 reportScene:(unsigned long long)arg3 currentNavController:(id)arg4;
+ (void)pushContactInfoAction:(id)arg1 feedID:(id)arg2 reportScene:(unsigned long long)arg3 currentNavController:(id)arg4;
+ (void)presentPostFullScreenPreviewVCWithContentVM:(id)arg1 postInfoModel:(id)arg2 fromVC:(id)arg3 toolbarDisableConfig:(unsigned long long)arg4 isAuthorPerspective:(_Bool)arg5 commentScene:(unsigned long long)arg6;
+ (void)changeContentVMPrivateState:(id)arg1;
+ (void)showShareToStateWithContentVM:(id)arg1 commentScene:(unsigned long long)arg2 fromVC:(id)arg3;
+ (void)showFeedDislikeToast;
+ (void)pushScrollActionSheetItem:(id)arg1 didSelecteItem:(id)arg2 fromVC:(id)arg3 commentScene:(unsigned long long)arg4 delegate:(id)arg5;
+ (void)pushFeedContentFeedback:(id)arg1 currentNavController:(id)arg2;
+ (void)showFeedLikeListVCWithContentVM:(id)arg1 fromVC:(id)arg2 entranceScene:(unsigned long long)arg3;
+ (void)presentRefuseLikeListVC:(id)arg1 currentNavController:(id)arg2 commentScene:(unsigned long long)arg3;
+ (void)presentFriendLikeListVC:(id)arg1 fromVC:(id)arg2;
+ (void)presentFriendLikeListVC:(id)arg1 fromVC:(id)arg2 friendsLikeListDelegate:(id)arg3;
+ (void)pushFriendLikeListVC:(id)arg1 reportScene:(unsigned long long)arg2 currentNavController:(id)arg3;
+ (void)pushProfileReport:(id)arg1 feedID:(id)arg2 reportScene:(unsigned long long)arg3 enterType:(unsigned int)arg4;
+ (void)pushProfileWithFeedID:(id)arg1 nonceID:(id)arg2 username:(id)arg3 currentViewController:(id)arg4 reportScene:(unsigned long long)arg5 enterType:(unsigned int)arg6;
+ (void)pushProfileForWeixinContact:(id)arg1 navVC:(id)arg2 fromOpenIMContact:(_Bool)arg3 refCommentScene:(unsigned long long)arg4;
+ (void)setupAdReportInfoFromNavStack:(id)arg1 toParams:(id)arg2;
+ (void)pushProfileUserName:(id)arg1 currentNavController:(id)arg2 reportScene:(unsigned long long)arg3 enterType:(unsigned int)arg4 params:(id)arg5;
+ (void)pushWXOfficialAccountsProfile:(id)arg1 withViewController:(id)arg2 Scence:(unsigned int)arg3;
+ (void)pushAuthorProfileWithContact:(id)arg1 currentNavController:(id)arg2 prepareResponse:(id)arg3 jumpDraftTab:(_Bool)arg4;
+ (void)pushAuthorSelfProfileFromeMineTabEntrance:(id)arg1 withContact:(id)arg2 animated:(_Bool)arg3;
+ (void)pushAuthorSelfProfileFromeMineTabEntrance:(id)arg1;
+ (void)pushPOIInfoAction:(id)arg1 userName:(id)arg2 currentNavController:(id)arg3;
+ (void)pushPOIURLAction:(id)arg1 currentNavController:(id)arg2;
+ (void)pushPOIAction:(id)arg1 currentNavController:(id)arg2;
+ (void)pushFinderLiveRules:(id)arg1 currentNavController:(id)arg2;
+ (void)pushAuthorDataCenterPage:(id)arg1 currentNavController:(id)arg2;
+ (void)pushRecommentPage:(id)arg1 currentNavController:(id)arg2;
+ (void)pushExtReadingAction:(id)arg1 feedID:(id)arg2 currentNavController:(id)arg3 commentScence:(unsigned long long)arg4;
+ (void)pushFinderSupportDebug:(id)arg1 currentNavController:(id)arg2;
+ (void)pushTimelineHotwordFromJumpInfoParams:(id)arg1 navVC:(id)arg2;
+ (void)pushTimelineHotwordFromFeed:(id)arg1 navVC:(id)arg2;
+ (void)pushTopicWithParams:(id)arg1;
+ (void)pushToMMWeb:(id)arg1 currentNavController:(id)arg2 isPortrait:(_Bool)arg3;
+ (void)pushToMMWeb:(id)arg1 currentNavController:(id)arg2;

@end


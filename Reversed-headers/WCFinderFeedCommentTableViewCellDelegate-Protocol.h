//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderComment, WCFinderFeedCommentTableViewCell, WCFinderFeedContentVM;

@protocol WCFinderFeedCommentTableViewCellDelegate <NSObject>

@optional
- (void)onClickCommentUserName:(NSString *)arg1 contentVM:(WCFinderFeedContentVM *)arg2;
- (void)finderCommentCell:(WCFinderFeedCommentTableViewCell *)arg1 didClickCommentLikeWithcomment:(WCFinderComment *)arg2 contentVM:(WCFinderFeedContentVM *)arg3;
- (void)onRefreshCommentUI:(WCFinderFeedContentVM *)arg1 needAnimation:(_Bool)arg2;
- (void)onClickCommentAction:(WCFinderComment *)arg1 contentVM:(WCFinderFeedContentVM *)arg2;
@end


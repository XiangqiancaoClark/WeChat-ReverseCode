//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMLiveCommentDataItem, NSArray, NSString;

@interface MMFinderLiveCommentPostInfo : NSObject
{
    NSString *_postContent;
    unsigned long long _commentContentType;
    unsigned long long _postType;
    NSArray *_toUserList;
    MMLiveCommentDataItem *_selectCommentItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveCommentDataItem *selectCommentItem; // @synthesize selectCommentItem=_selectCommentItem;
@property(retain, nonatomic) NSArray *toUserList; // @synthesize toUserList=_toUserList;
@property(nonatomic) unsigned long long postType; // @synthesize postType=_postType;
@property(nonatomic) unsigned long long commentContentType; // @synthesize commentContentType=_commentContentType;
@property(retain, nonatomic) NSString *postContent; // @synthesize postContent=_postContent;

@end


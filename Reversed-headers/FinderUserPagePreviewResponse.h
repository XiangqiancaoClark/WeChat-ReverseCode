//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderContact, FinderGetLikedListResponse, NSMutableArray;

@interface FinderUserPagePreviewResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) FinderContact *contact; // @dynamic contact;
@property(nonatomic) unsigned int forbiddenFlag; // @dynamic forbiddenFlag;
@property(nonatomic) unsigned int nextDuration; // @dynamic nextDuration;
@property(retain, nonatomic) NSMutableArray *object; // @dynamic object;
@property(retain, nonatomic) FinderGetLikedListResponse *recentLikedListResp; // @dynamic recentLikedListResp;
@property(nonatomic) unsigned int showRecentLikedListEntrance; // @dynamic showRecentLikedListEntrance;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderLiveNewRightsInfo, NSMutableArray, NSString, TaskProgressInfo;

@interface FinderLiveFanClubGetIntimacyResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *badgeInfos; // @dynamic badgeInfos;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int curIntimacy; // @dynamic curIntimacy;
@property(retain, nonatomic) NSString *introductionUrl; // @dynamic introductionUrl;
@property(retain, nonatomic) FinderLiveNewRightsInfo *newRightsInfo; // @dynamic newRightsInfo;
@property(nonatomic) unsigned int nextLevelNeedIntimacy; // @dynamic nextLevelNeedIntimacy;
@property(retain, nonatomic) TaskProgressInfo *taskProgressInfo; // @dynamic taskProgressInfo;

@end


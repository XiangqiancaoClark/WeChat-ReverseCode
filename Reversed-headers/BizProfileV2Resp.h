//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, BizAccountInfo, BizBaseInfo, BizBrandInfo, BizMessageList, BizServiceInfo, BizTopicList, BizVideoFinderInfo, NSMutableArray, NSString;

@interface BizProfileV2Resp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BizAccountInfo *accountInfo; // @dynamic accountInfo;
@property(retain, nonatomic) BizBaseInfo *baseInfo; // @dynamic baseInfo;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) BizBrandInfo *brandInfo; // @dynamic brandInfo;
@property(nonatomic) unsigned int funcFlag; // @dynamic funcFlag;
@property(retain, nonatomic) NSMutableArray *funcFlagWording; // @dynamic funcFlagWording;
@property(retain, nonatomic) BizMessageList *msgList; // @dynamic msgList;
@property(nonatomic) unsigned int preLoad; // @dynamic preLoad;
@property(retain, nonatomic) NSString *searchGuideInfo; // @dynamic searchGuideInfo;
@property(retain, nonatomic) BizServiceInfo *serviceInfo; // @dynamic serviceInfo;
@property(retain, nonatomic) BizTopicList *topicList; // @dynamic topicList;
@property(retain, nonatomic) BizVideoFinderInfo *videoFinderInfo; // @dynamic videoFinderInfo;
@property(retain, nonatomic) BizMessageList *videoList; // @dynamic videoList;
@property(nonatomic) int videoTabType; // @dynamic videoTabType;

@end


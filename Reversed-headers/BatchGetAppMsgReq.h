//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString;

@interface BatchGetAppMsgReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int listType; // @dynamic listType;
@property(retain, nonatomic) NSString *netType; // @dynamic netType;
@property(retain, nonatomic) NSMutableArray *reqInfoList; // @dynamic reqInfoList;
@property(nonatomic) unsigned int stripPreloadNum; // @dynamic stripPreloadNum;
@property(nonatomic) unsigned long long tmplControlFlag; // @dynamic tmplControlFlag;
@property(retain, nonatomic) NSMutableArray *typeInfoList; // @dynamic typeInfoList;
@property(retain, nonatomic) NSMutableArray *urlList; // @dynamic urlList;

@end


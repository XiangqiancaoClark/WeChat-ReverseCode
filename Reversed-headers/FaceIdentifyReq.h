//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSString;

@interface FaceIdentifyReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned long long bioid; // @dynamic bioid;
@property(retain, nonatomic) NSString *cdnAesKey; // @dynamic cdnAesKey;
@property(nonatomic) unsigned int checkAliveType; // @dynamic checkAliveType;
@property(retain, nonatomic) NSData *extSpamInfo; // @dynamic extSpamInfo;
@property(retain, nonatomic) NSString *jsonStr; // @dynamic jsonStr;
@property(nonatomic) unsigned int light; // @dynamic light;
@property(nonatomic) unsigned int operateCode; // @dynamic operateCode;
@property(retain, nonatomic) NSString *pictureCdnId; // @dynamic pictureCdnId;
@property(nonatomic) unsigned int source; // @dynamic source;
@property(nonatomic) unsigned int uploadVideo; // @dynamic uploadVideo;

@end


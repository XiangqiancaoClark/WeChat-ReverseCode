//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface QryPurchaseResultReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int accountType; // @dynamic accountType;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int entranceType; // @dynamic entranceType;
@property(retain, nonatomic) NSString *operateId; // @dynamic operateId;
@property(nonatomic) unsigned int payChannel; // @dynamic payChannel;
@property(nonatomic) unsigned int purchaseFee; // @dynamic purchaseFee;
@property(retain, nonatomic) NSString *traceInfo; // @dynamic traceInfo;
@property(retain, nonatomic) NSString *tradeNo; // @dynamic tradeNo;
@property(retain, nonatomic) NSString *transactionId; // @dynamic transactionId;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface PurchaseFundReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int accountType; // @dynamic accountType;
@property(retain, nonatomic) NSString *bankSerial; // @dynamic bankSerial;
@property(retain, nonatomic) NSString *bankType; // @dynamic bankType;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int entranceType; // @dynamic entranceType;
@property(retain, nonatomic) NSString *fundCode; // @dynamic fundCode;
@property(retain, nonatomic) NSString *operateId; // @dynamic operateId;
@property(nonatomic) unsigned int purchaseFee; // @dynamic purchaseFee;
@property(retain, nonatomic) NSString *spid; // @dynamic spid;
@property(nonatomic) unsigned int supportCrossPlatformCashier; // @dynamic supportCrossPlatformCashier;
@property(nonatomic) unsigned int supportJointCashier; // @dynamic supportJointCashier;
@property(retain, nonatomic) NSString *traceInfo; // @dynamic traceInfo;

@end


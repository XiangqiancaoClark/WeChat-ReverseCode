//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveShopCustomerServiceInfo, FinderWindowProductInfo_DetailPage, NSMutableArray, NSString;

@interface FinderWindowProductInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *associatedCoupons; // @dynamic associatedCoupons;
@property(retain, nonatomic) NSString *buttonWording; // @dynamic buttonWording;
@property(retain, nonatomic) FinderLiveShopCustomerServiceInfo *csInfo; // @dynamic csInfo;
@property(retain, nonatomic) NSString *extraData; // @dynamic extraData;
@property(retain, nonatomic) FinderWindowProductInfo_DetailPage *fullPage; // @dynamic fullPage;
@property(retain, nonatomic) FinderWindowProductInfo_DetailPage *halfPage; // @dynamic halfPage;
@property(retain, nonatomic) NSMutableArray *imgUrls; // @dynamic imgUrls;
@property(nonatomic) unsigned int isPromoting; // @dynamic isPromoting;
@property(nonatomic) unsigned int listId; // @dynamic listId;
@property(nonatomic) unsigned int marketPrice; // @dynamic marketPrice;
@property(nonatomic) unsigned int platformId; // @dynamic platformId;
@property(retain, nonatomic) NSString *platformName; // @dynamic platformName;
@property(nonatomic) unsigned long long productId; // @dynamic productId;
@property(retain, nonatomic) NSString *requestId; // @dynamic requestId;
@property(nonatomic) unsigned int sellingPrice; // @dynamic sellingPrice;
@property(nonatomic) int status; // @dynamic status;
@property(nonatomic) unsigned int stock; // @dynamic stock;
@property(retain, nonatomic) NSString *stockId; // @dynamic stockId;
@property(retain, nonatomic) NSString *title; // @dynamic title;

@end


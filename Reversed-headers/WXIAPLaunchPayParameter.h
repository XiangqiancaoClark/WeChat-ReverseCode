//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString, SKProduct, UIViewController;

@interface WXIAPLaunchPayParameter : MMObject
{
    int _appusernameVersion;
    unsigned long long _mode;
    NSString *_offerId;
    NSString *_productId;
    NSString *_productType;
    NSString *_orderId;
    NSString *_price;
    NSString *_urlParams;
    double _timeoutLimit;
    NSString *_pf;
    NSString *_openId;
    NSString *_openKey;
    NSString *_sessionId;
    NSString *_sessionType;
    NSString *_saveValue;
    NSString *_customPayErrorDefaultMessage;
    SKProduct *_product;
    UIViewController *_contextViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *contextViewController; // @synthesize contextViewController=_contextViewController;
@property(retain, nonatomic) SKProduct *product; // @synthesize product=_product;
@property(copy, nonatomic) NSString *customPayErrorDefaultMessage; // @synthesize customPayErrorDefaultMessage=_customPayErrorDefaultMessage;
@property(copy, nonatomic) NSString *saveValue; // @synthesize saveValue=_saveValue;
@property(copy, nonatomic) NSString *sessionType; // @synthesize sessionType=_sessionType;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(copy, nonatomic) NSString *openKey; // @synthesize openKey=_openKey;
@property(copy, nonatomic) NSString *openId; // @synthesize openId=_openId;
@property(copy, nonatomic) NSString *pf; // @synthesize pf=_pf;
@property(nonatomic) double timeoutLimit; // @synthesize timeoutLimit=_timeoutLimit;
@property(nonatomic) int appusernameVersion; // @synthesize appusernameVersion=_appusernameVersion;
@property(copy, nonatomic) NSString *urlParams; // @synthesize urlParams=_urlParams;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(copy, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(copy, nonatomic) NSString *offerId; // @synthesize offerId=_offerId;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (id)description;

@end


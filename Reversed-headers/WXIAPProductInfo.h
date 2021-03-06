//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCoding-Protocol.h"

@class NSDecimalNumber, NSLocale, NSString, SKProduct;

@interface WXIAPProductInfo : MMObject <NSCoding>
{
    NSString *_productId;
    NSDecimalNumber *_price;
    NSLocale *_priceLocale;
    NSString *_localizedDescription;
    NSString *_localizedTitle;
    NSString *_currencyCode;
    NSString *_currencySymbol;
    NSString *_countryCode;
    NSString *_languageCode;
    NSString *_priceFormatStr;
    SKProduct *_product;
}

+ (id)productInfoWith:(id)arg1;
+ (id)cacheKeyWith:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) SKProduct *product; // @synthesize product=_product;
@property(copy, nonatomic) NSString *priceFormatStr; // @synthesize priceFormatStr=_priceFormatStr;
@property(copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy, nonatomic) NSString *currencySymbol; // @synthesize currencySymbol=_currencySymbol;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(copy, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(retain, nonatomic) NSLocale *priceLocale; // @synthesize priceLocale=_priceLocale;
@property(retain, nonatomic) NSDecimalNumber *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;

@end


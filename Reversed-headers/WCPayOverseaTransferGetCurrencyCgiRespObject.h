//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayOverseaTransferGetCurrencyCgiRespObject : NSObject
{
    int _m_currency;
    NSString *_m_currencyUint;
    NSString *_m_currencyWording;
    NSString *_m_notice;
    NSString *_m_noticeUrl;
}

+ (id)GenFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_noticeUrl; // @synthesize m_noticeUrl=_m_noticeUrl;
@property(retain, nonatomic) NSString *m_notice; // @synthesize m_notice=_m_notice;
@property(retain, nonatomic) NSString *m_currencyWording; // @synthesize m_currencyWording=_m_currencyWording;
@property(retain, nonatomic) NSString *m_currencyUint; // @synthesize m_currencyUint=_m_currencyUint;
@property(nonatomic) int m_currency; // @synthesize m_currency=_m_currency;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface PhoneAuthGetPhoneNumberLogicPhoneInfo : MMObject
{
    _Bool _isBindWechat;
    _Bool _needAuth;
    _Bool _allowSendSms;
    NSString *_mobile;
    NSString *_showMobile;
    NSString *_encryptData;
    NSString *_iv;
    NSString *_cloudId;
    NSString *_data;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *cloudId; // @synthesize cloudId=_cloudId;
@property(copy, nonatomic) NSString *iv; // @synthesize iv=_iv;
@property(copy, nonatomic) NSString *encryptData; // @synthesize encryptData=_encryptData;
@property(nonatomic) _Bool allowSendSms; // @synthesize allowSendSms=_allowSendSms;
@property(nonatomic) _Bool needAuth; // @synthesize needAuth=_needAuth;
@property(nonatomic) _Bool isBindWechat; // @synthesize isBindWechat=_isBindWechat;
@property(copy, nonatomic) NSString *showMobile; // @synthesize showMobile=_showMobile;
@property(copy, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
- (id)getResultDic;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TextStatePublishBrandInfo : NSObject
{
    unsigned int _createTime;
    NSString *_ticket;
    unsigned long long _brandId;
    NSString *_activityId;
    NSString *_qrCodeId;
    NSString *_openId;
    NSString *_base64BrandKeyInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *base64BrandKeyInfo; // @synthesize base64BrandKeyInfo=_base64BrandKeyInfo;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *openId; // @synthesize openId=_openId;
@property(retain, nonatomic) NSString *qrCodeId; // @synthesize qrCodeId=_qrCodeId;
@property(retain, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(nonatomic) unsigned long long brandId; // @synthesize brandId=_brandId;
@property(retain, nonatomic) NSString *ticket; // @synthesize ticket=_ticket;
- (id)initWithBase64BrandKeyInfo:(id)arg1;

@end


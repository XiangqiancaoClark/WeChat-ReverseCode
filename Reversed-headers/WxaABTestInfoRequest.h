//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString;

@interface WxaABTestInfoRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *appinfoList; // @dynamic appinfoList;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *deviceBrand; // @dynamic deviceBrand;
@property(retain, nonatomic) NSString *deviceDisplay; // @dynamic deviceDisplay;
@property(retain, nonatomic) NSString *deviceIncremental; // @dynamic deviceIncremental;
@property(retain, nonatomic) NSString *deviceManufacturer; // @dynamic deviceManufacturer;
@property(retain, nonatomic) NSString *deviceModel; // @dynamic deviceModel;
@property(retain, nonatomic) NSString *deviceRelease; // @dynamic deviceRelease;
@property(retain, nonatomic) NSString *osVersion; // @dynamic osVersion;
@property(nonatomic) unsigned int publicLibReleaseVersion; // @dynamic publicLibReleaseVersion;
@property(retain, nonatomic) NSString *publicLibVersion; // @dynamic publicLibVersion;

@end


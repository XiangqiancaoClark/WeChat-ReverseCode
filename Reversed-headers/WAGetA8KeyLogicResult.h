//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WAGetA8KeyLogicResult : NSObject
{
    long long _codeActionType;
    NSString *_weappUserName;
    NSString *_weappPagePath;
    NSString *_weappShareUrl;
    NSString *_fullUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *fullUrl; // @synthesize fullUrl=_fullUrl;
@property(retain, nonatomic) NSString *weappShareUrl; // @synthesize weappShareUrl=_weappShareUrl;
@property(retain, nonatomic) NSString *weappPagePath; // @synthesize weappPagePath=_weappPagePath;
@property(retain, nonatomic) NSString *weappUserName; // @synthesize weappUserName=_weappUserName;
@property(nonatomic) long long codeActionType; // @synthesize codeActionType=_codeActionType;

@end


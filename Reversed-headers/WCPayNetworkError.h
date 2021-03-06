//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface WCPayNetworkError : NSObject
{
    long long _errorCode;
    NSString *_errorMessage;
    NSDictionary *_userInfo;
    NSString *_errorDetailUrl;
}

+ (id)errorWithCode:(long long)arg1 message:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *errorDetailUrl; // @synthesize errorDetailUrl=_errorDetailUrl;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
- (id)description;
- (id)convertToNSError;
- (void)dealloc;

@end


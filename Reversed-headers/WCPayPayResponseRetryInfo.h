//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayPayResponseRetryInfo : NSObject
{
    long long _retry_interval;
    long long _max_retry_count;
    NSString *_retry_fail_wording;
}

+ (id)GenFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *retry_fail_wording; // @synthesize retry_fail_wording=_retry_fail_wording;
@property(nonatomic) long long max_retry_count; // @synthesize max_retry_count=_max_retry_count;
@property(nonatomic) long long retry_interval; // @synthesize retry_interval=_retry_interval;
- (void)genFromDic:(id)arg1;

@end


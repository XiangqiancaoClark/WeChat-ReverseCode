//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayVerifyCreTailInfo : NSObject
{
    long long _is_can_verify_tail;
    NSString *_verify_tail_wording;
}

+ (id)GenFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *verify_tail_wording; // @synthesize verify_tail_wording=_verify_tail_wording;
@property(nonatomic) long long is_can_verify_tail; // @synthesize is_can_verify_tail=_is_can_verify_tail;
- (void)genFromDic:(id)arg1;

@end

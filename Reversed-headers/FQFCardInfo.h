//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface FQFCardInfo : NSObject <NSCoding>
{
    unsigned long long _fqf_avail_quota;
    unsigned long long _fqf_interest_rate;
    double _fqf_interest_amount;
    NSString *_fqf_pay_desk_title;
    NSString *_fqf_title;
    NSString *_fqf_sub_title;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *fqf_sub_title; // @synthesize fqf_sub_title=_fqf_sub_title;
@property(retain, nonatomic) NSString *fqf_title; // @synthesize fqf_title=_fqf_title;
@property(retain, nonatomic) NSString *fqf_pay_desk_title; // @synthesize fqf_pay_desk_title=_fqf_pay_desk_title;
@property(nonatomic) double fqf_interest_amount; // @synthesize fqf_interest_amount=_fqf_interest_amount;
@property(nonatomic) unsigned long long fqf_interest_rate; // @synthesize fqf_interest_rate=_fqf_interest_rate;
@property(nonatomic) unsigned long long fqf_avail_quota; // @synthesize fqf_avail_quota=_fqf_avail_quota;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
